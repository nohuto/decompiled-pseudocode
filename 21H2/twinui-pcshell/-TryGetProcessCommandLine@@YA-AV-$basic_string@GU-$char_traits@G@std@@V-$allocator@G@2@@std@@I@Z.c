/*
 * XREFs of ?TryGetProcessCommandLine@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@Z @ 0x1804CF5D4
 * Callers:
 *     ?TryGetMainClassNameFromJavaEngineProcess@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@Z @ 0x1804CF554 (-TryGetMainClassNameFromJavaEngineProcess@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG_K@Z @ 0x1802BBE74 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TryGetProcessCommandLine(__int64 a1, DWORD a2)
{
  char *v3; // rbx
  const void **v4; // rax
  const void **v5; // rdi
  ULONG ProcessInformationLength[2]; // [rsp+30h] [rbp-40h] BYREF
  char *v8; // [rsp+38h] [rbp-38h]
  const void **v9; // [rsp+40h] [rbp-30h]
  __int128 v10; // [rsp+48h] [rbp-28h] BYREF
  __m128i si128; // [rsp+58h] [rbp-18h]

  *(_QWORD *)ProcessInformationLength = a1;
  v3 = (char *)OpenProcess(0x1000u, 0, a2);
  v8 = v3;
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    ProcessInformationLength[0] = 0;
    if ( NtQueryInformationProcess(v3, ProcessImageFileMapping|ProcessUserModeIOPL, 0LL, 0, ProcessInformationLength) == -1073741820 )
    {
      v4 = (const void **)LocalAlloc(0x40u, ProcessInformationLength[0]);
      v5 = v4;
      v9 = v4;
      if ( v4 )
      {
        if ( !NtQueryInformationProcess(
                v3,
                ProcessImageFileMapping|ProcessUserModeIOPL,
                v4,
                ProcessInformationLength[0],
                0LL) )
        {
          std::wstring::wstring((__int64)&v10, v5[1], (unsigned __int64)*(unsigned __int16 *)v5 >> 1);
          *(_OWORD *)a1 = v10;
          *(__m128i *)(a1 + 16) = si128;
          si128 = _mm_load_si128((const __m128i *)&_xmm);
          LOWORD(v10) = 0;
          std::wstring::_Tidy_deallocate(&v10);
          LocalFree(v5);
LABEL_10:
          CloseHandle(v3);
          return a1;
        }
      }
      else
      {
        v5 = 0LL;
      }
      if ( v5 )
        LocalFree(v5);
    }
  }
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_WORD *)a1 = 0;
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    goto LABEL_10;
  return a1;
}
