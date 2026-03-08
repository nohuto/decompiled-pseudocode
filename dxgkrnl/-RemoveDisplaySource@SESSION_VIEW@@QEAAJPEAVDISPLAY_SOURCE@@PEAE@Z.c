/*
 * XREFs of ?RemoveDisplaySource@SESSION_VIEW@@QEAAJPEAVDISPLAY_SOURCE@@PEAE@Z @ 0x1C0350FC8
 * Callers:
 *     ?RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z @ 0x1C01C55D8 (-RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall SESSION_VIEW::RemoveDisplaySource(SESSION_VIEW *this, struct DISPLAY_SOURCE *a2, bool *a3)
{
  struct DISPLAY_SOURCE **v7; // r8
  struct DISPLAY_SOURCE **v8; // rcx
  bool v9; // zf

  if ( *((SESSION_VIEW **)a2 + 6) == this )
  {
    *((_QWORD *)a2 + 6) = 0LL;
    v7 = (struct DISPLAY_SOURCE **)*((_QWORD *)a2 + 7);
    if ( v7[1] != (struct DISPLAY_SOURCE *)((char *)a2 + 56)
      || (v8 = (struct DISPLAY_SOURCE **)*((_QWORD *)a2 + 8), *v8 != (struct DISPLAY_SOURCE *)((char *)a2 + 56)) )
    {
      __fastfail(3u);
    }
    *v8 = (struct DISPLAY_SOURCE *)v7;
    v7[1] = (struct DISPLAY_SOURCE *)v8;
    v9 = (*((_DWORD *)this + 10))-- == 1;
    *a3 = v9;
    return 0LL;
  }
  else
  {
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
}
