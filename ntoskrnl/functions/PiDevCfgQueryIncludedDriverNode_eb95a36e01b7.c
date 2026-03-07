__int64 __fastcall PiDevCfgQueryIncludedDriverNode(__int64 a1, const wchar_t *a2, const WCHAR *a3, int a4, __int64 *a5)
{
  const WCHAR *v6; // r14
  int v8; // ebx
  unsigned int *v9; // r13
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  const wchar_t *v14; // rdx
  int v15; // eax
  __int64 v16; // rcx
  int DriverPackageId; // eax
  int v18; // eax
  int v19; // eax
  __int64 v20; // rax
  __int64 Pool2; // rax
  __int64 v22; // rsi
  UNICODE_STRING *v23; // rcx
  _QWORD *v24; // rax
  NTSTATUS RegistryValue; // eax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  wchar_t *i; // rdi
  int v31; // ecx
  char v32; // r14
  int DriverConfigurationKeyScope; // eax
  int v34; // ecx
  int v35; // ecx
  __int64 v36; // rax
  HANDLE KeyHandle; // [rsp+40h] [rbp-20h] BYREF
  unsigned int *v38; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+A8h] [rbp+48h] BYREF
  int v41; // [rsp+B8h] [rbp+58h]

  v41 = a4;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  v6 = a2;
  UnicodeString.Buffer = 0LL;
  Handle = 0LL;
  v8 = 0;
  KeyHandle = 0LL;
  v9 = 0LL;
  v38 = 0LL;
  if ( !a2 )
  {
    v14 = *(const wchar_t **)(a1 + 96);
    if ( !v14 || wcsicmp(a3, v14) )
    {
      v15 = PiDevCfgOpenDriverConfiguration(*(void **)(a1 + 16), a3, &KeyHandle);
      v8 = v15;
      if ( v15 == -1073741772 )
      {
        v8 = 0;
      }
      else if ( v15 < 0 )
      {
        goto LABEL_48;
      }
    }
    if ( KeyHandle )
    {
      v6 = *(const WCHAR **)(a1 + 48);
      goto LABEL_19;
    }
    v6 = *(const WCHAR **)(a1 + 344);
    if ( v6 )
    {
      if ( *v6 )
      {
        while ( 1 )
        {
          DriverPackageId = PiDevCfgGetDriverPackageId((__int64)v6, (__int64)&UnicodeString);
          v8 = DriverPackageId;
          if ( DriverPackageId == -1073741772 )
            goto LABEL_38;
          if ( DriverPackageId < 0 )
            goto LABEL_48;
          v18 = PnpOpenObjectRegKey(
                  *(__int64 *)&PiPnpRtlCtx,
                  (__int64)UnicodeString.Buffer,
                  8u,
                  131097,
                  0,
                  (__int64)&Handle);
          v8 = v18;
          if ( v18 == -1073741772 )
            goto LABEL_38;
          if ( v18 < 0 )
            goto LABEL_48;
          v19 = PiDevCfgOpenDriverConfiguration(Handle, a3, &KeyHandle);
          v8 = v19;
          if ( v19 < 0 )
          {
            if ( v19 != -1073741772 )
              goto LABEL_48;
            ZwClose(Handle);
            Handle = 0LL;
            RtlFreeUnicodeString(&UnicodeString);
            v20 = -1LL;
            do
              ++v20;
            while ( v6[v20] );
            v6 += v20 + 1;
            if ( *v6 )
              continue;
          }
          goto LABEL_40;
        }
      }
      if ( v8 < 0 )
        goto LABEL_48;
LABEL_40:
      if ( KeyHandle )
      {
LABEL_41:
        Pool2 = ExAllocatePool2(256LL, 432LL, 1667526736LL);
        v22 = Pool2;
        if ( !Pool2 )
          goto LABEL_42;
        *(_DWORD *)(Pool2 + 184) = 32;
        v23 = (UNICODE_STRING *)(Pool2 + 40);
        v24 = (_QWORD *)(Pool2 + 224);
        v24[1] = v24;
        *v24 = v24;
        *(_QWORD *)(v22 + 216) = v22 + 208;
        *(_QWORD *)(v22 + 208) = v22 + 208;
        *(_QWORD *)(v22 + 376) = v22 + 368;
        *(_QWORD *)(v22 + 368) = v22 + 368;
        if ( RtlCreateUnicodeString(v23, v6)
          && PnpDuplicateUnicodeString(v22 + 56, (__int64)&UnicodeString)
          && RtlCreateUnicodeString((PUNICODE_STRING)(v22 + 88), a3) )
        {
          *(_DWORD *)(v22 + 104) = v41;
          RegistryValue = IopGetRegistryValue(KeyHandle, L"IncludeScope", 0, &v38);
          v9 = v38;
          v8 = RegistryValue;
          if ( RegistryValue == -1073741772 )
          {
            v8 = 0;
LABEL_77:
            *(_QWORD *)(v22 + 16) = Handle;
            *(_QWORD *)(v22 + 32) = KeyHandle;
            Handle = 0LL;
            KeyHandle = 0LL;
            *a5 = v22;
            goto LABEL_46;
          }
          if ( RegistryValue >= 0 )
          {
            if ( !PnpValidateRegistryMultiSz(v38, v27, v28, v29) )
            {
              v8 = -1073741823;
              goto LABEL_45;
            }
            for ( i = (wchar_t *)((char *)v9 + v9[2]); ; i += v36 + 1 )
            {
              if ( !*i )
                goto LABEL_77;
              v31 = *i - 42;
              if ( *i == 42 )
                v31 = i[1];
              if ( !v31 )
              {
                *(_DWORD *)(v22 + 104) = -1;
                goto LABEL_77;
              }
              v32 = 1;
              if ( *i != 43 )
              {
                if ( *i != 45 )
                  goto LABEL_68;
                v32 = 0;
              }
              ++i;
LABEL_68:
              DriverConfigurationKeyScope = PiDevCfgGetDriverConfigurationKeyScope(i);
              v34 = *(_DWORD *)(v22 + 104);
              if ( v32 )
                v35 = DriverConfigurationKeyScope | v34;
              else
                v35 = ~DriverConfigurationKeyScope & v34;
              *(_DWORD *)(v22 + 104) = v35;
              v36 = -1LL;
              do
                ++v36;
              while ( i[v36] );
            }
          }
        }
        else
        {
          v8 = -1073741670;
        }
LABEL_45:
        PiDevCfgFreeDriverNode((char *)v22);
LABEL_46:
        if ( v9 )
          ExFreePoolWithTag(v9, 0);
        goto LABEL_48;
      }
    }
    v8 = -1073740654;
    goto LABEL_50;
  }
  if ( wcsicmp(a2, *(const wchar_t **)(a1 + 48)) )
  {
    v11 = PiDevCfgGetDriverPackageId((__int64)v6, (__int64)&UnicodeString);
    v8 = v11;
    if ( v11 != -1073741772 )
    {
      if ( v11 < 0 )
        goto LABEL_48;
      v12 = PnpOpenObjectRegKey(
              *(__int64 *)&PiPnpRtlCtx,
              (__int64)UnicodeString.Buffer,
              8u,
              131097,
              0,
              (__int64)&Handle);
      v8 = v12;
      if ( v12 != -1073741772 )
      {
        if ( v12 < 0 )
          goto LABEL_48;
        v13 = PiDevCfgOpenDriverConfiguration(Handle, a3, &KeyHandle);
        v8 = v13;
        if ( v13 != -1073741772 )
        {
LABEL_23:
          if ( v13 < 0 )
            goto LABEL_48;
          goto LABEL_41;
        }
LABEL_11:
        v8 = -1073740654;
        goto LABEL_48;
      }
    }
LABEL_38:
    v8 = -1073740655;
    goto LABEL_48;
  }
  v10 = PiDevCfgOpenDriverConfiguration(*(void **)(a1 + 16), a3, &KeyHandle);
  v8 = v10;
  if ( v10 == -1073741772 )
    goto LABEL_11;
  if ( v10 < 0 )
    goto LABEL_48;
LABEL_19:
  if ( PnpDuplicateUnicodeString((__int64)&UnicodeString, a1 + 56) )
  {
    v16 = 0LL;
    if ( *(_QWORD *)&PiPnpRtlCtx )
      v16 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL);
    v13 = SysCtxRegOpenKey(v16, *(_QWORD *)(a1 + 16), 0LL, 0, 0x20019u, (__int64)&Handle);
    v8 = v13;
    goto LABEL_23;
  }
LABEL_42:
  v8 = -1073741670;
LABEL_48:
  if ( KeyHandle )
    ZwClose(KeyHandle);
LABEL_50:
  if ( Handle )
    ZwClose(Handle);
  RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)v8;
}
