/*
 * XREFs of sub_18000319C @ 0x18000319C
 * Callers:
 *     sub_18002A420 @ 0x18002A420 (sub_18002A420.c)
 * Callees:
 *     sub_1800038A4 @ 0x1800038A4 (sub_1800038A4.c)
 *     sub_180044D3C @ 0x180044D3C (sub_180044D3C.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180050FD0 @ 0x180050FD0 (sub_180050FD0.c)
 *     sub_18005151C @ 0x18005151C (sub_18005151C.c)
 *     sub_180051BBC @ 0x180051BBC (sub_180051BBC.c)
 *     sub_180052524 @ 0x180052524 (sub_180052524.c)
 *     sub_180061BA0 @ 0x180061BA0 (sub_180061BA0.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     sub_18006A1B0 @ 0x18006A1B0 (sub_18006A1B0.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     sub_1800CA660 @ 0x1800CA660 (sub_1800CA660.c)
 *     sub_1800D8A9C @ 0x1800D8A9C (sub_1800D8A9C.c)
 *     sub_1800D8AF8 @ 0x1800D8AF8 (sub_1800D8AF8.c)
 */

__int64 __fastcall sub_18000319C(__int64 a1)
{
  __int64 v1; // r13
  __int64 result; // rax
  unsigned int v3; // ebx
  int v4; // eax
  unsigned int v5; // r15d
  struct _RTL_CRITICAL_SECTION *v6; // r14
  DWORD v7; // r12d
  unsigned int v8; // eax
  HRESULT v9; // eax
  RPC_STATUS v10; // eax
  HKEY v11; // rdi
  unsigned int v12; // eax
  unsigned int v13; // eax
  __int64 v14; // rax
  WCHAR *v15; // r14
  __int64 v16; // rdi
  DWORD v17; // ecx
  unsigned int v18; // eax
  __int64 v19; // rbx
  __int64 v20; // rdx
  unsigned __int64 v21; // r12
  __int64 v22; // rcx
  SAFEARRAY *v23; // rax
  SAFEARRAY *v24; // r13
  unsigned __int64 v25; // r11
  int v26; // eax
  unsigned int v27; // r10d
  _DWORD *v28; // r11
  int v29; // eax
  DWORD LastError; // ebx
  char *v31; // rax
  __int64 v32; // r12
  int v33; // eax
  LPVOID v34; // rax
  SIZE_T v35; // rdx
  int v36; // eax
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // r12
  int v40; // eax
  LPVOID v41; // rax
  SIZE_T v42; // rdx
  int v43; // eax
  BSTR v44; // rax
  __int64 v45; // r9
  __int64 v46; // rdx
  DWORD cchName; // [rsp+60h] [rbp-A0h] BYREF
  DWORD cbMaxValueNameLen; // [rsp+64h] [rbp-9Ch] BYREF
  DWORD cbData; // [rsp+68h] [rbp-98h] BYREF
  DWORD v50; // [rsp+6Ch] [rbp-94h]
  RPC_STATUS v51; // [rsp+70h] [rbp-90h]
  HKEY phkResult; // [rsp+78h] [rbp-88h] BYREF
  HKEY hKey; // [rsp+80h] [rbp-80h] BYREF
  DWORD cbMaxValueLen; // [rsp+88h] [rbp-78h] BYREF
  int v55; // [rsp+8Ch] [rbp-74h]
  DWORD v56; // [rsp+90h] [rbp-70h]
  DWORD cValues; // [rsp+94h] [rbp-6Ch] BYREF
  SAFEARRAY *v58; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v59; // [rsp+A0h] [rbp-60h] BYREF
  SAFEARRAYBOUND rgsabound; // [rsp+A8h] [rbp-58h] BYREF
  SIZE_T cb; // [rsp+B0h] [rbp-50h] BYREF
  SIZE_T v62; // [rsp+B8h] [rbp-48h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v64; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int64 v65; // [rsp+D0h] [rbp-30h]
  __int64 v66; // [rsp+D8h] [rbp-28h]
  GUID pclsid; // [rsp+E0h] [rbp-20h] BYREF
  WCHAR Name[104]; // [rsp+F0h] [rbp-10h] BYREF
  void *retaddr; // [rsp+1F8h] [rbp+F8h]

  v1 = a1;
  v66 = a1;
  result = sub_1800038A4();
  v3 = result;
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result != -2147024891 && (_DWORD)result != -2147024894 )
    {
      sub_18004BD84(retaddr, 3597LL, "avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", (unsigned int)result);
      return v3;
    }
    return result;
  }
  hKey = 0LL;
  v4 = sub_180051BBC(v1, &hKey);
  v5 = v4;
  if ( v4 < 0 )
  {
    sub_18004BD84(retaddr, 3600LL, "avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", (unsigned int)v4);
    goto LABEL_36;
  }
  v6 = (struct _RTL_CRITICAL_SECTION *)(v1 + 72);
  lpCriticalSection = (LPCRITICAL_SECTION)(v1 + 72);
  EnterCriticalSection((LPCRITICAL_SECTION)(v1 + 72));
  v7 = 0;
  v50 = 0;
  cchName = 100;
  v8 = RegEnumKeyExW(hKey, 0, Name, &cchName, 0LL, 0LL, 0LL, 0LL);
  if ( v8 == 259 )
  {
LABEL_33:
    if ( v6 )
      LeaveCriticalSection(v6);
    v5 = 0;
    goto LABEL_36;
  }
  while ( 1 )
  {
    if ( v8 )
    {
      v5 = sub_1800CA660(retaddr, 3613LL, "avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", v8);
      goto LABEL_105;
    }
    v9 = CLSIDFromString(Name, &pclsid);
    v5 = v9;
    if ( v9 < 0 )
    {
      sub_18004BD84(retaddr, 3616LL, "avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", (unsigned int)v9);
      goto LABEL_105;
    }
    phkResult = 0LL;
    v10 = RpcImpersonateClient(0LL);
    v51 = v10;
    if ( v10 && v10 != 1725 )
    {
      if ( v10 > 0 )
        v5 = (unsigned __int16)v10 | 0x80070000;
      else
        v5 = v10;
      sub_18004BD84(retaddr, 3624LL, "avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", v5);
LABEL_99:
      if ( !v51 )
        RpcRevertToSelf();
      goto LABEL_101;
    }
    v11 = phkResult;
    if ( phkResult )
    {
      LastError = GetLastError();
      RegCloseKey(v11);
      SetLastError(LastError);
    }
    phkResult = 0LL;
    v12 = RegOpenKeyExW(hKey, Name, 0, 0x20019u, &phkResult);
    if ( v12 )
    {
      v5 = sub_1800CA660(retaddr, 3626LL, "avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", v12);
      goto LABEL_99;
    }
    if ( !v51 )
      RpcRevertToSelf();
    v13 = RegQueryInfoKeyW(
            phkResult,
            0LL,
            0LL,
            0LL,
            0LL,
            0LL,
            0LL,
            &cValues,
            &cbMaxValueNameLen,
            &cbMaxValueLen,
            0LL,
            0LL);
    if ( v13 )
    {
      v5 = sub_1800CA660(retaddr, 3633LL, "avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", v13);
      goto LABEL_101;
    }
    v14 = 2LL * ++cbMaxValueNameLen;
    if ( !is_mul_ok(cbMaxValueNameLen, 2uLL) )
      v14 = -1LL;
    v15 = (WCHAR *)sub_18006A1B0(v14, &unk_18019F848);
    if ( !v15 )
    {
      v5 = -2147024882;
      sub_18004BD84(retaddr, 3638LL, "avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", 2147942414LL);
      goto LABEL_101;
    }
    v16 = sub_18006A1B0(cbMaxValueLen, &unk_18019F848);
    if ( !v16 )
      break;
    v17 = 0;
    v56 = 0;
    if ( cValues )
    {
      while ( 1 )
      {
        cchName = cbMaxValueNameLen;
        cbData = cbMaxValueLen;
        v18 = RegEnumValueW(phkResult, v17, v15, &cchName, 0LL, 0LL, (LPBYTE)v16, &cbData);
        if ( v18 == 259 )
        {
LABEL_28:
          v7 = v50;
          goto LABEL_29;
        }
        if ( v18 )
          break;
        v19 = sub_18006A18C(56LL, &unk_18019F848);
        if ( !v19 )
        {
          v5 = -2147024882;
          sub_18004BD84(retaddr, 3654LL, "avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", 2147942414LL);
          goto LABEL_93;
        }
        *(_QWORD *)(v19 + 48) = *(_QWORD *)(v1 + 56);
        *(_DWORD *)(v19 + 16) = o__wtoi(v15);
        *(GUID *)v19 = pclsid;
        *(_OWORD *)(v19 + 24) = *(_OWORD *)v16;
        *(_QWORD *)(v19 + 40) = *(_QWORD *)(v16 + 16);
        switch ( *(_WORD *)(v19 + 24) )
        {
          case 8:
            v44 = SysAllocString((const OLECHAR *)(v16 + *(_QWORD *)(v19 + 32)));
            *(_QWORD *)(v19 + 32) = v44;
            if ( !v44 )
            {
              v38 = 3735LL;
              goto LABEL_70;
            }
            break;
          case 0x1E:
            v39 = v16 + *(_QWORD *)(v19 + 32);
            v40 = sub_1800D8A9C(v39, v20, &v62);
            v5 = v40;
            if ( v40 < 0 )
            {
              v37 = (unsigned int)v40;
              v38 = 3743LL;
              goto LABEL_72;
            }
            v41 = CoTaskMemAlloc(v62);
            if ( !v41 )
            {
              v38 = 3746LL;
LABEL_70:
              v5 = -2147024882;
LABEL_71:
              v37 = v5;
              goto LABEL_72;
            }
            v42 = v62;
            *(_QWORD *)(v19 + 32) = v41;
            v43 = sub_180044D3C(0LL, v42, v39);
            v5 = v43;
            if ( v43 < 0 )
            {
              v37 = (unsigned int)v43;
              v38 = 3749LL;
              goto LABEL_72;
            }
            break;
          case 0x1F:
            v32 = v16 + *(_QWORD *)(v19 + 32);
            v33 = sub_1800D8AF8(v32, 0x7FFFFFFFLL, &cb);
            v5 = v33;
            if ( v33 < 0 )
            {
              v37 = (unsigned int)v33;
              v38 = 3719LL;
LABEL_72:
              sub_18004BD84(retaddr, v38, "avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", v37);
              goto LABEL_73;
            }
            v34 = CoTaskMemAlloc(cb);
            if ( !v34 )
            {
              v38 = 3722LL;
              goto LABEL_70;
            }
            v35 = cb;
            *(_QWORD *)(v19 + 32) = v34;
            v36 = sub_180061BA0(0LL, v35, v32);
            v5 = v36;
            if ( v36 < 0 )
            {
              v37 = (unsigned int)v36;
              v38 = 3725LL;
              goto LABEL_72;
            }
            break;
          case 0x41:
          case 0x46:
            v31 = (char *)CoTaskMemAlloc(*(unsigned int *)(v19 + 32));
            if ( !v31 )
            {
              v38 = 3669LL;
              goto LABEL_70;
            }
            *(_QWORD *)(v19 + 40) = v31;
            memcpy(0LL, &v31[v16], *(unsigned int *)(v19 + 32));
            break;
          case 0x2004:
            v21 = ((unsigned __int64)cbData - 24) >> 2;
            if ( (((_BYTE)cbData - 24) & 3) != 0 )
            {
              v5 = -2147024809;
              v38 = 3691LL;
              goto LABEL_71;
            }
            v22 = *(_QWORD *)(v19 + 32);
            rgsabound.lLbound = 0;
            v59 = v16 + v22;
            rgsabound.cElements = ((unsigned __int64)cbData - 24) >> 2;
            v23 = SafeArrayCreate(4u, 1u, &rgsabound);
            v58 = v23;
            v24 = v23;
            if ( !v23 )
            {
              v5 = -2147024882;
LABEL_81:
              v46 = 3695LL;
LABEL_82:
              v45 = v5;
LABEL_83:
              sub_18004BD84(retaddr, v46, "avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", v45);
              sub_18005151C(&v58);
LABEL_73:
              sub_18006A148(v19, 56LL);
              goto LABEL_93;
            }
            v5 = SafeArrayLock(v23);
            if ( (v5 & 0x80000000) != 0 )
              goto LABEL_81;
            v55 = 0;
            if ( v21 )
            {
              v25 = v59;
              while ( 1 )
              {
                v65 = v25 + 4;
                if ( v25 + 4 < v25 )
                  break;
                v26 = sub_180052524(v25 + 4, v16, &v64);
                v5 = v26;
                if ( v26 < 0 )
                {
                  v45 = (unsigned int)v26;
                  v46 = 3702LL;
                  goto LABEL_83;
                }
                if ( v64 > cbData )
                {
                  v5 = -2147024809;
                  v46 = 3704LL;
                  goto LABEL_82;
                }
                LODWORD(v59) = *v28;
                v29 = sub_180050FD0(&v58, v27, &v59);
                v5 = v29;
                if ( v29 < 0 )
                {
                  v45 = (unsigned int)v29;
                  v46 = 3707LL;
                  goto LABEL_83;
                }
                v25 = v65;
                if ( (unsigned int)++v55 >= v21 )
                  goto LABEL_50;
              }
              v5 = -2147024362;
              v46 = 3700LL;
              goto LABEL_82;
            }
LABEL_50:
            SafeArrayUnlock(v24);
            v58 = 0LL;
            *(_QWORD *)(v19 + 32) = v24;
            sub_18005151C(&v58);
            v1 = v66;
            break;
        }
        v17 = v56 + 1;
        *(_QWORD *)(v1 + 56) = v19;
        v56 = v17;
        if ( v17 >= cValues )
          goto LABEL_28;
      }
      v5 = sub_1800CA660(retaddr, 3651LL, "avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", v18);
      goto LABEL_93;
    }
LABEL_29:
    sub_18006A148(v16, 1LL);
    sub_18006A148(v15, 2LL);
    if ( phkResult )
      RegCloseKey(phkResult);
    v50 = ++v7;
    cchName = 100;
    v8 = RegEnumKeyExW(hKey, v7, Name, &cchName, 0LL, 0LL, 0LL, 0LL);
    if ( v8 == 259 )
    {
      v6 = lpCriticalSection;
      goto LABEL_33;
    }
  }
  v5 = -2147024882;
  sub_18004BD84(retaddr, 3641LL, "avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", 2147942414LL);
LABEL_93:
  if ( v16 )
    sub_18006A148(v16, 1LL);
  sub_18006A148(v15, 2LL);
LABEL_101:
  if ( phkResult )
    RegCloseKey(phkResult);
LABEL_105:
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
LABEL_36:
  if ( hKey )
    RegCloseKey(hKey);
  return v5;
}
