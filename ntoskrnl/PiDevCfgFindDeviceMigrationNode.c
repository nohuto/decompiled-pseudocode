/*
 * XREFs of PiDevCfgFindDeviceMigrationNode @ 0x14095AB1C
 * Callers:
 *     PiDevCfgMigrateDevice @ 0x1408758B8 (PiDevCfgMigrateDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     PnpValidateRegistryDword @ 0x1403C0C9C (PnpValidateRegistryDword.c)
 *     PnpMultiSzContainsString @ 0x1403C22EC (PnpMultiSzContainsString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403D3ED0 (_wcsicmp.c)
 *     ZwEnumerateValueKey @ 0x140412570 (ZwEnumerateValueKey.c)
 *     ZwSetValueKey @ 0x140412F10 (ZwSetValueKey.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PiDevCfgGetMigrationDeviceIdScore @ 0x14055FA3C (PiDevCfgGetMigrationDeviceIdScore.c)
 *     IopGetRegistryValue @ 0x1406C18D4 (IopGetRegistryValue.c)
 *     _CmIsRootEnumeratedDevice @ 0x1406CD550 (_CmIsRootEnumeratedDevice.c)
 *     RtlGUIDFromString @ 0x1406D1AA0 (RtlGUIDFromString.c)
 *     NtQueryKey @ 0x1406E6630 (NtQueryKey.c)
 *     RtlCompareUnicodeString @ 0x1406EA3B0 (RtlCompareUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     PiDevCfgQueryObjectProperties @ 0x14086AC20 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgGetDriverPackageId @ 0x1408791D8 (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x14095A044 (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDevCfgFreeDeviceMigrationNode @ 0x14095B4F0 (PiDevCfgFreeDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x14095BE90 (PiDevCfgQueryDeviceMigrationNode.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgFindDeviceMigrationNode(__int64 *a1, __int64 a2, void *a3, int a4, PVOID **a5)
{
  ULONG v5; // r13d
  int v7; // r14d
  PVOID *v8; // rsi
  int v9; // ebx
  ULONG Length; // r12d
  __int64 v11; // r15
  const UNICODE_STRING *v12; // rcx
  ULONG i; // edx
  __int16 v14; // dx
  int v15; // eax
  wchar_t **v16; // rdi
  PVOID *v17; // rax
  __int64 v18; // r13
  const wchar_t *v19; // rdx
  int v20; // r14d
  wchar_t **v21; // rbx
  __int64 v22; // r13
  __int64 v23; // rdi
  __int64 *v24; // r15
  int *v25; // r12
  __int16 MigrationDeviceIdScore; // ax
  __int64 v27; // rdi
  bool v28; // cl
  bool v29; // al
  const WCHAR *v30; // rbx
  __int64 v31; // r15
  __int64 v32; // rax
  int v33; // r12d
  void *v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  void *v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  wchar_t *Buffer; // rax
  __int64 *v41; // rbx
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rcx
  UNICODE_STRING *v45; // rax
  __int64 v46; // rax
  unsigned __int64 v47; // rcx
  bool v48; // zf
  PVOID *v49; // rax
  PVOID v50; // rcx
  PVOID *v51; // rdi
  unsigned int *v52; // rcx
  PVOID *v53; // rcx
  PVOID **v54; // rax
  PVOID v55; // rcx
  __int64 v56; // rax
  int ObjectProperties; // [rsp+30h] [rbp-D0h]
  int v59; // [rsp+34h] [rbp-CCh]
  ULONG ResultLength; // [rsp+3Ch] [rbp-C4h] BYREF
  PVOID P; // [rsp+40h] [rbp-C0h] BYREF
  PVOID *p_P; // [rsp+48h] [rbp-B8h]
  __int64 Pool2; // [rsp+50h] [rbp-B0h] BYREF
  int v65; // [rsp+58h] [rbp-A8h] BYREF
  int v66; // [rsp+5Ch] [rbp-A4h] BYREF
  ULONG v67; // [rsp+60h] [rbp-A0h]
  ULONG v68; // [rsp+64h] [rbp-9Ch]
  int Data; // [rsp+68h] [rbp-98h] BYREF
  __int64 *v70; // [rsp+70h] [rbp-90h]
  __int64 v71; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING String2; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING v74; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v75; // [rsp+B0h] [rbp-50h]
  UNICODE_STRING v76; // [rsp+B8h] [rbp-48h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+C8h] [rbp-38h] BYREF
  HANDLE KeyHandle; // [rsp+D8h] [rbp-28h]
  UNICODE_STRING ValueName; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v80[10]; // [rsp+F0h] [rbp-10h] BYREF
  PVOID **v81; // [rsp+140h] [rbp+40h]
  GUID Guid; // [rsp+148h] [rbp+48h] BYREF
  __int128 v83; // [rsp+158h] [rbp+58h] BYREF
  __int128 v84; // [rsp+168h] [rbp+68h]
  __int64 v85; // [rsp+178h] [rbp+78h]

  v5 = 0;
  v70 = a1;
  v81 = a5;
  v75 = a2;
  v85 = 0LL;
  KeyHandle = a3;
  p_P = &P;
  v71 = 0LL;
  P = &P;
  v7 = a4;
  v59 = 0;
  v66 = 0;
  v8 = 0LL;
  v65 = 0;
  v83 = 0LL;
  *(_QWORD *)&String2.Length = 0LL;
  v84 = 0LL;
  String2.Buffer = 0LL;
  Guid = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&v76.Length = 0LL;
  v76.Buffer = 0LL;
  *(_QWORD *)&v74.Length = 0LL;
  v74.Buffer = 0LL;
  ValueName = 0LL;
  Data = 0;
  ResultLength = 0;
  v9 = NtQueryKey(a3, 4u, (unsigned __int64)&v83, 0x28u, &ResultLength);
  if ( v9 >= 0 )
  {
    if ( !DWORD1(v84) )
      goto LABEL_146;
    Length = HIDWORD(v84) + 2 * (DWORD2(v84) + 13);
    v67 = Length;
    Pool2 = ExAllocatePool2(256LL, Length, 1667526736LL);
    v11 = Pool2;
    if ( !Pool2 )
    {
LABEL_4:
      v9 = -1073741670;
      goto LABEL_147;
    }
    v12 = (const UNICODE_STRING *)a1[5];
    if ( !v12 || (v9 = RtlGUIDFromString(v12, &Guid), v9 >= 0) )
    {
      for ( i = 0; ; i = v5 )
      {
        v68 = v5;
        ObjectProperties = ZwEnumerateValueKey(KeyHandle, i, KeyValueFullInformation, (PVOID)v11, Length, &ResultLength);
        v9 = ObjectProperties;
        if ( ObjectProperties == -2147483622 )
        {
          v9 = 0;
          ObjectProperties = 0;
LABEL_118:
          ExFreePoolWithTag((PVOID)v11, 0);
          if ( v9 < 0 )
            goto LABEL_147;
          v49 = (PVOID *)P;
          if ( P == &P )
            goto LABEL_146;
          while ( 2 )
          {
            v50 = v49[23];
            if ( v50 != (PVOID)-1LL )
            {
              if ( !v8 || v8[23] > v50 )
                goto LABEL_128;
              if ( v8[23] != v50 )
                goto LABEL_129;
              if ( PnpSetupInProgress && *((_DWORD *)v49 + 44) && !*((_DWORD *)v8 + 44) )
              {
LABEL_128:
                v8 = v49;
              }
              else
              {
                *((_DWORD *)v8 + 4) |= 2u;
                *((_DWORD *)v49 + 4) |= 2u;
              }
            }
LABEL_129:
            v49 = (PVOID *)*v49;
            if ( v49 == &P )
            {
              if ( v8 )
              {
                if ( ((_DWORD)v8[2] & 2) != 0 )
                {
                  v51 = (PVOID *)P;
                  Data = 1;
                  if ( P != &P )
                  {
                    do
                    {
                      if ( ((_DWORD)v51[2] & 2) != 0 && v51[23] == v8[23] )
                      {
                        *(_DWORD *)&ValueName.Length = 1310738;
                        ValueName.Buffer = L"Duplicate";
                        ZwSetValueKey(v51[5], &ValueName, 0, 4u, &Data, 4u);
                      }
                      v51 = (PVOID *)*v51;
                    }
                    while ( v51 != &P );
                    v9 = ObjectProperties;
                  }
                }
                else if ( IopGetRegistryValue(v8[5], L"Duplicate", 0, &Pool2) >= 0 )
                {
                  if ( PnpValidateRegistryDword(Pool2) && *(unsigned int *)((char *)v52 + v52[2]) )
                    *((_DWORD *)v8 + 4) |= 2u;
                  ExFreePoolWithTag(v52, 0);
                }
                v53 = (PVOID *)*v8;
                if ( *((PVOID **)*v8 + 1) == v8 )
                {
                  v54 = (PVOID **)v8[1];
                  if ( *v54 == v8 )
                  {
                    *v54 = v53;
                    v53[1] = v54;
                    *v81 = v8;
                    goto LABEL_147;
                  }
                }
LABEL_151:
                __fastfail(3u);
              }
LABEL_146:
              v9 = -1073741275;
              goto LABEL_147;
            }
            continue;
          }
        }
        if ( ObjectProperties == -2147483643 )
        {
          ExFreePoolWithTag((PVOID)v11, 0);
          Length = ResultLength + 2;
          v67 = ResultLength + 2;
          Pool2 = ExAllocatePool2(256LL, ResultLength + 2, 1667526736LL);
          v11 = Pool2;
          if ( !Pool2 )
            goto LABEL_4;
          --v5;
          goto LABEL_18;
        }
        if ( ObjectProperties < 0 )
          goto LABEL_118;
        if ( PnpValidateRegistryDword(v11) )
          v7 = *(_DWORD *)(*(unsigned int *)(v11 + 8) + v11);
        *(_WORD *)(v11 + 2 * ((unsigned __int64)*(unsigned int *)(v11 + 16) >> 1) + 20) = v14;
        if ( CmIsRootEnumeratedDevice((PCWSTR)(v11 + 20)) )
          goto LABEL_17;
        v15 = PiDevCfgQueryDeviceMigrationNode(v70, v11 + 20, &v71);
        ObjectProperties = v15;
        v9 = v15;
        if ( v15 == -1073741772 )
        {
          v71 = 0LL;
          PiDevCfgClearDeviceMigrationNode(v70, (const WCHAR *)(v11 + 20));
LABEL_17:
          v7 = a4;
          goto LABEL_18;
        }
        if ( v15 < 0 )
          goto LABEL_118;
        v16 = (wchar_t **)v71;
        *(_DWORD *)(v71 + 180) = v7;
        v17 = p_P;
        if ( *p_P != &P )
          goto LABEL_151;
        v18 = v75;
        *v16 = (wchar_t *)&P;
        v16[1] = (wchar_t *)v17;
        *v17 = v16;
        v19 = *(const wchar_t **)(v18 + 8);
        p_P = (PVOID *)v16;
        v20 = 0;
        if ( !wcsicmp(v16[4], v19) )
          v20 = 0x10000000;
        if ( (*((_DWORD *)v16 + 45) & 0x10000000) != 0 && (v20 & 0x10000000) == 0 )
          *((_DWORD *)v16 + 4) |= 1u;
        v21 = v16 + 7;
        v22 = v18 - (_QWORD)v16;
        v23 = 2LL;
        v24 = &qword_140A74F48;
        v25 = &v66;
        do
        {
          MigrationDeviceIdScore = PiDevCfgGetMigrationDeviceIdScore(*v21, *(wchar_t **)((char *)v21 + v22 - 24));
          *(_WORD *)v25 = MigrationDeviceIdScore;
          if ( MigrationDeviceIdScore != -1 )
            v20 |= *(_DWORD *)v24;
          v21 += 2;
          v25 = (int *)((char *)v25 + 2);
          v24 = (__int64 *)((char *)v24 + 4);
          --v23;
        }
        while ( v23 );
        v27 = v71;
        if ( (*(_DWORD *)(v71 + 180) & 0x10000) == 0 )
          break;
        if ( (v20 & 0x10000) != 0 )
        {
          v28 = (v20 & 0x11000) == 0;
          v29 = (*(_DWORD *)(v71 + 180) & 0x1000) != 0;
          goto LABEL_35;
        }
LABEL_36:
        *(_DWORD *)(v71 + 16) |= 1u;
LABEL_37:
        v30 = *(const WCHAR **)(v27 + 144);
        v31 = v75;
        if ( v30 && *(_QWORD *)(v75 + 64) )
        {
          while ( 1 )
          {
            if ( !*v30 )
              goto LABEL_47;
            if ( PnpMultiSzContainsString(*(PCWSTR *)(v31 + 64), v30) )
              break;
            v32 = -1LL;
            do
              ++v32;
            while ( v30[v32] );
            v30 += v32 + 1;
          }
          v20 |= 0x200u;
          *(_QWORD *)(v27 + 152) = v30;
        }
LABEL_47:
        if ( (*(_DWORD *)(v27 + 180) & 0x200) != 0 && (v20 & 0x200) == 0 )
          *(_DWORD *)(v27 + 16) |= 1u;
        v33 = v59;
        if ( *(_QWORD *)(v27 + 128) )
        {
          if ( (v59 & 0x100) == 0 )
          {
            memset(v80, 0, sizeof(v80));
            v34 = *(void **)(v31 + 16);
            v35 = *(_QWORD *)(v31 + 8);
            v80[0] = &DEVPKEY_Device_LocationInfo;
            v80[2] = &DestinationString;
            LODWORD(v80[1]) = 18;
            HIDWORD(v80[3]) = 6;
            ObjectProperties = PiDevCfgQueryObjectProperties(v36, v35, 1u, v34, (__int64)v80, 1u);
            v9 = ObjectProperties;
            if ( ObjectProperties < 0 )
              goto LABEL_117;
            if ( SLODWORD(v80[4]) < 0 )
              RtlInitUnicodeString(&DestinationString, 0LL);
            v33 = v59 | 0x100;
            v59 |= 0x100u;
          }
          if ( DestinationString.Buffer
            && !RtlCompareUnicodeString((PCUNICODE_STRING)(v27 + 120), &DestinationString, 1u) )
          {
            v20 |= 0x100u;
          }
        }
        if ( (v20 & 0x300) == 0 && (*(_DWORD *)(v27 + 180) & 0x100) != 0 )
          *(_DWORD *)(v27 + 16) |= 1u;
        if ( (v33 & 0x30) == 0 )
        {
          memset(v80, 0, sizeof(v80));
          v37 = *(void **)(v31 + 16);
          v38 = *(_QWORD *)(v31 + 8);
          v80[0] = &DEVPKEY_Device_Capabilities;
          v80[2] = &v65;
          v80[5] = &DEVPKEY_Device_BusReportedDeviceDesc;
          v80[7] = &String2;
          LODWORD(v80[1]) = 7;
          LODWORD(v80[3]) = 4;
          LODWORD(v80[6]) = 18;
          HIDWORD(v80[8]) = 6;
          ObjectProperties = PiDevCfgQueryObjectProperties(v39, v38, 1u, v37, (__int64)v80, 2u);
          v9 = ObjectProperties;
          if ( ObjectProperties < 0 )
            goto LABEL_117;
          if ( SLODWORD(v80[9]) < 0 )
            RtlInitUnicodeString(&String2, 0LL);
          v33 |= 0x30u;
          v59 = v33;
        }
        if ( ((*(_BYTE *)(v27 + 96) ^ (unsigned __int8)v65) & 0x10) != 0 )
        {
          if ( (*(_DWORD *)(v27 + 180) & 0x10) != 0 || (v65 & 0x10) != 0 )
            *(_DWORD *)(v27 + 16) |= 1u;
        }
        else
        {
          v20 |= 0x10u;
        }
        if ( !*(_QWORD *)(v27 + 112) )
          goto LABEL_73;
        Buffer = String2.Buffer;
        if ( !String2.Buffer )
          goto LABEL_74;
        if ( RtlCompareUnicodeString((PCUNICODE_STRING)(v27 + 104), &String2, 1u) )
        {
LABEL_73:
          Buffer = String2.Buffer;
LABEL_74:
          if ( *(_QWORD *)(v27 + 112) || Buffer )
            goto LABEL_77;
        }
        v20 |= 0x20u;
LABEL_77:
        if ( (*(_BYTE *)(v27 + 180) & 0x20) != 0 && (v20 & 0x20) == 0 )
          *(_DWORD *)(v27 + 16) |= 1u;
        if ( *(_QWORD *)(v27 + 168) )
        {
          if ( (v33 & 2) == 0 )
          {
            v41 = v70;
            v42 = v70[6];
            if ( v42 )
            {
              v43 = *(_QWORD *)(v42 + 8);
              if ( v43 )
              {
                if ( (int)PiDevCfgGetDriverPackageId(v43, (__int64)&UnicodeString) >= 0 )
                {
                  memset(v80, 0, sizeof(v80));
                  v80[0] = &DEVPKEY_DriverPackage_OriginalInfName;
                  v80[2] = &v74;
                  LODWORD(v80[1]) = 18;
                  HIDWORD(v80[3]) = 6;
                  ObjectProperties = PiDevCfgQueryObjectProperties(
                                       v44,
                                       (__int64)UnicodeString.Buffer,
                                       8u,
                                       0LL,
                                       (__int64)v80,
                                       1u);
                  v9 = ObjectProperties;
                  if ( ObjectProperties < 0 )
                  {
LABEL_117:
                    v11 = Pool2;
                    goto LABEL_118;
                  }
                  if ( SLODWORD(v80[4]) < 0 )
                    RtlInitUnicodeString(&v74, 0LL);
                  v41 = v70;
                }
                v45 = &v74;
                if ( !v74.Buffer )
                  v45 = (UNICODE_STRING *)v41[6];
                v76 = *v45;
              }
            }
            v59 = v33 | 2;
          }
          if ( v76.Buffer && !RtlCompareUnicodeString((PCUNICODE_STRING)(v27 + 160), &v76, 1u) )
            v20 |= 2u;
        }
        if ( (*(_BYTE *)(v27 + 180) & 2) != 0 && (v20 & 2) == 0 )
          *(_DWORD *)(v27 + 16) |= 1u;
        v46 = *(_QWORD *)(v27 + 80) - *(_QWORD *)&Guid.Data1;
        if ( !v46 )
          v46 = *(_QWORD *)(v27 + 88) - *(_QWORD *)Guid.Data4;
        if ( v46 )
        {
          if ( (*(_DWORD *)(v27 + 180) & 1) != 0 )
            *(_DWORD *)(v27 + 16) |= 1u;
        }
        else
        {
          v20 |= 1u;
        }
        v47 = (HIWORD(v66) | ((unsigned __int64)(unsigned __int16)v66 << 16)) << 16;
        *(_QWORD *)(v27 + 184) = v47;
        if ( (v20 & 0x10000000) == 0 )
        {
          v47 |= 0xF000000000000000uLL;
          *(_QWORD *)(v27 + 184) = v47;
        }
        if ( (v20 & 0x200) == 0 )
        {
          v47 |= 0xF000uLL;
          *(_QWORD *)(v27 + 184) = v47;
        }
        if ( (v20 & 0x100) == 0 )
        {
          v47 |= 0x100uLL;
          *(_QWORD *)(v27 + 184) = v47;
        }
        if ( (v20 & 0x20) == 0 )
        {
          v47 |= 0x20uLL;
          *(_QWORD *)(v27 + 184) = v47;
        }
        if ( (v20 & 0x10) == 0 )
        {
          v47 |= 0x10uLL;
          *(_QWORD *)(v27 + 184) = v47;
        }
        if ( (v20 & 2) == 0 )
        {
          v47 |= 2uLL;
          *(_QWORD *)(v27 + 184) = v47;
        }
        v11 = Pool2;
        v48 = (v20 & 1) == 0;
        v7 = a4;
        Length = v67;
        v5 = v68;
        if ( v48 )
          *(_QWORD *)(v27 + 184) = v47 | 1;
LABEL_18:
        ++v5;
      }
      v28 = (*(_DWORD *)(v71 + 180) & 0x1000) != 0;
      v29 = (v20 & 0x1000) == 0;
LABEL_35:
      if ( !v28 || !v29 )
        goto LABEL_37;
      goto LABEL_36;
    }
  }
LABEL_147:
  while ( 1 )
  {
    v55 = P;
    if ( P == &P )
      break;
    if ( *((PVOID **)P + 1) != &P )
      goto LABEL_151;
    v56 = *(_QWORD *)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
      goto LABEL_151;
    P = *(PVOID *)P;
    *(_QWORD *)(v56 + 8) = &P;
    PiDevCfgFreeDeviceMigrationNode(v55);
  }
  RtlFreeUnicodeString(&String2);
  RtlFreeUnicodeString(&DestinationString);
  RtlFreeUnicodeString(&UnicodeString);
  RtlFreeUnicodeString(&v74);
  return (unsigned int)v9;
}
