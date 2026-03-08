/*
 * XREFs of PopTraceThermalRequestPassiveHistogram @ 0x14059356C
 * Callers:
 *     PopCoolingSxTransition @ 0x140584670 (PopCoolingSxTransition.c)
 *     PopCoolingTelemetryWorker @ 0x140584788 (PopCoolingTelemetryWorker.c)
 *     PopDeactiveThermalRequest @ 0x14097FEC8 (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x140980178 (PopOrphanCoolingExtension.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140240954 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x140244050 (_tlgCreate1Sz_wchar_t.c)
 *     PoStoreDiagnosticContext @ 0x1402BDC20 (PoStoreDiagnosticContext.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PopDiagSnapPassiveHistogram @ 0x14058F530 (PopDiagSnapPassiveHistogram.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PopTraceThermalRequestPassiveHistogram(__int64 a1)
{
  unsigned __int64 *v2; // rbx
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v4; // rsi
  __int64 v5; // r14
  unsigned __int64 *Pool2; // rax
  const size_t *v7; // r15
  unsigned __int64 v8[2]; // [rsp+38h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD *v10; // [rsp+68h] [rbp-A0h]
  __int64 v11; // [rsp+70h] [rbp-98h]
  __int64 v12; // [rsp+78h] [rbp-90h]
  _DWORD v13[2]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v14[16]; // [rsp+88h] [rbp-80h] BYREF
  _DWORD *v15; // [rsp+98h] [rbp-70h]
  int v16; // [rsp+A0h] [rbp-68h]
  int v17; // [rsp+A4h] [rbp-64h]
  void *v18; // [rsp+A8h] [rbp-60h]
  int v19; // [rsp+B0h] [rbp-58h]
  int v20; // [rsp+B4h] [rbp-54h]
  _DWORD v21[24]; // [rsp+B8h] [rbp-50h] BYREF

  v8[0] = 0LL;
  v2 = 0LL;
  DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(
                                     *(_QWORD *)(*(_QWORD *)(a1 + 32) + 48LL),
                                     0x67446F50u);
  v4 = DeviceAttachmentBaseRefWithTag;
  if ( DeviceAttachmentBaseRefWithTag )
  {
    v5 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
    if ( v5 )
    {
      PoStoreDiagnosticContext(*(_QWORD *)(a1 + 24), 0LL, v8);
      Pool2 = (unsigned __int64 *)ExAllocatePool2(256LL, v8[0], 1346721364LL);
      v2 = Pool2;
      if ( Pool2 )
      {
        if ( (int)PoStoreDiagnosticContext(*(_QWORD *)(a1 + 24), Pool2, v8) >= 0 )
        {
          v7 = (unsigned __int64 *)((char *)v2 + v2[2]);
          if ( (PopDiagSnapPassiveHistogram(a1 + 40, v21) || PopThermalTelemetryVerbosity)
            && (unsigned int)dword_140C03928 > 5
            && tlgKeywordOn((__int64)&dword_140C03928, 0x400000000000LL) )
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
              (__int64)&dword_140C03928,
              (unsigned __int8 *)&dword_14002EA3C,
              0LL,
              0LL,
              7u,
              &v9);
          }
        }
      }
    }
    ObfDereferenceObjectWithTag(v4, 0x67446F50u);
    if ( v2 )
      ExFreePoolWithTag(v2, 0x50455654u);
  }
}
