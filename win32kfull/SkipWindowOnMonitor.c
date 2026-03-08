/*
 * XREFs of SkipWindowOnMonitor @ 0x1C00C8DE0
 * Callers:
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C0008920 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     ?NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z @ 0x1C00C8AFC (-NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z.c)
 *     _lambda_dc07bf9eeab06415d9a9c521953e95b1_::_lambda_invoker_cdecl_ @ 0x1C00C8E60 (_lambda_dc07bf9eeab06415d9a9c521953e95b1_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C00D2B90 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 */

__int64 __fastcall SkipWindowOnMonitor(struct tagWND *a1)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx
  __int64 *v3; // rsi
  struct tagMONITOR *v4; // rbp
  __int64 *i; // rdi

  v1 = *((_QWORD *)a1 + 3);
  v2 = 0;
  if ( v1 && *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL) == 1 && *(_QWORD *)(v1 + 280) )
  {
    v3 = (__int64 *)(v1 + 304);
    v4 = _MonitorFromWindowInternal(a1, 0, 0);
    for ( i = *(__int64 **)(v1 + 304); i != v3; i = (__int64 *)*i )
    {
      if ( *((_DWORD *)i + 6) && _MonitorFromWindowInternal((struct tagWND *)i[2], 0, 0) == v4 )
        return 1;
    }
  }
  return v2;
}
