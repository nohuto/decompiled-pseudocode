/*
 * XREFs of sub_1800661E0 @ 0x1800661E0
 * Callers:
 *     sub_180065FC8 @ 0x180065FC8 (sub_180065FC8.c)
 * Callees:
 *     sub_180008EAC @ 0x180008EAC (sub_180008EAC.c)
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_180055E9C @ 0x180055E9C (sub_180055E9C.c)
 *     sub_1800571F8 @ 0x1800571F8 (sub_1800571F8.c)
 *     sub_180060060 @ 0x180060060 (sub_180060060.c)
 *     sub_18006644C @ 0x18006644C (sub_18006644C.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800C28E0 @ 0x1800C28E0 (sub_1800C28E0.c)
 *     sub_1800F3AD4 @ 0x1800F3AD4 (sub_1800F3AD4.c)
 *     sub_1800F3B8C @ 0x1800F3B8C (sub_1800F3B8C.c)
 *     sub_1800F4CBC @ 0x1800F4CBC (sub_1800F4CBC.c)
 *     sub_180138B20 @ 0x180138B20 (sub_180138B20.c)
 *     sub_180138FF0 @ 0x180138FF0 (sub_180138FF0.c)
 *     sub_18013909C @ 0x18013909C (sub_18013909C.c)
 *     sub_180139164 @ 0x180139164 (sub_180139164.c)
 *     sub_180139250 @ 0x180139250 (sub_180139250.c)
 *     sub_18013933C @ 0x18013933C (sub_18013933C.c)
 *     sub_18013A0F0 @ 0x18013A0F0 (sub_18013A0F0.c)
 *     sub_18013A194 @ 0x18013A194 (sub_18013A194.c)
 *     sub_18013A4D4 @ 0x18013A4D4 (sub_18013A4D4.c)
 *     sub_18013A6A4 @ 0x18013A6A4 (sub_18013A6A4.c)
 *     sub_18013A77C @ 0x18013A77C (sub_18013A77C.c)
 *     sub_18013AA94 @ 0x18013AA94 (sub_18013AA94.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_1800661E0(_QWORD *a1)
{
  _QWORD *v2; // rax
  __int64 DeviceInfoList; // rax
  __int64 v4; // rdx
  __int64 v5; // rdi
  unsigned int v6; // r12d
  __int64 v7; // rdx
  HKEY v8; // rbx
  int v9; // edi
  __int64 *v10; // r8
  __int64 *v11; // rbx
  DWORD i; // r14d
  WCHAR *v14; // rcx
  WCHAR *v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rax
  bool v18; // si
  unsigned __int64 v19; // r8
  __int64 v20; // rdx
  __int64 *v21; // rsi
  __int64 *v22; // rdx
  int v23; // ecx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 **v26; // rax
  __int64 *j; // rax
  __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // r14
  __int64 v33; // rdi
  _QWORD *v34; // rcx
  __int64 v35; // rdx
  __int64 *k; // rcx
  DWORD cchValueName; // [rsp+40h] [rbp-818h] BYREF
  DWORD Type; // [rsp+44h] [rbp-814h] BYREF
  __int128 v39; // [rsp+48h] [rbp-810h] BYREF
  DWORD cbData; // [rsp+58h] [rbp-800h] BYREF
  HKEY hKey; // [rsp+60h] [rbp-7F8h] BYREF
  __int64 v42; // [rsp+68h] [rbp-7F0h] BYREF
  __int64 v43; // [rsp+70h] [rbp-7E8h]
  __int64 v44; // [rsp+78h] [rbp-7E0h]
  int v45; // [rsp+80h] [rbp-7D8h]
  __int128 v46; // [rsp+88h] [rbp-7D0h] BYREF
  __int64 v47; // [rsp+98h] [rbp-7C0h]
  __int128 v48; // [rsp+A0h] [rbp-7B8h]
  int v49; // [rsp+B0h] [rbp-7A8h]
  HKEY v50; // [rsp+B8h] [rbp-7A0h]
  _BYTE v51[16]; // [rsp+C0h] [rbp-798h] BYREF
  _OWORD v52[2]; // [rsp+D0h] [rbp-788h] BYREF
  _BYTE v53[80]; // [rsp+F0h] [rbp-768h] BYREF
  _BYTE v54[8]; // [rsp+140h] [rbp-718h] BYREF
  __int64 v55; // [rsp+148h] [rbp-710h]
  __int128 v56; // [rsp+190h] [rbp-6C8h] BYREF
  __int128 v57; // [rsp+1A0h] [rbp-6B8h]
  __int128 v58; // [rsp+1B0h] [rbp-6A8h] BYREF
  __int128 v59; // [rsp+1C0h] [rbp-698h]
  __int128 v60; // [rsp+1D0h] [rbp-688h]
  WCHAR Data[264]; // [rsp+1E0h] [rbp-678h] BYREF
  WCHAR ValueName[264]; // [rsp+3F0h] [rbp-468h] BYREF
  WCHAR Dst[264]; // [rsp+600h] [rbp-258h] BYREF

  v39 = 0LL;
  v2 = sub_180008EAC(0x60uLL);
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  *(_QWORD *)&v39 = v2;
  DeviceInfoList = DevObjCreateDeviceInfoList(0LL, 0LL, 0LL, 0LL, 0LL);
  v5 = DeviceInfoList;
  if ( DeviceInfoList != -1 )
  {
    if ( (unsigned int)DevObjGetClassDevs(DeviceInfoList, &unk_18015D5F0, 0LL, 0LL, 0LL, 0LL) )
    {
      v6 = 0;
      v58 = 0LL;
      v59 = 0LL;
      v60 = 0LL;
      LODWORD(v58) = 48;
      while ( 1 )
      {
        v7 = v6++;
        if ( !(unsigned int)DevObjEnumDeviceInfo(v5, v7, &v58) )
          goto LABEL_11;
        v8 = (HKEY)DevObjOpenDevRegKey(v5, &v58, 1LL);
        v50 = v8;
        if ( v8 != HKEY_CURRENT_USER_LOCAL_SETTINGS|0x7FFFFFF8LL )
          break;
LABEL_9:
        v58 = 0LL;
        v59 = 0LL;
        v60 = 0LL;
        LODWORD(v58) = 48;
        if ( v8 )
          RegCloseKey(v8);
      }
      hKey = 0LL;
      if ( RegOpenKeyExW(v8, L"SYSTEM\\MultiMedia\\DeviceCapability\\ResourceSettings\\XMLConfig", 0, 1u, &hKey) )
      {
LABEL_7:
        if ( hKey )
          RegCloseKey(hKey);
        goto LABEL_9;
      }
      for ( i = 0; ; ++i )
      {
        memset(ValueName, 0, 0x208uLL);
        memset(Data, 0, 0x208uLL);
        cchValueName = 260;
        cbData = 520;
        if ( RegEnumValueW(hKey, i, ValueName, &cchValueName, 0LL, &Type, (LPBYTE)Data, &cbData) )
          goto LABEL_7;
        if ( Type == 2 )
        {
          memset(Dst, 0, 0x208uLL);
          if ( ExpandEnvironmentStringsW(Data, Dst, 0x104u) )
          {
            v14 = Data;
            v15 = Dst;
            v16 = 4LL;
            do
            {
              *(_OWORD *)v14 = *(_OWORD *)v15;
              *((_OWORD *)v14 + 1) = *((_OWORD *)v15 + 1);
              *((_OWORD *)v14 + 2) = *((_OWORD *)v15 + 2);
              *((_OWORD *)v14 + 3) = *((_OWORD *)v15 + 3);
              *((_OWORD *)v14 + 4) = *((_OWORD *)v15 + 4);
              *((_OWORD *)v14 + 5) = *((_OWORD *)v15 + 5);
              *((_OWORD *)v14 + 6) = *((_OWORD *)v15 + 6);
              v14 += 64;
              *((_OWORD *)v14 - 1) = *((_OWORD *)v15 + 7);
              v15 += 64;
              --v16;
            }
            while ( v16 );
            *(_QWORD *)v14 = *(_QWORD *)v15;
          }
        }
        else if ( Type != 1 )
        {
          continue;
        }
        sub_180060060((__int64 *)&v56, ValueName);
        v17 = (_QWORD *)sub_18013A77C(&v39, v51, &v56);
        v18 = *v17 == (_QWORD)v39;
        if ( *((_QWORD *)&v57 + 1) >= 8uLL )
          sub_1800472E0(v56, 2LL * *((_QWORD *)&v57 + 1) + 2);
        if ( v18 )
        {
          sub_180060060((__int64 *)&v56, ValueName);
          sub_180138B20(&v39, &v42, &v56);
          v19 = -1LL;
          do
            ++v19;
          while ( Data[v19] );
          sub_1800571F8((__int64 *)(v42 + 64), Data, v19);
          if ( *((_QWORD *)&v57 + 1) >= 8uLL )
            sub_1800472E0(v56, 2LL * *((_QWORD *)&v57 + 1) + 2);
        }
      }
    }
LABEL_11:
    DevObjDestroyDeviceInfoList(v5);
  }
  v9 = 0;
  v10 = (__int64 *)v39;
  v11 = *(__int64 **)v39;
  while ( v9 >= 0 && v11 != v10 )
  {
    cchValueName = 31;
    sub_180055E9C((__int64)v54, v4, 0.75, 0.25, 1074790400);
    v46 = 0LL;
    v47 = 0LL;
    v48 = 0LL;
    v49 = 10;
    sub_180055E9C((__int64)v53, v20, 0.75, 0.25, 1074790400);
    v42 = 0LL;
    v43 = 0LL;
    v44 = 0LL;
    v45 = 0;
    v21 = v11 + 8;
    v56 = *((_OWORD *)v11 + 4);
    v57 = *((_OWORD *)v11 + 5);
    v52[0] = *((_OWORD *)v11 + 2);
    v52[1] = *((_OWORD *)v11 + 3);
    sub_1800F3B8C(L"Parsing XML %s, %s", v52, &v56);
    v22 = v11 + 8;
    if ( (unsigned __int64)v11[11] >= 8 )
      v22 = (__int64 *)*v21;
    if ( (int)sub_18013AA94(a1 + 29, v22, &cchValueName, v54, &v46, v53, &v42) < 0 )
    {
      v58 = *(_OWORD *)v21;
      v59 = *((_OWORD *)v11 + 5);
      sub_1800F3AD4(L"Parsing XML %s failed", &v58);
LABEL_36:
      sub_1800F3B8C(L"Cleaning resource consumption information due to unrecoverable error");
      sub_180138FF0(v24, v53);
      sub_18013909C(v25, &v42);
      goto LABEL_37;
    }
    if ( (int)sub_18013A6A4(v23, (int)a1 + 8, (unsigned int)v54, (int)a1 + 128, (__int64)v53) < 0 )
      goto LABEL_36;
    v29 = v55 + a1[2];
    if ( v29 > 0xF )
      sub_1800F3AD4(L"Number of resource types is %d which is larger than max %d", v29, 15LL);
    v9 = sub_180139250(v28, v54, a1 + 1);
    if ( v9 < 0 )
      goto LABEL_36;
    v9 = sub_18013933C(v30, &v46, a1 + 10);
    if ( v9 < 0 )
      goto LABEL_36;
    v9 = sub_180139164(v31, v53, a1 + 16);
    if ( v9 < 0 )
      goto LABEL_36;
    v32 = a1[26];
    v33 = v43;
    if ( !(unsigned __int8)sub_18013A4D4(a1 + 25, v43 + v32) )
      sub_1800B8610(2147942414LL);
    v34 = (_QWORD *)(a1[25] + 8 * v32);
    if ( v33 )
    {
      v35 = v42 - (_QWORD)v34;
      do
      {
        *v34 = *(_QWORD *)((char *)v34 + v35);
        ++v34;
        --v33;
      }
      while ( v33 );
    }
    v9 = 0;
LABEL_37:
    sub_1800C28E0(&v42);
    sub_18013A0F0(v53);
    sub_1800F4CBC(&v46);
    sub_18013A194(v54);
    v26 = (__int64 **)v11[2];
    if ( *((_BYTE *)v26 + 25) )
    {
      for ( j = (__int64 *)v11[1]; !*((_BYTE *)j + 25) && v11 == (__int64 *)j[2]; j = (__int64 *)j[1] )
        v11 = j;
      v11 = j;
    }
    else
    {
      v11 = (__int64 *)v11[2];
      for ( k = *v26; !*((_BYTE *)k + 25); k = (__int64 *)*k )
        v11 = k;
    }
    v10 = (__int64 *)v39;
  }
  sub_18006644C(&v39, &v39, v10[1]);
  sub_1800472E0(v39, 0x60uLL);
  return (unsigned int)v9;
}
