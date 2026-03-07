__int64 __fastcall MiLockDownWorkingSet(_KPROCESS *a1, int a2)
{
  __int64 v3; // rsi
  volatile LONG *SharedVm; // rbx
  KIRQL v5; // al
  unsigned __int8 v6; // bp
  __int64 v7; // rbx
  int v9; // [rsp+20h] [rbp-48h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v10; // [rsp+28h] [rbp-40h] BYREF

  v3 = (__int64)&a1[1].ActiveProcessors.StaticBitmap[26];
  memset(&v10, 0, sizeof(v10));
  KiStackAttachProcess(a1, 0, (__int64)&v10);
  SharedVm = (volatile LONG *)MiGetSharedVm(v3);
  v5 = ExAcquireSpinLockExclusive(SharedVm);
  *((_DWORD *)SharedVm + 1) = 0;
  v6 = v5;
  v7 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(0xFFFFF6FB7DBEDF68uLL) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v9 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v9);
    while ( *(__int64 *)(v7 + 24) < 0 );
  }
  if ( a2 )
    MiAddLockedPageCharge(v7, 1);
  else
    MiRemoveLockedPageChargeAndDecRef(v7);
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockWorkingSetExclusive(v3, v6);
  return KiUnstackDetachProcess(&v10);
}
