__int64 __fastcall ACPIDockIrpEject(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rdi
  __int64 *v4; // r14
  __int64 v5; // rbp
  const char *v6; // rax
  const char *v7; // r8
  unsigned __int16 v8; // r9
  int v9; // eax
  int v10; // ebx
  __int64 *v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v15; // [rsp+90h] [rbp+18h] BYREF
  __int64 v16; // [rsp+98h] [rbp+20h] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v16 = 0LL;
  v15 = 0LL;
  v4 = (__int64 *)(DeviceExtension + 8);
  ACPIInternalClearFlags((void *)(DeviceExtension + 8), 0x400000000LL);
  v5 = *(_QWORD *)(DeviceExtension + 184);
  if ( !v5 )
  {
    v6 = byte_1C00622D0;
    v7 = byte_1C00622D0;
    if ( (*v4 & 0x200000000000LL) != 0 )
    {
      v6 = *(const char **)(DeviceExtension + 608);
      if ( (*v4 & 0x400000000000LL) != 0 )
        v7 = *(const char **)(DeviceExtension + 616);
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_25;
    v8 = 10;
LABEL_24:
    WPP_RECORDER_SF_qqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x12u,
      v8,
      (__int64)&WPP_6625d3923c543510b1fa3235c3eeddfe_Traceguids,
      (char)a2,
      DeviceExtension,
      v6,
      v7);
LABEL_25:
    v10 = -1073741823;
    goto LABEL_26;
  }
  if ( *(_DWORD *)(DeviceExtension + 192) != 4
    || (KdDisableDebugger(), *(_DWORD *)(DeviceExtension + 200) == 1)
    || (v9 = ACPIGet(v5, 0x4B43445Fu, 277086210, 0LL, 4, 0LL, 0LL, (__int64)&v15, 0LL),
        *(_DWORD *)(DeviceExtension + 200) = 1,
        v10 = v9,
        v9 >= 0) )
  {
    v11 = AMLIGetNamedChild(*(_QWORD **)(v5 + 760), 810173791);
    if ( v11 )
    {
      v10 = ACPIGet(v5, 0x304A455Fu, 277872640, 1LL, 4, 0LL, 0LL, 0LL, 0LL);
      AMLIDereferenceHandleEx((volatile signed __int32 *)v11, v12);
    }
    else
    {
      v10 = -1073741772;
    }
    if ( *(_DWORD *)(DeviceExtension + 192) == 4 )
      KdEnableDebugger();
    ACPIInternalClearFlags(v4, 0x400000000LL);
    if ( v10 >= 0 )
    {
      v10 = ACPIGet(DeviceExtension, 0x4154535Fu, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v16, 0LL);
      if ( v10 >= 0 )
      {
        v13 = *v4;
        if ( (*v4 & 2) == 0 )
        {
          v6 = byte_1C00622D0;
          v7 = byte_1C00622D0;
          if ( (v13 & 0x200000000000LL) != 0 )
          {
            v6 = *(const char **)(DeviceExtension + 608);
            if ( (v13 & 0x400000000000LL) != 0 )
              v7 = *(const char **)(DeviceExtension + 616);
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_25;
          v8 = 11;
          goto LABEL_24;
        }
      }
    }
  }
  else
  {
    KdEnableDebugger();
  }
LABEL_26:
  a2->IoStatus.Status = v10;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v10;
}
