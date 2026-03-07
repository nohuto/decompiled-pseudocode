void __fastcall PopDiagTraceThermalZoneThrottlePerfTrack(int a1, int a2, __int64 a3)
{
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v5; // rbx
  __int64 v6; // rax
  int v7; // r8d
  __int16 v8; // [rsp+40h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-9h] BYREF
  int *v10; // [rsp+60h] [rbp+7h]
  __int64 v11; // [rsp+68h] [rbp+Fh]
  __int16 *v12; // [rsp+70h] [rbp+17h]
  __int64 v13; // [rsp+78h] [rbp+1Fh]
  __int64 v14; // [rsp+80h] [rbp+27h]
  int v15; // [rsp+88h] [rbp+2Fh]
  int v16; // [rsp+8Ch] [rbp+33h]
  int v17; // [rsp+C0h] [rbp+67h] BYREF
  int v18; // [rsp+C8h] [rbp+6Fh] BYREF

  v18 = a2;
  v17 = a1;
  v8 = 0;
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_THERMAL_PERFTRACK) )
    {
      DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(a3, 0x67446F50u);
      v5 = DeviceAttachmentBaseRefWithTag;
      if ( DeviceAttachmentBaseRefWithTag )
      {
        v6 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
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
          EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_THERMAL_PERFTRACK, 0LL, 0, 0LL, 0LL, 4u, &UserData);
        }
        ObfDereferenceObjectWithTag(v5, 0x67446F50u);
      }
    }
  }
}
