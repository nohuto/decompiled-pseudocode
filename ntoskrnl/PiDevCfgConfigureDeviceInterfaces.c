/*
 * XREFs of PiDevCfgConfigureDeviceInterfaces @ 0x140876D34
 * Callers:
 *     PiDevCfgConfigureDeviceKeys @ 0x140876A38 (PiDevCfgConfigureDeviceKeys.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140246490 (RtlInitUnicodeStringEx.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     PiDevCfgParseVariableName @ 0x1403C2244 (PiDevCfgParseVariableName.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403D3ED0 (_wcsicmp.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x140412950 (ZwEnumerateKey.c)
 *     PiDevCfgParseInterfaceKeyName @ 0x14055FC84 (PiDevCfgParseInterfaceKeyName.c)
 *     _CmGetMatchingFilteredDeviceInterfaceList @ 0x1406C42E4 (_CmGetMatchingFilteredDeviceInterfaceList.c)
 *     IopRegisterDeviceInterface @ 0x14086A664 (IopRegisterDeviceInterface.c)
 *     PiDevCfgResolveVariable @ 0x140878210 (PiDevCfgResolveVariable.c)
 *     PiDevCfgConfigureDeviceInterface @ 0x14095A480 (PiDevCfgConfigureDeviceInterface.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgConfigureDeviceInterfaces(const wchar_t *a1, void *a2, __int64 a3)
{
  const WCHAR *v3; // rdi
  NTSTATUS v6; // eax
  int MatchingFilteredDeviceInterfaceList; // ebx
  NTSTATUS v9; // eax
  __int64 Pool2; // rsi
  ULONG v11; // r15d
  NTSTATUS i; // eax
  int v13; // eax
  int v14; // edx
  unsigned __int16 v15; // cx
  __int64 v16; // rax
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp-A8h] BYREF
  PVOID P; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING v21; // [rsp+70h] [rbp-90h] BYREF
  __int64 v22; // [rsp+80h] [rbp-80h] BYREF
  const wchar_t *v23; // [rsp+88h] [rbp-78h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING v25; // [rsp+C0h] [rbp-40h] BYREF
  UNICODE_STRING DestinationString; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v27; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v28; // [rsp+F0h] [rbp-10h]
  UNICODE_STRING v29; // [rsp+100h] [rbp+0h] BYREF
  GUID v30; // [rsp+110h] [rbp+10h] BYREF

  v3 = 0LL;
  ObjectAttributes.RootDirectory = a2;
  Handle = 0LL;
  *(_QWORD *)&v21.Length = 1441812LL;
  v28 = 0LL;
  v23 = 0LL;
  v21.Buffer = L"Interfaces";
  P = 0LL;
  ObjectAttributes.ObjectName = &v21;
  ResultLength = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  v27 = 0LL;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  MatchingFilteredDeviceInterfaceList = v6;
  if ( v6 == -1073741772 )
  {
    MatchingFilteredDeviceInterfaceList = 0;
    goto LABEL_3;
  }
  if ( v6 < 0 )
    goto LABEL_3;
  *(_DWORD *)&v21.Length = 262146;
  v21.Buffer = (wchar_t *)L"*";
  ObjectAttributes.RootDirectory = KeyHandle;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &v21;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v9 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
  MatchingFilteredDeviceInterfaceList = v9;
  if ( v9 == -1073741772 )
    goto LABEL_13;
  if ( v9 < 0 )
    goto LABEL_3;
  *(_QWORD *)&v27 = Handle;
  *((_QWORD *)&v27 + 1) = a3;
  LODWORD(v28) = 0;
  MatchingFilteredDeviceInterfaceList = CmGetMatchingFilteredDeviceInterfaceList(
                                          *(__int64 *)&PiPnpRtlCtx,
                                          0LL,
                                          (__int64)a1,
                                          0,
                                          (__int64)PiDevCfgConfigureDeviceInterfaceCallback,
                                          (__int64)&v27,
                                          0LL,
                                          0,
                                          (__int64)&ResultLength,
                                          0);
  ZwClose(Handle);
  Handle = 0LL;
  if ( MatchingFilteredDeviceInterfaceList >= 0 )
  {
    MatchingFilteredDeviceInterfaceList = v28;
    if ( (int)v28 >= 0 )
    {
LABEL_13:
      Pool2 = ExAllocatePool2(256LL, 622LL, 1667526736LL);
      if ( !Pool2 )
      {
        MatchingFilteredDeviceInterfaceList = -1073741670;
        goto LABEL_3;
      }
      v11 = 0;
      for ( i = ZwEnumerateKey(KeyHandle, 0, KeyBasicInformation, (PVOID)Pool2, 0x26Eu, &ResultLength);
            ;
            i = ZwEnumerateKey(KeyHandle, v11, KeyBasicInformation, (PVOID)Pool2, 0x26Eu, &ResultLength) )
      {
        MatchingFilteredDeviceInterfaceList = i;
        if ( i < 0 )
        {
          if ( i == -2147483622 )
          {
            MatchingFilteredDeviceInterfaceList = 0;
          }
          else if ( i == -2147483643 )
          {
            MatchingFilteredDeviceInterfaceList = -1073741773;
          }
          goto LABEL_53;
        }
        *(_WORD *)(Pool2 + 2 * ((unsigned __int64)*(unsigned int *)(Pool2 + 12) >> 1) + 16) = 0;
        if ( wcsicmp((const wchar_t *)(Pool2 + 16), L"*") )
          break;
LABEL_33:
        ++v11;
      }
      MatchingFilteredDeviceInterfaceList = RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)(Pool2 + 16));
      if ( MatchingFilteredDeviceInterfaceList < 0 )
        goto LABEL_53;
      v25 = DestinationString;
      ObjectAttributes.RootDirectory = KeyHandle;
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      ObjectAttributes.ObjectName = &DestinationString;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
      Handle = 0LL;
      MatchingFilteredDeviceInterfaceList = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
      if ( MatchingFilteredDeviceInterfaceList < 0 )
        goto LABEL_53;
      LODWORD(v22) = 0;
      if ( !a3 || !*(_QWORD *)(a3 + 16) || !PiDevCfgParseVariableName(DestinationString.Buffer, &v29, &v22) )
        goto LABEL_48;
      v22 = 0LL;
      v13 = PiDevCfgResolveVariable(a3, v29.Buffer, &v22);
      MatchingFilteredDeviceInterfaceList = v13;
      if ( v13 < 0 )
      {
        if ( v13 == -1073741772 )
        {
          v25 = v29;
          goto LABEL_48;
        }
      }
      else
      {
        v14 = *(_DWORD *)(v22 + 32);
        if ( (unsigned int)(v14 - 1) <= 1 )
        {
          v15 = *(_WORD *)(v22 + 36);
          v25.Buffer = *(wchar_t **)(v22 + 40);
          v25.MaximumLength = v15;
          v25.Length = v15 - 2;
LABEL_28:
          if ( v3 )
          {
            if ( *v3 )
            {
              while ( 1 )
              {
                RtlInitUnicodeString(&v21, v3);
                if ( PiDevCfgParseInterfaceKeyName((__int64)&v21, &v30, (__int64 *)&v23) )
                {
                  MatchingFilteredDeviceInterfaceList = IopRegisterDeviceInterface(a1, (int *)&v30, v23, 1, &P, 0LL);
                  if ( MatchingFilteredDeviceInterfaceList < 0 )
                    break;
                  MatchingFilteredDeviceInterfaceList = PiDevCfgConfigureDeviceInterface(P, Handle, a3);
                  ExFreePoolWithTag(P, 0);
                  if ( MatchingFilteredDeviceInterfaceList < 0 )
                    break;
                }
                v16 = -1LL;
                do
                  ++v16;
                while ( v3[v16] );
                v3 += v16 + 1;
                if ( !*v3 )
                {
                  v3 = 0LL;
                  goto LABEL_44;
                }
              }
LABEL_53:
              ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_3:
              if ( Handle )
                ZwClose(Handle);
              goto LABEL_5;
            }
            v3 = 0LL;
            goto LABEL_31;
          }
LABEL_48:
          v3 = 0LL;
          if ( PiDevCfgParseInterfaceKeyName((__int64)&v25, &v30, (__int64 *)&v23) )
          {
            MatchingFilteredDeviceInterfaceList = IopRegisterDeviceInterface(a1, (int *)&v30, v23, 1, &P, 0LL);
            if ( MatchingFilteredDeviceInterfaceList < 0 )
              goto LABEL_53;
            MatchingFilteredDeviceInterfaceList = PiDevCfgConfigureDeviceInterface(P, Handle, a3);
            ExFreePoolWithTag(P, 0);
LABEL_44:
            if ( MatchingFilteredDeviceInterfaceList < 0 )
              goto LABEL_53;
          }
LABEL_31:
          ZwClose(Handle);
          goto LABEL_32;
        }
        if ( v14 == 7 )
        {
          v3 = *(const WCHAR **)(v22 + 40);
          goto LABEL_28;
        }
      }
      ZwClose(Handle);
      v3 = 0LL;
LABEL_32:
      Handle = 0LL;
      goto LABEL_33;
    }
  }
LABEL_5:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)MatchingFilteredDeviceInterfaceList;
}
