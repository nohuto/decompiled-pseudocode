/*
 * XREFs of sub_180003AA0 @ 0x180003AA0
 * Callers:
 *     sub_1800036EC @ 0x1800036EC (sub_1800036EC.c)
 * Callees:
 *     sub_1800042D4 @ 0x1800042D4 (sub_1800042D4.c)
 *     sub_180004620 @ 0x180004620 (sub_180004620.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180051BBC @ 0x180051BBC (sub_180051BBC.c)
 *     sub_18005238C @ 0x18005238C (sub_18005238C.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_1800CA660 @ 0x1800CA660 (sub_1800CA660.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_180003AA0(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // r13
  HKEY v3; // rbx
  unsigned int v4; // esi
  __int64 v6; // r12
  int v7; // eax
  HKEY v8; // rdi
  __int64 v9; // r14
  HRESULT v10; // eax
  RPC_STATUS v11; // eax
  int v12; // eax
  int v13; // eax
  const BYTE *lpData; // r12
  unsigned int v15; // eax
  unsigned int v16; // eax
  __int64 v17; // r9
  __int64 v18; // rdx
  RPC_STATUS v19; // [rsp+38h] [rbp-39h] BYREF
  HKEY hKey; // [rsp+40h] [rbp-31h]
  LPOLESTR lpsz; // [rsp+48h] [rbp-29h] BYREF
  HKEY v22; // [rsp+50h] [rbp-21h] BYREF
  DWORD cbData; // [rsp+58h] [rbp-19h] BYREF
  RPC_STATUS *v24; // [rsp+60h] [rbp-11h]
  char v25; // [rsp+68h] [rbp-9h]
  struct _RTL_CRITICAL_SECTION *v26; // [rsp+70h] [rbp-1h]
  WCHAR ValueName[20]; // [rsp+78h] [rbp+7h] BYREF
  void *retaddr; // [rsp+D0h] [rbp+5Fh]

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
  v26 = v2;
  v3 = 0LL;
  if ( *(_BYTE *)(a1 + 96) )
  {
    v22 = 0LL;
    v6 = a1 - 16;
    v7 = sub_180051BBC(a1 - 16, &v22);
    v4 = v7;
    v8 = v22;
    if ( v7 < 0 )
    {
      sub_18004BD84(retaddr, 3167LL, "avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", (unsigned int)v7);
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 40);
      while ( 1 )
      {
        if ( !v9 )
        {
          *(_BYTE *)(a1 + 96) = 0;
          v4 = 0;
          goto LABEL_25;
        }
        lpsz = 0LL;
        v10 = StringFromCLSID((const IID *const)v9, &lpsz);
        v4 = v10;
        if ( v10 < 0 )
        {
          sub_18004BD84(
            retaddr,
            3173LL,
            "avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
            (unsigned int)v10);
          goto LABEL_44;
        }
        v11 = RpcImpersonateClient(0LL);
        v19 = v11;
        v24 = &v19;
        v25 = 1;
        if ( v11 )
        {
          if ( v11 != 1725 )
            break;
        }
        hKey = 0LL;
        v12 = sub_180004620((int)v8, (int)lpsz);
        v4 = v12;
        if ( v12 < 0 )
        {
          sub_18004BD84(
            retaddr,
            3184LL,
            "avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
            (unsigned int)v12);
          v3 = hKey;
          goto LABEL_39;
        }
        v25 = 0;
        if ( !v19 )
          RpcRevertToSelf();
        v13 = sub_1800042D4((char *)ValueName);
        v4 = v13;
        if ( v13 < 0 )
        {
          v17 = (unsigned int)v13;
          v18 = 3188LL;
          goto LABEL_37;
        }
        if ( *(_WORD *)(v9 + 24) )
        {
          lpData = (const BYTE *)sub_18005238C(v6, v9 + 24, &cbData);
          if ( !lpData )
          {
            v4 = -2147024882;
            v17 = 2147942414LL;
            v18 = 3198LL;
LABEL_37:
            sub_18004BD84(retaddr, v18, "avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", v17);
            v3 = hKey;
            goto LABEL_41;
          }
          v3 = hKey;
          v15 = RegSetValueExW(hKey, ValueName, 0, 3u, lpData, cbData);
          if ( v15 )
          {
            v4 = sub_1800CA660(retaddr, 3200LL, "avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", v15);
            sub_18006A148(lpData, 1LL);
            goto LABEL_41;
          }
          sub_18006A148(lpData, 1LL);
          v6 = a1 - 16;
        }
        else
        {
          v3 = hKey;
          v16 = RegDeleteValueW(hKey, ValueName);
          if ( v16 )
          {
            v4 = sub_1800CA660(retaddr, 3192LL, "avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", v16);
            goto LABEL_41;
          }
        }
        v9 = *(_QWORD *)(v9 + 48);
        if ( v3 )
          RegCloseKey(v3);
        v3 = 0LL;
        if ( lpsz )
          CoTaskMemFree(lpsz);
      }
      if ( v11 > 0 )
        v4 = (unsigned __int16)v11 | 0x80070000;
      else
        v4 = v11;
      sub_18004BD84(retaddr, 3182LL, "avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", v4);
LABEL_39:
      if ( !v19 )
        RpcRevertToSelf();
LABEL_41:
      if ( v3 )
        RegCloseKey(v3);
LABEL_44:
      if ( lpsz )
        CoTaskMemFree(lpsz);
    }
LABEL_25:
    if ( v8 )
      RegCloseKey(v8);
  }
  else
  {
    v4 = 0;
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return v4;
}
