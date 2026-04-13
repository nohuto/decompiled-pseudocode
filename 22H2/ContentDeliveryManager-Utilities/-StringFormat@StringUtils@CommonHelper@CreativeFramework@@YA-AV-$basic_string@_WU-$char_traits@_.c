/*
 * XREFs of ?StringFormat@StringUtils@CommonHelper@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_WZZ @ 0x1800AD2D4
 * Callers:
 *     _lambda_b59dbdfd0007f2d89c20db91cc7697cd_::operator() @ 0x18006A198 (_lambda_b59dbdfd0007f2d89c20db91cc7697cd_--operator().c)
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x18006B92C (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800B410C (--_U@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
void **CreativeFramework::CommonHelper::StringUtils::StringFormat(void **a1, wchar_t *Format, ...)
{
  unsigned __int64 v3; // rdi
  __int64 v4; // rsi
  wchar_t *v5; // rbx
  unsigned __int64 v6; // r8
  va_list va; // [rsp+70h] [rbp+18h] BYREF

  va_start(va, Format);
  v3 = _vscwprintf(Format, va) + 1;
  v4 = -1LL;
  v5 = (wchar_t *)operator new[](saturated_mul(v3, 2uLL));
  vswprintf_s(v5, v3, Format, va);
  a1[3] = (void *)7;
  v6 = 0LL;
  a1[2] = 0LL;
  *(_WORD *)a1 = 0;
  if ( *v5 )
  {
    do
      ++v4;
    while ( v5[v4] );
    v6 = v4;
  }
  std::wstring::assign(a1, (char *)v5, v6);
  operator delete[](v5);
  return a1;
}
