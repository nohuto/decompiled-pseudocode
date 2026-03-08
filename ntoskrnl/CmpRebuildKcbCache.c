/*
 * XREFs of CmpRebuildKcbCache @ 0x1406B6498
 * Callers:
 *     CmpTransMgrFreeVolatileData @ 0x1406B617C (CmpTransMgrFreeVolatileData.c)
 *     CmpSaveBootControlSet @ 0x140A078D8 (CmpSaveBootControlSet.c)
 *     CmpRefreshHive @ 0x140A09C50 (CmpRefreshHive.c)
 *     CmpCloneHwProfile @ 0x140A0D554 (CmpCloneHwProfile.c)
 *     CmpSyncKcbCacheForHive @ 0x140A17510 (CmpSyncKcbCacheForHive.c)
 *     CmpCommitDiscardReplacePost @ 0x140A1CC50 (CmpCommitDiscardReplacePost.c)
 * Callees:
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     CmpRebuildKcbCacheFromNode @ 0x1407A5468 (CmpRebuildKcbCacheFromNode.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 */

char __fastcall CmpRebuildKcbCache(ULONG_PTR a1)
{
  int v1; // eax
  ULONG_PTR v3; // rcx
  ULONG_PTR v4; // rdx
  __int64 v6; // rcx
  int v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+34h] [rbp+Ch]

  v9 = 0;
  v1 = *(_DWORD *)(a1 + 8);
  v8 = -1;
  if ( (v1 & 0x10) != 0 || (*(_DWORD *)(a1 + 184) & 0x400000) != 0 )
    return 1;
  v3 = *(_QWORD *)(a1 + 32);
  if ( v3 )
  {
    v4 = *(unsigned int *)(a1 + 40);
    if ( (_DWORD)v4 != -1 )
    {
      if ( (*(_BYTE *)(v3 + 140) & 1) != 0 ? HvpGetCellFlat(v3, v4) : HvpGetCellPaged(v3) )
      {
        ++*(_QWORD *)(a1 + 304);
        CmpRebuildKcbCacheFromNode(a1);
        v6 = *(_QWORD *)(a1 + 32);
        if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v6, &v8);
        else
          HvpReleaseCellPaged(v6, &v8);
        return 1;
      }
    }
  }
  return 0;
}
