__int64 __fastcall MiProcessCommitIntact(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  _KPROCESS *Process; // rcx
  char v7; // al
  unsigned __int64 *v8; // rcx
  __int64 **Address; // rax
  __int64 v11; // rdx

  v5 = 1;
  Process = KeGetCurrentThread()->ApcState.Process;
  v7 = HIBYTE(Process[1].IdealProcessor[31]);
  v8 = &Process[1].ActiveProcessors.StaticBitmap[26];
  if ( (v7 & 0x60) == 0x60 && *(_QWORD *)(MiGetSharedVm(v8, a2, a3, a4) + 32) && a1 < 0xFFFF800000000000uLL )
  {
    MiLockVadTree(1LL);
    Address = MiLocateAddress(a1);
    if ( !Address || (unsigned int)MiIsVadEligibleForCommitRelease(Address) )
      v5 = 0;
    LOBYTE(v11) = 17;
    MiUnlockVadTree(1LL, v11);
  }
  return v5;
}
