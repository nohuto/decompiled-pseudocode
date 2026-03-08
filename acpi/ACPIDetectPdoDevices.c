/*
 * XREFs of ACPIDetectPdoDevices @ 0x1C001AE34
 * Callers:
 *     ACPIBusIrpQueryBusRelations @ 0x1C007EC78 (ACPIBusIrpQueryBusRelations.c)
 *     ACPIRootIrpQueryBusRelations @ 0x1C0093D88 (ACPIRootIrpQueryBusRelations.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     memmove @ 0x1C0001E80 (memmove.c)
 *     WPP_RECORDER_SF_dqss @ 0x1C0009A6C (WPP_RECORDER_SF_dqss.c)
 *     ACPIBuildMissingChildren @ 0x1C000D8BC (ACPIBuildMissingChildren.c)
 *     ACPIBuildPdo @ 0x1C000DC84 (ACPIBuildPdo.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001B508 (WPP_RECORDER_SF_qD.c)
 *     ACPIDevicePowerFlushQueue @ 0x1C001EABC (ACPIDevicePowerFlushQueue.c)
 *     ACPIGet @ 0x1C0029384 (ACPIGet.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C002D0C0 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C002D594 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIBuildFlushQueue @ 0x1C007D42C (ACPIBuildFlushQueue.c)
 *     ACPIDetectPdoMatch @ 0x1C00826E0 (ACPIDetectPdoMatch.c)
 */

__int64 __fastcall ACPIDetectPdoDevices(ULONG_PTR a1, PVOID *a2)
{
  PVOID *v2; // r13
  ULONG_PTR v3; // rbp
  unsigned int *v4; // r15
  unsigned int v5; // esi
  __int64 DeviceExtension; // rbx
  KIRQL v7; // di
  __int64 v8; // rdx
  int v9; // edi
  __int64 v10; // r8
  const char *v11; // rcx
  const char *v12; // r10
  unsigned __int16 v13; // r9
  __int64 v15; // r8
  _QWORD *v16; // r12
  KIRQL v17; // dl
  __int64 v18; // rdi
  _DWORD *Pool2; // rax
  ULONG_PTR v20; // rdi
  KIRQL v21; // dl
  ULONG_PTR v22; // r13
  char v23; // r14
  __int64 v24; // r8
  __int64 v25; // rcx
  KIRQL v26; // al
  _QWORD *v27; // rcx
  KIRQL v28; // dl
  char v29; // bp
  unsigned int v30; // eax
  __int64 v31; // rax
  unsigned int *v32; // rdi
  unsigned int v33; // ebp
  KIRQL v34; // al
  KIRQL v35; // dl
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // r8
  __int64 v39; // rax
  _QWORD *v40; // rcx
  unsigned int v41; // esi
  __int64 v42; // r13
  NTSTATUS v43; // eax
  int v44; // edx
  __int64 v45; // rdx
  __int64 v46; // rcx
  unsigned int v47; // ecx
  __int64 v48; // rbp
  __int64 v49; // rdx
  unsigned int v50; // r8d
  __int64 v51; // r14
  __int64 v52; // rsi
  __int64 v53; // r14
  __int64 v54; // rdx
  __int64 v57; // [rsp+B8h] [rbp+20h] BYREF

  v2 = a2;
  v3 = a1;
  v4 = 0LL;
  v5 = 0;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( v2 && *v2 )
  {
    v5 = *(_DWORD *)*v2;
    v4 = (unsigned int *)*v2;
  }
  v7 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  if ( _bittest64((const signed __int64 *)(DeviceExtension + 8), 0x29u) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(DeviceExtension + 8), 0xFFFFFDFFFFFFFFFFuLL);
    ACPIBuildMissingChildren(DeviceExtension);
  }
  if ( _bittest64((const signed __int64 *)(DeviceExtension + 8), 0x2Au) )
    _InterlockedAnd64((volatile signed __int64 *)(DeviceExtension + 8), 0xFFFFFBFFFFFFFFFFuLL);
  if ( (*(_DWORD *)(DeviceExtension + 1008) & 0x200LL) != 0 )
    _InterlockedAnd64((volatile signed __int64 *)(DeviceExtension + 1008), 0xFFFFFFFFFFFFFDFFuLL);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v7);
  LOBYTE(v8) = 1;
  v9 = ACPIBuildFlushQueue(DeviceExtension, v8);
  if ( v9 < 0 )
  {
    v10 = *(_QWORD *)(DeviceExtension + 8);
    v11 = (const char *)&unk_1C00622D0;
    v12 = (const char *)&unk_1C00622D0;
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v11 = *(const char **)(DeviceExtension + 608);
      if ( (v10 & 0x400000000000LL) != 0 )
        v12 = *(const char **)(DeviceExtension + 616);
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)v9;
    v13 = 20;
LABEL_16:
    WPP_RECORDER_SF_dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0xAu,
      v13,
      (__int64)&WPP_e848b9e179ab32f347f39b604d9f0dbd_Traceguids,
      v9,
      DeviceExtension,
      v11,
      v12);
    return (unsigned int)v9;
  }
  v9 = ACPIDevicePowerFlushQueue(DeviceExtension);
  if ( v9 < 0 )
  {
    v15 = *(_QWORD *)(DeviceExtension + 8);
    v11 = (const char *)&unk_1C00622D0;
    v12 = (const char *)&unk_1C00622D0;
    if ( (v15 & 0x200000000000LL) != 0 )
    {
      v11 = *(const char **)(DeviceExtension + 608);
      if ( (v15 & 0x400000000000LL) != 0 )
        v12 = *(const char **)(DeviceExtension + 616);
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)v9;
    v13 = 21;
    goto LABEL_16;
  }
  v16 = (_QWORD *)(DeviceExtension + 800);
  v17 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v18 = *(_QWORD *)(DeviceExtension + 800);
  if ( v18 == DeviceExtension + 800 )
  {
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v17);
    goto LABEL_26;
  }
  v20 = v18 - 816;
  ACPIInitReferenceDeviceExtension(v20);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v21);
  v22 = 0LL;
  v23 = 0;
  while ( 1 )
  {
    _InterlockedOr64((volatile signed __int64 *)(v20 + 8), 0x100uLL);
    v57 = 0LL;
    if ( (int)ACPIGet(v20, 1096045407, -1878783998, 0, 0, 0LL, 0LL, (__int64)&v57, 0LL) < 0
      || (*(_QWORD *)(v20 + 8) & 0x2000000000002LL) != 0
      && ((AcpiOverrideAttributes & 0x80000) == 0 || (*(_DWORD *)(v20 + 1008) & 0x200000LL) == 0) )
    {
      goto LABEL_46;
    }
    if ( !(unsigned __int8)ACPIDetectPdoMatch(v20, v4) )
    {
      if ( ACPIBuildPdo(
             *(struct _DRIVER_OBJECT **)(v3 + 8),
             v20,
             *(struct _DEVICE_OBJECT **)(DeviceExtension + 784),
             (*(_BYTE *)(DeviceExtension + 8) & 0x10) == 0) < 0 )
        goto LABEL_46;
      ++v5;
      goto LABEL_45;
    }
    if ( (*(_BYTE *)(v20 + 8) & 0x20) == 0 )
      goto LABEL_46;
    v24 = *(_QWORD *)(v20 + 768);
    if ( !v24 )
      goto LABEL_46;
    if ( !v4 || (v25 = 0LL, !*v4) )
    {
LABEL_43:
      if ( (*(_DWORD *)(v20 + 1008) & 0x20000000) != 0 )
        goto LABEL_46;
      ++v5;
      _InterlockedAnd64((volatile signed __int64 *)(v20 + 8), 0xFFFFFFFFFFFFFEFFuLL);
      goto LABEL_45;
    }
    while ( *(_QWORD *)&v4[2 * v25 + 2] != v24 )
    {
      v25 = (unsigned int)(v25 + 1);
      if ( (unsigned int)v25 >= *v4 )
        goto LABEL_43;
    }
    if ( (*(_DWORD *)(v20 + 1008) & 0x20000000) != 0 )
    {
      --v5;
LABEL_45:
      v23 = 1;
    }
LABEL_46:
    v26 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    v27 = *(_QWORD **)(v20 + 816);
    v28 = v26;
    if ( v27 == v16 )
    {
      v29 = 1;
    }
    else
    {
      v22 = (ULONG_PTR)(v27 - 102);
      ACPIInitReferenceDeviceExtension(v27 - 102);
      v29 = 0;
    }
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v28);
    ACPIInitDereferenceDeviceExtensionUnlocked(v20);
    if ( v29 )
      break;
    v3 = a1;
    v20 = v22;
  }
  v2 = a2;
  if ( !v23 )
  {
LABEL_26:
    if ( !v4 )
    {
      Pool2 = (_DWORD *)ExAllocatePool2(64LL, 16LL, 1148216129LL);
      if ( !Pool2 )
        return 3221225626LL;
      *Pool2 = 0;
      *v2 = Pool2;
    }
    return 0LL;
  }
  v30 = 16;
  if ( v5 )
    v30 = 8 * v5 + 8;
  v31 = ExAllocatePool2(64LL, v30, 1148216129LL);
  v32 = (unsigned int *)v31;
  if ( !v31 )
    return 3221225626LL;
  if ( v4 )
  {
    memmove((void *)(v31 + 8), v4 + 2, 8LL * *v4);
    v33 = *v4;
  }
  else
  {
    v33 = 0;
  }
  v34 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v35 = v34;
  if ( (_QWORD *)*v16 == v16 )
  {
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v34);
    ExFreePoolWithTag(v32, 0);
  }
  else
  {
    v36 = *v16 - 816LL;
    if ( *v16 != 816LL )
    {
      do
      {
        v37 = *(_QWORD *)(v36 + 8);
        if ( (v37 & 0x20) != 0 )
        {
          v38 = *(_QWORD *)(v36 + 768);
          if ( v38 )
          {
            if ( ((v37 & 0x2000000000002LL) == 0
               || (AcpiOverrideAttributes & 0x80000) != 0 && (*(_DWORD *)(v36 + 1008) & 0x200000) != 0)
              && (*(_DWORD *)(v36 + 1008) & 0x20000000) == 0 )
            {
              if ( v33 >= v5 )
                break;
              v39 = v33++;
              *(_QWORD *)&v32[2 * v39 + 2] = v38;
              _InterlockedAnd64((volatile signed __int64 *)(v36 + 8), 0xFFFFFFFFFFFFFEFFuLL);
            }
          }
        }
        if ( v5 == v33 )
          break;
        v40 = *(_QWORD **)(v36 + 816);
        if ( v40 == v16 )
          break;
        v36 = (__int64)(v40 - 102);
      }
      while ( v36 );
    }
    *v32 = v33;
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v35);
    if ( v4 )
      v41 = *v4;
    else
      v41 = 0;
    if ( v41 < v33 )
    {
      do
      {
        v42 = v41;
        v43 = ObReferenceObjectByPointer(*(PVOID *)&v32[2 * v41 + 2], 0, 0LL, 0);
        if ( v43 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v44) = 2;
            WPP_RECORDER_SF_qD(
              WPP_GLOBAL_Control->DeviceExtension,
              v44,
              22,
              22,
              (__int64)&WPP_e848b9e179ab32f347f39b604d9f0dbd_Traceguids,
              *(_QWORD *)&v32[2 * v41 + 2],
              v43);
          }
          --*v32;
          --v41;
          v45 = *v32;
          --v33;
          v46 = *(_QWORD *)&v32[2 * v45 + 2];
          *(_QWORD *)&v32[2 * v45 + 2] = *(_QWORD *)&v32[2 * v42 + 2];
          *(_QWORD *)&v32[2 * v42 + 2] = v46;
        }
        ++v41;
      }
      while ( v41 < v33 );
      v2 = a2;
    }
    if ( _bittest64((const signed __int64 *)(DeviceExtension + 8), 0x25u) )
    {
      v47 = *v32;
      v48 = 0LL;
      if ( *v32 )
      {
        do
        {
          v49 = *(_QWORD *)&v32[2 * v48 + 2];
          v50 = v47;
          v51 = *(_QWORD *)(*(_QWORD *)(v49 + 64) + 8LL);
          if ( (v51 & 0x12000000000LL) != 0 && (v51 & 0x40000000000000LL) != 0 )
          {
            IoDuplicateDependency(*(_QWORD *)(DeviceExtension + 768), v49, v47);
            v50 = *v32;
          }
          v47 = v50;
          if ( (v51 & 0x3000000000LL) != 0 )
          {
            v52 = 0LL;
            if ( v50 )
            {
              v53 = v51 & 0x1000000000LL;
              do
              {
                v54 = *(_QWORD *)&v32[2 * v52 + 2];
                if ( (_DWORD)v52 != (_DWORD)v48
                  && (((-(__int64)(v53 != 0) & 0x2000000000LL) + 0x10000000000LL) & *(_QWORD *)(*(_QWORD *)(v54 + 64)
                                                                                              + 8LL)) != 0
                  && (*(_QWORD *)(*(_QWORD *)(v54 + 64) + 8LL) & 0x40000000000000LL) != 0 )
                {
                  IoSetDependency(*(_QWORD *)&v32[2 * v48 + 2], v54, 2LL);
                }
                v47 = *v32;
                v52 = (unsigned int)(v52 + 1);
              }
              while ( (unsigned int)v52 < *v32 );
            }
          }
          v48 = (unsigned int)(v48 + 1);
        }
        while ( (unsigned int)v48 < v47 );
        v2 = a2;
      }
    }
    if ( v4 )
      ExFreePoolWithTag(*v2, 0);
    *v2 = v32;
  }
  return 0LL;
}
