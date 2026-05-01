/*
 * XREFs of ?GetJavaOption@@YA?AW4JavaOption@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV23@@Z @ 0x1800DC7E4
 * Callers:
 *     ?TryExtractJavaMainClassNameFromCommandLine@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@Z @ 0x1804CF038 (-TryExtractJavaMainClassNameFromCommandLine@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18008EFA8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     atexit @ 0x180090164 (atexit.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180090E18 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _Init_thread_footer @ 0x1800910C8 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180091130 (_Init_thread_header.c)
 *     ?substr@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV12@_K0@Z @ 0x18009BA0C (-substr@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV12@_K0@Z.c)
 *     ??$?0AEAY08$$CBGW4JavaOption@@$0A@@?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@QEAA@AEAY08$$CBG$$QEAW4JavaOption@@@Z @ 0x1800DC07C (--$-0AEAY08$$CBGW4JavaOption@@$0A@@-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocato.c)
 *     ??0?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@@2@@std@@QEAA@V?$initializer_list@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@@1@@Z @ 0x1800DC730 (--0-$map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@W4JavaOption@@U-$less@V-$.c)
 *     ?find@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KG_K@Z @ 0x18025DB44 (-find@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_KG_K@Z.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802653EC (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHAEBV12@@Z @ 0x180267364 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHAEBV12@@Z.c)
 */

__int64 __fastcall GetJavaOption(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 *v5; // rbx
  __int64 *v6; // r11
  __int64 v7; // r11
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbx
  __m128i *p_lpString1; // rcx
  __int64 v11; // rax
  __int64 v13; // rcx
  _DWORD v14[4]; // [rsp+30h] [rbp-D0h] BYREF
  __m128i lpString1; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v16; // [rsp+58h] [rbp-A8h]
  _QWORD v17[4]; // [rsp+60h] [rbp-A0h] BYREF
  char v18[32]; // [rsp+80h] [rbp-80h] BYREF
  int v19; // [rsp+A0h] [rbp-60h]
  _BYTE v20[40]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v21[32]; // [rsp+D0h] [rbp-30h] BYREF
  int v22; // [rsp+F0h] [rbp-10h]
  _BYTE v23[40]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v24[40]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v25[40]; // [rsp+148h] [rbp+48h] BYREF
  _BYTE v26[40]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v27[40]; // [rsp+198h] [rbp+98h] BYREF
  _BYTE v28[40]; // [rsp+1C0h] [rbp+C0h] BYREF
  _BYTE v29[40]; // [rsp+1E8h] [rbp+E8h] BYREF
  _BYTE v30[40]; // [rsp+210h] [rbp+110h] BYREF
  _BYTE v31[40]; // [rsp+238h] [rbp+138h] BYREF
  _BYTE v32[32]; // [rsp+260h] [rbp+160h] BYREF
  int v33; // [rsp+280h] [rbp+180h]
  _BYTE v34[32]; // [rsp+288h] [rbp+188h] BYREF
  int v35; // [rsp+2A8h] [rbp+1A8h]
  _BYTE v36[32]; // [rsp+2B0h] [rbp+1B0h] BYREF
  int v37; // [rsp+2D0h] [rbp+1D0h]
  _BYTE v38[40]; // [rsp+2D8h] [rbp+1D8h] BYREF
  _BYTE v39[40]; // [rsp+300h] [rbp+200h] BYREF
  _BYTE v40[40]; // [rsp+328h] [rbp+228h] BYREF
  _BYTE v41[40]; // [rsp+350h] [rbp+250h] BYREF
  char v42; // [rsp+378h] [rbp+278h] BYREF

  if ( dword_180651F80 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_180651F80);
    if ( dword_180651F80 == -1 )
    {
      std::wstring::wstring((__int64)v18, L"-classpath");
      v19 = 1;
      v14[0] = 1;
      std::pair<std::wstring const,enum JavaOption>::pair<std::wstring const,enum JavaOption>(
        (__int64)v20,
        L"--classpath",
        v14);
      std::wstring::wstring((__int64)v21, L"-cp");
      v22 = 1;
      v14[0] = 1;
      std::pair<std::wstring const,enum JavaOption>::pair<std::wstring const,enum JavaOption>((__int64)v23, L"-p", v14);
      v14[0] = 1;
      std::pair<std::wstring const,enum JavaOption>::pair<std::wstring const,enum JavaOption>(
        (__int64)v24,
        L"-Xmn",
        v14);
      v14[0] = 1;
      std::pair<std::wstring const,enum JavaOption>::pair<std::wstring const,enum JavaOption>(
        (__int64)v25,
        L"-Xms",
        v14);
      v14[0] = 1;
      std::pair<std::wstring const,enum JavaOption>::pair<std::wstring const,enum JavaOption>(
        (__int64)v26,
        L"-Xss",
        v14);
      v14[0] = 1;
      std::pair<std::wstring const,enum JavaOption>::pair<std::wstring const,enum JavaOption>(
        (__int64)v27,
        L"--add-modules",
        v14);
      v14[0] = 1;
      std::pair<std::wstring const,enum JavaOption>::pair<std::wstring const,enum JavaOption>(
        (__int64)v28,
        L"--module-path",
        v14);
      v14[0] = 1;
      std::pair<std::wstring const,enum JavaOption>::pair<std::wstring const,enum JavaOption>(
        (__int64)v29,
        L"--add-reads",
        v14);
      v14[0] = 1;
      std::pair<std::wstring const,enum JavaOption>::pair<std::wstring const,enum JavaOption>(
        (__int64)v30,
        L"--add-exports",
        v14);
      v14[0] = 1;
      std::pair<std::wstring const,enum JavaOption>::pair<std::wstring const,enum JavaOption>(
        (__int64)v31,
        L"--add-opens",
        v14);
      std::wstring::wstring((__int64)v32, L"--limit-modules");
      v33 = 1;
      std::wstring::wstring((__int64)v34, L"--patch-module");
      v35 = 1;
      std::wstring::wstring((__int64)v36, L"--upgrade-module-path");
      v37 = 1;
      v14[0] = 1;
      std::pair<std::wstring const,enum JavaOption>::pair<std::wstring const,enum JavaOption>(
        (__int64)v38,
        L"--source",
        v14);
      v14[0] = 2;
      std::pair<std::wstring const,enum JavaOption>::pair<std::wstring const,enum JavaOption>(
        (__int64)v39,
        L"-jar",
        v14);
      v14[0] = 2;
      std::pair<std::wstring const,enum JavaOption>::pair<std::wstring const,enum JavaOption>((__int64)v40, L"-m", v14);
      v14[0] = 2;
      std::pair<std::wstring const,enum JavaOption>::pair<std::wstring const,enum JavaOption>(
        (__int64)v41,
        L"--module",
        v14);
      lpString1.m128i_i64[0] = (__int64)v18;
      lpString1.m128i_i64[1] = (__int64)&v42;
      std::map<std::wstring,enum JavaOption>::map<std::wstring,enum JavaOption>(v13, &lpString1);
      `eh vector destructor iterator'(v18, 40LL, 19LL, (void (*)(void *))std::wstring::~wstring);
      atexit(GetJavaOption_::_2_::_dynamic_atexit_destructor_for__javaOptions__);
      Init_thread_footer(&dword_180651F80);
    }
  }
  v4 = qword_180651F88;
  v5 = *(__int64 **)(qword_180651F88 + 8);
  if ( *((_BYTE *)v5 + 25) )
    goto LABEL_9;
  do
  {
    if ( (int)std::wstring::compare(v5 + 4, a1) >= 0 )
    {
      v6 = v5;
      v5 = (__int64 *)*v5;
    }
    else
    {
      v5 = (__int64 *)v5[2];
    }
  }
  while ( !*((_BYTE *)v5 + 25) );
  if ( v6 == (__int64 *)v4 || (int)std::wstring::compare(a1, v6 + 4) < 0 )
LABEL_9:
    v7 = v4;
  if ( v7 != v4 )
    return *(unsigned int *)(v7 + 64);
  v8 = std::wstring::find(a1, 61LL, 0LL);
  v9 = v8;
  if ( v8 == -1LL )
    return 0LL;
  std::wstring::substr(a1, (__int64)&lpString1, 0LL, v8);
  p_lpString1 = &lpString1;
  if ( v16 >= 8 )
    p_lpString1 = (__m128i *)lpString1.m128i_i64[0];
  if ( CompareStringOrdinal((LPCWCH)p_lpString1, -1, L"--module", -1, 1) != 2 )
  {
    std::wstring::_Tidy_deallocate(&lpString1);
    return 0LL;
  }
  if ( v9 + 1 < a1[2] )
  {
    v11 = std::wstring::substr(a1, (__int64)v17, v9 + 1, 0xFFFFFFFFFFFFFFFFuLL);
    std::wstring::operator=(a2, v11);
    std::wstring::_Tidy_deallocate(v17);
  }
  std::wstring::_Tidy_deallocate(&lpString1);
  return 3LL;
}
