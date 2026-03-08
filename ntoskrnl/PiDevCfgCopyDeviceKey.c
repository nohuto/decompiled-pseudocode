/*
 * XREFs of PiDevCfgCopyDeviceKey @ 0x140877A34
 * Callers:
 *     PiDevCfgConfigureDeviceKeyCallback @ 0x1408778D0 (PiDevCfgConfigureDeviceKeyCallback.c)
 *     PiDevCfgCopyDeviceKeys @ 0x140877924 (PiDevCfgCopyDeviceKeys.c)
 *     PiDevCfgConfigureDeviceInterface @ 0x14095A480 (PiDevCfgConfigureDeviceInterface.c)
 *     PiDevCfgResetDeviceKeyCallback @ 0x14095CFB0 (PiDevCfgResetDeviceKeyCallback.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140246490 (RtlInitUnicodeStringEx.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     PnpValidateStringData @ 0x1403C1C24 (PnpValidateStringData.c)
 *     PiDevCfgPushCopyKeyEntry @ 0x1403C2184 (PiDevCfgPushCopyKeyEntry.c)
 *     PiDevCfgParseVariableName @ 0x1403C2244 (PiDevCfgParseVariableName.c)
 *     PnpRegistryValueExists @ 0x1403D0AF8 (PnpRegistryValueExists.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x140412570 (ZwEnumerateValueKey.c)
 *     ZwCreateKey @ 0x1404126B0 (ZwCreateKey.c)
 *     ZwEnumerateKey @ 0x140412950 (ZwEnumerateKey.c)
 *     ZwSetValueKey @ 0x140412F10 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x140413EB0 (ZwDeleteValueKey.c)
 *     ZwSetSecurityObject @ 0x1404159D0 (ZwSetSecurityObject.c)
 *     PiDevCfgParsePropertyKeyName @ 0x14055FD1C (PiDevCfgParsePropertyKeyName.c)
 *     IopGetRegistryValue @ 0x1406C18D4 (IopGetRegistryValue.c)
 *     _PnpGetObjectProperty @ 0x1406D0FB4 (_PnpGetObjectProperty.c)
 *     IopGetRegistryKeyInformation @ 0x140780288 (IopGetRegistryKeyInformation.c)
 *     _RegRtlDeleteTreeInternal @ 0x140868B00 (_RegRtlDeleteTreeInternal.c)
 *     PiDevCfgSetObjectProperty @ 0x140874858 (PiDevCfgSetObjectProperty.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140878110 (PiDevCfgGetKeySecurityDescriptor.c)
 *     PiDevCfgResolveVariable @ 0x140878210 (PiDevCfgResolveVariable.c)
 *     PiDevCfgResolveMultiSzValue @ 0x1408784A4 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgConvertPropertyFromValue @ 0x14095A774 (PiDevCfgConvertPropertyFromValue.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgCopyDeviceKey(
        HANDLE KeyHandle,
        void *a2,
        __int64 a3,
        int a4,
        int a5,
        HANDLE *a6,
        __int64 a7)
{
  unsigned int v7; // r12d
  __int64 v8; // rsi
  int RegistryKeyInformation; // ebx
  ULONG v10; // edx
  ULONG v11; // eax
  ULONG Length; // ebx
  __int64 Pool2; // rax
  __int64 v14; // r13
  __int64 v15; // r14
  ULONG i; // r15d
  NTSTATUS v17; // eax
  PVOID v18; // r14
  ULONG v19; // r15d
  ULONG v20; // esi
  HANDLE v21; // r12
  NTSTATUS v22; // eax
  __int64 v24; // rbx
  const WCHAR *v25; // rdi
  __int64 v26; // rbx
  int v27; // edi
  unsigned int v28; // ebx
  int v29; // ebx
  wchar_t *v30; // r12
  unsigned int v31; // r15d
  unsigned int MaximumLength; // edi
  wchar_t *Buffer; // rsi
  ULONG v34; // r14d
  const WCHAR *v35; // rdx
  int v36; // eax
  PVOID v37; // rdi
  bool v38; // al
  int v39; // eax
  _WORD *v40; // rcx
  int v41; // eax
  int v42; // ecx
  int v43; // eax
  __int64 v44; // rax
  int v45; // eax
  unsigned int v46; // r9d
  int v47; // eax
  wchar_t *v48; // rdi
  int v49; // eax
  unsigned int v50; // ecx
  int v51; // eax
  __int64 v52; // rax
  __int64 v53; // r8
  int v54; // eax
  int v55; // edx
  NTSTATUS v56; // eax
  HANDLE v57; // rdx
  __int64 v58; // rax
  int ResultLength; // [rsp+28h] [rbp-D8h]
  ULONG ResultLengtha; // [rsp+28h] [rbp-D8h]
  unsigned int v61; // [rsp+60h] [rbp-A0h] BYREF
  ULONG v62; // [rsp+64h] [rbp-9Ch] BYREF
  int v63; // [rsp+68h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-90h] BYREF
  HANDLE v65; // [rsp+78h] [rbp-88h] BYREF
  PVOID v66; // [rsp+80h] [rbp-80h] BYREF
  HANDLE v67; // [rsp+88h] [rbp-78h]
  PVOID v68; // [rsp+90h] [rbp-70h]
  ULONG v69[2]; // [rsp+98h] [rbp-68h]
  unsigned int v70; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v71; // [rsp+A8h] [rbp-58h] BYREF
  PVOID P[2]; // [rsp+B0h] [rbp-50h] BYREF
  UNICODE_STRING ValueName; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v74; // [rsp+D0h] [rbp-30h] BYREF
  int v75; // [rsp+D4h] [rbp-2Ch]
  ULONG v76; // [rsp+D8h] [rbp-28h]
  ULONG Disposition; // [rsp+DCh] [rbp-24h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+E0h] [rbp-20h] BYREF
  PVOID v79; // [rsp+110h] [rbp+10h] BYREF
  const WCHAR *v80; // [rsp+118h] [rbp+18h]
  __int64 v81; // [rsp+120h] [rbp+20h]
  HANDLE *v82; // [rsp+128h] [rbp+28h]
  UNICODE_STRING v83; // [rsp+130h] [rbp+30h] BYREF
  UNICODE_STRING v84; // [rsp+140h] [rbp+40h] BYREF
  HANDLE KeyHandlea; // [rsp+150h] [rbp+50h]
  UNICODE_STRING DestinationString; // [rsp+160h] [rbp+60h] BYREF
  UNICODE_STRING v87; // [rsp+170h] [rbp+70h] BYREF
  GUID v88; // [rsp+180h] [rbp+80h] BYREF
  int v89; // [rsp+190h] [rbp+90h]

  KeyHandlea = KeyHandle;
  v67 = a2;
  v82 = a6;
  v7 = a4;
  v81 = a7;
  v8 = a3;
  Handle = 0LL;
  v89 = 0;
  v65 = 0LL;
  v68 = 0LL;
  v62 = 0;
  P[0] = 0LL;
  Disposition = 0;
  v79 = 0LL;
  v61 = 0;
  v70 = 0;
  v75 = a4;
  v80 = (const WCHAR *)a3;
  memset(&ObjectAttributes, 0, 44);
  v74 = 1;
  DestinationString = 0LL;
  v84 = 0LL;
  v87 = 0LL;
  ValueName = 0LL;
  v83 = 0LL;
  v88 = 0LL;
  RegistryKeyInformation = IopGetRegistryKeyInformation(KeyHandle, P);
  if ( RegistryKeyInformation < 0 )
    goto LABEL_18;
  v10 = 2 * *((_DWORD *)P[0] + 6) + 26;
  v62 = 2 * *((_DWORD *)P[0] + 9) + 18;
  v11 = v62;
  if ( v62 <= v10 )
    v11 = v10;
  Length = v11;
  *(_QWORD *)v69 = v11;
  ExFreePoolWithTag(P[0], 0);
  Pool2 = ExAllocatePool2(256LL, Length, 1667526736LL);
  v14 = Pool2;
  if ( !Pool2 )
  {
    RegistryKeyInformation = -1073741670;
    goto LABEL_18;
  }
  v15 = Pool2;
  for ( i = 0; ; ++i )
  {
    v76 = i;
    v17 = ZwEnumerateValueKey(KeyHandlea, i, KeyValueBasicInformation, (PVOID)v15, Length, &v62);
    RegistryKeyInformation = v17;
    if ( v17 >= 0 )
    {
      *(_WORD *)(v15 + 2 * ((unsigned __int64)*(unsigned int *)(v15 + 8) >> 1) + 12) = 0;
      RegistryKeyInformation = RtlInitUnicodeStringEx(&v87, (PCWSTR)(v15 + 12));
      if ( RegistryKeyInformation < 0 )
        goto LABEL_182;
      v26 = v81;
      v27 = 0;
      ValueName = v87;
      v63 = 0;
      if ( v81 )
      {
        if ( *(_QWORD *)(v81 + 16) )
        {
          v38 = PiDevCfgParseVariableName(v87.Buffer, &v83, &v63);
          v27 = v63;
          if ( v38 )
          {
            if ( (v63 & 0x400000) != 0 )
              goto LABEL_72;
            v71 = 0LL;
            v39 = PiDevCfgResolveVariable(v26, v83.Buffer, &v71);
            if ( v39 >= 0 )
            {
              if ( (unsigned int)(*(_DWORD *)(v71 + 32) - 1) > 1 || *(_DWORD *)(v71 + 36) > 0xFFFEu )
                goto LABEL_72;
              ValueName.Buffer = *(wchar_t **)(v71 + 40);
              ValueName.Length = *(_WORD *)(v71 + 36) - 2;
              ValueName.MaximumLength = *(_WORD *)(v71 + 36);
            }
            else
            {
              if ( v39 != -1073741772 )
                goto LABEL_72;
              ValueName = v83;
            }
          }
        }
      }
      v28 = *(_DWORD *)(v15 + 4) & 0xFFFF0000;
      *(_WORD *)(v15 + 6) = 0;
      if ( (v28 & 0x400000) != 0 || v8 && !PiDevCfgParsePropertyKeyName(&ValueName.Length, &v88, &v74) )
        goto LABEL_72;
      v29 = v27 | v28;
      if ( (v29 & 0x30000) == 0 && (a5 & 1) != 0 )
        goto LABEL_53;
      if ( v8 )
      {
        if ( (unsigned int)PnpGetObjectProperty(
                             *(__int64 *)&PiPnpRtlCtx,
                             v8,
                             v7,
                             (__int64)v67,
                             0LL,
                             (__int64)&v88,
                             (__int64)&v61,
                             0LL,
                             0,
                             (__int64)&v70,
                             0) != -1073741789 )
        {
LABEL_52:
          if ( (v29 & 0x10000) == 0 )
            goto LABEL_53;
          goto LABEL_72;
        }
      }
      else if ( !PnpRegistryValueExists(v67, &ValueName) )
      {
        goto LABEL_52;
      }
      if ( (v29 & 0x20000) == 0 && (a5 & 1) != 0 )
      {
LABEL_53:
        v66 = 0LL;
        v30 = 0LL;
        P[0] = 0LL;
        RegistryKeyInformation = IopGetRegistryValue(KeyHandlea, v87.Buffer, 0, &v66);
        if ( RegistryKeyInformation < 0 )
          goto LABEL_182;
        v31 = *((_DWORD *)v66 + 1) & 0xFFFF0000;
        MaximumLength = *((_DWORD *)v66 + 3);
        Buffer = (wchar_t *)((char *)v66 + *((unsigned int *)v66 + 2));
        v34 = (unsigned __int16)*((_DWORD *)v66 + 1);
        if ( v81 && *(_QWORD *)(v81 + 16) )
        {
          if ( v34 - 1 > 1 )
          {
LABEL_57:
            if ( v34 != 7 && v34 != 2 )
              goto LABEL_59;
LABEL_85:
            if ( (v31 & 0xC0000) != 0 )
            {
              ResultLength = (int)ValueName.Buffer;
              v43 = PiDevCfgResolveMultiSzValue(v34, MaximumLength, Buffer);
              v30 = (wchar_t *)P[0];
              RegistryKeyInformation = v43;
              if ( v43 < 0 )
              {
                RegistryKeyInformation = 0;
                goto LABEL_143;
              }
              goto LABEL_87;
            }
            goto LABEL_59;
          }
          if ( PnpValidateStringData((__int64)v66 + *((unsigned int *)v66 + 2), MaximumLength)
            && PiDevCfgParseVariableName(v40, &v83, &v63) )
          {
            Buffer = v83.Buffer;
            v71 = 0LL;
            v41 = PiDevCfgResolveVariable(v81, v83.Buffer, &v71);
            RegistryKeyInformation = v41;
            if ( v41 < 0 )
            {
              RegistryKeyInformation = 0;
              if ( v41 == -1073741772 )
                MaximumLength = v83.MaximumLength;
              else
                Buffer = 0LL;
              goto LABEL_59;
            }
            if ( (v63 & 0xC0000) != 0 )
            {
              ResultLength = (int)ValueName.Buffer;
              v45 = PiDevCfgResolveMultiSzValue(
                      *(unsigned int *)(v71 + 32),
                      *(unsigned int *)(v71 + 36),
                      *(_QWORD *)(v71 + 40));
              v30 = (wchar_t *)P[0];
              RegistryKeyInformation = v45;
              if ( v45 >= 0 )
              {
LABEL_87:
                MaximumLength = v62;
                v34 = 7;
                Buffer = v30;
                if ( v62 >= 2 && !*v30 )
                  v31 |= 0x200000u;
                goto LABEL_59;
              }
              Buffer = 0LL;
              RegistryKeyInformation = 0;
            }
            else
            {
              v42 = *(_DWORD *)(v71 + 32);
              v31 |= v42;
              MaximumLength = *(_DWORD *)(v71 + 36);
              Buffer = *(wchar_t **)(v71 + 40);
              v34 = (unsigned __int16)v42;
            }
LABEL_59:
            if ( !Buffer )
              goto LABEL_143;
            if ( v34 == 0x8000 )
            {
              if ( !v80 && v82 )
                RegistryKeyInformation = PiDevCfgPushCopyKeyEntry(v82, Buffer, v67, ((v31 & 0x20000) == 0) | 0x80000000);
              goto LABEL_143;
            }
            if ( !v34 && (v31 & 0x100000) != 0 )
            {
LABEL_143:
              v37 = v66;
              goto LABEL_65;
            }
            v35 = v80;
            v36 = v31 & 0x200000;
            if ( !v80 )
            {
              if ( !v36 )
              {
                ResultLengtha = MaximumLength;
                v37 = v66;
                RegistryKeyInformation = ZwSetValueKey(v67, &ValueName, *(_DWORD *)v66, v34, Buffer, ResultLengtha);
LABEL_65:
                if ( v30 )
                  ExFreePoolWithTag(v30, 0);
                v8 = (__int64)v80;
                if ( !v80 && v34 != 0x8000 && (v31 & 0x100000) != 0 )
                {
                  if ( *(_QWORD *)&PiPnpRtlCtx && (v52 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
                    v53 = *(_QWORD *)(v52 + 8);
                  else
                    v53 = 0LL;
                  RegRtlDeleteTreeInternal(v67, ValueName.Buffer, v53, 0);
                }
                ExFreePoolWithTag(v37, 0);
                if ( RegistryKeyInformation < 0 )
                  goto LABEL_182;
                i = v76;
                v15 = v14;
                v7 = v75;
                goto LABEL_72;
              }
              RegistryKeyInformation = ZwDeleteValueKey(v67, &ValueName);
              if ( RegistryKeyInformation == -1073741772 )
                RegistryKeyInformation = 0;
              goto LABEL_143;
            }
            if ( v36 )
            {
              v49 = 0;
              v79 = 0LL;
              v50 = 0;
              v61 = 0;
              v70 = 0;
              v48 = 0LL;
              goto LABEL_130;
            }
            if ( v74 != 1 )
            {
              v46 = v74;
              v61 = v74;
              goto LABEL_128;
            }
            if ( v34 == 1 || v34 == 2 )
            {
              v46 = 18;
              goto LABEL_126;
            }
            if ( v34 != 3 )
            {
              switch ( v34 )
              {
                case 4u:
                  v46 = 7;
                  goto LABEL_126;
                case 7u:
                  v46 = 8210;
                  goto LABEL_126;
                case 0xBu:
                  v46 = 9;
LABEL_126:
                  v61 = v46;
LABEL_128:
                  v47 = PiDevCfgConvertPropertyFromValue(
                          v34,
                          MaximumLength,
                          (_DWORD)Buffer,
                          v46,
                          (__int64)&v70,
                          (__int64)&v79);
                  v48 = (wchar_t *)v79;
                  RegistryKeyInformation = v47;
                  v49 = v61;
                  v50 = v70;
                  v35 = v80;
LABEL_130:
                  if ( RegistryKeyInformation >= 0 && (v48 || !v49) )
                  {
                    v51 = PiDevCfgSetObjectProperty(
                            *(__int64 *)&PiPnpRtlCtx,
                            0LL,
                            v35,
                            v75,
                            (__int64)v67,
                            ResultLength,
                            (__int64)&v88,
                            v49,
                            v48,
                            v50,
                            0);
                    RegistryKeyInformation = v51;
                    if ( v51 == -1073741790 || !v61 && v51 == -1073741275 )
                      RegistryKeyInformation = 0;
                    if ( v48 )
                    {
                      if ( v48 != Buffer )
                        ExFreePoolWithTag(v48, 0);
                      v79 = 0LL;
                    }
                  }
                  goto LABEL_143;
              }
            }
            v46 = 4099;
            goto LABEL_126;
          }
        }
        if ( v34 == 1 )
          goto LABEL_85;
        goto LABEL_57;
      }
LABEL_72:
      Length = v69[0];
      continue;
    }
    if ( v17 == -2147483622 )
      break;
    if ( v17 != -2147483643 )
      goto LABEL_182;
    ExFreePoolWithTag((PVOID)v14, 0);
    Length = v62;
    *(_QWORD *)v69 = v62;
    v44 = ExAllocatePool2(256LL, v62, 1667526736LL);
    v14 = v44;
    if ( !v44 )
    {
      v18 = v68;
      RegistryKeyInformation = -1073741670;
      goto LABEL_16;
    }
    v15 = v44;
    --i;
  }
  RegistryKeyInformation = 0;
  if ( v8 )
  {
LABEL_182:
    v18 = v68;
    goto LABEL_14;
  }
  v18 = v68;
  if ( v82 )
  {
    v19 = v69[0];
    v20 = 0;
    v21 = KeyHandlea;
    while ( 1 )
    {
      v22 = ZwEnumerateKey(v21, v20, KeyBasicInformation, (PVOID)v14, v19, &v62);
      RegistryKeyInformation = v22;
      if ( v22 < 0 )
      {
        if ( v22 == -2147483622 )
        {
          RegistryKeyInformation = 0;
          goto LABEL_14;
        }
        if ( v22 != -2147483643 )
          goto LABEL_14;
        ExFreePoolWithTag((PVOID)v14, 0);
        v19 = v62;
        v14 = ExAllocatePool2(256LL, v62, 1667526736LL);
        if ( !v14 )
        {
          RegistryKeyInformation = -1073741670;
          goto LABEL_16;
        }
        --v20;
        goto LABEL_43;
      }
      *(_WORD *)(v14 + 2 * ((unsigned __int64)*(unsigned int *)(v14 + 12) >> 1) + 16) = 0;
      RegistryKeyInformation = RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)(v14 + 16));
      if ( RegistryKeyInformation < 0 )
        goto LABEL_14;
      v84 = DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = v21;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      RegistryKeyInformation = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
      if ( RegistryKeyInformation < 0 )
        goto LABEL_14;
      v24 = v81;
      v25 = 0LL;
      v63 = 0;
      if ( v81 && *(_QWORD *)(v81 + 16) && PiDevCfgParseVariableName(DestinationString.Buffer, &v83, &v63) )
      {
        v71 = 0LL;
        v54 = PiDevCfgResolveVariable(v24, v83.Buffer, &v71);
        if ( v54 < 0 )
        {
          if ( v54 != -1073741772 )
          {
LABEL_158:
            ZwClose(Handle);
            Handle = 0LL;
            goto LABEL_43;
          }
          v84 = v83;
        }
        else
        {
          v55 = *(_DWORD *)(v71 + 32);
          if ( (unsigned int)(v55 - 1) <= 1 )
          {
            v84.Buffer = *(wchar_t **)(v71 + 40);
            v84.Length = *(_WORD *)(v71 + 36) - 2;
            v84.MaximumLength = *(_WORD *)(v71 + 36);
          }
          else
          {
            if ( v55 != 7 )
              goto LABEL_158;
            v25 = *(const WCHAR **)(v71 + 40);
          }
        }
      }
      RegistryKeyInformation = PiDevCfgGetKeySecurityDescriptor(Handle);
      if ( RegistryKeyInformation >= 0 )
      {
        v18 = v68;
      }
      else
      {
        RegistryKeyInformation = 0;
        v68 = 0LL;
        v18 = 0LL;
      }
      if ( v25 )
        break;
      ObjectAttributes.RootDirectory = v67;
      ObjectAttributes.SecurityQualityOfService = 0LL;
      ObjectAttributes.ObjectName = &v84;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.SecurityDescriptor = v18;
      RegistryKeyInformation = ZwCreateKey(&v65, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
      if ( RegistryKeyInformation >= 0 )
      {
        if ( Disposition == 2 && v18 )
          ZwSetSecurityObject(v65, 4u, v18);
        RegistryKeyInformation = PiDevCfgPushCopyKeyEntry(v82, Handle, v65, a5 | 0x40000000u);
        if ( RegistryKeyInformation < 0 )
          ZwClose(v65);
        Handle = 0LL;
LABEL_37:
        v65 = 0LL;
      }
LABEL_38:
      if ( v18 )
      {
        ExFreePoolWithTag(v18, 0);
        v18 = 0LL;
        v68 = 0LL;
      }
      if ( Handle )
      {
        ZwClose(Handle);
        Handle = 0LL;
      }
      if ( RegistryKeyInformation < 0 )
        goto LABEL_14;
LABEL_43:
      ++v20;
    }
    while ( 2 )
    {
      if ( !*v25 )
        goto LABEL_38;
      RtlInitUnicodeString(&v84, v25);
      ObjectAttributes.RootDirectory = v67;
      ObjectAttributes.SecurityQualityOfService = 0LL;
      ObjectAttributes.ObjectName = &v84;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.SecurityDescriptor = v18;
      v56 = ZwOpenKey(&v65, 0xF003Fu, &ObjectAttributes);
      RegistryKeyInformation = v56;
      if ( v56 >= 0 )
      {
        if ( v18 )
          ZwSetSecurityObject(v65, 4u, v18);
        goto LABEL_170;
      }
      if ( v56 != -1073741772 )
        goto LABEL_38;
      if ( (v63 & 0x10000) != 0 )
      {
        RegistryKeyInformation = 0;
      }
      else
      {
        RegistryKeyInformation = ZwCreateKey(&v65, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
        if ( RegistryKeyInformation < 0 )
          goto LABEL_38;
LABEL_170:
        v57 = Handle;
        if ( !Handle )
        {
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = &DestinationString;
          ObjectAttributes.RootDirectory = v21;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          RegistryKeyInformation = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
          if ( RegistryKeyInformation < 0 )
            goto LABEL_180;
          v57 = Handle;
        }
        RegistryKeyInformation = PiDevCfgPushCopyKeyEntry(v82, v57, v65, a5 | 0x40000000u);
        if ( RegistryKeyInformation < 0 )
        {
LABEL_180:
          ZwClose(v65);
          goto LABEL_37;
        }
        Handle = 0LL;
        v65 = 0LL;
      }
      v58 = -1LL;
      do
        ++v58;
      while ( v25[v58] );
      v25 += v58 + 1;
      continue;
    }
  }
LABEL_14:
  if ( v14 )
    ExFreePoolWithTag((PVOID)v14, 0);
LABEL_16:
  if ( v18 )
    ExFreePoolWithTag(v18, 0);
LABEL_18:
  if ( Handle )
    ZwClose(Handle);
  if ( v65 )
    ZwClose(v65);
  return (unsigned int)RegistryKeyInformation;
}
