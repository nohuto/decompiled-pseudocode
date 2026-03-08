/*
 * XREFs of ?AddDisplaySource@SESSION_VIEW@@QEAAJPEAVDISPLAY_SOURCE@@E@Z @ 0x1C01C3AD4
 * Callers:
 *     ?AddSourceViewToSession@DXGSESSIONDATA@@QEAAJAEAUtagRECT@@AEBU_LUID@@IEPEAU3@PEAPEAVSESSION_VIEW@@@Z @ 0x1C01C385C (-AddSourceViewToSession@DXGSESSIONDATA@@QEAAJAEAUtagRECT@@AEBU_LUID@@IEPEAU3@PEAPEAVSESSION_VIEW.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall SESSION_VIEW::AddDisplaySource(SESSION_VIEW *this, struct DISPLAY_SOURCE *a2, char a3)
{
  SESSION_VIEW *v3; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rcx
  __int64 v7; // rdx
  __int64 v9; // r8
  _QWORD *v10; // rdx
  _QWORD *v11; // rdx

  v3 = (SESSION_VIEW *)*((_QWORD *)a2 + 6);
  if ( !v3 )
  {
    *((_QWORD *)a2 + 6) = this;
    v5 = (_QWORD *)((char *)a2 + 56);
    ++*((_DWORD *)this + 10);
    v6 = (_QWORD *)((char *)this + 48);
    if ( !a3 )
    {
      v11 = (_QWORD *)v6[1];
      if ( (_QWORD *)*v11 == v6 )
      {
        *v5 = v6;
        v5[1] = v11;
        *v11 = v5;
        v6[1] = v5;
        return 0LL;
      }
      goto LABEL_14;
    }
    goto LABEL_3;
  }
  if ( v3 == this )
  {
    if ( !a3 )
      return 0LL;
    v5 = (_QWORD *)((char *)a2 + 56);
    v9 = *((_QWORD *)a2 + 7);
    if ( *(struct DISPLAY_SOURCE **)(v9 + 8) != (struct DISPLAY_SOURCE *)((char *)a2 + 56)
      || (v10 = (_QWORD *)*((_QWORD *)a2 + 8), (_QWORD *)*v10 != v5) )
    {
LABEL_14:
      __fastfail(3u);
    }
    *v10 = v9;
    v6 = (_QWORD *)((char *)this + 48);
    *(_QWORD *)(v9 + 8) = v10;
LABEL_3:
    v7 = *v6;
    if ( *(_QWORD **)(*v6 + 8LL) == v6 )
    {
      *v5 = v7;
      v5[1] = v6;
      *(_QWORD *)(v7 + 8) = v5;
      *v6 = v5;
      return 0LL;
    }
    goto LABEL_14;
  }
  WdLogSingleEntry2(2LL, a2, -1073741811LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Caller specified display source 0x%I64x is owned by other session view, returning 0x%I64x.",
    (__int64)a2,
    -1073741811LL,
    0LL,
    0LL,
    0LL);
  return 3221225485LL;
}
