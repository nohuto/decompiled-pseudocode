/*
 * XREFs of MiMakeProtoLeafValid @ 0x140361A64
 * Callers:
 *     MiSplitPrivatePage @ 0x14021CE64 (MiSplitPrivatePage.c)
 *     MiSetProtectionOnSection @ 0x140277B60 (MiSetProtectionOnSection.c)
 *     MiWalkVaRange @ 0x140293C34 (MiWalkVaRange.c)
 *     MiProtectPrivateMemory @ 0x1402A2760 (MiProtectPrivateMemory.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14023C4E0 (MiUnlockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402711D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140271240 (MiPteInShadowRange.c)
 *     MiMakeSystemAddressValid @ 0x140277310 (MiMakeSystemAddressValid.c)
 *     MiLockWorkingSetShared @ 0x140283B70 (MiLockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x1403193E0 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x140356D4C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140356DAC (MiPteHasShadow.c)
 */

__int64 __fastcall MiMakeProtoLeafValid(ULONG_PTR BugCheckParameter1, __int64 a2, unsigned __int8 a3)
{
  unsigned __int64 *v5; // r14
  unsigned __int64 v6; // r12
  char i; // al

  v5 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  v6 = ((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  for ( i = MI_READ_PTE_LOCK_FREE(BugCheckParameter1); (i & 1) == 0; i = MI_READ_PTE_LOCK_FREE(BugCheckParameter1) )
  {
    MiUnlockPageTableInternal((__int64)v5, v6);
    MiUnlockWorkingSetShared((__int64)v5, a3);
    a3 = MiLockWorkingSetShared((__int64)v5);
    MiMakeSystemAddressValid(BugCheckParameter1, 0LL, 0, a3, 0);
  }
  return 0LL;
}
