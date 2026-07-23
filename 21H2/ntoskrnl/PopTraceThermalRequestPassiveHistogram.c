/*
 * XREFs of PopTraceThermalRequestPassiveHistogram @ 0x14038A9D8
 * Callers:
 *     PopCoolingSxTransition @ 0x14038A8D4 (PopCoolingSxTransition.c)
 *     PopCoolingTelemetryWorker @ 0x140568920 (PopCoolingTelemetryWorker.c)
 *     PopDeactiveThermalRequest @ 0x1408E2D48 (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x1408E2FF8 (PopOrphanCoolingExtension.c)
 * Callees:
 *     _tlgCreate1Sz_wchar_t @ 0x1402709CC (_tlgCreate1Sz_wchar_t.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14027171C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     PoStoreDiagnosticContext @ 0x14038ADEC (PoStoreDiagnosticContext.c)
 *     PopDiagSnapPassiveHistogram @ 0x14038AF54 (PopDiagSnapPassiveHistogram.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void __fastcall PopTraceThermalRequestPassiveHistogram(__int64 a1)
{
  _QWORD *v2; // rbx
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v4; // rdi
  __int64 v5; // r14
  _QWORD *PoolWithTag; // rax
  const size_t *v7; // r15
  SIZE_T NumberOfBytes[2]; // [rsp+38h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD *v10; // [rsp+68h] [rbp-A0h]
  __int64 v11; // [rsp+70h] [rbp-98h]
  __int64 v12; // [rsp+78h] [rbp-90h]
  _DWORD v13[2]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v14[16]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE *v15; // [rsp+98h] [rbp-70h]
  int v16; // [rsp+A0h] [rbp-68h]
  int v17; // [rsp+A4h] [rbp-64h]
  void *v18; // [rsp+A8h] [rbp-60h]
  int v19; // [rsp+B0h] [rbp-58h]
  int v20; // [rsp+B4h] [rbp-54h]
  _BYTE v21[96]; // [rsp+B8h] [rbp-50h] BYREF

  NumberOfBytes[0] = 0LL;
  v2 = 0LL;
  DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(
                                     *(_QWORD *)(*(_QWORD *)(a1 + 32) + 48LL),
                                     0x67446F50u);
  v4 = DeviceAttachmentBaseRefWithTag;
  if ( DeviceAttachmentBaseRefWithTag )
    v5 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
  else
    v5 = 0LL;
  if ( v5 )
  {
    PoStoreDiagnosticContext(*(_QWORD *)(a1 + 24), 0LL, NumberOfBytes);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes[0], 0x50455654u);
    v2 = PoolWithTag;
    if ( PoolWithTag )
    {
      if ( (int)PoStoreDiagnosticContext(*(_QWORD *)(a1 + 24), PoolWithTag, NumberOfBytes) >= 0 )
      {
        v7 = (_QWORD *)((char *)v2 + v2[2]);
        if ( ((unsigned __int8)PopDiagSnapPassiveHistogram(a1 + 40, v21) || PopThermalTelemetryVerbosity)
          && (unsigned int)dword_140C02228 > 5
          && tlgKeywordOn((__int64)&dword_140C02228, 0x400000000000LL) )
        {
          v13[1] = 0;
          v10 = v13;
          v12 = *(_QWORD *)(v5 + 136);
          v13[0] = *(unsigned __int16 *)(v5 + 128);
          v11 = 2LL;
          tlgCreate1Sz_wchar_t((__int64)v14, v7);
          v17 = 0;
          v20 = 0;
          v18 = &PopThermalTrackingThresholds;
          v15 = v21;
          v16 = 84;
          v19 = 21;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140C02228,
            (unsigned __int8 *)&dword_140027E54,
            0LL,
            0LL,
            7u,
            &v9);
        }
      }
    }
  }
  if ( v4 )
    ObfDereferenceObjectWithTag(v4, 0x67446F50u);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x50455654u);
}
