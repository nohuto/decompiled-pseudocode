__int64 **__fastcall MiObtainReferencedSecureVad(ULONG_PTR BugCheckParameter3, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 Process; // rbp
  unsigned __int64 v6; // rsi
  __int64 **Address; // rax
  __int64 **v8; // rbx
  unsigned __int64 v9; // rsi
  bool v10; // zf

  CurrentThread = KeGetCurrentThread();
  *a2 = 0;
  Process = (__int64)CurrentThread->ApcState.Process;
  LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
  if ( (*(_DWORD *)(Process + 1124) & 0x20) != 0 )
  {
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
    *a2 = -1073741558;
  }
  else
  {
    v6 = *(_QWORD *)(BugCheckParameter3 + 8);
    Address = MiLocateAddress(v6);
    v8 = Address;
    if ( !Address )
      KeBugCheckEx(0x1Au, 0x15000uLL, v6, BugCheckParameter3, 0LL);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)Address + 9, 1u) == -1 )
      __fastfail(0xEu);
    --CurrentThread->SpecialApcDisable;
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
    v9 = v6 >> 12;
    MiLockVad(CurrentThread, v8);
    v10 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v10 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    if ( ((_DWORD)v8[6] & 4) != 0 )
    {
      MiWaitForVadDeletion(v8);
      MiUnlockAndDereferenceVad(v8);
      *a2 = (*(_DWORD *)(Process + 1124) & 0x20) != 0 ? -1073741558 : -1073741664;
    }
    else
    {
      if ( v9 >= (*((unsigned int *)v8 + 6) | ((unsigned __int64)*((unsigned __int8 *)v8 + 32) << 32))
        && v9 <= (*((unsigned int *)v8 + 7) | ((unsigned __int64)*((unsigned __int8 *)v8 + 33) << 32)) )
      {
        return v8;
      }
      MiUnlockAndDereferenceVad(v8);
      *a2 = -1073741664;
    }
  }
  return 0LL;
}
