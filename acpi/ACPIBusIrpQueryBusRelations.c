__int64 __fastcall ACPIBusIrpQueryBusRelations(ULONG_PTR a1, char a2, PVOID *a3)
{
  __int64 DeviceExtension; // rax
  _QWORD *v7; // rbx
  __int64 v8; // r8
  const char *v9; // rax
  const char *v10; // r10
  int v12; // ebp
  __int64 v13; // rdx
  const char *v14; // rax
  const char *v15; // r8
  int v16; // r10d
  __int64 v17; // rdx
  const char *v18; // rax
  const char *v19; // r8

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v7 = (_QWORD *)DeviceExtension;
  if ( *(_QWORD *)(DeviceExtension + 760) )
  {
    v12 = ACPIDetectPdoDevices(a1, a3);
    if ( v12 >= 0 )
    {
      ACPIFilterRemoveNonPresentDevices((__int64)v7, *a3);
      v16 = ACPIDetectFilterDevices(a1, (__int64)*a3);
      if ( v16 < 0 )
      {
        v17 = v7[1];
        v18 = byte_1C00622D0;
        v19 = byte_1C00622D0;
        if ( (v17 & 0x200000000000LL) != 0 )
        {
          v18 = (const char *)v7[76];
          if ( (v17 & 0x400000000000LL) != 0 )
            v19 = (const char *)v7[77];
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qLqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            5u,
            0x23u,
            (__int64)&WPP_efe410a963c03a77fa130710cec25e42_Traceguids,
            a2,
            v16,
            (char)v7,
            v18,
            v19);
      }
    }
    else
    {
      v13 = v7[1];
      v14 = byte_1C00622D0;
      v15 = byte_1C00622D0;
      if ( (v13 & 0x200000000000LL) != 0 )
      {
        v14 = (const char *)v7[76];
        if ( (v13 & 0x400000000000LL) != 0 )
          v15 = (const char *)v7[77];
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qLqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          5u,
          0x22u,
          (__int64)&WPP_efe410a963c03a77fa130710cec25e42_Traceguids,
          a2,
          v12,
          (char)v7,
          v14,
          v15);
    }
    return (unsigned int)v12;
  }
  else
  {
    v8 = *(_QWORD *)(DeviceExtension + 8);
    v9 = byte_1C00622D0;
    v10 = byte_1C00622D0;
    if ( (v8 & 0x200000000000LL) != 0 )
    {
      v9 = (const char *)v7[76];
      if ( (v8 & 0x400000000000LL) != 0 )
        v10 = (const char *)v7[77];
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        5u,
        0x21u,
        (__int64)&WPP_efe410a963c03a77fa130710cec25e42_Traceguids,
        a2,
        0,
        (char)v7,
        v9,
        v10);
    return 3221225485LL;
  }
}
