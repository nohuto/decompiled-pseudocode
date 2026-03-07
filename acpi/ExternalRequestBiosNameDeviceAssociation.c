__int64 __fastcall ExternalRequestBiosNameDeviceAssociation(_BYTE *a1, __int64 a2, char a3)
{
  void *v5; // rdi
  __int64 v7; // rdx
  int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // eax
  int v13; // r8d
  int v14; // r9d
  int v16; // [rsp+20h] [rbp-40h]
  __int64 *v17; // [rsp+40h] [rbp-20h] BYREF
  void *v18; // [rsp+48h] [rbp-18h] BYREF
  PVOID P[2]; // [rsp+50h] [rbp-10h] BYREF
  int v20; // [rsp+A8h] [rbp+48h] BYREF

  v17 = 0LL;
  v20 = 0;
  v5 = 0LL;
  v18 = 0LL;
  *(_OWORD *)P = 0LL;
  v8 = AMLIGetNameSpaceObject(a1, 0LL, (__int64)&v17, 0);
  if ( v8 >= 0 )
  {
    AMLISetNSObjectNotifyFlag(v17);
    v8 = ACPIInitUnicodeString((PUNICODE_STRING)P);
    if ( v8 >= 0 )
    {
      ACPIInternalGetDeviceFromNSOBJ((__int64)v17, &v18, v9, &v20);
      v5 = v18;
      if ( v20 == 3 )
      {
        v8 = AcpiExternalAddBiosNameDeviceAssociation((__int64)P, (__int64)v18);
        if ( v8 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qSD((__int64)WPP_GLOBAL_Control->DeviceExtension, v7, v10, v11, v16);
          v8 = 0;
        }
      }
      if ( (a3 & 4) == 0 )
      {
        v12 = IoReserveDependency(*(_QWORD *)(a2 + 784), P, 2LL);
        v8 = v12;
        if ( v12 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qsD(WPP_GLOBAL_Control->DeviceExtension, v7, v13, v14, v16, a2, (__int64)a1, v12);
          v8 = 0;
        }
      }
    }
  }
  if ( P[1] )
  {
    ExFreePoolWithTag(P[1], 0x53706341u);
    *(_OWORD *)P = 0LL;
  }
  if ( v5 )
    ObfDereferenceObject(v5);
  if ( v17 )
    AMLIDereferenceHandleEx((volatile signed __int32 *)v17, v7);
  return (unsigned int)v8;
}
