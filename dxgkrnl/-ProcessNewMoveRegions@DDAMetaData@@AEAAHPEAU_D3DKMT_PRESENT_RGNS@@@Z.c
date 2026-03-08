/*
 * XREFs of ?ProcessNewMoveRegions@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C032E558
 * Callers:
 *     ?CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z @ 0x1C032CCA8 (-CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?ProcessMoveAgainstDirtyList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@PEAH@Z @ 0x1C032E1D0 (-ProcessMoveAgainstDirtyList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@PEAH@Z.c)
 *     ?ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z @ 0x1C032E278 (-ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z.c)
 */

__int64 __fastcall DDAMetaData::ProcessNewMoveRegions(DDAMetaData *this, struct _D3DKMT_PRESENT_RGNS *a2)
{
  D3DKMT_MOVE_RECT *pMoveRects; // rbx
  UINT v3; // edi
  __int64 result; // rax
  LONG x; // eax
  __int64 v8; // rbx
  const wchar_t *v9; // r9
  int v10; // [rsp+50h] [rbp-38h] BYREF
  struct tagRECT v11; // [rsp+58h] [rbp-30h] BYREF

  pMoveRects = (D3DKMT_MOVE_RECT *)a2->pMoveRects;
  v3 = 0;
  result = 1LL;
  if ( a2->MoveRectCount )
  {
    while ( 1 )
    {
      x = pMoveRects->SourcePoint.x;
      v10 = 0;
      v11.left = x;
      v11.right = pMoveRects->SourcePoint.x + pMoveRects->DestRect.right - pMoveRects->DestRect.left;
      v11.top = pMoveRects->SourcePoint.y;
      v11.bottom = pMoveRects->SourcePoint.y + pMoveRects->DestRect.bottom - pMoveRects->DestRect.top;
      result = DDAMetaData::ProcessMoveAgainstDirtyList(this, pMoveRects, &v11, &v10);
      if ( !(_DWORD)result )
        break;
      if ( v10 )
      {
        result = DDAMetaData::ProcessMoveAgainstMoveList(this, pMoveRects, &v11);
        if ( !(_DWORD)result )
        {
          v8 = 682LL;
          WdLogSingleEntry1(2LL, 682LL);
          v9 = L"Failed to process new move dst against move list";
          goto LABEL_9;
        }
      }
      ++v3;
      ++pMoveRects;
      if ( v3 >= a2->MoveRectCount )
        return result;
    }
    v8 = 669LL;
    WdLogSingleEntry1(2LL, 669LL);
    v9 = L"Failed to process new move dst against dirty list";
LABEL_9:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v9, v8, 0LL, 0LL, 0LL, 0LL);
    return 0LL;
  }
  return result;
}
