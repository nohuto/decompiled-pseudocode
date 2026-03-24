/*
 * XREFs of ?AddDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z @ 0x1C016483C
 * Callers:
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C016463C (DxgkUseAdapterViewInCurrentSession.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SESSION_ADAPTER::AddDisplaySource(SESSION_ADAPTER *this, struct DISPLAY_SOURCE *a2)
{
  SESSION_ADAPTER *v2; // rax
  int v4; // ecx
  char *v5; // r8
  char *v6; // rax
  char **v7; // rcx
  __int64 v9; // rax

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
  v9 = WdLogNewEntry5_WdError(this, a2);
  *(_QWORD *)(v9 + 24) = 2850LL;
  WdLogEvent5_WdError(v9);
  return 3221225506LL;
}
