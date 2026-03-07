void __fastcall MiRemoveVadEvent(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rdi
  _KPROCESS *Process; // rsi
  volatile LONG *SharedVm; // rbx
  KIRQL v7; // al
  __int64 v8; // rcx
  _QWORD *v9; // r8
  __int64 v10; // rdx

  v4 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  SharedVm = (volatile LONG *)MiGetSharedVm((__int64)&Process[1].ActiveProcessors.StaticBitmap[26]);
  v7 = ExAcquireSpinLockExclusive(SharedVm);
  *((_DWORD *)SharedVm + 1) = 0;
  v8 = *(_QWORD *)(a1 + 56);
  v9 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0uLL);
  if ( (v8 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
  {
    while ( 1 )
    {
      v10 = *v9;
      if ( v9 == a2 )
        break;
      v4 = v9;
      v9 = (_QWORD *)*v9;
      if ( !v10 )
        goto LABEL_8;
    }
    if ( v4 )
      *v4 = v10;
    else
      *(_QWORD *)(a1 + 56) = v10 | v8 & 0xF;
  }
LABEL_8:
  MiUnlockWorkingSetExclusive((__int64)&Process[1].ActiveProcessors.StaticBitmap[26], v7);
}
