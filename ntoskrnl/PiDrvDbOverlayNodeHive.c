/*
 * XREFs of PiDrvDbOverlayNodeHive @ 0x14096D7B8
 * Callers:
 *     PiDrvDbSetupNodeHive @ 0x14081C5C8 (PiDrvDbSetupNodeHive.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403D3ED0 (_wcsicmp.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     _PnpCtxRegCreateKey @ 0x140687FD0 (_PnpCtxRegCreateKey.c)
 *     _RegRtlQueryValue @ 0x1406D3E98 (_RegRtlQueryValue.c)
 *     _SysCtxRegOpenKey @ 0x1406D4350 (_SysCtxRegOpenKey.c)
 *     _RegRtlEnumKey @ 0x140868D44 (_RegRtlEnumKey.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14096D218 (PiDrvDbOverlayCopyKeys.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDrvDbOverlayNodeHive(__int64 a1, const wchar_t *a2, __int64 a3)
{
  __int64 v6; // rdi
  int v7; // r8d
  int Key; // ebx
  wchar_t **v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rax
  unsigned int v14; // edi
  int v15; // eax
  int v16; // eax
  char *Pool2; // r14
  ULONG i; // r15d
  int v19; // eax
  int v20; // edi
  int v21; // esi
  HANDLE v22; // r8
  int v24; // [rsp+20h] [rbp-89h]
  int v25; // [rsp+20h] [rbp-89h]
  __int64 v26; // [rsp+40h] [rbp-69h] BYREF
  int v27; // [rsp+48h] [rbp-61h] BYREF
  int v28; // [rsp+4Ch] [rbp-5Dh] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-59h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-51h] BYREF
  HANDLE v31; // [rsp+60h] [rbp-49h] BYREF
  HANDLE v32; // [rsp+68h] [rbp-41h] BYREF
  HANDLE v33; // [rsp+70h] [rbp-39h]
  HANDLE v34; // [rsp+78h] [rbp-31h] BYREF
  _QWORD v35[8]; // [rsp+80h] [rbp-29h] BYREF

  v34 = 0LL;
  memset(v35, 0, sizeof(v35));
  v32 = 0LL;
  v31 = 0LL;
  LODWORD(v6) = 0;
  KeyHandle = 0LL;
  v33 = 0LL;
  Handle = 0LL;
  v27 = 0;
  v28 = 0;
  HIDWORD(v26) = 0;
  if ( wcsicmp(a2, L"SYSTEM") )
  {
    if ( !wcsicmp(a2, L"SOFTWARE") && (*(_DWORD *)(a1 + 492) & 0x20) == 0 )
      goto LABEL_3;
  }
  else
  {
    v7 = *(_DWORD *)(a1 + 492);
    if ( (v7 & 0x10) == 0 )
    {
LABEL_3:
      Key = 0;
      goto LABEL_48;
    }
    v9 = off_140A75E50;
    do
    {
      v10 = (__int64)*v9++;
      v11 = (unsigned int)v6;
      v6 = (unsigned int)(v6 + 1);
      v35[v11] = v10;
    }
    while ( (unsigned int)v6 < 4 );
    if ( (v7 & 0xC0) != 0 )
    {
      v12 = SysCtxRegOpenKey(0LL, a3, (__int64)L"ControlSet001\\Services", 0, 0x20019u, (__int64)&KeyHandle);
      Key = v12;
      if ( v12 == -1073741772 )
      {
        KeyHandle = 0LL;
      }
      else if ( v12 < 0 )
      {
        goto LABEL_48;
      }
    }
    v35[v6] = L"ControlSet001\\Services";
    LODWORD(v6) = v6 + 1;
  }
  v13 = (unsigned int)v6;
  v14 = v6 + 1;
  v35[v13] = L"Setup\\ResolveFilePaths";
  v15 = SysCtxRegOpenKey(
          0LL,
          2147483650LL,
          (__int64)L"System\\CurrentControlSet\\Control\\StateSeparation\\PnP\\DriverHiveOverlays",
          0,
          0x20019u,
          (__int64)&v32);
  Key = v15;
  if ( v15 == -1073741772 )
  {
    v32 = 0LL;
  }
  else
  {
    if ( v15 < 0 )
      goto LABEL_48;
    v16 = SysCtxRegOpenKey(0LL, (__int64)v32, (__int64)a2, 0, 0x20019u, (__int64)&v31);
    Key = v16;
    if ( v16 == -1073741772 )
    {
      v31 = 0LL;
    }
    else if ( v16 < 0 )
    {
      goto LABEL_48;
    }
  }
  Key = SysCtxRegOpenKey(0LL, 2147483650LL, (__int64)a2, 0, 0x2001Fu, (__int64)&v34);
  if ( Key >= 0 )
  {
    Key = PiDrvDbOverlayCopyKeys(a3, 0LL, (__int64)v34, 0LL, v24, (__int64)v35, v14, (__int64)v31);
    if ( Key >= 0 )
    {
      if ( KeyHandle )
      {
        Pool2 = (char *)ExAllocatePool2(256LL, 520LL, 1650749520LL);
        if ( !Pool2 )
        {
          Key = -1073741670;
          goto LABEL_48;
        }
        for ( i = 0; ; ++i )
        {
          LODWORD(v26) = 260;
          v19 = RegRtlEnumKey(KeyHandle, i, Pool2, (unsigned int *)&v26);
          if ( v19 == -2147483622 )
          {
LABEL_47:
            ExFreePoolWithTag(Pool2, 0);
            goto LABEL_48;
          }
          if ( v19 < 0
            || (int)SysCtxRegOpenKey(0LL, (__int64)KeyHandle, (__int64)Pool2, 0, 0x20019u, (__int64)&Handle) < 0 )
          {
            continue;
          }
          LODWORD(v26) = 4;
          if ( (int)RegRtlQueryValue(Handle, L"Type", (_DWORD *)&v26 + 1, &v27, (unsigned int *)&v26) < 0
            || v26 != 0x400000004LL )
          {
            break;
          }
          LODWORD(v26) = 4;
          if ( (int)RegRtlQueryValue(Handle, L"Start", (_DWORD *)&v26 + 1, &v28, (unsigned int *)&v26) < 0
            || v26 != 0x400000004LL )
          {
            v20 = v27;
LABEL_35:
            v28 = 0;
            v21 = 0;
            goto LABEL_36;
          }
          v20 = v27;
          v21 = v28;
LABEL_36:
          ZwClose(Handle);
          if ( !v20 )
            continue;
          if ( (v20 & 0xB) == 0 || v21 == 2 )
          {
            if ( (*(_DWORD *)(a1 + 492) & 0x80u) == 0 )
              continue;
          }
          else if ( (*(_DWORD *)(a1 + 492) & 0x40) == 0 )
          {
            continue;
          }
          v22 = v33;
          if ( !v33 )
          {
            v25 = 131103;
            Key = PnpCtxRegCreateKey(0LL, (__int64)v34);
            if ( Key < 0 )
              goto LABEL_47;
            v22 = v33;
          }
          Key = PiDrvDbOverlayCopyKeys(
                  (__int64)KeyHandle,
                  (__int64)Pool2,
                  (__int64)v22,
                  (__int64)Pool2,
                  v25,
                  0LL,
                  0,
                  0LL);
          if ( Key < 0 )
            goto LABEL_47;
        }
        v20 = 0;
        v27 = 0;
        goto LABEL_35;
      }
    }
  }
LABEL_48:
  if ( v31 )
    ZwClose(v31);
  if ( v32 )
    ZwClose(v32);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v33 )
    ZwClose(v33);
  if ( v34 )
    ZwClose(v34);
  return (unsigned int)Key;
}
