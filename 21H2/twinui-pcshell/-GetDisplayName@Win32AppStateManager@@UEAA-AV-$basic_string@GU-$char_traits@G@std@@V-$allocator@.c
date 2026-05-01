/*
 * XREFs of ?GetDisplayName@Win32AppStateManager@@UEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1804CC430
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x180061A7C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18008EFC8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?GetExePathFromAppId@ExePathToAppIdMapping@@QEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV23@@Z @ 0x1804CC568 (-GetExePathFromAppId@ExePathToAppIdMapping@@QEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$allo.c)
 *     ?TryGetWindowFromAppId@ExeDataCache@@QEAA?AV?$optional@PEAUHWND__@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@3@@Z @ 0x1804CD188 (-TryGetWindowFromAppId@ExeDataCache@@QEAA-AV-$optional@PEAUHWND__@@@std@@AEBV-$basic_string@GU-$.c)
 *     ?GetDisplayNameFromExePath@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1804CE8AC (-GetDisplayNameFromExePath@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PE.c)
 *     ?GetDisplayNameFromWindow@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUHWND__@@@Z @ 0x1804CEB20 (-GetDisplayNameFromWindow@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEA.c)
 */

// Hidden C++ exception states: #wind=3
_OWORD *__fastcall Win32AppStateManager::GetDisplayName(RTL_SRWLOCK *a1, _OWORD *a2, _WORD *a3)
{
  const WCHAR *v5; // rdx
  __int128 v7; // [rsp+20h] [rbp-29h] BYREF
  __m128i si128; // [rsp+30h] [rbp-19h]
  _OWORD *v9; // [rsp+40h] [rbp-9h] BYREF
  char v10; // [rsp+48h] [rbp-1h]
  __int64 v11; // [rsp+50h] [rbp+7h]
  LPCWSTR pszPath[4]; // [rsp+60h] [rbp+17h] BYREF

  v9 = a2;
  std::wstring::wstring((__int64)&v7, a3);
  ExePathToAppIdMapping::GetExePathFromAppId(a1 + 15);
  if ( !pszPath[2] )
  {
    ExeDataCache::TryGetWindowFromAppId(a1 + 12);
    if ( v10 )
    {
      GetDisplayNameFromWindow(&v9, v9);
      if ( v11 )
      {
        std::wstring::wstring((__int64)a2);
        std::wstring::_Tidy_deallocate(&v9);
        goto LABEL_10;
      }
      std::wstring::_Tidy_deallocate(&v9);
    }
    *a2 = v7;
    a2[1] = si128;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    LOWORD(v7) = 0;
    goto LABEL_10;
  }
  v5 = (const WCHAR *)pszPath;
  if ( pszPath[3] >= (LPCWSTR)8 )
    v5 = pszPath[0];
  GetDisplayNameFromExePath(a2, v5);
LABEL_10:
  std::wstring::_Tidy_deallocate(pszPath);
  std::wstring::_Tidy_deallocate(&v7);
  return a2;
}
