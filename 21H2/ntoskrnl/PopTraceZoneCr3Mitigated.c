/*
 * XREFs of PopTraceZoneCr3Mitigated @ 0x140573D10
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x1403C5528 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalZoneRemove @ 0x1408E7EE0 (PopThermalZoneRemove.c)
 * Callees:
 *     _tlgCreate1Sz_wchar_t @ 0x1402709CC (_tlgCreate1Sz_wchar_t.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14027171C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

char __fastcall PopTraceZoneCr3Mitigated(int a1, __int64 a2)
{
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v5; // rbx
  __int64 v6; // r9
  __int64 v7; // r9
  const size_t *v8; // rdx
  int v10; // [rsp+38h] [rbp-19h] BYREF
  int v11; // [rsp+3Ch] [rbp-15h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+48h] [rbp-9h] BYREF
  int *v13; // [rsp+68h] [rbp+17h]
  int v14; // [rsp+70h] [rbp+1Fh]
  int v15; // [rsp+74h] [rbp+23h]
  int *v16; // [rsp+78h] [rbp+27h]
  int v17; // [rsp+80h] [rbp+2Fh]
  int v18; // [rsp+84h] [rbp+33h]
  _BYTE v19[16]; // [rsp+88h] [rbp+37h] BYREF

  DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(*(_QWORD *)(a2 + 48), 0x67446F50u);
  v5 = DeviceAttachmentBaseRefWithTag;
  if ( DeviceAttachmentBaseRefWithTag )
    v6 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
  else
    v6 = 0LL;
  if ( v6 )
  {
    if ( (unsigned int)dword_140C02228 > 5 )
    {
      LOBYTE(DeviceAttachmentBaseRefWithTag) = tlgKeywordOn((__int64)&dword_140C02228, 0x400000000000LL);
      if ( (_BYTE)DeviceAttachmentBaseRefWithTag )
      {
        v15 = 0;
        v18 = 0;
        v13 = &v10;
        v11 = *(_DWORD *)(a2 + 128);
        v14 = 4;
        v17 = 4;
        v8 = *(const size_t **)(v7 + 136);
        v16 = &v11;
        v10 = a1;
        tlgCreate1Sz_wchar_t((__int64)v19, v8);
        LOBYTE(DeviceAttachmentBaseRefWithTag) = tlgWriteTransfer_EtwWriteTransfer(
                                                   (__int64)&dword_140C02228,
                                                   (unsigned __int8 *)byte_140028019,
                                                   0LL,
                                                   0LL,
                                                   5u,
                                                   &v12);
      }
    }
  }
  if ( v5 )
    LOBYTE(DeviceAttachmentBaseRefWithTag) = ObfDereferenceObjectWithTag(v5, 0x67446F50u);
  return (char)DeviceAttachmentBaseRefWithTag;
}
