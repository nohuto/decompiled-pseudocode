/*
 * XREFs of PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x140592AB8
 * Callers:
 *     PopThermalWorker @ 0x140846460 (PopThermalWorker.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140240954 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceThermalZoneThrottleDurationPerfTrack(int a1, __int64 a2)
{
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v4; // rbx
  __int64 v5; // rax
  int v6; // r8d
  __int16 v7; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  __int16 *v9; // [rsp+58h] [rbp-28h]
  __int64 v10; // [rsp+60h] [rbp-20h]
  __int64 v11; // [rsp+68h] [rbp-18h]
  int v12; // [rsp+70h] [rbp-10h]
  int v13; // [rsp+74h] [rbp-Ch]
  int v14; // [rsp+90h] [rbp+10h] BYREF

  v14 = a1;
  v7 = 0;
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_THERMAL_DURATION_PERFTRACK) )
    {
      DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(a2, 0x67446F50u);
      v4 = DeviceAttachmentBaseRefWithTag;
      if ( DeviceAttachmentBaseRefWithTag )
      {
        v5 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
        if ( v5 )
        {
          v6 = *(_WORD *)(v5 + 128) >> 1;
          UserData.Ptr = (ULONGLONG)&v14;
          v7 = v6;
          v9 = &v7;
          *(_QWORD *)&UserData.Size = 4LL;
          v10 = 2LL;
          v11 = *(_QWORD *)(v5 + 136);
          v12 = 2 * v6;
          v13 = 0;
          EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_THERMAL_DURATION_PERFTRACK, 0LL, 0, 0LL, 0LL, 3u, &UserData);
        }
        ObfDereferenceObjectWithTag(v4, 0x67446F50u);
      }
    }
  }
}
