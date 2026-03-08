/*
 * XREFs of ?RemoveDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z @ 0x1C01DC09C
 * Callers:
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C017D64C (DxgkUseAdapterViewInCurrentSession.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x1C0027640 (memset.c)
 */

__int64 __fastcall SESSION_ADAPTER::RemoveDisplaySource(SESSION_ADAPTER *this, struct DISPLAY_SOURCE *a2)
{
  int v5; // ecx
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  _QWORD *v8; // rax

  if ( *((SESSION_ADAPTER **)a2 + 3) == this )
  {
    if ( (*((_DWORD *)a2 + 18))-- == 1 )
    {
      memset((char *)a2 + 88, 0, 0x200uLL);
      v5 = *((_DWORD *)a2 + 4);
      *((_QWORD *)a2 + 75) = 0LL;
      *((_DWORD *)this + 26) &= ~(1 << v5);
      *((_QWORD *)a2 + 3) = 0LL;
      v6 = (_QWORD *)((char *)a2 + 32);
      v7 = *v6;
      if ( *(_QWORD **)(*v6 + 8LL) != v6 || (v8 = (_QWORD *)v6[1], (_QWORD *)*v8 != v6) )
        __fastfail(3u);
      *v8 = v7;
      *(_QWORD *)(v7 + 8) = v8;
      --*((_DWORD *)this + 27);
    }
    return 0LL;
  }
  else
  {
    WdLogSingleEntry2(2LL, a2, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified display source 0x%I64x is not owned by current session, returning 0x%I64x.",
      (__int64)a2,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
