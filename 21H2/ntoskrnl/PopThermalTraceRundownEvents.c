/*
 * XREFs of PopThermalTraceRundownEvents @ 0x140272BF4
 * Callers:
 *     PopDiagTraceControlCallback @ 0x140671060 (PopDiagTraceControlCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14027171C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PopAcquireRwLockShared @ 0x140272D04 (PopAcquireRwLockShared.c)
 *     EtwWriteEx @ 0x14027F840 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

void PopThermalTraceRundownEvents()
{
  PVOID *v0; // rbx
  char v1; // si
  __int64 v2; // rdi
  unsigned __int8 v3; // r14
  char v4; // si
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v6; // rdi
  __int64 v7; // rdx
  int v8; // ecx
  int v9; // ecx
  __int16 v10; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v11; // [rsp+4Ch] [rbp-BCh] BYREF
  int v12; // [rsp+50h] [rbp-B8h] BYREF
  __int16 v13; // [rsp+54h] [rbp-B4h] BYREF
  int v14; // [rsp+58h] [rbp-B0h] BYREF
  int v15; // [rsp+60h] [rbp-A8h] BYREF
  int v16; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+70h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-90h] BYREF
  __int64 v19; // [rsp+88h] [rbp-80h]
  int v20; // [rsp+90h] [rbp-78h]
  int v21; // [rsp+94h] [rbp-74h]
  __int16 *v22; // [rsp+98h] [rbp-70h]
  __int64 v23; // [rsp+A0h] [rbp-68h]
  int *v24; // [rsp+A8h] [rbp-60h]
  __int64 v25; // [rsp+B0h] [rbp-58h]
  int *v26; // [rsp+B8h] [rbp-50h]
  __int64 v27; // [rsp+C0h] [rbp-48h]
  int *v28; // [rsp+C8h] [rbp-40h]
  __int64 v29; // [rsp+D0h] [rbp-38h]
  int *v30; // [rsp+D8h] [rbp-30h]
  __int64 v31; // [rsp+E0h] [rbp-28h]
  __int64 *v32; // [rsp+E8h] [rbp-20h]
  __int64 v33; // [rsp+F0h] [rbp-18h]
  __int16 *v34; // [rsp+F8h] [rbp-10h]
  __int64 v35; // [rsp+100h] [rbp-8h]
  PVOID v36; // [rsp+108h] [rbp+0h]
  int v37; // [rsp+110h] [rbp+8h]
  int v38; // [rsp+114h] [rbp+Ch]

  PopAcquireRwLockShared(&PopPolicyDeviceLock);
  v0 = (PVOID *)PopThermal;
  if ( PopThermal != &PopThermal )
  {
    do
    {
      v1 = *((_BYTE *)v0 + 65);
      if ( (v1 & 2) != 0 )
      {
        v2 = (__int64)v0[6];
        v3 = v1 & 1;
        LODWORD(v17) = *((unsigned __int8 *)v0 + 73);
        v4 = v1 & 4;
        v16 = *((unsigned __int8 *)v0 + 72);
        v15 = *((_DWORD *)v0 + 20);
        v14 = *((unsigned __int8 *)v0 + 69);
        v11 = 0;
        v13 = 0;
        v10 = 0;
        LOWORD(v12) = 0;
        if ( PopDiagHandleRegistered )
        {
          if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_THERMAL_ZONE_RUNDOWN) )
          {
            DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(v2, 0x67446F50u);
            v6 = DeviceAttachmentBaseRefWithTag;
            if ( DeviceAttachmentBaseRefWithTag )
              v7 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
            else
              v7 = 0LL;
            if ( v7 )
            {
              v8 = *(_WORD *)(v7 + 128) >> 1;
              UserData.Ptr = (ULONGLONG)&v10;
              v10 = v8;
              *(_QWORD *)&UserData.Size = 2LL;
              v19 = *(_QWORD *)(v7 + 136);
              v20 = 2 * v8;
              v9 = *((unsigned __int16 *)v0 + 520);
              v11 = v4 != 0;
              v37 = v9;
              v22 = &v11;
              v24 = &v14;
              LOWORD(v12) = v3;
              v26 = &v12;
              v28 = &v15;
              v30 = &v16;
              v32 = &v17;
              v13 = (unsigned __int16)v9 >> 1;
              v34 = &v13;
              v36 = v0[131];
              v21 = 0;
              v23 = 2LL;
              v25 = 4LL;
              v27 = 2LL;
              v29 = 4LL;
              v31 = 4LL;
              v33 = 4LL;
              v35 = 2LL;
              v38 = 0;
              EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_THERMAL_ZONE_RUNDOWN, 0LL, 0, 0LL, 0LL, 0xAu, &UserData);
            }
            if ( v6 )
              ObfDereferenceObjectWithTag(v6, 0x67446F50u);
          }
        }
      }
      v0 = (PVOID *)*v0;
    }
    while ( v0 != &PopThermal );
  }
  PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
}
