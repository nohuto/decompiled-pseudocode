void __fastcall MiInsertVadEvent(__int64 a1, unsigned __int64 *a2, int a3)
{
  unsigned __int64 *v5; // rdi
  volatile LONG *SharedVm; // rbx
  KIRQL v7; // al
  unsigned __int8 v8; // dl

  if ( a3 )
  {
    v5 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
    SharedVm = (volatile LONG *)MiGetSharedVm((__int64)v5);
    v7 = ExAcquireSpinLockExclusive(SharedVm);
    *((_DWORD *)SharedVm + 1) = 0;
    v8 = v7;
  }
  else
  {
    v8 = 17;
    v5 = 0LL;
  }
  *a2 = *(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF0uLL;
  *(_QWORD *)(a1 + 56) = (unsigned __int64)a2 | *(_DWORD *)(a1 + 56) & 0xF;
  if ( v8 != 17 )
    MiUnlockWorkingSetExclusive((__int64)v5, v8);
}
