/*
 * XREFs of PopTraceThermalRequestActiveActivity @ 0x14038ABC4
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
 *     PopDiagSnapActiveActivity @ 0x14038AE94 (PopDiagSnapActiveActivity.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void __fastcall PopTraceThermalRequestActiveActivity(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rbx
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v5; // rdi
  __int64 v6; // r14
  _QWORD *PoolWithTag; // rax
  const size_t *v8; // r15
  char active; // al
  int v10; // r10d
  int v11; // [rsp+38h] [rbp-89h] BYREF
  int v12; // [rsp+3Ch] [rbp-85h] BYREF
  SIZE_T NumberOfBytes; // [rsp+40h] [rbp-81h] BYREF
  __int64 v14; // [rsp+48h] [rbp-79h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+58h] [rbp-69h] BYREF
  _DWORD *v16; // [rsp+78h] [rbp-49h]
  int v17; // [rsp+80h] [rbp-41h]
  int v18; // [rsp+84h] [rbp-3Dh]
  __int64 v19; // [rsp+88h] [rbp-39h]
  _DWORD v20[2]; // [rsp+90h] [rbp-31h] BYREF
  _BYTE v21[16]; // [rsp+98h] [rbp-29h] BYREF
  int *v22; // [rsp+A8h] [rbp-19h]
  int v23; // [rsp+B0h] [rbp-11h]
  int v24; // [rsp+B4h] [rbp-Dh]
  SIZE_T *p_NumberOfBytes; // [rsp+B8h] [rbp-9h]
  int v26; // [rsp+C0h] [rbp-1h]
  int v27; // [rsp+C4h] [rbp+3h]
  __int64 *v28; // [rsp+C8h] [rbp+7h]
  int v29; // [rsp+D0h] [rbp+Fh]
  int v30; // [rsp+D4h] [rbp+13h]
  _DWORD v31[10]; // [rsp+D8h] [rbp+17h] BYREF

  NumberOfBytes = 0LL;
  v2 = *(_QWORD *)(a1 + 32);
  v11 = 0;
  v3 = 0LL;
  DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(*(_QWORD *)(v2 + 48), 0x67446F50u);
  v5 = DeviceAttachmentBaseRefWithTag;
  if ( DeviceAttachmentBaseRefWithTag )
    v6 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
  else
    v6 = 0LL;
  if ( v6 )
  {
    PoStoreDiagnosticContext(*(_QWORD *)(a1 + 24), 0LL, &NumberOfBytes);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x50455654u);
    v3 = PoolWithTag;
    if ( PoolWithTag )
    {
      if ( (int)PoStoreDiagnosticContext(*(_QWORD *)(a1 + 24), PoolWithTag, &NumberOfBytes) >= 0 )
      {
        v8 = (_QWORD *)((char *)v3 + v3[2]);
        active = PopDiagSnapActiveActivity(a1 + 40, &v11, &v12, v31);
        if ( v11 )
        {
          if ( (active || PopThermalTelemetryVerbosity)
            && (unsigned int)dword_140C02228 > 5
            && tlgKeywordOn((__int64)&dword_140C02228, 0x400000000000LL) )
          {
            v18 = 0;
            v20[1] = 0;
            v16 = v20;
            v19 = *(_QWORD *)(v6 + 136);
            v20[0] = *(unsigned __int16 *)(v6 + 128);
            v17 = 2;
            tlgCreate1Sz_wchar_t((__int64)v21, v8);
            v24 = 0;
            v27 = 0;
            v30 = 0;
            v22 = &v11;
            LODWORD(NumberOfBytes) = v31[0];
            p_NumberOfBytes = &NumberOfBytes;
            v23 = 4;
            v28 = &v14;
            v26 = 4;
            v29 = 8;
            v11 = v10;
            v14 = 0x1000000LL;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140C02228,
              (unsigned __int8 *)byte_140027DD9,
              0LL,
              0LL,
              8u,
              &v15);
          }
        }
      }
    }
  }
  if ( v5 )
    ObfDereferenceObjectWithTag(v5, 0x67446F50u);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x50455654u);
}
