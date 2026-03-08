/*
 * XREFs of ?AddToMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@@Z @ 0x1C032CB68
 * Callers:
 *     ?ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z @ 0x1C032E278 (-ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C01DC800 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C032E44C (-ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z.c)
 */

__int64 __fastcall DDAMetaData::AddToMoveList(DDAMetaData *this, struct _D3DKMT_MOVE_RECT *a2)
{
  unsigned int v2; // esi
  unsigned int v4; // ecx
  unsigned int v6; // esi
  _QWORD *Buffer; // rdx
  __int64 v8; // rbx
  const wchar_t *v9; // r9
  __int64 v11; // rcx
  struct _D3DKMT_PRESENT_RGNS v12; // [rsp+50h] [rbp-28h] BYREF

  v2 = *((_DWORD *)this + 11);
  v4 = *((_DWORD *)this + 10);
  if ( v2 >= v4 )
  {
    *(&v12.DirtyRectCount + 1) = 0;
    v12.pDirtyRects = &a2->DestRect;
    v12.DirtyRectCount = 1;
    *(_OWORD *)&v12.MoveRectCount = 0LL;
    if ( !(unsigned int)DDAMetaData::ProcessNewDirtyRects(this, &v12) )
    {
      v8 = 1016LL;
      WdLogSingleEntry1(2LL, 1016LL);
      v9 = L"Failed to add new move to dirty list";
      goto LABEL_9;
    }
  }
  else
  {
    if ( *(_DWORD *)(*((_QWORD *)this + 6) + 12LL) / 0x18u == v2 )
    {
      v6 = v2 + 4;
      if ( v6 >= v4 )
        v6 = v4;
    }
    else
    {
      v6 = v2 + 1;
    }
    Buffer = AUTOEXPANDALLOCATION::GetBuffer(*((const void ***)this + 6), 24 * v6, 1);
    if ( !Buffer )
    {
      v8 = v6;
      WdLogSingleEntry1(2LL, v6);
      v9 = L"Failed to expand move list to 0x%I64x move";
LABEL_9:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v9, v8, 0LL, 0LL, 0LL, 0LL);
      return 0LL;
    }
    v11 = 3LL * *((unsigned int *)this + 11);
    *(_OWORD *)&Buffer[v11] = *(_OWORD *)&a2->SourcePoint.x;
    Buffer[v11 + 2] = *(_QWORD *)&a2->DestRect.right;
    ++*((_DWORD *)this + 11);
  }
  return 1LL;
}
