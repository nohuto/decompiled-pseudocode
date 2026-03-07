void __fastcall MiDeprioritizeVad(unsigned int *P, unsigned __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *Process; // r14
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rbp
  __int64 v8; // rbx
  unsigned __int64 v9; // rax
  __int64 v10; // r15
  signed __int32 v11; // eax
  bool v12; // zf
  unsigned __int64 v13; // rbp

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  if ( (unsigned int)MiTryLockVad(CurrentThread, P) )
  {
    if ( (P[12] & 4) == 0 )
    {
      v6 = P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32);
      v7 = (a2 >> 12) - v6;
      if ( (P[16] & 0x2000000) != 0 )
      {
        v8 = **((_QWORD **)P + 9);
        v9 = MiReferenceControlAreaFileWithTag(v8, 0x63536D4Du);
        v10 = *(_QWORD *)(v9 + 24);
        ObFastDereferenceObjectDeferDelete((signed __int64 *)(v8 + 64), v9, 0x63536D4Du);
        if ( (Process[1].DirectoryTableBase & 0x400000000000LL) != 0
          && (v13 = v7 & 0xFFFFFFFFFFFFFF00uLL,
              (unsigned int)PfCheckDeprioritizeFile(HIDWORD(Process[1].ActiveProcessors.StaticBitmap[8]), v10, v13)) )
        {
          if ( (P[16] & 0x2000000) != 0 )
            MiDeprioritizeVirtualAddresses(
              (v6 << 12) + ((v13 - 256) << 12),
              256LL,
              &Process[1].ActiveProcessors.StaticBitmap[26],
              18LL);
        }
        else
        {
          P[16] &= ~0x2000000u;
        }
      }
    }
    MiUnlockAndDereferenceVad(P);
  }
  else
  {
    v11 = _InterlockedDecrement((volatile signed __int32 *)P + 9);
    if ( v11 == -1 )
      __fastfail(0xEu);
    if ( !v11 && (P[12] & 4) != 0 )
      ExFreePoolWithTag(P, 0);
    v12 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v12 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
}
