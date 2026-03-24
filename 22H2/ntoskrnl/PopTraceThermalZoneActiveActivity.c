/*
 * XREFs of PopTraceThermalZoneActiveActivity @ 0x140389EB4
 * Callers:
 *     PopThermalSxEntry @ 0x140389B58 (PopThermalSxEntry.c)
 *     PopThermalTelemetryWorker @ 0x14056F840 (PopThermalTelemetryWorker.c)
 *     PopThermalZoneRemove @ 0x1408E7DD0 (PopThermalZoneRemove.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14025F340 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14025FE1C (_tlgKeywordOn.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     _tlgCreate1Sz_wchar_t @ 0x14034B79C (_tlgCreate1Sz_wchar_t.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14034C53C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PopDiagSnapActiveActivity @ 0x14038A644 (PopDiagSnapActiveActivity.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 */

char __fastcall PopTraceThermalZoneActiveActivity(__int64 a1)
{
  __int64 v2; // rcx
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v4; // rbx
  __int64 v5; // rdi
  const size_t *v6; // r9
  int v7; // r10d
  int v8; // r11d
  unsigned __int8 v10[4]; // [rsp+38h] [rbp-79h] BYREF
  int v11; // [rsp+3Ch] [rbp-75h] BYREF
  __int64 v12; // [rsp+40h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+48h] [rbp-69h] BYREF
  _DWORD *v14; // [rsp+68h] [rbp-49h]
  int v15; // [rsp+70h] [rbp-41h]
  int v16; // [rsp+74h] [rbp-3Dh]
  __int64 v17; // [rsp+78h] [rbp-39h]
  _DWORD v18[2]; // [rsp+80h] [rbp-31h] BYREF
  _BYTE v19[16]; // [rsp+88h] [rbp-29h] BYREF
  int *v20; // [rsp+98h] [rbp-19h]
  int v21; // [rsp+A0h] [rbp-11h]
  int v22; // [rsp+A4h] [rbp-Dh]
  unsigned __int8 *v23; // [rsp+A8h] [rbp-9h]
  int v24; // [rsp+B0h] [rbp-1h]
  int v25; // [rsp+B4h] [rbp+3h]
  _BYTE *v26; // [rsp+B8h] [rbp+7h]
  int v27; // [rsp+C0h] [rbp+Fh]
  int v28; // [rsp+C4h] [rbp+13h]
  __int64 *v29; // [rsp+C8h] [rbp+17h]
  int v30; // [rsp+D0h] [rbp+1Fh]
  int v31; // [rsp+D4h] [rbp+23h]
  _BYTE v32[40]; // [rsp+D8h] [rbp+27h] BYREF

  v11 = 0;
  v2 = *(_QWORD *)(a1 + 48);
  v10[0] = 0;
  DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(v2, 0x67446F50u);
  v4 = DeviceAttachmentBaseRefWithTag;
  if ( DeviceAttachmentBaseRefWithTag )
    v5 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
  else
    v5 = 0LL;
  if ( v5 )
  {
    LOBYTE(DeviceAttachmentBaseRefWithTag) = PopDiagSnapActiveActivity(a1 + 504, &v11, v10, v32);
    if ( v11 )
    {
      if ( (_BYTE)DeviceAttachmentBaseRefWithTag || PopThermalTelemetryVerbosity )
      {
        DeviceAttachmentBaseRefWithTag = *(void **)(a1 + 1048);
        if ( (unsigned int)dword_140C02228 > 5 )
        {
          LOBYTE(DeviceAttachmentBaseRefWithTag) = tlgKeywordOn((__int64)&dword_140C02228, 0x400000000000LL);
          if ( (_BYTE)DeviceAttachmentBaseRefWithTag )
          {
            v16 = 0;
            v18[1] = 0;
            v14 = v18;
            v17 = *(_QWORD *)(v5 + 136);
            v18[0] = *(unsigned __int16 *)(v5 + 128);
            v15 = 2;
            tlgCreate1Sz_wchar_t((__int64)v19, v6);
            v22 = 0;
            v25 = 0;
            v28 = 0;
            v31 = 0;
            v20 = &v11;
            *(_WORD *)v10 = v10[0];
            v27 = 4 * v10[0];
            v23 = v10;
            v29 = &v12;
            v26 = v32;
            v11 = v7;
            v21 = 4;
            v24 = v8;
            v12 = 0x1000000LL;
            v30 = 8;
            LOBYTE(DeviceAttachmentBaseRefWithTag) = tlgWriteTransfer_EtwWriteTransfer(
                                                       (__int64)&dword_140C02228,
                                                       (unsigned __int8 *)&dword_140028804,
                                                       0LL,
                                                       0LL,
                                                       9u,
                                                       &v13);
          }
        }
      }
    }
  }
  if ( v4 )
    LOBYTE(DeviceAttachmentBaseRefWithTag) = ObfDereferenceObjectWithTag(v4, 0x67446F50u);
  return (char)DeviceAttachmentBaseRefWithTag;
}
