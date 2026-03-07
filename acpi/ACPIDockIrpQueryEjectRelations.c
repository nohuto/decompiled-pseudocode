__int64 __fastcall ACPIDockIrpQueryEjectRelations(ULONG_PTR a1, char a2, PVOID *a3)
{
  __int64 DeviceExtension; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r8
  const char *v9; // rax
  const char *v10; // r10
  __int64 v12; // rdx
  const char *v13; // rax
  const char *v14; // r8
  int v15; // edi
  __int64 v16; // rdx
  const char *v17; // rax
  const char *v18; // r8

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v6 = (_QWORD *)DeviceExtension;
  v7 = *(_QWORD *)(DeviceExtension + 184);
  if ( v7 )
  {
    if ( *(_QWORD *)(v7 + 760) )
    {
      v15 = ACPIDetectEjectDevices(v7, a3, *(_QWORD *)(DeviceExtension + 184));
      if ( v15 < 0 )
      {
        v16 = v6[1];
        v17 = byte_1C00622D0;
        v18 = byte_1C00622D0;
        if ( (v16 & 0x200000000000LL) != 0 )
        {
          v17 = (const char *)v6[76];
          if ( (v16 & 0x400000000000LL) != 0 )
            v18 = (const char *)v6[77];
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qLqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0x12u,
            0x13u,
            (__int64)&WPP_6625d3923c543510b1fa3235c3eeddfe_Traceguids,
            a2,
            v15,
            (char)v6,
            v17,
            v18);
      }
      return (unsigned int)v15;
    }
    else
    {
      v12 = *(_QWORD *)(DeviceExtension + 8);
      v13 = byte_1C00622D0;
      v14 = byte_1C00622D0;
      if ( (v12 & 0x200000000000LL) != 0 )
      {
        v13 = (const char *)v6[76];
        if ( (v12 & 0x400000000000LL) != 0 )
          v14 = (const char *)v6[77];
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qqqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0x12u,
          0x12u,
          (__int64)&WPP_6625d3923c543510b1fa3235c3eeddfe_Traceguids,
          a2,
          0,
          (char)v6,
          v13,
          v14);
      return 3221225485LL;
    }
  }
  else
  {
    v8 = *(_QWORD *)(DeviceExtension + 8);
    v9 = byte_1C00622D0;
    v10 = byte_1C00622D0;
    if ( (v8 & 0x200000000000LL) != 0 )
    {
      v9 = (const char *)v6[76];
      if ( (v8 & 0x400000000000LL) != 0 )
        v10 = (const char *)v6[77];
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x12u,
        0x11u,
        (__int64)&WPP_6625d3923c543510b1fa3235c3eeddfe_Traceguids,
        a2,
        (char)v6,
        v9,
        v10);
    return 3221225473LL;
  }
}
