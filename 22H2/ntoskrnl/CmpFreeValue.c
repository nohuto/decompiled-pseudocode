/*
 * XREFs of CmpFreeValue @ 0x1406E4228
 * Callers:
 *     CmpSetValueKeyNew @ 0x1406577D0 (CmpSetValueKeyNew.c)
 *     CmpCleanupLightWeightUoWData @ 0x14066EA44 (CmpCleanupLightWeightUoWData.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x14066EE08 (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14066EF68 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmSetValueKey @ 0x1406DD4B0 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x1406DF334 (CmDeleteValueKey.c)
 *     CmpFreeKeyByCell @ 0x1406E4070 (CmpFreeKeyByCell.c)
 *     CmpTransMgrFreeVolatileData @ 0x14071C8A0 (CmpTransMgrFreeVolatileData.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x140732C8C (CmpLightWeightCommitDeleteValueKeyUoW.c)
 *     CmpSetValueKeyTombstone @ 0x14086EA4C (CmpSetValueKeyTombstone.c)
 *     CmpFreeKeyValueList @ 0x140879054 (CmpFreeKeyValueList.c)
 *     CmpFreeKeyValues @ 0x1408790F0 (CmpFreeKeyValues.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     HvFreeCell @ 0x140656BC4 (HvFreeCell.c)
 *     CmpFreeValueData @ 0x1406E42A4 (CmpFreeValueData.c)
 */

char __fastcall CmpFreeValue(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  unsigned int v2; // edi
  __int64 v4; // rax
  bool v5; // zf
  void (__fastcall *v6)(ULONG_PTR, int *); // rax
  int v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+34h] [rbp+Ch]

  v8 = -1;
  v2 = BugCheckParameter3;
  v9 = 0;
  v4 = (*(__int64 (__fastcall **)(ULONG_PTR, ULONG_PTR, int *))(BugCheckParameter2 + 8))(
         BugCheckParameter2,
         BugCheckParameter3,
         &v8);
  if ( v4 )
  {
    v5 = (unsigned __int8)CmpFreeValueData(BugCheckParameter2, *(unsigned int *)(v4 + 8)) == 0;
    v6 = *(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16);
    if ( !v5 )
    {
      v6(BugCheckParameter2, &v8);
      HvFreeCell(BugCheckParameter2, v2);
      return 1;
    }
    v6(BugCheckParameter2, &v8);
  }
  return 0;
}
