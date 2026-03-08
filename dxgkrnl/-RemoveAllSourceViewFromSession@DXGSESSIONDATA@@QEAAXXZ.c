/*
 * XREFs of ?RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ @ 0x1C01C4F08
 * Callers:
 *     DxgkRemoveAllSessionViewForCurrentSession @ 0x1C01C4E60 (DxgkRemoveAllSessionViewForCurrentSession.c)
 *     DxgkDestroyCsrssProcess @ 0x1C01C56D4 (DxgkDestroyCsrssProcess.c)
 * Callees:
 *     ??_GSESSION_VIEW@@QEAAPEAXI@Z @ 0x1C000B2B4 (--_GSESSION_VIEW@@QEAAPEAXI@Z.c)
 *     ?RemoveAllDisplaySource@SESSION_VIEW@@QEAAXXZ @ 0x1C01C582C (-RemoveAllDisplaySource@SESSION_VIEW@@QEAAXXZ.c)
 */

void __fastcall DXGSESSIONDATA::RemoveAllSourceViewFromSession(DXGSESSIONDATA *this)
{
  char *v1; // rdi
  char *v2; // rbx
  SESSION_VIEW *v3; // r11
  char *v4; // rsi
  SESSION_VIEW *v5; // r11
  __int64 v6; // rcx
  char **v7; // rax

  v1 = (char *)this + 18592;
  v2 = (char *)*((_QWORD *)this + 2324);
  while ( v2 != v1 )
  {
    v3 = (SESSION_VIEW *)(v2 - 8);
    v4 = v2;
    v2 = *(char **)v2;
    SESSION_VIEW::RemoveAllDisplaySource(v3);
    v6 = *(_QWORD *)v4;
    v7 = (char **)*((_QWORD *)v4 + 1);
    if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4 || *v7 != v4 )
      __fastfail(3u);
    *v7 = (char *)v6;
    *(_QWORD *)(v6 + 8) = v7;
    if ( v5 )
      SESSION_VIEW::`scalar deleting destructor'(v5);
  }
}
