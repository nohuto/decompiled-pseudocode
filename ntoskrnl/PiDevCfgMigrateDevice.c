/*
 * XREFs of PiDevCfgMigrateDevice @ 0x1408758B8
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x14087384C (PiDevCfgConfigureDevice.c)
 *     PiDevCfgMigrateRootDevice @ 0x14095BC74 (PiDevCfgMigrateRootDevice.c)
 *     PpDevCfgProcessDeviceReset @ 0x14096044C (PpDevCfgProcessDeviceReset.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140246490 (RtlInitUnicodeStringEx.c)
 *     PnpValidateRegistryDword @ 0x1403C0C9C (PnpValidateRegistryDword.c)
 *     _wcsicmp @ 0x1403D3ED0 (_wcsicmp.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x140413EB0 (ZwDeleteValueKey.c)
 *     IopGetRegistryValue @ 0x1406C18D4 (IopGetRegistryValue.c)
 *     _CmIsRootEnumeratedDevice @ 0x1406CD550 (_CmIsRootEnumeratedDevice.c)
 *     _PnpGetObjectProperty @ 0x1406D0FB4 (_PnpGetObjectProperty.c)
 *     _SysCtxRegOpenKey @ 0x1406D4350 (_SysCtxRegOpenKey.c)
 *     PiDevCfgSetObjectProperty @ 0x140874858 (PiDevCfgSetObjectProperty.c)
 *     PiDevCfgSetDeviceRegProp @ 0x140875718 (PiDevCfgSetDeviceRegProp.c)
 *     PiDevCfgConfigureDeviceDriverConfiguration @ 0x1408757F4 (PiDevCfgConfigureDeviceDriverConfiguration.c)
 *     PiDevCfgInitMigrationContext @ 0x140875994 (PiDevCfgInitMigrationContext.c)
 *     PiDevCfgFreeMigrationContext @ 0x140877348 (PiDevCfgFreeMigrationContext.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x14095A044 (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14095AB1C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgFreeDeviceMigrationNode @ 0x14095B4F0 (PiDevCfgFreeDeviceMigrationNode.c)
 *     PiDevCfgLogDeviceMigrated @ 0x14095B958 (PiDevCfgLogDeviceMigrated.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x14095BE90 (PiDevCfgQueryDeviceMigrationNode.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgMigrateDevice(int a1, __int64 a2, unsigned __int16 *a3, __int64 a4, _DWORD *a5, _DWORD *a6)
{
  int v8; // esi
  int v9; // r13d
  int inited; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // ebx
  BOOLEAN IsRootEnumeratedDevice; // al
  __int64 v17; // rcx
  int v18; // eax
  _WORD *v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rax
  int DeviceMigrationNode; // eax
  int v23; // ecx
  unsigned int *v24; // rcx
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  const wchar_t *v28; // rsi
  void *v29; // r14
  const wchar_t **v30; // rdx
  int v31; // [rsp+30h] [rbp-71h]
  int v32; // [rsp+30h] [rbp-71h]
  PVOID P; // [rsp+68h] [rbp-39h] BYREF
  int v34; // [rsp+70h] [rbp-31h] BYREF
  int v35; // [rsp+74h] [rbp-2Dh] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-21h] BYREF
  __int128 v38; // [rsp+90h] [rbp-11h] BYREF
  __int128 v39; // [rsp+A0h] [rbp-1h]
  __int128 v40; // [rsp+B0h] [rbp+Fh] BYREF
  __int64 v41; // [rsp+C0h] [rbp+1Fh]

  v41 = 0LL;
  P = 0LL;
  Handle = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v8 = a1;
  v35 = 0;
  v9 = 0;
  v34 = 0;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  if ( a5 )
    *a5 = 0;
  if ( a6 )
    *a6 = 0;
  inited = PiDevCfgInitMigrationContext(a3, a4, &v38);
  v13 = 0LL;
  v14 = inited;
  if ( inited < 0 )
    goto LABEL_8;
  if ( !(_QWORD)v38 )
  {
    v14 = 0;
    goto LABEL_8;
  }
  if ( (unsigned int)PnpGetObjectProperty(
                       *(__int64 *)&PiPnpRtlCtx,
                       *(_QWORD *)(a2 + 8),
                       1LL,
                       *(_QWORD *)(a2 + 16),
                       0LL,
                       (__int64)DEVPKEY_Device_MigrationRank,
                       (__int64)&v35,
                       0LL,
                       0,
                       (__int64)&v34,
                       0) == -1073741789
    && v35 == 9
    && v34 == 8 )
  {
    goto LABEL_51;
  }
  if ( *((_QWORD *)&v38 + 1) )
  {
    v14 = PiDevCfgQueryDeviceMigrationNode(&v38, *(_QWORD *)(a2 + 8), &P);
    if ( v14 < 0 )
    {
      P = 0LL;
      if ( v14 == -1073741772 )
        v14 = 0;
    }
    else
    {
      *((_QWORD *)P + 23) = 0LL;
    }
  }
  if ( !P )
  {
    IsRootEnumeratedDevice = CmIsRootEnumeratedDevice(*(PCWSTR *)(a2 + 8));
    v13 = 0LL;
    if ( IsRootEnumeratedDevice )
      goto LABEL_51;
    if ( !*(_QWORD *)(a2 + 64) )
      goto LABEL_46;
    v11 = v40;
    if ( !(_QWORD)v40 )
    {
      v17 = 0LL;
      if ( *(_QWORD *)&PiPnpRtlCtx )
        v17 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL);
      v18 = SysCtxRegOpenKey(v17, v38, (__int64)L"Locations", 0, 0x20019u, (__int64)&v40);
      v13 = 0LL;
      if ( v18 == -1073741772 )
      {
        *(_QWORD *)&v40 = 0LL;
LABEL_46:
        if ( P )
          goto LABEL_52;
        if ( !*((_QWORD *)&v39 + 1) )
          goto LABEL_77;
        DeviceMigrationNode = PiDevCfgFindDeviceMigrationNode(&v38, a2, *((_QWORD *)&v39 + 1), 69665LL, &P);
        v14 = DeviceMigrationNode;
        if ( DeviceMigrationNode < 0 )
        {
          P = 0LL;
          if ( DeviceMigrationNode == -1073741275 )
            v14 = 0;
        }
LABEL_51:
        if ( P )
          goto LABEL_52;
LABEL_77:
        PiDevCfgClearDeviceMigrationNode(&v38, *(_QWORD *)(a2 + 8));
        goto LABEL_8;
      }
      if ( v18 < 0 )
      {
LABEL_38:
        v14 = v18;
        goto LABEL_8;
      }
      v11 = v40;
      if ( !(_QWORD)v40 )
        goto LABEL_46;
    }
    v19 = *(_WORD **)(a2 + 64);
    if ( *v19 )
    {
      while ( 1 )
      {
        v20 = 0LL;
        if ( *(_QWORD *)&PiPnpRtlCtx )
          v20 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL);
        v18 = SysCtxRegOpenKey(v20, v11, (__int64)v19, 0, 0x20019u, (__int64)&Handle);
        if ( v18 == -1073741772 )
        {
          v13 = 0LL;
        }
        else
        {
          if ( v18 < 0 )
            goto LABEL_38;
          v14 = PiDevCfgFindDeviceMigrationNode(&v38, a2, Handle, 70145LL, &P);
          ZwClose(Handle);
          v13 = 0LL;
          if ( v14 >= 0 )
            goto LABEL_45;
          P = 0LL;
          if ( v14 == -1073741275 )
            v14 = 0;
        }
        v21 = -1LL;
        do
          ++v21;
        while ( v19[v21] );
        v19 += v21 + 1;
        if ( !*v19 )
          break;
        v11 = v40;
      }
    }
    if ( v14 < 0 )
      goto LABEL_8;
LABEL_45:
    v8 = a1;
    goto LABEL_46;
  }
LABEL_52:
  v23 = *((_DWORD *)P + 4);
  if ( (v23 & 1) != 0 )
  {
    v14 = -1073740007;
  }
  else if ( (v23 & 2) != 0 )
  {
    v14 = -1073740719;
  }
  else
  {
    if ( IopGetRegistryValue(*((HANDLE *)P + 5), L"ConfigFlags", 0, &DestinationString) >= 0 )
    {
      if ( PnpValidateRegistryDword(*(__int64 *)&DestinationString.Length) )
        v9 = *(unsigned int *)((char *)v24 + v24[2]);
      ExFreePoolWithTag(v24, 0);
    }
    v25 = *(_QWORD *)(a2 + 16);
    v26 = *(_QWORD *)(a2 + 8);
    v34 = 0;
    if ( (unsigned int)PnpGetObjectProperty(
                         *(__int64 *)&PiPnpRtlCtx,
                         v26,
                         1LL,
                         v25,
                         0LL,
                         (__int64)&DEVPKEY_Device_ClassGuid,
                         (__int64)&v35,
                         0LL,
                         0,
                         (__int64)&v34,
                         0) != -1073741789
      || v35 != 13
      || v34 != 16 )
    {
      if ( a3 )
        PiDevCfgSetDeviceRegProp(v27, a2, 9u, 1, *((_QWORD *)a3 + 1), *a3 + 2);
      else
        PiDevCfgSetObjectProperty(
          *(__int64 *)&PiPnpRtlCtx,
          (_DWORD *)a2,
          *(const WCHAR **)(a2 + 8),
          1,
          *(_QWORD *)(a2 + 16),
          v31,
          (__int64)&DEVPKEY_Device_ClassGuid,
          13,
          (const wchar_t *)P + 40,
          0x10u,
          0);
    }
    v14 = PiDevCfgConfigureDeviceDriverConfiguration(v8, a2, *((_QWORD *)P + 5), -1, 0LL, 0LL, (__int64)a5, (__int64)a6);
    if ( v14 >= 0 )
    {
      if ( a5 )
        *a5 |= v9;
      v28 = (const wchar_t *)P;
      if ( *((_QWORD *)P + 23) )
      {
        v29 = *(void **)(a2 + 16);
        DestinationString = 0LL;
        if ( RtlInitUnicodeStringEx(&DestinationString, L"ParentIdPrefix") >= 0 )
        {
          ZwDeleteValueKey(v29, &DestinationString);
          v28 = (const wchar_t *)P;
        }
      }
      PiDevCfgSetObjectProperty(
        *(__int64 *)&PiPnpRtlCtx,
        (_DWORD *)a2,
        *(const WCHAR **)(a2 + 8),
        1,
        *(_QWORD *)(a2 + 16),
        v32,
        (__int64)DEVPKEY_Device_MigrationRank,
        9,
        v28 + 92,
        8u,
        0);
    }
  }
  PiDevCfgLogDeviceMigrated(a2, P, (unsigned int)v14);
  v30 = (const wchar_t **)P;
  if ( (*((_DWORD *)P + 4) & 1) == 0 )
  {
    PiDevCfgClearDeviceMigrationNode(&v38, *((_QWORD *)P + 4));
    v30 = (const wchar_t **)P;
  }
  if ( !v30 || wcsicmp(*(const wchar_t **)(a2 + 8), v30[4]) )
    goto LABEL_77;
LABEL_8:
  if ( P )
    PiDevCfgFreeDeviceMigrationNode(P);
  PiDevCfgFreeMigrationContext(&v38, v11, v12, v13);
  return (unsigned int)v14;
}
