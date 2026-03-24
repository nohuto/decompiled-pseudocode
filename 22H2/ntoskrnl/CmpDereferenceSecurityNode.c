/*
 * XREFs of CmpDereferenceSecurityNode @ 0x1403EFFFC
 * Callers:
 *     CmpUndoDeleteKeyForTransEx @ 0x1405CD308 (CmpUndoDeleteKeyForTransEx.c)
 *     CmpCleanupLightWeightUoWData @ 0x14066EA44 (CmpCleanupLightWeightUoWData.c)
 *     CmRenameKey @ 0x14086CA54 (CmRenameKey.c)
 *     CmpCopySaclToVirtualKey @ 0x140871814 (CmpCopySaclToVirtualKey.c)
 *     CmpLightWeightCleanupSetSecDescUoW @ 0x14087EB68 (CmpLightWeightCleanupSetSecDescUoW.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x14087F10C (CmpLightWeightCommitSetSecDescUoW.c)
 * Callees:
 *     CmpRemoveSecurityCellList @ 0x140326A74 (CmpRemoveSecurityCellList.c)
 *     CmpKeySecurityDecrementReferenceCount @ 0x1403F009C (CmpKeySecurityDecrementReferenceCount.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     HvFreeCell @ 0x140656BC4 (HvFreeCell.c)
 *     HvpGetCellContextInitialize @ 0x140875D48 (HvpGetCellContextInitialize.c)
 */

__int64 __fastcall CmpDereferenceSecurityNode(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  unsigned int v3; // esi
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 result; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  v3 = BugCheckParameter3;
  HvpGetCellContextInitialize(&v7);
  v5 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, __int64 *))(BugCheckParameter2 + 8))(BugCheckParameter2, v4, &v7);
  result = CmpKeySecurityDecrementReferenceCount(v5, BugCheckParameter2, v3);
  if ( (_BYTE)result )
  {
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v7);
    v5 = 0LL;
    CmpRemoveSecurityCellList(BugCheckParameter2, v3);
    result = HvFreeCell(BugCheckParameter2, v3);
  }
  if ( v5 )
    return (*(__int64 (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v7);
  return result;
}
