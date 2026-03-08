/*
 * XREFs of MiMakeProtoLeafValid @ 0x1402F70B0
 * Callers:
 *     MiSplitPrivatePage @ 0x14021114C (MiSplitPrivatePage.c)
 *     MiWalkVaRange @ 0x1402CECEC (MiWalkVaRange.c)
 *     MiSetProtectionOnSection @ 0x140321FC0 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x140344540 (MiProtectPrivateMemory.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiMakeSystemAddressValid @ 0x140321770 (MiMakeSystemAddressValid.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
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
    a3 = MiLockWorkingSetShared(v5);
    MiMakeSystemAddressValid(BugCheckParameter1, 0);
  }
  return 0LL;
}
