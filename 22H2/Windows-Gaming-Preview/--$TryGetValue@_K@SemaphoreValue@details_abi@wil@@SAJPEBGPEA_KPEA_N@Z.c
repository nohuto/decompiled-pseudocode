/*
 * XREFs of ??$TryGetValue@_K@SemaphoreValue@details_abi@wil@@SAJPEBGPEA_KPEA_N@Z @ 0x18000900C
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18000820C (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18000871C (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180001A2C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x180001AB8 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003268 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800032A0 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18000336C (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x180003690 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     __security_check_cookie @ 0x1800443F0 (__security_check_cookie.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::TryGetValue<unsigned __int64>(char *a1, __int64 *a2)
{
  __int64 v3; // r14
  __int64 v4; // rdx
  wil::details *v5; // rax
  wil::details *v6; // rbx
  const char *v7; // r9
  int LastError; // esi
  int ValueFromSemaphore; // eax
  __int64 v10; // rdx
  void *v11; // rdx
  wil::details *v12; // rax
  const char *v13; // r9
  wil::details *v14; // rdi
  int v15; // eax
  void *v16; // rdx
  void *v17; // rdx
  void *v18; // rdx
  int v20; // [rsp+20h] [rbp-E0h] BYREF
  int v21[3]; // [rsp+24h] [rbp-DCh] BYREF
  WCHAR Name[264]; // [rsp+30h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+178h]

  *a2 = 0LL;
  v3 = 0LL;
  StringCchCopyW((char *)Name, 260LL, a1);
  StringCchCatW(Name, v4, (char *)L"_p0");
  v5 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
  v6 = v5;
  if ( v5 )
  {
    v21[0] = 0;
    v20 = 0;
    ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v5, v21);
    LastError = ValueFromSemaphore;
    if ( ValueFromSemaphore >= 0 )
    {
      StringCchCatW(Name, v10, (char *)L"h");
      v12 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
      v14 = v12;
      if ( v12 )
      {
        v15 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v12, &v20);
        LastError = v15;
        if ( v15 >= 0 )
        {
          wil::details::CloseHandle(v14, v16);
          v3 = ((__int64)v20 << 31) | v21[0];
          wil::details::CloseHandle(v6, v18);
          LastError = 0;
          goto LABEL_12;
        }
        wil::details::in1diag3::Return_Hr(retaddr, (void *)0xD7, (__int64)"wil", (const char *)(unsigned int)v15);
        wil::details::CloseHandle(v14, v17);
      }
      else
      {
        LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xD5, (__int64)"wil", v13);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCF,
        (__int64)"wil",
        (const char *)(unsigned int)ValueFromSemaphore);
    }
    wil::details::CloseHandle(v6, v11);
    goto LABEL_12;
  }
  if ( GetLastError() == 2 )
    goto LABEL_14;
  LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xC9, (__int64)"wil", v7);
LABEL_12:
  if ( LastError < 0 )
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x62, (__int64)"wil", (const char *)(unsigned int)LastError);
    return (unsigned int)LastError;
  }
LABEL_14:
  *a2 = v3;
  return 0LL;
}
