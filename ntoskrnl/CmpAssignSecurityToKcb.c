/*
 * XREFs of CmpAssignSecurityToKcb @ 0x1407A560C
 * Callers:
 *     CmpSetSecurityDescriptorInfo @ 0x1406B845C (CmpSetSecurityDescriptorInfo.c)
 *     CmpRebuildKcbCacheFromNode @ 0x1407A5468 (CmpRebuildKcbCacheFromNode.c)
 *     CmpCreateChild @ 0x1407A7590 (CmpCreateChild.c)
 *     CmpAssignKeySecurity @ 0x140854E7C (CmpAssignKeySecurity.c)
 *     CmRestoreKey @ 0x140A08004 (CmRestoreKey.c)
 *     CmpDoBuildVirtualStack @ 0x140A1641C (CmpDoBuildVirtualStack.c)
 *     CmpLightWeightCommitAddKeyUoW @ 0x140A25314 (CmpLightWeightCommitAddKeyUoW.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x140A25A40 (CmpLightWeightCommitSetSecDescUoW.c)
 * Callees:
 *     CmpFindSecurityCellCacheIndex @ 0x14030DD50 (CmpFindSecurityCellCacheIndex.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     CmLockHiveSecurityShared @ 0x140AF2590 (CmLockHiveSecurityShared.c)
 *     CmUnlockHiveSecurity @ 0x140AF25F0 (CmUnlockHiveSecurity.c)
 */

char __fastcall CmpAssignSecurityToKcb(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4,
        __int64 a3,
        char a4,
        char a5)
{
  ULONG_PTR v6; // r14
  char v9; // di
  __int64 v10; // rsi
  unsigned int v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = 0;
  v6 = (unsigned int)BugCheckParameter4;
  v9 = 1;
  if ( (_DWORD)BugCheckParameter4 == -1 )
  {
    *(_QWORD *)(BugCheckParameter3 + 88) = 0LL;
  }
  else
  {
    v10 = *(_QWORD *)(BugCheckParameter3 + 32);
    if ( !a4 )
      CmLockHiveSecurityShared(*(_QWORD *)(BugCheckParameter3 + 32));
    if ( CmpFindSecurityCellCacheIndex(v10, v6, &v12) )
    {
      if ( !a3 )
        *(_QWORD *)(BugCheckParameter3 + 88) = *(_QWORD *)(*(_QWORD *)(v10 + 1888) + 16LL * v12 + 8);
    }
    else
    {
      *(_QWORD *)(BugCheckParameter3 + 88) = 0LL;
      if ( !a5 )
        KeBugCheckEx(0x51u, 4uLL, 1uLL, BugCheckParameter3, v6);
      v9 = 0;
    }
    if ( !a4 )
      CmUnlockHiveSecurity(v10);
  }
  return v9;
}
