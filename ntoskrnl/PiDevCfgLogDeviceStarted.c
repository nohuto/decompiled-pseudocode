/*
 * XREFs of PiDevCfgLogDeviceStarted @ 0x140874EF4
 * Callers:
 *     PpDevCfgTraceDeviceStart @ 0x140877368 (PpDevCfgTraceDeviceStart.c)
 * Callees:
 *     PipIsDevNodeDNStarted @ 0x140245658 (PipIsDevNodeDNStarted.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     PnpGetLogString @ 0x1403C1C48 (PnpGetLogString.c)
 *     McTemplateK0zzjzzzdd_EtwWriteTransfer @ 0x1403C1C68 (McTemplateK0zzjzzzdd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     PiDevCfgQueryObjectProperties @ 0x14086AC20 (PiDevCfgQueryObjectProperties.c)
 */

void __fastcall PiDevCfgLogDeviceStarted(__int64 a1)
{
  __int64 v2; // rdx
  wchar_t *Buffer; // rdx
  char v4; // r11
  wchar_t *v5; // r8
  int v6; // r8d
  int *v7; // rax
  const wchar_t *v8; // rdx
  const wchar_t *v9; // r8
  const wchar_t *v10; // r9
  char v11; // r10
  unsigned __int16 Length; // cx
  unsigned int v13; // r9d
  __int64 v14; // r8
  unsigned __int16 v15; // cx
  unsigned int v16; // r9d
  __int64 v17; // rdx
  int *LogString; // rax
  const wchar_t *v19; // rdx
  __int64 v20; // rcx
  const wchar_t *v21; // r8
  const wchar_t *v22; // r9
  char v23; // r10
  int *v24; // rax
  const wchar_t *v25; // rdx
  const wchar_t *v26; // r8
  const wchar_t *v27; // r9
  char v28; // r10
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING v30; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING v32; // [rsp+90h] [rbp-70h] BYREF
  __int128 v33; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v34[26]; // [rsp+B0h] [rbp-50h] BYREF

  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&v32.Length = 0LL;
  v32.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&v30.Length = 0LL;
  v30.Buffer = 0LL;
  v33 = 0LL;
  if ( (byte_140C0E10A & 0x18) == 0x18 )
  {
    memset(v34, 0, 0xC8uLL);
    HIDWORD(v34[8]) = 6;
    LODWORD(v34[6]) = 18;
    v34[0] = &DEVPKEY_Device_ClassGuid;
    LODWORD(v34[11]) = 18;
    v34[2] = &v33;
    HIDWORD(v34[13]) = 6;
    v34[5] = &DEVPKEY_Device_DriverInfPath;
    HIDWORD(v34[18]) = 6;
    v34[7] = &UnicodeString;
    v34[10] = &DEVPKEY_Device_Service;
    v34[12] = &v32;
    v34[15] = &DEVPKEY_Device_LowerFilters;
    v34[17] = &DestinationString;
    v34[20] = &DEVPKEY_Device_UpperFilters;
    v34[22] = &v30;
    HIDWORD(v34[23]) = 6;
    v2 = *(_QWORD *)(a1 + 48);
    LODWORD(v34[1]) = 13;
    LODWORD(v34[3]) = 16;
    LODWORD(v34[16]) = 8210;
    LODWORD(v34[21]) = 8210;
    if ( (int)PiDevCfgQueryObjectProperties(8210LL, v2, 1u, 0LL, (__int64)v34, 5u) >= 0 )
    {
      if ( SLODWORD(v34[4]) < 0 )
        v33 = 0LL;
      if ( SLODWORD(v34[9]) < 0 )
        RtlInitUnicodeString(&UnicodeString, 0LL);
      if ( SLODWORD(v34[14]) < 0 )
        RtlInitUnicodeString(&v32, 0LL);
      if ( SLODWORD(v34[19]) < 0 )
        RtlInitUnicodeString(&DestinationString, 0LL);
      if ( SLODWORD(v34[24]) < 0 )
        RtlInitUnicodeString(&v30, 0LL);
      Buffer = DestinationString.Buffer;
      v4 = 32;
      if ( DestinationString.Buffer )
      {
        Length = DestinationString.Length;
        if ( DestinationString.Length > 4u )
        {
          v13 = 0;
          if ( (unsigned __int64)DestinationString.Length >> 1 != 2 )
          {
            v14 = 0LL;
            do
            {
              if ( !Buffer[v14] )
              {
                Buffer[v14] = 32;
                Buffer = DestinationString.Buffer;
                Length = DestinationString.Length;
              }
              v14 = ++v13;
            }
            while ( v13 < ((unsigned __int64)Length >> 1) - 2 );
          }
          DestinationString.Length = Length - 2;
        }
      }
      v5 = v30.Buffer;
      if ( v30.Buffer )
      {
        v15 = v30.Length;
        if ( v30.Length > 4u )
        {
          v16 = 0;
          if ( (unsigned __int64)v30.Length >> 1 != 2 )
          {
            v17 = 0LL;
            do
            {
              if ( !v5[v17] )
              {
                v5[v17] = 32;
                v5 = v30.Buffer;
                v15 = v30.Length;
              }
              v17 = ++v16;
            }
            while ( v16 < ((unsigned __int64)v15 >> 1) - 2 );
          }
          v30.Length = v15 - 2;
        }
      }
      v6 = *(_DWORD *)(a1 + 396);
      if ( (v6 & 0x6000) != 0 || (PipIsDevNodeDNStarted(a1), !(unsigned int)PipIsDevNodeDNStarted(a1)) )
      {
        if ( (v6 & 0x2000) != 0 && *(_DWORD *)(a1 + 404) == 14 )
        {
          if ( ((unsigned __int8)v4 & (unsigned __int8)byte_140C0E10A) != 0 )
          {
            PnpGetLogString((__int64)&v30);
            PnpGetLogString((__int64)&DestinationString);
            LogString = PnpGetLogString((__int64)&v32);
            McTemplateK0zzjzzzdd_EtwWriteTransfer(
              v20,
              (const EVENT_DESCRIPTOR *)KMPnPEvt_DeviceStart_RebootRequired,
              (__int64)v21,
              *(const wchar_t **)(a1 + 48),
              v22,
              (__int64)&v33,
              (const wchar_t *)LogString,
              v19,
              v21,
              14,
              v23);
          }
        }
        else if ( (byte_140C0E10A & 0x10) != 0 )
        {
          PnpGetLogString((__int64)&v30);
          PnpGetLogString((__int64)&DestinationString);
          v24 = PnpGetLogString((__int64)&v32);
          McTemplateK0zzjzzzdd_EtwWriteTransfer(
            *(unsigned int *)(a1 + 404),
            (const EVENT_DESCRIPTOR *)KMPnPEvt_DeviceStart_Failure,
            (__int64)v26,
            *(const wchar_t **)(a1 + 48),
            v27,
            (__int64)&v33,
            (const wchar_t *)v24,
            v25,
            v26,
            *(_DWORD *)(a1 + 404),
            v28);
        }
      }
      else if ( (byte_140C0E10A & 8) != 0 )
      {
        PnpGetLogString((__int64)&v30);
        PnpGetLogString((__int64)&DestinationString);
        v7 = PnpGetLogString((__int64)&v32);
        McTemplateK0zzjzzzdd_EtwWriteTransfer(
          *(unsigned int *)(a1 + 404),
          (const EVENT_DESCRIPTOR *)KMPnPEvt_DeviceStart_Success,
          (__int64)v9,
          *(const wchar_t **)(a1 + 48),
          v10,
          (__int64)&v33,
          (const wchar_t *)v7,
          v8,
          v9,
          *(_DWORD *)(a1 + 404),
          v11);
      }
    }
  }
  RtlFreeUnicodeString(&UnicodeString);
  RtlFreeUnicodeString(&v32);
  RtlFreeUnicodeString(&DestinationString);
  RtlFreeUnicodeString(&v30);
}
