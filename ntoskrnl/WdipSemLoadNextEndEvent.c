/*
 * XREFs of WdipSemLoadNextEndEvent @ 0x140832620
 * Callers:
 *     WdipSemLoadNextScenario @ 0x140832FB0 (WdipSemLoadNextScenario.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwEnumerateKey @ 0x140412950 (ZwEnumerateKey.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     __report_rangecheckfailure @ 0x1404FBCCC (__report_rangecheckfailure.c)
 *     RtlGUIDFromString @ 0x1406D1AA0 (RtlGUIDFromString.c)
 *     RtlUnicodeStringToInteger @ 0x140751D60 (RtlUnicodeStringToInteger.c)
 *     WdipSemQueryValueFromRegistry @ 0x140833488 (WdipSemQueryValueFromRegistry.c)
 *     WdipSemOpenRegistryKey @ 0x140833598 (WdipSemOpenRegistryKey.c)
 */

__int64 __fastcall WdipSemLoadNextEndEvent(HANDLE KeyHandle, ULONG Index, GUID *Guid)
{
  NTSTATUS v6; // ebx
  unsigned int v7; // ecx
  __int64 v8; // rax
  WCHAR v9; // dx
  __int64 v10; // rdx
  int v11; // r8d
  WCHAR *v12; // r9
  WCHAR v13; // cx
  int v14; // eax
  char v15; // cl
  int v16; // eax
  __int64 v17; // rax
  int v18; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  ULONG Value; // [rsp+34h] [rbp-CCh] BYREF
  int v22; // [rsp+38h] [rbp-C8h] BYREF
  int v23; // [rsp+3Ch] [rbp-C4h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C0h]
  __int64 v25; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD KeyInformation[40]; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR SourceString[64]; // [rsp+100h] [rbp+0h] BYREF
  WCHAR v29[64]; // [rsp+180h] [rbp+80h] BYREF

  Handle = 0LL;
  ResultLength = 0;
  Value = 0;
  v22 = 0;
  v23 = 0;
  v25 = 0LL;
  DestinationString = 0LL;
  if ( !KeyHandle || !Guid )
    return (unsigned int)-1073741811;
  memset(KeyInformation, 0, 0x98uLL);
  v6 = ZwEnumerateKey(KeyHandle, Index, KeyBasicInformation, KeyInformation, 0x96u, &ResultLength);
  if ( v6 >= 0 )
  {
    if ( KeyInformation[3] >= 0x80u )
    {
      v6 = -2147483643;
      goto LABEL_30;
    }
    *((_WORD *)&KeyInformation[4] + ((unsigned __int64)KeyInformation[3] >> 1)) = 0;
    memset(SourceString, 0, sizeof(SourceString));
    memset(v29, 0, sizeof(v29));
    v7 = 0;
    v8 = 0LL;
    while ( 1 )
    {
      v9 = *(_WORD *)((char *)&KeyInformation[4] + v8 * 2);
      if ( v9 == 59 )
        break;
      SourceString[v8] = v9;
      ++v7;
      ++v8;
      if ( v7 >= 0x40 )
        goto LABEL_37;
    }
    if ( 2 * (unsigned __int64)v7 >= 0x80 )
      _report_rangecheckfailure();
    SourceString[v7] = 0;
    v10 = v7 + 1;
    v11 = 0;
    if ( (unsigned int)v10 >= 0x40 )
    {
LABEL_37:
      v6 = -1073741823;
      goto LABEL_30;
    }
    v12 = (WCHAR *)&KeyInformation[4] + v10;
    while ( 1 )
    {
      v13 = *v12;
      v29[v11] = *v12;
      if ( !v13 )
        break;
      LODWORD(v10) = v10 + 1;
      ++v12;
      ++v11;
      if ( (unsigned int)v10 >= 0x40 )
        goto LABEL_37;
    }
    RtlInitUnicodeString(&DestinationString, SourceString);
    v6 = RtlGUIDFromString(&DestinationString, Guid);
    if ( v6 < 0 )
      goto LABEL_30;
    RtlInitUnicodeString(&DestinationString, v29);
    v6 = RtlUnicodeStringToInteger(&DestinationString, 0xAu, &Value);
    if ( v6 < 0 )
      goto LABEL_30;
    LOWORD(Guid[1].Data1) = Value;
    v6 = WdipSemOpenRegistryKey((PCWSTR)&KeyInformation[4]);
    if ( v6 < 0 )
      goto LABEL_30;
    v14 = WdipSemQueryValueFromRegistry(Handle, &v22, (__int64)&ResultLength);
    v6 = v14;
    if ( v14 < 0 )
    {
      if ( v14 != -1073741772 )
        goto LABEL_30;
      BYTE2(Guid[1].Data1) = -1;
    }
    else
    {
      v15 = v22;
      if ( !v22 )
        v15 = -1;
      BYTE2(Guid[1].Data1) = v15;
    }
    v16 = WdipSemQueryValueFromRegistry(Handle, &v25, (__int64)&ResultLength);
    v6 = v16;
    if ( v16 >= 0 )
    {
      v17 = v25;
      if ( !v25 )
        v17 = -1LL;
      *(_QWORD *)Guid[1].Data4 = v17;
      goto LABEL_27;
    }
    if ( v16 == -1073741772 )
    {
      *(_QWORD *)Guid[1].Data4 = -1LL;
LABEL_27:
      v18 = WdipSemQueryValueFromRegistry(Handle, &v23, (__int64)&ResultLength);
      v6 = v18;
      if ( v18 >= 0 )
      {
        *(_DWORD *)&Guid[2].Data2 = v23;
      }
      else if ( v18 == -1073741772 )
      {
        v6 = 0;
        *(_DWORD *)&Guid[2].Data2 = 0;
      }
    }
  }
LABEL_30:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v6;
}
