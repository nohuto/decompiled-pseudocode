/*
 * XREFs of ?AddToDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1C032C998
 * Callers:
 *     ?ProcessDirtyRectAgainstDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1C032DE80 (-ProcessDirtyRectAgainstDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 *     ?ProcessDirtyRectAgainstMoveList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1C032E0C0 (-ProcessDirtyRectAgainstMoveList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 *     ?ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z @ 0x1C032E278 (-ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?ConvertExistingDirtryRectsToGDIRegion@DDAMetaData@@AEAAHXZ @ 0x1C032CE84 (-ConvertExistingDirtryRectsToGDIRegion@DDAMetaData@@AEAAHXZ.c)
 *     ?GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z @ 0x1C032D410 (-GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z.c)
 */

__int64 __fastcall DDAMetaData::AddToDirtyList(DDAMetaData *this, struct tagRECT *a2)
{
  unsigned int v4; // edi
  unsigned int v5; // r8d
  unsigned int v6; // edi
  struct tagRECT *DirtyRectData; // rcx
  __int64 v8; // rbx
  const wchar_t *v9; // r9
  unsigned int v11; // edi

  if ( !*((_QWORD *)this + 8) )
  {
    v4 = *((_DWORD *)this + 6);
    v5 = *((_DWORD *)this + 5);
    if ( v4 < v5 )
    {
      if ( (unsigned int)(((unsigned __int64)*(unsigned int *)(*((_QWORD *)this + 4) + 12LL) - 36) >> 4) == v4 )
      {
        v6 = v4 + 8;
        if ( v6 >= v5 )
          v6 = *((_DWORD *)this + 5);
      }
      else
      {
        v6 = v4 + 1;
      }
      DirtyRectData = DDAMetaData::GetDirtyRectData(this, v6);
      if ( !DirtyRectData )
      {
        v8 = v6;
        WdLogSingleEntry1(2LL, v6);
        v9 = L"Failed to expand dirty rect list to 0x%I64x rects";
LABEL_10:
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v9, v8, 0LL, 0LL, 0LL, 0LL);
        return 0LL;
      }
      DirtyRectData[(*((_DWORD *)this + 6))++] = *a2;
      return 1LL;
    }
    if ( !(unsigned int)DDAMetaData::ConvertExistingDirtryRectsToGDIRegion(this) )
    {
      v8 = 1074LL;
      WdLogSingleEntry1(2LL, 1074LL);
      v9 = L"Failed to convert rect list to Gdi region";
      goto LABEL_10;
    }
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, LONG))(*((_QWORD *)this + 7) + 96LL))(
          *((_QWORD *)this + 9),
          (unsigned int)a2->left,
          (unsigned int)a2->top,
          (unsigned int)a2->right,
          a2->bottom);
  if ( !v11 )
  {
    v8 = 1083LL;
    WdLogSingleEntry1(2LL, 1083LL);
    v9 = L"Failed to set tmp region to current dirty rect";
    goto LABEL_10;
  }
  if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*((_QWORD *)this + 7) + 104LL))(
         *((_QWORD *)this + 8),
         *((_QWORD *)this + 8),
         *((_QWORD *)this + 9),
         2LL) )
  {
    return 1LL;
  }
  WdLogSingleEntry1(2LL, 1089LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to combine current dirty rect with dirty region",
    1089LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return v11;
}
