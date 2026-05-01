/*
 * XREFs of ?TryExtractJavaMainClassNameFromCommandLine@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@Z @ 0x1804CF038
 * Callers:
 *     ?TryGetMainClassNameFromJavaEngineProcess@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@Z @ 0x1804CF1C4 (-TryGetMainClassNameFromJavaEngineProcess@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180086C18 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18008EFA8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800CEA40 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?GetJavaOption@@YA?AW4JavaOption@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV23@@Z @ 0x1800DC7E4 (-GetJavaOption@@YA-AW4JavaOption@@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@st.c)
 *     ?TryGetNameFromPath@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@Z @ 0x1800DCC90 (-TryGetNameFromPath@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEBV12@@Z.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802653EC (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?IsJavawExe@@YA_NPEBG@Z @ 0x1804CEFF8 (-IsJavawExe@@YA_NPEBG@Z.c)
 */

__int64 __fastcall TryExtractJavaMainClassNameFromCommandLine(__int64 a1)
{
  __int64 v2; // rdx
  const WCHAR *v3; // r8
  int JavaOption; // edi
  const unsigned __int16 **v5; // rax
  const unsigned __int16 *v6; // rdx
  const unsigned __int16 **v7; // r14
  int v8; // esi
  _WORD **v9; // rbx
  __int64 NameFromPath; // rax
  WCHAR *v11; // rcx
  __int64 v12; // rax
  int pNumArgs; // [rsp+20h] [rbp-50h] BYREF
  WCHAR v15[16]; // [rsp+28h] [rbp-48h] BYREF
  WCHAR v16[16]; // [rsp+48h] [rbp-28h] BYREF

  std::wstring::wstring(a1);
  JavaOption = 0;
  pNumArgs = 0;
  if ( *(_QWORD *)(v2 + 24) >= 8uLL )
    v3 = *(const WCHAR **)v2;
  v5 = (const unsigned __int16 **)CommandLineToArgvW(v3, &pNumArgs);
  v7 = v5;
  if ( pNumArgs > 0 && IsJavawExe(*v5, v6) )
  {
    v8 = 1;
    if ( pNumArgs > 1 )
    {
      v9 = (_WORD **)(v7 + 1);
      while ( **v9 == 45 )
      {
        if ( JavaOption == 2 )
          goto LABEL_17;
        std::wstring::wstring((__int64)v16);
        std::wstring::wstring((__int64)v15, *v9);
        JavaOption = GetJavaOption(v15, (__int64)v16);
        std::wstring::~wstring(v15);
        if ( JavaOption == 1 )
        {
          ++v8;
          ++v9;
        }
        else if ( JavaOption == 3 )
        {
          NameFromPath = TryGetNameFromPath((__int64)v15, v16);
          std::wstring::operator=(a1, NameFromPath);
          std::wstring::~wstring(v15);
          v11 = v16;
          goto LABEL_16;
        }
        std::wstring::~wstring(v16);
        ++v8;
        ++v9;
        if ( v8 >= pNumArgs )
          goto LABEL_17;
      }
      std::wstring::wstring((__int64)v15, *v9);
      v12 = TryGetNameFromPath((__int64)v16, v15);
      std::wstring::operator=(a1, v12);
      std::wstring::~wstring(v16);
      v11 = v15;
LABEL_16:
      std::wstring::~wstring(v11);
    }
  }
LABEL_17:
  LocalFree(v7);
  return a1;
}
