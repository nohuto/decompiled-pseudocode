/*
 * XREFs of ?_CheckWindowTextChanged@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAA_NXZ @ 0x1802C3830
 * Callers:
 *     ?OnShellHookMessage@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJ_K_J@Z @ 0x1802C0160 (-OnShellHookMessage@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJ_K_J@Z.c)
 *     ?RuntimeClassInitialize@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@QEAAJPEAUIApplicationView@@PEAUIServiceProvider@@@Z @ 0x1802C173C (-RuntimeClassInitialize@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@QEAAJPEAUIAp.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800618B8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x180087854 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     memset_0 @ 0x180090978 (memset_0.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_CheckWindowTextChanged(
        Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *this)
{
  int WindowTextW; // r15d
  char v3; // di
  RTL_SRWLOCK *v4; // rsi
  char *v5; // r14
  char *v6; // rdx
  unsigned __int64 v7; // rbx
  __int64 v8; // r9
  _QWORD *v9; // rcx
  _QWORD *v11; // [rsp+30h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+40h] [rbp-C8h]
  WCHAR String[256]; // [rsp+58h] [rbp-B0h] BYREF

  memset_0(String, 0, sizeof(String));
  WindowTextW = GetWindowTextW(*((HWND *)this + 66), String, 256);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v3 = 0;
  LOWORD(v11) = 0;
  v4 = (RTL_SRWLOCK *)((char *)this + 224);
  AcquireSRWLockShared((PSRWLOCK)this + 28);
  v5 = (char *)this + 232;
  if ( &v11 != (_QWORD **)((char *)this + 232) )
  {
    v6 = (char *)this + 232;
    if ( *((_QWORD *)this + 32) >= 8uLL )
      v6 = *(char **)v5;
    std::wstring::assign((char *)&v11, v6, *((_QWORD *)this + 31));
  }
  if ( this != (Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *)-224LL )
    ReleaseSRWLockShared((PSRWLOCK)this + 28);
  if ( WindowTextW > 0 )
  {
    v7 = -1LL;
    v8 = -1LL;
    do
      ++v8;
    while ( String[v8] );
    v9 = &v11;
    if ( si128.m128i_i64[1] >= 8uLL )
      v9 = v11;
    if ( !std::_Traits_equal<std::char_traits<unsigned short>>((__int64)v9, si128.m128i_i64[0], String, v8) )
    {
      AcquireSRWLockExclusive(v4);
      do
        ++v7;
      while ( String[v7] );
      std::wstring::assign(v5, String, v7);
      if ( v4 )
        ReleaseSRWLockExclusive(v4);
      v3 = 1;
    }
  }
  std::wstring::_Tidy_deallocate(&v11);
  return v3;
}
