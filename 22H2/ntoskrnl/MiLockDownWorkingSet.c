/*
 * XREFs of MiLockDownWorkingSet @ 0x14055B238
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x1408D90B0 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     MiGetSharedVm @ 0x14021AF10 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14021CAA0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14021D020 (ExAcquireSpinLockExclusive.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     KiStackAttachProcess @ 0x14025BB40 (KiStackAttachProcess.c)
 *     MiAddLockedPageCharge @ 0x14029AA98 (MiAddLockedPageCharge.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402A9250 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 */

__int64 __fastcall MiLockDownWorkingSet(_KPROCESS *a1, int a2, __int64 a3, _DWORD *a4)
{
  __int64 v5; // rsi
  LONG *SharedVm; // rbx
  KIRQL v7; // al
  unsigned __int8 v8; // bp
  unsigned __int64 v9; // rbx
  __int64 Flink; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rbx
  int v16; // [rsp+20h] [rbp-58h] BYREF
  _OWORD v17[3]; // [rsp+28h] [rbp-50h] BYREF

  v5 = (__int64)&a1[1].ActiveProcessorsPadding[6];
  memset(v17, 0, sizeof(v17));
  KiStackAttachProcess(a1, 0LL, (__int64)v17, a4);
  SharedVm = MiGetSharedVm(v5);
  v7 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v8 = v7;
  v9 = MEMORY[0xFFFFF6FB7DBEDF68];
  if ( MiPteInShadowRange(0xFFFFF6FB7DBEDF68uLL)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v9 & 1) != 0
    && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
  {
    Flink = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v13 = *(_QWORD *)(Flink + 3944);
      Flink = v9 | 0x20;
      if ( (v13 & 0x20) == 0 )
        Flink = v9;
      v9 = Flink;
      if ( (v13 & 0x42) != 0 )
        v9 = Flink | 0x42;
    }
  }
  v14 = 48 * ((v9 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v16 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v16, Flink, v11, v12);
    while ( *(__int64 *)(v14 + 24) < 0 );
  }
  if ( a2 == 1 )
    MiAddLockedPageCharge(v14, 1);
  else
    MiRemoveLockedPageChargeAndDecRef(v14);
  _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockWorkingSetExclusive(v5, v8);
  return KiUnstackDetachProcess((__int64)v17, 0);
}
