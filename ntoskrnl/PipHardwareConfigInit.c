/*
 * XREFs of PipHardwareConfigInit @ 0x140B694FC
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140B599CC (IopInitializePlugPlayServices.c)
 * Callees:
 *     KeQueryBootTimeValues @ 0x1402E3FEC (KeQueryBootTimeValues.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwSetValueKey @ 0x140412F10 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x140413EB0 (ZwDeleteValueKey.c)
 *     IopGetRegistryValue @ 0x1406C18D4 (IopGetRegistryValue.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1406D3680 (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlStringFromGUID @ 0x140733E70 (RtlStringFromGUID.c)
 *     IopCreateRegistryKeyEx @ 0x14078BB90 (IopCreateRegistryKeyEx.c)
 *     _PnpCtxRegQueryKeyPathName @ 0x1408563D8 (_PnpCtxRegQueryKeyPathName.c)
 *     PipHardwareConfigClearStartOverrides @ 0x14094EECC (PipHardwareConfigClearStartOverrides.c)
 *     PipHardwareConfigTriggerRespecialize @ 0x14094F070 (PipHardwareConfigTriggerRespecialize.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     PipHardwareConfigExists @ 0x140B91054 (PipHardwareConfigExists.c)
 */

__int64 __fastcall PipHardwareConfigInit(GUID *Guid)
{
  HANDLE v2; // r15
  int v3; // eax
  void *v4; // rsi
  int CachedContextBaseKey; // ebx
  HANDLE v6; // r12
  int v7; // eax
  HANDLE v8; // rdi
  NTSTATUS RegistryValue; // r14d
  __int64 v10; // rcx
  bool v11; // r14
  unsigned int v13; // eax
  int v14; // r14d
  bool v15; // zf
  int v16; // r14d
  __int64 v17; // [rsp+38h] [rbp-D0h] BYREF
  _DWORD *v18; // [rsp+40h] [rbp-C8h] BYREF
  UNICODE_STRING v19; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING ValueName; // [rsp+58h] [rbp-B0h] BYREF
  void *v21; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+70h] [rbp-98h] BYREF
  LARGE_INTEGER Data; // [rsp+78h] [rbp-90h] BYREF
  HANDLE v24; // [rsp+80h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-80h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp-78h] BYREF
  __int64 v27; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v28[528]; // [rsp+A8h] [rbp-60h] BYREF

  LODWORD(v17) = -1;
  *(_QWORD *)&ValueName.Length = 4063292LL;
  Data.QuadPart = 0LL;
  v27 = 0LL;
  LODWORD(v22) = 0;
  v24 = 0LL;
  Handle = 0LL;
  v2 = 0LL;
  KeyHandle = 0LL;
  v21 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  ValueName.Buffer = L"\\Registry\\Machine\\System\\Setup";
  v3 = IopCreateRegistryKeyEx(&v21, 0LL, &ValueName, 0xF003Fu, 0, 0LL);
  v4 = v21;
  if ( v3 < 0 )
    v4 = 0LL;
  if ( v4 )
  {
    *(_DWORD *)&ValueName.Length = 1703960;
    ValueName.Buffer = L"Respecialize";
    ZwDeleteValueKey(v4, &ValueName);
  }
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 15, (__int64)&KeyHandle);
  if ( CachedContextBaseKey >= 0 )
  {
    CachedContextBaseKey = RtlStringFromGUID(Guid, &PnpCurrentHardwareConfigurationGuidString);
    if ( CachedContextBaseKey >= 0 )
    {
      v6 = KeyHandle;
      v19.Buffer = L"LastConfig";
      *(_DWORD *)&v19.Length = 1441812;
      CachedContextBaseKey = ZwSetValueKey(
                               KeyHandle,
                               &v19,
                               0,
                               1u,
                               PnpCurrentHardwareConfigurationGuidString.Buffer,
                               PnpCurrentHardwareConfigurationGuidString.Length + 2);
      if ( CachedContextBaseKey >= 0 )
      {
        v7 = IopCreateRegistryKeyEx(&Handle, v6, &PnpCurrentHardwareConfigurationGuidString, 0xF003Fu, 0, (ULONG *)&v22);
        v8 = Handle;
        CachedContextBaseKey = v7;
        if ( v7 >= 0 )
        {
          RegistryValue = IopGetRegistryValue(Handle, L"Id", 0, &v18);
          CachedContextBaseKey = -1073741823;
          if ( RegistryValue >= 0 )
          {
            if ( v18[1] == 4 && v18[3] == 4 )
              LODWORD(v17) = *(_DWORD *)((char *)v18 + (unsigned int)v18[2]);
            else
              RegistryValue = -1073741823;
            ExFreePoolWithTag(v18, 0);
            if ( RegistryValue >= 0 )
              goto LABEL_14;
          }
          LODWORD(v17) = 0;
          if ( IopGetRegistryValue(v6, L"LastId", 0, &v18) >= 0 )
          {
            if ( v18[1] == 4 && v18[3] == 4 )
              LODWORD(v17) = *(_DWORD *)((char *)v18 + (unsigned int)v18[2]) + 1;
            ExFreePoolWithTag(v18, 0);
          }
          v13 = v17;
          v14 = v17 - 1;
          if ( (_DWORD)v17 != (_DWORD)v17 - 1 )
          {
            do
            {
              v15 = (unsigned __int8)PipHardwareConfigExists(v6, v13) == 0;
              v13 = v17;
              if ( v15 )
                break;
              v13 = v17 + 1;
              LODWORD(v17) = v13;
            }
            while ( v13 != v14 );
            if ( v13 != v14 )
            {
              *(_DWORD *)&v19.Length = 917516;
              v19.Buffer = L"LastId";
              ZwSetValueKey(v6, &v19, 0, 4u, &v17, 4u);
              v19.Buffer = L"Id";
              *(_DWORD *)&v19.Length = 393220;
              CachedContextBaseKey = ZwSetValueKey(v8, &v19, 0, 4u, &v17, 4u);
              if ( CachedContextBaseKey >= 0 )
              {
LABEL_14:
                PnpCurrentHardwareConfigurationIndex = v17;
                KeQueryBootTimeValues(&Handle, &Data, &v27);
                Data.QuadPart -= v27;
                v19.Buffer = L"LastUse";
                *(_DWORD *)&v19.Length = 1048590;
                ZwSetValueKey(v8, &v19, 0, 3u, &Data, 8u);
                v19.Buffer = (wchar_t *)L"Current";
                *(_DWORD *)&v19.Length = 1048590;
                CachedContextBaseKey = IopCreateRegistryKeyEx(&v24, v6, &v19, 0xF003Fu, 3u, 0LL);
                if ( CachedContextBaseKey < 0
                  || (LODWORD(v21) = 260,
                      CachedContextBaseKey = PnpCtxRegQueryKeyPathName(v10, (__int64)v8, (__int64)v28, (__int64)&v21),
                      CachedContextBaseKey < 0) )
                {
                  v2 = v24;
                }
                else
                {
                  v2 = v24;
                  CachedContextBaseKey = ZwSetValueKey(v24, &CmSymbolicLinkValueName, 0, 6u, v28, 2 * (_DWORD)v21 - 2);
                  if ( CachedContextBaseKey >= 0 )
                  {
                    if ( (_DWORD)InitSafeBootMode
                      || IopGetRegistryValue(v8, L"Reset", 0, &v18) >= 0
                      && (v18[1] != 4 || v18[3] != 4
                        ? (v16 = 0)
                        : (v16 = *(_DWORD *)((char *)v18 + (unsigned int)v18[2])),
                          ExFreePoolWithTag(v18, 0),
                          v16) )
                    {
                      if ( (int)PipHardwareConfigClearStartOverrides((unsigned int)v17) >= 0 )
                      {
                        *(_DWORD *)&ValueName.Length = 786442;
                        ValueName.Buffer = L"Reset";
                        ZwDeleteValueKey(v8, &ValueName);
                      }
                    }
                    if ( v4 )
                    {
                      if ( (_DWORD)v22 == 1 )
                        goto LABEL_59;
                      v11 = 0;
                      if ( IopGetRegistryValue(v4, L"RespecializeStarted", 0, &v18) >= 0 )
                      {
                        if ( v18[1] == 4 && v18[3] == 4 )
                          v11 = *(_DWORD *)((char *)v18 + (unsigned int)v18[2]) == 1;
                        ExFreePoolWithTag(v18, 0);
                        if ( v11 )
                          goto LABEL_59;
                      }
                      if ( IopGetRegistryValue(v8, L"Respecialize", 0, &v18) >= 0 )
                      {
                        if ( v18[1] == 4 && v18[3] == 4 )
                          v11 = *(_DWORD *)((char *)v18 + (unsigned int)v18[2]) == 1;
                        ExFreePoolWithTag(v18, 0);
                        if ( v11 )
                        {
LABEL_59:
                          if ( (int)PipHardwareConfigTriggerRespecialize(v4) >= 0 )
                          {
                            *(_DWORD *)&ValueName.Length = 1703960;
                            ValueName.Buffer = L"Respecialize";
                            ZwDeleteValueKey(v8, &ValueName);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        if ( v8 )
          ZwClose(v8);
        if ( v2 )
          ZwClose(v2);
      }
    }
  }
  if ( v4 )
    ZwClose(v4);
  return (unsigned int)CachedContextBaseKey;
}
