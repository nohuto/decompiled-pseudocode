/*
 * XREFs of PiCreateDriverSwDeviceCallback @ 0x140807FD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringPrintf @ 0x1403BEBCC (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403D3ED0 (_wcsicmp.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     McTemplateK0zzd_EtwWriteTransfer @ 0x1405614A4 (McTemplateK0zzd_EtwWriteTransfer.c)
 *     PnpGenerateDeviceIdsHash @ 0x140680864 (PnpGenerateDeviceIdsHash.c)
 *     RtlHashUnicodeString @ 0x140680AE0 (RtlHashUnicodeString.c)
 *     RtlpQueryRegistryValues @ 0x14069B3C0 (RtlpQueryRegistryValues.c)
 *     IopGetRegistryValue @ 0x1406C18D4 (IopGetRegistryValue.c)
 *     _CmGetDeviceRegProp @ 0x1406C9884 (_CmGetDeviceRegProp.c)
 *     _PnpGetGenericStoreProperty @ 0x1406D13D0 (_PnpGetGenericStoreProperty.c)
 *     RtlGUIDFromString @ 0x1406D1AA0 (RtlGUIDFromString.c)
 *     _SysCtxRegOpenKey @ 0x1406D4350 (_SysCtxRegOpenKey.c)
 *     RtlPrefixUnicodeString @ 0x1406D5A70 (RtlPrefixUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x140747D00 (RtlCreateUnicodeString.c)
 *     ExpAllocateStringRoutine @ 0x140777DB0 (ExpAllocateStringRoutine.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     PiSwStartCreate @ 0x140806E88 (PiSwStartCreate.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x140864664 (_PnpGetGenericStorePropertyKeys.c)
 *     PipMakeGloballyUniqueId @ 0x14086E9D0 (PipMakeGloballyUniqueId.c)
 *     PnpCompareMultiSz @ 0x140969650 (PnpCompareMultiSz.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCreateDriverSwDeviceCallback(__int64 a1, __int64 a2, const WCHAR *a3, _DWORD *a4)
{
  __int64 v5; // rcx
  _DWORD *v6; // rbx
  const wchar_t *v7; // r14
  ULONG v8; // r15d
  wchar_t *v9; // r13
  void *v10; // rsi
  void *Pool2; // r12
  int RegistryValues; // edi
  wchar_t *Buffer; // rax
  __int64 v14; // r14
  __int64 v15; // rbx
  NTSTATUS RegistryValue; // eax
  unsigned int v17; // r15d
  int GloballyUniqueId; // eax
  __int64 v19; // rcx
  PVOID v20; // rdi
  __int64 v21; // r14
  __int64 v22; // rsi
  _DWORD *v23; // r14
  PVOID *v24; // rbx
  PVOID *v25; // r14
  __int64 v26; // r8
  HANDLE v27; // rcx
  ULONG v29; // r15d
  wchar_t *v30; // r12
  int *v31; // rbx
  unsigned int v32; // r15d
  PCWCH *v33; // r13
  unsigned int i; // esi
  int v35; // r9d
  const wchar_t *v36; // rbx
  __int64 v37; // rax
  unsigned int v38; // ebx
  unsigned int v39; // eax
  char *v40; // rax
  char *v41; // rbx
  unsigned int v42; // eax
  void *v43; // rcx
  __int64 v44; // rax
  PVOID *v45; // rbx
  unsigned int v46; // [rsp+70h] [rbp-90h] BYREF
  _DWORD *v47; // [rsp+78h] [rbp-88h]
  PCWSTR SourceString; // [rsp+80h] [rbp-80h]
  _DWORD *v49; // [rsp+88h] [rbp-78h] BYREF
  ULONG HashValue; // [rsp+90h] [rbp-70h] BYREF
  ULONG v51; // [rsp+94h] [rbp-6Ch] BYREF
  int v52; // [rsp+98h] [rbp-68h] BYREF
  wchar_t *Str1; // [rsp+A0h] [rbp-60h]
  HANDLE Handle; // [rsp+A8h] [rbp-58h] BYREF
  int v55; // [rsp+B0h] [rbp-50h]
  int v56; // [rsp+B4h] [rbp-4Ch] BYREF
  ULONG v57; // [rsp+B8h] [rbp-48h]
  unsigned int v58; // [rsp+BCh] [rbp-44h]
  PVOID v59; // [rsp+C8h] [rbp-38h]
  int *v60; // [rsp+D0h] [rbp-30h]
  UNICODE_STRING UnicodeString; // [rsp+D8h] [rbp-28h] BYREF
  UNICODE_STRING v62; // [rsp+E8h] [rbp-18h] BYREF
  UNICODE_STRING GuidString; // [rsp+F8h] [rbp-8h] BYREF
  PVOID P; // [rsp+108h] [rbp+8h] BYREF
  void *v65; // [rsp+110h] [rbp+10h]
  UNICODE_STRING String2; // [rsp+118h] [rbp+18h] BYREF
  UNICODE_STRING String1; // [rsp+128h] [rbp+28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+138h] [rbp+38h] BYREF
  UNICODE_STRING v69; // [rsp+148h] [rbp+48h] BYREF
  UNICODE_STRING v70; // [rsp+158h] [rbp+58h] BYREF
  _DWORD v71[2]; // [rsp+168h] [rbp+68h] BYREF
  __int64 v72; // [rsp+170h] [rbp+70h]
  __int64 v73; // [rsp+178h] [rbp+78h]
  _QWORD v74[2]; // [rsp+180h] [rbp+80h] BYREF
  GUID Guid; // [rsp+190h] [rbp+90h] BYREF
  _QWORD v76[50]; // [rsp+1A0h] [rbp+A0h] BYREF

  v72 = a1;
  SourceString = a3;
  v56 = 1;
  v5 = 0LL;
  v6 = a4;
  v47 = a4;
  v7 = a3;
  Handle = 0LL;
  v8 = 0;
  v52 = 0;
  v9 = 0LL;
  v57 = 0;
  v10 = 0LL;
  v51 = 0;
  Pool2 = 0LL;
  HashValue = 0;
  Str1 = 0LL;
  v55 = 0;
  v49 = 0LL;
  v73 = 0LL;
  v58 = 0;
  P = 0LL;
  v65 = 0LL;
  v59 = 0LL;
  v46 = 0;
  UnicodeString = 0LL;
  v62 = 0LL;
  GuidString = 0LL;
  Guid = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  String2 = 0LL;
  String1 = 0LL;
  DestinationString = 0LL;
  if ( a1 )
    v5 = *(_QWORD *)(a1 + 224);
  RegistryValues = SysCtxRegOpenKey(v5, a2, (__int64)a3, 0, 0x20019u, (__int64)&Handle);
  if ( RegistryValues >= 0 )
  {
    memset(v76, 0, 0x188uLL);
    LODWORD(v76[25]) = 0x4000000;
    LODWORD(v76[1]) = 304;
    LODWORD(v76[4]) = 117440512;
    v76[2] = L"HardwareIds";
    LODWORD(v76[8]) = 304;
    v76[3] = &UnicodeString;
    LODWORD(v76[11]) = 117440512;
    v76[9] = L"CompatibleIds";
    LODWORD(v76[15]) = 288;
    v76[10] = &v62;
    LODWORD(v76[18]) = 0x1000000;
    v76[16] = L"ContainerId";
    v76[17] = &GuidString;
    v76[23] = L"Capabilities";
    v76[24] = &v52;
    v76[30] = L"Description";
    v76[31] = &v69;
    v76[37] = L"LocationInfo";
    LODWORD(v76[22]) = 288;
    LODWORD(v76[29]) = 288;
    LODWORD(v76[32]) = 0x1000000;
    LODWORD(v76[36]) = 288;
    LODWORD(v76[39]) = 0x1000000;
    v76[38] = &v70;
    RegistryValues = RtlpQueryRegistryValues(3221225472LL, (const WCHAR *)Handle, v76, 0LL);
    if ( RegistryValues >= 0 )
    {
      if ( UnicodeString.Length <= 2u && UnicodeString.Buffer )
        RtlFreeUnicodeString(&UnicodeString);
      if ( v62.Length <= 2u && v62.Buffer )
        RtlFreeUnicodeString(&v62);
      Buffer = GuidString.Buffer;
      if ( !GuidString.Buffer )
        goto LABEL_8;
      if ( GuidString.Length < 2u )
      {
        RtlFreeUnicodeString(&GuidString);
        Buffer = GuidString.Buffer;
      }
      if ( !Buffer || RtlGUIDFromString(&GuidString, &Guid) < 0 )
LABEL_8:
        Guid = 0LL;
      if ( v69.Buffer && v69.Length < 2u )
        RtlFreeUnicodeString(&v69);
      if ( v70.Buffer && v70.Length < 2u )
        RtlFreeUnicodeString(&v70);
      if ( !UnicodeString.Buffer && !v62.Buffer )
      {
        RegistryValues = -1073741637;
        goto LABEL_37;
      }
      v14 = *(_QWORD *)v6;
      v15 = -1LL;
      v74[0] = UnicodeString.Buffer;
      v74[1] = v62.Buffer;
      v71[0] = 2;
      v71[1] = 3;
      if ( (PVOID)v14 != IopRootDeviceNode )
      {
        do
        {
          if ( *(PDRIVER_OBJECT *)(*(_QWORD *)(v14 + 32) + 8LL) == PiSwDeviceDriverObject )
          {
            RtlInitUnicodeString(&String1, L"SWD\\");
            if ( RtlPrefixUnicodeString(&String1, (PCUNICODE_STRING)(v14 + 40), 1u) )
            {
              RtlInitUnicodeString(
                &String2,
                (PCWSTR)(*(_QWORD *)(v14 + 48) + 2 * ((unsigned __int64)String1.Length >> 1)));
              RtlInitUnicodeString(&String1, L"DRIVERENUM");
              if ( RtlPrefixUnicodeString(&String1, &String2, 1u) )
              {
                if ( String2.Buffer[(unsigned __int64)String1.Length >> 1] == 92 )
                {
                  if ( !v8 )
                  {
                    RegistryValues = PnpGenerateDeviceIdsHash((__int64)UnicodeString.Buffer, (__int64)v62.Buffer, &v51);
                    if ( RegistryValues < 0 )
                      goto LABEL_34;
                    if ( (v52 & 8) != 0 )
                    {
                      v29 = v51;
                    }
                    else
                    {
                      RtlInitUnicodeString(&String2, L"SWD\\GenericRaw");
                      RegistryValues = RtlHashUnicodeString(&String2, 1u, 0, &HashValue);
                      if ( RegistryValues < 0 )
                        goto LABEL_34;
                      v29 = HashValue + v51;
                    }
                    RtlInitUnicodeString(&String2, L"SWD\\Generic");
                    RegistryValues = RtlHashUnicodeString(&String2, 1u, 0, &HashValue);
                    if ( RegistryValues < 0 )
                      goto LABEL_101;
                    v8 = HashValue + v29;
                    v57 = v8;
                    v51 = v8;
                  }
                  if ( *(_DWORD *)(v14 + 684) == v8 )
                  {
                    if ( !v9 )
                    {
                      v55 = 2048;
                      Str1 = (wchar_t *)ExAllocatePool2(256LL, 2048LL, 538996816LL);
                      v9 = Str1;
                      if ( !Str1 )
                      {
                        RegistryValues = -1073741670;
LABEL_101:
                        v10 = v49;
                        v7 = SourceString;
                        goto LABEL_36;
                      }
                    }
                    v30 = Str1;
                    v31 = v71;
                    v32 = v55;
                    v33 = (PCWCH *)v74;
                    v60 = v71;
                    for ( i = 0; i < 2; ++i )
                    {
                      v35 = *v31;
                      v46 = v32;
                      if ( (int)CmGetDeviceRegProp(
                                  *(__int64 *)&PiPnpRtlCtx,
                                  *(_QWORD *)(v14 + 48),
                                  0LL,
                                  v35,
                                  (__int64)&v56,
                                  (__int64)v30,
                                  (__int64)&v46,
                                  0) < 0
                        || v56 != 7
                        || v46 < 2 )
                      {
                        *v30 = 0;
                      }
                      if ( i == 1 )
                      {
                        v36 = v30;
                        if ( *v30 )
                        {
                          while ( wcsicmp(v36, L"SWD\\GenericRaw") && wcsicmp(v36, L"SWD\\Generic") )
                          {
                            v37 = -1LL;
                            do
                              ++v37;
                            while ( v36[v37] );
                            v36 += v37 + 1;
                            if ( !*v36 )
                              goto LABEL_93;
                          }
                          *v36 = 0;
                        }
LABEL_93:
                        v31 = v60;
                      }
                      if ( *v33 )
                      {
                        if ( !(unsigned __int8)PnpCompareMultiSz(*v33, v30, 1u) )
                          break;
                      }
                      else if ( *v30 )
                      {
                        break;
                      }
                      ++v31;
                      ++v33;
                      v60 = v31;
                    }
                    Pool2 = v65;
                    v8 = v57;
                    v9 = Str1;
                    if ( i >= 2 )
                    {
                      RegistryValues = -1073740028;
                      goto LABEL_101;
                    }
                  }
                }
              }
            }
          }
          v14 = *(_QWORD *)(v14 + 16);
        }
        while ( (PVOID)v14 != IopRootDeviceNode );
        Str1 = v9;
        v15 = -1LL;
      }
      RegistryValue = IopGetRegistryValue(Handle, L"Security", 0, &v49);
      v10 = v49;
      v17 = 0;
      RegistryValues = RegistryValue;
      if ( RegistryValue >= 0 )
      {
        if ( v49[1] == 3 )
        {
          v58 = v49[3];
          if ( v58 >= 0x28 )
          {
            v73 = (__int64)v49 + (unsigned int)v49[2];
LABEL_19:
            if ( *(PVOID *)v47 == IopRootDeviceNode )
            {
              v7 = SourceString;
              if ( RtlCreateUnicodeString(&DestinationString, SourceString) )
              {
LABEL_27:
                v21 = v72;
                RegistryValues = PnpGetGenericStorePropertyKeys(v72, Handle, 0LL, 0LL, 0LL, 0, &v46);
                if ( RegistryValues == -1073741789 )
                {
                  v38 = 0;
                  while ( 1 )
                  {
                    v39 = v46;
                    if ( v46 <= v38 )
                      break;
                    if ( Pool2 )
                    {
                      ExFreePoolWithTag(Pool2, 0);
                      v39 = v46;
                    }
                    v38 = v39;
                    Pool2 = (void *)ExAllocatePool2(256LL, 20LL * v39, 538996816LL);
                    if ( !Pool2 )
                    {
                      RegistryValues = -1073741670;
                      goto LABEL_35;
                    }
                    RegistryValues = PnpGetGenericStorePropertyKeys(v21, Handle, 0LL, 0LL, Pool2, v38, &v46);
                    if ( RegistryValues != -1073741789 )
                      goto LABEL_28;
                  }
                  RegistryValues = -1073741595;
                }
                else
                {
LABEL_28:
                  v22 = v46;
                  v23 = Pool2;
                  if ( RegistryValues < 0 )
                    goto LABEL_31;
                  if ( v46 )
                  {
                    v40 = (char *)ExAllocatePool2(256LL, 48LL * v46, 538996816LL);
                    v59 = v40;
                    if ( !v40 )
                    {
                      RegistryValues = -1073741670;
                      goto LABEL_31;
                    }
                    v41 = v40 + 32;
                    while ( 2 )
                    {
                      *((_OWORD *)v41 - 2) = *(_OWORD *)v23;
                      *((_DWORD *)v41 - 4) = v23[4];
                      *((_DWORD *)v41 - 3) = 0;
                      while ( 1 )
                      {
                        RegistryValues = PnpGetGenericStoreProperty(
                                           v72,
                                           (__int64)Handle,
                                           0LL,
                                           (__int64)Pool2 + 20 * v17,
                                           v41,
                                           *((_QWORD *)v41 + 1),
                                           *((_DWORD *)v41 + 1),
                                           &v46);
                        v42 = v46;
                        if ( RegistryValues != -1073741789 )
                          break;
                        if ( v46 <= *((_DWORD *)v41 + 1) )
                        {
                          RegistryValues = -1073741595;
                          goto LABEL_131;
                        }
                        v43 = (void *)*((_QWORD *)v41 + 1);
                        if ( v43 )
                        {
                          ExFreePoolWithTag(v43, 0);
                          v42 = v46;
                        }
                        *((_DWORD *)v41 + 1) = v42;
                        v44 = ExAllocatePool2(256LL, v46, 538996816LL);
                        *((_QWORD *)v41 + 1) = v44;
                        if ( !v44 )
                        {
                          RegistryValues = -1073741670;
LABEL_131:
                          v25 = (PVOID *)v59;
                          goto LABEL_132;
                        }
                      }
                      *((_DWORD *)v41 + 1) = v46;
                      if ( RegistryValues < 0 )
                        goto LABEL_131;
                      ++v17;
                      v41 += 48;
                      v23 += 5;
                      if ( v17 < (unsigned int)v22 )
                        continue;
                      break;
                    }
                  }
                  v24 = (PVOID *)v59;
                  RegistryValues = PiSwStartCreate(
                                     L"DRIVERENUM",
                                     *(const wchar_t **)(*(_QWORD *)v47 + 48LL),
                                     DestinationString.Buffer,
                                     (__int64)UnicodeString.Buffer,
                                     (__int64)v62.Buffer,
                                     (unsigned __int64)&Guid & -(__int64)(GuidString.Buffer != 0LL),
                                     v52,
                                     (__int64)v69.Buffer,
                                     (__int64)v70.Buffer,
                                     v73,
                                     v58,
                                     (__int64)v59,
                                     v22);
                  v25 = v24;
                  if ( v24 )
                  {
LABEL_132:
                    if ( (_DWORD)v22 )
                    {
                      v45 = v25 + 5;
                      do
                      {
                        if ( *v45 )
                          ExFreePoolWithTag(*v45, 0);
                        v45 += 6;
                        --v22;
                      }
                      while ( v22 );
                    }
                    ExFreePoolWithTag(v25, 0);
                  }
                }
LABEL_31:
                if ( Pool2 )
                  ExFreePoolWithTag(Pool2, 0);
                v9 = Str1;
LABEL_34:
                v10 = v49;
                goto LABEL_35;
              }
            }
            else
            {
              GloballyUniqueId = PipMakeGloballyUniqueId(*(_QWORD *)(*(_QWORD *)v47 + 32LL), 0LL, &P);
              v7 = SourceString;
              RegistryValues = GloballyUniqueId;
              if ( GloballyUniqueId < 0 )
                goto LABEL_36;
              v19 = -1LL;
              do
                ++v19;
              while ( SourceString[v19] );
              v20 = P;
              do
                ++v15;
              while ( *((_WORD *)P + v15) );
              DestinationString.MaximumLength = 2 * (v15 + v19 + 2);
              DestinationString.Buffer = (wchar_t *)ExpAllocateStringRoutine((unsigned __int16)(2 * (v15 + v19) + 4));
              if ( DestinationString.Buffer )
              {
                RegistryValues = RtlUnicodeStringPrintf(&DestinationString, L"%ws&%ws", v7, v20);
                if ( RegistryValues >= 0 )
                  goto LABEL_27;
LABEL_36:
                v6 = v47;
                goto LABEL_37;
              }
            }
            RegistryValues = -1073741670;
            goto LABEL_36;
          }
        }
        RegistryValues = -1073741823;
      }
      else if ( RegistryValue == -1073741772 )
      {
        goto LABEL_19;
      }
LABEL_35:
      v7 = SourceString;
      goto LABEL_36;
    }
  }
LABEL_37:
  RtlFreeUnicodeString(&DestinationString);
  if ( P )
    ExFreePoolWithTag(P, 0);
  RtlFreeUnicodeString(&UnicodeString);
  RtlFreeUnicodeString(&v62);
  RtlFreeUnicodeString(&GuidString);
  RtlFreeUnicodeString(&v69);
  RtlFreeUnicodeString(&v70);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  v27 = Handle;
  if ( Handle )
    ZwClose(Handle);
  if ( RegistryValues < 0 && (byte_140C0E10C & 1) != 0 )
    McTemplateK0zzd_EtwWriteTransfer(
      (__int64)v27,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_CreateDriverSwDevice_Failure,
      v26,
      *(const wchar_t **)(*(_QWORD *)v6 + 48LL),
      v7,
      RegistryValues);
  if ( (int)v6[2] >= 0 )
    v6[2] = RegistryValues;
  return 0LL;
}
