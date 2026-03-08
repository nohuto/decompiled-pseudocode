/*
 * XREFs of ViTargetWMIRegister @ 0x140AC8F84
 * Callers:
 *     VerifierIoWMIRegistrationControl @ 0x140AE1080 (VerifierIoWMIRegistrationControl.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x140303680 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403039F0 (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x14045DE58 (VfAvlInitializeLockContext.c)
 */

void __fastcall ViTargetWMIRegister(__int64 a1)
{
  unsigned __int64 v2; // r8
  __int64 v3; // r9
  _QWORD *v4; // rax
  __int64 v5; // rax
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v6 = 0LL;
  VfAvlInitializeLockContext((__int64)&v6, 1);
  v4 = VfAvlLookupTreeNode((__int64 *)&ViTargetDriversAvl, (__int64)&v6, v2, v3);
  if ( v4 )
  {
    v5 = v4[7];
    if ( v5 )
      *(_QWORD *)(v5 + 8) = a1;
  }
  VfAvlCleanupLockContext((__int64)&v6);
}
