/*
 * XREFs of ??$_Floating_to_wstring@N@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@PEBGN@Z @ 0x1803C883C
 * Callers:
 *     ?SetOverrideMonitorSizeForSIP@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x18005D2F4 (-SetOverrideMonitorSizeForSIP@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 * Callees:
 *     swprintf_s @ 0x180090A88 (swprintf_s.c)
 *     _scwprintf @ 0x180090AE0 (_scwprintf.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@_KG@Z @ 0x180264DD4 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@_KG@Z.c)
 */

wchar_t *__fastcall std::_Floating_to_wstring<double>(wchar_t *a1, __int64 a2, double a3)
{
  unsigned __int64 v4; // rdi
  wchar_t *v5; // rcx

  v4 = scwprintf(L"%f", a3);
  std::wstring::wstring((__int64)a1, v4);
  v5 = a1;
  if ( *((_QWORD *)a1 + 3) >= 8uLL )
    v5 = *(wchar_t **)a1;
  swprintf_s(v5, v4 + 1, L"%f", a3);
  return a1;
}
