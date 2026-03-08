/*
 * XREFs of ?ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C032E44C
 * Callers:
 *     ?AddToMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@@Z @ 0x1C032CB68 (-AddToMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@@Z.c)
 *     ?CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z @ 0x1C032CCA8 (-CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z.c)
 *     ?ProcessMoveAgainstDirtyList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@PEAH@Z @ 0x1C032E1D0 (-ProcessMoveAgainstDirtyList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@PEAH@Z.c)
 *     ?ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z @ 0x1C032E278 (-ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?ProcessDirtyRectAgainstDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1C032DE80 (-ProcessDirtyRectAgainstDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 *     ?ProcessDirtyRectAgainstMoveList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1C032E0C0 (-ProcessDirtyRectAgainstMoveList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 */

__int64 __fastcall DDAMetaData::ProcessNewDirtyRects(DDAMetaData *this, struct _D3DKMT_PRESENT_RGNS *a2)
{
  UINT DirtyRectCount; // eax
  UINT v3; // ebx
  struct tagRECT *pDirtyRects; // rdi
  struct tagRECT *v7; // rdi
  __int64 v8; // rbx

  DirtyRectCount = a2->DirtyRectCount;
  v3 = 0;
  pDirtyRects = (struct tagRECT *)a2->pDirtyRects;
  if ( a2->DirtyRectCount )
  {
    while ( (unsigned int)DDAMetaData::ProcessDirtyRectAgainstMoveList(this, pDirtyRects) )
    {
      DirtyRectCount = a2->DirtyRectCount;
      ++v3;
      ++pDirtyRects;
      if ( v3 >= a2->DirtyRectCount )
        goto LABEL_4;
    }
    WdLogSingleEntry1(2LL, 704LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to process new dirty against move list",
      704LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
LABEL_4:
    v7 = (struct tagRECT *)a2->pDirtyRects;
    v8 = 0LL;
    if ( !DirtyRectCount )
      return 1LL;
    while ( (unsigned int)DDAMetaData::ProcessDirtyRectAgainstDirtyList(this, v7) )
    {
      v8 = (unsigned int)(v8 + 1);
      ++v7;
      if ( (unsigned int)v8 >= a2->DirtyRectCount )
        return 1LL;
    }
    WdLogSingleEntry2(2LL, v8, v7);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to process dirty rect against dirty list, Idx 0x%I64x, pRect 0x%I64x",
      v8,
      (__int64)v7,
      0LL,
      0LL,
      0LL);
  }
  return 0LL;
}
