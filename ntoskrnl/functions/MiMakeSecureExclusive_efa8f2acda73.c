__int64 __fastcall MiMakeSecureExclusive(__int64 a1)
{
  unsigned int v2; // esi
  unsigned __int64 v3; // rbp
  _KPROCESS *Process; // r14
  volatile LONG *SharedVm; // rbx
  KIRQL v6; // al
  unsigned __int64 i; // rcx

  v2 = 0;
  v3 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  SharedVm = (volatile LONG *)MiGetSharedVm((__int64)&Process[1].ActiveProcessors.StaticBitmap[26]);
  v6 = ExAcquireSpinLockExclusive(SharedVm);
  *((_DWORD *)SharedVm + 1) = 0;
  for ( i = *(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF0uLL; i; i = *(_QWORD *)i )
  {
    if ( *(_DWORD *)(i + 64) == 2 )
    {
      if ( v3 )
        goto LABEL_7;
      v3 = i;
    }
  }
  *(_DWORD *)(v3 + 8) |= 0x20u;
  v2 = 1;
LABEL_7:
  MiUnlockWorkingSetExclusive((__int64)&Process[1].ActiveProcessors.StaticBitmap[26], v6);
  return v2;
}
