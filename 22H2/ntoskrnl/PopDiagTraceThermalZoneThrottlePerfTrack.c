/*
 * XREFs of PopDiagTraceThermalZoneThrottlePerfTrack @ 0x140573294
 * Callers:
 *     PopThermalWorker @ 0x1407C0A30 (PopThermalWorker.c)
 * Callees:
 *     EtwEventEnabled @ 0x14021BEF0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14025D4F0 (EtwWrite.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14034C53C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceThermalZoneThrottlePerfTrack(int a1, int a2, __int64 a3)
{
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v5; // rbx
  __int64 v6; // rdx
  int v7; // ecx
  __int16 v8; // [rsp+30h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-9h] BYREF
  int *v10; // [rsp+50h] [rbp+7h]
  __int64 v11; // [rsp+58h] [rbp+Fh]
  __int16 *v12; // [rsp+60h] [rbp+17h]
  __int64 v13; // [rsp+68h] [rbp+1Fh]
  __int64 v14; // [rsp+70h] [rbp+27h]
  int v15; // [rsp+78h] [rbp+2Fh]
  int v16; // [rsp+7Ch] [rbp+33h]
  int v17; // [rsp+B0h] [rbp+67h] BYREF
  int v18; // [rsp+B8h] [rbp+6Fh] BYREF

  v18 = a2;
  v17 = a1;
  v8 = 0;
  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_THERMAL_PERFTRACK) )
  {
    DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(a3, 0x67446F50u);
    v5 = DeviceAttachmentBaseRefWithTag;
    if ( DeviceAttachmentBaseRefWithTag )
      v6 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
    else
      v6 = 0LL;
    if ( v6 )
    {
      v7 = *(_WORD *)(v6 + 128) >> 1;
      UserData.Ptr = (ULONGLONG)&v18;
      v10 = &v17;
      v8 = v7;
      v12 = &v8;
      *(_QWORD *)&UserData.Size = 4LL;
      v11 = 4LL;
      v13 = 2LL;
      v14 = *(_QWORD *)(v6 + 136);
      v15 = 2 * v7;
      v16 = 0;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_THERMAL_PERFTRACK, 0LL, 4u, &UserData);
    }
    if ( v5 )
      ObfDereferenceObjectWithTag(v5, 0x67446F50u);
  }
}
