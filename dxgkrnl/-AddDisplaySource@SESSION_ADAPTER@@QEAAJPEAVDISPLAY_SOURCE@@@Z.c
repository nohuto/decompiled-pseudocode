/*
 * XREFs of ?AddDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z @ 0x1C01DBB30
 * Callers:
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C017D64C (DxgkUseAdapterViewInCurrentSession.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall SESSION_ADAPTER::AddDisplaySource(SESSION_ADAPTER *this, struct DISPLAY_SOURCE *a2)
{
  SESSION_ADAPTER *v2; // rax
  int v4; // ecx
  char *v5; // r8
  char *v6; // rax
  char **v7; // rcx

  v2 = (SESSION_ADAPTER *)*((_QWORD *)a2 + 3);
  if ( !v2 )
  {
    *((_QWORD *)a2 + 3) = this;
    v4 = *((_DWORD *)a2 + 4);
    ++*((_DWORD *)this + 27);
    *((_DWORD *)this + 26) |= 1 << v4;
    v5 = (char *)this + 112;
    v6 = (char *)a2 + 32;
    v7 = (char **)*((_QWORD *)v5 + 1);
    if ( *v7 != v5 )
      __fastfail(3u);
    *(_QWORD *)v6 = v5;
    *((_QWORD *)a2 + 5) = v7;
    *v7 = v6;
    *((_QWORD *)v5 + 1) = v6;
    goto LABEL_4;
  }
  if ( v2 == this )
  {
LABEL_4:
    ++*((_DWORD *)a2 + 18);
    return 0LL;
  }
  WdLogSingleEntry1(2LL, 2921LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Caller specified display source is owned by other session.",
    2921LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225506LL;
}
