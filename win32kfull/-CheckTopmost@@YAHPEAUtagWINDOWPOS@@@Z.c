__int64 __fastcall CheckTopmost(struct tagWINDOWPOS *a1)
{
  _QWORD *v2; // rsi
  __int64 v3; // rbx
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 *LastTopMostWindow; // rax
  __int64 v8; // rax
  bool v9; // zf
  __int64 *v10; // rax
  __int64 *TopMostInsertAfter; // rax
  __int64 *v13; // rax
  __int64 *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned int v18; // ecx
  _QWORD *v19; // rax

  v2 = (_QWORD *)_HMObjectFromHandle(*(_QWORD *)a1);
  v3 = 0LL;
  v4 = *((_DWORD *)a1 + 8);
  if ( (v4 & 0x14) == 0
    && *((_QWORD *)a1 + 1) <= 0xFFFFFFFFFFFFFFFDuLL
    && v2 != *(_QWORD **)(*(_QWORD *)(v2[2] + 432LL) + 128LL) )
  {
    *((_QWORD *)a1 + 1) = 0LL;
  }
  if ( (v4 & 4) != 0 )
    return 0LL;
  v5 = *((_QWORD *)a1 + 1);
  switch ( v5 )
  {
    case 1LL:
      return 2LL;
    case -2LL:
      v6 = v2[5];
      if ( (*(_BYTE *)(v6 + 24) & 8) == 0 )
      {
        v9 = (*(_WORD *)(v6 + 42) & 0x2FFF) == 669;
        goto LABEL_15;
      }
      LastTopMostWindow = (__int64 *)GetLastTopMostWindow(v2);
      if ( LastTopMostWindow )
        v8 = *LastTopMostWindow;
      else
        v8 = 0LL;
      *((_QWORD *)a1 + 1) = v8;
      if ( v8 == *(_QWORD *)a1 )
      {
        v9 = (*(_WORD *)(v2[5] + 42LL) & 0x2FFF) == 669;
LABEL_15:
        if ( !v9 )
        {
          v10 = (__int64 *)v2[12];
          if ( v10 )
            v3 = *v10;
        }
        *((_QWORD *)a1 + 1) = v3;
      }
      return 2LL;
    case -1LL:
      if ( gHardErrorHandler )
      {
        TopMostInsertAfter = (__int64 *)GetTopMostInsertAfter(v2);
        if ( TopMostInsertAfter )
          v3 = *TopMostInsertAfter;
      }
      *((_QWORD *)a1 + 1) = v3;
      return 1LL;
    case 0LL:
      if ( (*(_BYTE *)(v2[5] + 24LL) & 8) == 0 )
      {
        v13 = (__int64 *)CalcForegroundInsertAfter(v2);
        if ( v13 )
          v3 = *v13;
        *((_QWORD *)a1 + 1) = v3;
        return 0LL;
      }
LABEL_38:
      if ( gHardErrorHandler )
      {
        v19 = (_QWORD *)GetTopMostInsertAfter(v2);
        if ( v19 )
          *((_QWORD *)a1 + 1) = *v19;
      }
      return 0LL;
  }
  v14 = (__int64 *)GetLastTopMostWindow(v2);
  if ( v14 )
    v15 = *v14;
  else
    v15 = 0LL;
  v16 = *((_QWORD *)a1 + 1);
  if ( v16 == v15 )
    return 0LL;
  v17 = _HMObjectFromHandle(v16);
  v18 = *(unsigned __int8 *)(v2[5] + 24LL);
  if ( (*(_BYTE *)(*(_QWORD *)(v17 + 40) + 24LL) & 8) != 0 )
  {
    if ( (v18 & 8) == 0 )
      return 1LL;
    goto LABEL_38;
  }
  return (v18 >> 2) & 2;
}
