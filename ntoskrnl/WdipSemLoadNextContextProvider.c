/*
 * XREFs of WdipSemLoadNextContextProvider @ 0x140832924
 * Callers:
 *     WdipSemLoadNextScenario @ 0x140832FB0 (WdipSemLoadNextScenario.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwEnumerateKey @ 0x140412950 (ZwEnumerateKey.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     RtlGUIDFromString @ 0x1406D1AA0 (RtlGUIDFromString.c)
 *     WdipSemQueryValueFromRegistry @ 0x140833488 (WdipSemQueryValueFromRegistry.c)
 *     WdipSemOpenRegistryKey @ 0x140833598 (WdipSemOpenRegistryKey.c)
 */

__int64 __fastcall WdipSemLoadNextContextProvider(HANDLE KeyHandle, ULONG Index, GUID *Guid)
{
  NTSTATUS v6; // ebx
  __int64 v7; // rax
  int v8; // eax
  char v9; // cl
  int v10; // eax
  __int64 v11; // rax
  int v12; // eax
  int v13; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-99h] BYREF
  unsigned int v16; // [rsp+34h] [rbp-95h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-91h]
  int v18; // [rsp+40h] [rbp-89h] BYREF
  int v19; // [rsp+44h] [rbp-85h] BYREF
  __int64 v20; // [rsp+48h] [rbp-81h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-79h] BYREF
  _DWORD KeyInformation[38]; // [rsp+60h] [rbp-69h] BYREF

  ResultLength = 0;
  Handle = 0LL;
  v18 = 0;
  v19 = 0;
  v20 = 0LL;
  v16 = 0;
  DestinationString = 0LL;
  if ( !KeyHandle || !Guid )
    return (unsigned int)-1073741811;
  memset(KeyInformation, 0, sizeof(KeyInformation));
  v6 = ZwEnumerateKey(KeyHandle, Index, KeyBasicInformation, KeyInformation, 0x96u, &ResultLength);
  if ( v6 >= 0 )
  {
    if ( KeyInformation[3] >= 0x80u )
    {
      v6 = -2147483643;
      goto LABEL_24;
    }
    *((_WORD *)&KeyInformation[4] + ((unsigned __int64)KeyInformation[3] >> 1)) = 0;
    RtlInitUnicodeString(&DestinationString, (PCWSTR)&KeyInformation[4]);
    v6 = RtlGUIDFromString(&DestinationString, Guid);
    if ( v6 < 0 )
      goto LABEL_24;
    v7 = *(_QWORD *)&Guid->Data1 - *(_QWORD *)&WDI_SEM_PROVIDER.Data1;
    if ( *(_QWORD *)&Guid->Data1 == *(_QWORD *)&WDI_SEM_PROVIDER.Data1 )
      v7 = *(_QWORD *)Guid->Data4 - *(_QWORD *)WDI_SEM_PROVIDER.Data4;
    if ( !v7 )
    {
      v6 = -1073741823;
      goto LABEL_24;
    }
    v6 = WdipSemOpenRegistryKey((PCWSTR)&KeyInformation[4]);
    if ( v6 < 0 )
      goto LABEL_24;
    v8 = WdipSemQueryValueFromRegistry(Handle, &v18, (__int64)&ResultLength);
    v6 = v8;
    if ( v8 < 0 )
    {
      if ( v8 != -1073741772 )
        goto LABEL_24;
      BYTE2(Guid[1].Data1) = -1;
    }
    else
    {
      v9 = v18;
      if ( !v18 )
        v9 = -1;
      BYTE2(Guid[1].Data1) = v9;
    }
    v10 = WdipSemQueryValueFromRegistry(Handle, &v20, (__int64)&ResultLength);
    v6 = v10;
    if ( v10 < 0 )
    {
      if ( v10 != -1073741772 )
        goto LABEL_24;
      *(_QWORD *)Guid[1].Data4 = -1LL;
    }
    else
    {
      v11 = v20;
      if ( !v20 )
        v11 = -1LL;
      *(_QWORD *)Guid[1].Data4 = v11;
    }
    v12 = WdipSemQueryValueFromRegistry(Handle, &v16, (__int64)&ResultLength);
    v6 = v12;
    if ( v12 >= 0 )
    {
      Guid[2].Data1 = v16;
LABEL_21:
      v13 = WdipSemQueryValueFromRegistry(Handle, &v19, (__int64)&ResultLength);
      v6 = v13;
      if ( v13 >= 0 )
      {
        *(_DWORD *)&Guid[2].Data2 = v19;
      }
      else if ( v13 == -1073741772 )
      {
        v6 = 0;
        *(_DWORD *)&Guid[2].Data2 = 0;
      }
      goto LABEL_24;
    }
    if ( v12 == -1073741772 || v16 >= 3 )
    {
      Guid[2].Data1 = 0;
      goto LABEL_21;
    }
  }
LABEL_24:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v6;
}
