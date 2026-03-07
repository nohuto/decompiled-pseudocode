__int64 __fastcall ACPIDetectFilterDevices(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // rax
  char v3; // si
  __int64 v4; // rdi
  KIRQL v5; // bl
  __int64 v6; // rdx
  int v7; // ebx
  const char *v8; // r14
  const char *v9; // rcx
  __int64 v10; // rax
  unsigned __int16 v11; // r9
  __int64 v13; // rax
  KIRQL v14; // dl
  __int64 v15; // rbp
  _QWORD *v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // r8
  int v19; // eax
  char v20; // r8
  NTSTATUS v21; // eax
  ULONG_PTR v22; // rbx
  __int64 v23; // rax
  const char *v24; // rdx
  const char *v25; // rcx
  unsigned __int16 v26; // r9
  __int64 v27; // rax
  KIRQL v28; // al
  __int64 v29; // rbx
  _QWORD *v30; // rbx
  KIRQL v31; // dl
  __int64 v34; // [rsp+B0h] [rbp+18h] BYREF
  struct _DEVICE_OBJECT *v35; // [rsp+B8h] [rbp+20h] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v3 = 0;
  v35 = 0LL;
  v4 = DeviceExtension;
  v34 = 0LL;
  v5 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  if ( _bittest64((const signed __int64 *)(v4 + 8), 0x29u) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 8), 0xFFFFFDFFFFFFFFFFuLL);
    ACPIBuildMissingChildren(v4);
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v5);
  LOBYTE(v6) = 1;
  v7 = ACPIBuildFlushQueue(v4, v6);
  if ( v7 < 0 )
  {
    v8 = (const char *)&unk_1C00622D0;
    v9 = (const char *)&unk_1C00622D0;
    if ( v4 )
    {
      v10 = *(_QWORD *)(v4 + 8);
      v3 = v4;
      if ( (v10 & 0x200000000000LL) != 0 )
      {
        v8 = *(const char **)(v4 + 608);
        if ( (v10 & 0x400000000000LL) != 0 )
          v9 = *(const char **)(v4 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)v7;
    v11 = 16;
LABEL_10:
    WPP_RECORDER_SF_dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x16u,
      v11,
      (__int64)&WPP_e848b9e179ab32f347f39b604d9f0dbd_Traceguids,
      v7,
      v3,
      v8,
      v9);
    return (unsigned int)v7;
  }
  v7 = ACPIDevicePowerFlushQueue(v4);
  if ( v7 < 0 )
  {
    v8 = (const char *)&unk_1C00622D0;
    v9 = (const char *)&unk_1C00622D0;
    if ( v4 )
    {
      v13 = *(_QWORD *)(v4 + 8);
      v3 = v4;
      if ( (v13 & 0x200000000000LL) != 0 )
      {
        v8 = *(const char **)(v4 + 608);
        if ( (v13 & 0x400000000000LL) != 0 )
          v9 = *(const char **)(v4 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)v7;
    v11 = 17;
    goto LABEL_10;
  }
  v14 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v15 = *(_QWORD *)(v4 + 800);
  if ( v15 == v4 + 800 )
  {
    v16 = 0LL;
  }
  else
  {
    v16 = (_QWORD *)(v15 - 816);
    ACPIInitReferenceDeviceExtension(v16);
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v14);
  if ( v16 )
  {
    do
    {
      v34 = 0LL;
      if ( (int)ACPIGet((_DWORD)v16, 1096045407, -1878783998, 0, 0, 0LL, 0LL, (__int64)&v34, 0LL) >= 0
        && ((v16[1] & 0x2000000000002LL) == 0
         || (_bittest(&AcpiOverrideAttributes, 0x17u) & ((*(_QWORD *)(v4 + 8) & 0x2000000LL) != 0)) != 0) )
      {
        v19 = ACPIDetectFilterMatch(v16, a2, &v35);
        v20 = v19;
        if ( v19 < 0 )
        {
          v27 = v16[1];
          v24 = (const char *)&unk_1C00622D0;
          v25 = (const char *)&unk_1C00622D0;
          if ( (v27 & 0x200000000000LL) != 0 )
          {
            v24 = (const char *)v16[76];
            if ( (v27 & 0x400000000000LL) != 0 )
              v25 = (const char *)v16[77];
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v26 = 19;
            goto LABEL_42;
          }
        }
        else
        {
          if ( !v35 )
            goto LABEL_43;
          v21 = ACPIBuildFilter(*(struct _DRIVER_OBJECT **)(a1 + 8), (__int64)v16, v35);
          v20 = v21;
          if ( v21 < 0 )
          {
            v23 = v16[1];
            v24 = (const char *)&unk_1C00622D0;
            v25 = (const char *)&unk_1C00622D0;
            if ( (v23 & 0x200000000000LL) != 0 )
            {
              v24 = (const char *)v16[76];
              if ( (v23 & 0x400000000000LL) != 0 )
                v25 = (const char *)v16[77];
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v26 = 18;
LABEL_42:
              WPP_RECORDER_SF_dqss(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                2u,
                0x16u,
                v26,
                (__int64)&WPP_e848b9e179ab32f347f39b604d9f0dbd_Traceguids,
                v20,
                (char)v16,
                v24,
                v25);
            }
          }
          else
          {
            v22 = v16[96];
            if ( (int)AcpiQueryPciBusInterface(v22) >= 0 )
              ACPIInternalIsPci(v22);
            ACPIFilterQueryBusD3ColdSupport(v22);
          }
        }
      }
LABEL_43:
      v28 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
      v29 = v16[102];
      if ( v29 == v4 + 800 )
      {
        KeReleaseSpinLock(&AcpiDeviceTreeLock, v28);
        ACPIInitDereferenceDeviceExtensionUnlocked((ULONG_PTR)v16);
        break;
      }
      v30 = (_QWORD *)(v29 - 816);
      ACPIInitReferenceDeviceExtension(v30);
      KeReleaseSpinLock(&AcpiDeviceTreeLock, v31);
      ACPIInitDereferenceDeviceExtensionUnlocked((ULONG_PTR)v16);
      v16 = v30;
    }
    while ( v30 );
  }
  if ( (*(_DWORD *)(v4 + 8) & 0x2000000) != 0 || (*(_QWORD *)(v4 + 1008) & 0x8000LL) != 0 )
  {
    LOBYTE(v17) = 1;
    LOBYTE(v18) = (*(_QWORD *)(v4 + 1008) & 0x8000) != 0;
    EnableDisableRegions(*(_QWORD *)(v4 + 760), v17, v18);
  }
  return 0LL;
}
