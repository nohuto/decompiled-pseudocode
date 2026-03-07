__int64 __fastcall MiUnmapVad(unsigned int *P, __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r14
  _KPROCESS *Process; // rcx

  if ( (P[16] & 0x2000000) != 0 )
  {
    v5 = **((_QWORD **)P + 9);
    v6 = MiReferenceControlAreaFile(v5);
    v7 = *(_QWORD *)(v6 + 24);
    MiDereferenceControlAreaFile(v5, v6);
    Process = KeGetCurrentThread()->ApcState.Process;
    a3 = (P[7] | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32))
       - (P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32))
       + 1;
    if ( (Process[1].DirectoryTableBase & 0x400000000000LL) != 0 )
      PfCheckDeprioritizeFile(HIDWORD(Process[1].ActiveProcessors.StaticBitmap[8]), v7, a3);
  }
  if ( (PerfGlobalGroupMask & 0x8000) != 0 && *((_QWORD *)P + 9) )
    MiLogMapFileEvent(P, 1062LL, a3);
  return MiDeleteVad(P);
}
