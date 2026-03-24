/*
 * XREFs of CmpFreeKeyByCell @ 0x1406E4070
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x140360E58 (CmpRemoveHiveFromNamespace.c)
 *     CmDeleteLayeredKey @ 0x1404ECFB8 (CmDeleteLayeredKey.c)
 *     CmpCreateTombstone @ 0x1404ED49C (CmpCreateTombstone.c)
 *     CmpCleanupLightWeightUoWData @ 0x14066EA44 (CmpCleanupLightWeightUoWData.c)
 *     CmpCreateChild @ 0x1406E08C4 (CmpCreateChild.c)
 *     CmDeleteKey @ 0x1406E47E4 (CmDeleteKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x14071C8A0 (CmpTransMgrFreeVolatileData.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x14072A360 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmRenameKey @ 0x14086CA54 (CmRenameKey.c)
 *     CmpSyncSubKeysAfterDelete @ 0x14087A2B8 (CmpSyncSubKeysAfterDelete.c)
 *     CmRestoreKey @ 0x14087BF80 (CmRestoreKey.c)
 *     CmpDeleteTree @ 0x14087E9EC (CmpDeleteTree.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x14087ED24 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x14087F404 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14087F814 (CmpLightWeightPrepareRenameKeyUoW.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x14087FF84 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402CB580 (ExReleasePushLockEx.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     HvFreeCell @ 0x140656BC4 (HvFreeCell.c)
 *     CmpMarkKeyDirty @ 0x1406E3088 (CmpMarkKeyDirty.c)
 *     CmpFreeValue @ 0x1406E4228 (CmpFreeValue.c)
 *     CmpFreeKeyBody @ 0x1406E43CC (CmpFreeKeyBody.c)
 *     CmpRemoveSubKey @ 0x1406E474C (CmpRemoveSubKey.c)
 *     CmpFreeSecurityDescriptor @ 0x1406E5308 (CmpFreeSecurityDescriptor.c)
 */

__int64 __fastcall CmpFreeKeyByCell(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, char a3)
{
  unsigned int v4; // r14d
  ULONG_PTR v5; // r12
  __int64 v7; // rsi
  __int64 v8; // rax
  unsigned int v9; // ebx
  __int64 v11; // r15
  unsigned int i; // ebx
  _DWORD v13[4]; // [rsp+20h] [rbp-10h] BYREF
  int v14; // [rsp+70h] [rbp+40h] BYREF
  int v15; // [rsp+74h] [rbp+44h]
  int v16; // [rsp+88h] [rbp+58h] BYREF
  int v17; // [rsp+8Ch] [rbp+5Ch]

  v15 = 0;
  v4 = BugCheckParameter3;
  v14 = -1;
  v16 = -1;
  v13[0] = -1;
  v5 = BugCheckParameter2 + 1776;
  v17 = 0;
  v13[1] = 0;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 1776, 0LL);
  if ( !CmpMarkKeyDirty(BugCheckParameter2, v4, a3) )
  {
    v9 = -1073741443;
    goto LABEL_17;
  }
  v7 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, v4, &v14);
  if ( !v7 )
    goto LABEL_23;
  if ( a3 == 1 )
  {
    if ( !(unsigned __int8)CmpRemoveSubKey(BugCheckParameter2) )
      goto LABEL_24;
    v8 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
           BugCheckParameter2,
           *(unsigned int *)(v7 + 16),
           &v16);
    if ( !v8 )
      goto LABEL_24;
    if ( !(*(_DWORD *)(v8 + 20) + *(_DWORD *)(v8 + 24)) )
    {
      *(_WORD *)(v8 + 52) = 0;
      *(_DWORD *)(v8 + 56) = 0;
    }
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v16);
  }
  if ( (*(_BYTE *)(v7 + 2) & 0x42) != 0 )
    goto LABEL_13;
  if ( !*(_DWORD *)(v7 + 36) )
  {
LABEL_11:
    if ( *(_DWORD *)(v7 + 44) != -1 )
      CmpFreeSecurityDescriptor(BugCheckParameter2);
LABEL_13:
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v14);
    v7 = 0LL;
    if ( (unsigned __int8)CmpFreeKeyBody(BugCheckParameter2, v4) )
    {
      v9 = 0;
      goto LABEL_15;
    }
LABEL_23:
    v9 = -1073741670;
    goto LABEL_17;
  }
  v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
          BugCheckParameter2,
          *(unsigned int *)(v7 + 40),
          v13);
  if ( v11 )
  {
    for ( i = 0; i < *(_DWORD *)(v7 + 36); ++i )
      CmpFreeValue(BugCheckParameter2, *(unsigned int *)(v11 + 4LL * i));
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v13);
    HvFreeCell(BugCheckParameter2, *(unsigned int *)(v7 + 40));
    goto LABEL_11;
  }
LABEL_24:
  v9 = -1073741670;
LABEL_15:
  if ( v7 )
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v14);
LABEL_17:
  ExReleasePushLockEx(v5, 0LL);
  return v9;
}
