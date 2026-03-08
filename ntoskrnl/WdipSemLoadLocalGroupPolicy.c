/*
 * XREFs of WdipSemLoadLocalGroupPolicy @ 0x1409DB298
 * Callers:
 *     WdipSemLoadGroupPolicy @ 0x14083195C (WdipSemLoadGroupPolicy.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwEnumerateKey @ 0x140412950 (ZwEnumerateKey.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     RtlGUIDFromString @ 0x1406D1AA0 (RtlGUIDFromString.c)
 *     WdipSemQueryValueFromRegistry @ 0x140833488 (WdipSemQueryValueFromRegistry.c)
 *     WdipSemOpenRegistryKey @ 0x140833598 (WdipSemOpenRegistryKey.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall WdipSemLoadLocalGroupPolicy(HANDLE KeyHandle)
{
  HANDLE v2; // rcx
  ULONG v3; // edi
  unsigned int v4; // ebx
  NTSTATUS v5; // eax
  GUID *v6; // rcx
  unsigned int Data1; // edx
  HANDLE Handle; // [rsp+38h] [rbp-79h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-71h] BYREF
  int v11; // [rsp+44h] [rbp-6Dh] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-69h] BYREF
  GUID Guid; // [rsp+58h] [rbp-59h] BYREF
  _DWORD KeyInformation[38]; // [rsp+68h] [rbp-49h] BYREF

  ResultLength = 0;
  v2 = 0LL;
  Handle = 0LL;
  v11 = 0;
  v3 = 0;
  DestinationString = 0LL;
  Guid = 0LL;
  if ( KeyHandle )
  {
    while ( 1 )
    {
      if ( v2 )
      {
        ZwClose(v2);
        Handle = 0LL;
      }
      memset(KeyInformation, 0, sizeof(KeyInformation));
      v5 = ZwEnumerateKey(KeyHandle, v3++, KeyBasicInformation, KeyInformation, 0x96u, &ResultLength);
      if ( v5 == -2147483622 )
        break;
      if ( v5 >= 0 )
      {
        if ( KeyInformation[3] >= 0x80u )
        {
          v4 = -2147483643;
          goto LABEL_21;
        }
        *((_WORD *)&KeyInformation[4] + ((unsigned __int64)KeyInformation[3] >> 1)) = 0;
        RtlInitUnicodeString(&DestinationString, (PCWSTR)&KeyInformation[4]);
        if ( RtlGUIDFromString(&DestinationString, &Guid) >= 0
          && WdipSemOpenRegistryKey((PCWSTR)&KeyInformation[4], KeyHandle, &Handle) >= 0
          && (int)WdipSemQueryValueFromRegistry(Handle, L"ScenarioExecutionEnabled", 4, 4u, &v11, &ResultLength) >= 0
          && !v11 )
        {
          v6 = (GUID *)WdipSemDisabledScenarioTable;
          if ( !WdipSemDisabledScenarioTable )
          {
            WdipSemDisabledScenarioTable = (PVOID)ExAllocatePool2(256LL, 1028LL, 1934181463LL);
            v6 = (GUID *)WdipSemDisabledScenarioTable;
            if ( !WdipSemDisabledScenarioTable )
            {
              v4 = -1073741670;
              goto LABEL_21;
            }
          }
          Data1 = v6[64].Data1;
          if ( Data1 >= 0x40 )
          {
            v4 = -1073741823;
            goto LABEL_21;
          }
          v6[64].Data1 = Data1 + 1;
          v6[Data1] = Guid;
        }
      }
      v2 = Handle;
    }
    v4 = 0;
LABEL_21:
    if ( Handle )
      ZwClose(Handle);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
