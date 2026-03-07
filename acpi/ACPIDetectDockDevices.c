__int64 __fastcall ACPIDetectDockDevices(__int64 a1, PVOID *a2)
{
  char v2; // bl
  NTSTATUS v4; // esi
  unsigned int *v5; // r14
  unsigned int v6; // r15d
  __int64 i; // rax
  __int64 v8; // rdi
  __int64 v9; // rcx
  const char *v10; // rax
  const char *v11; // rdx
  __int64 v12; // rcx
  bool v14; // zf
  __int64 Pool2; // rax
  _DWORD *v16; // rsi
  unsigned int v17; // edi
  __int64 j; // rax
  __int64 v19; // rdx
  __int64 v20; // r13
  __int64 v21; // rcx
  __int64 v22; // rcx
  unsigned int *v23; // r14
  unsigned int v24; // ecx
  PVOID *v25; // r12
  __int64 v26; // r13
  PVOID *v27; // r15
  NTSTATUS v28; // eax
  int v29; // edx
  __int64 v30; // rdx
  void *v31; // rcx
  __int64 v32; // [rsp+50h] [rbp-29h] BYREF
  __int64 v33; // [rsp+58h] [rbp-21h]
  PKSPIN_LOCK SpinLock; // [rsp+60h] [rbp-19h]
  KIRQL NewIrql[16]; // [rsp+68h] [rbp-11h]
  __int64 v36; // [rsp+78h] [rbp-1h]
  int v37; // [rsp+80h] [rbp+7h]
  int v38; // [rsp+84h] [rbp+Bh]
  __int64 v39; // [rsp+E0h] [rbp+67h] BYREF
  PVOID *v40; // [rsp+E8h] [rbp+6Fh]
  unsigned int *v41; // [rsp+F0h] [rbp+77h]
  __int64 v42; // [rsp+F8h] [rbp+7Fh]

  v40 = a2;
  v2 = 0;
  v38 = 0;
  v41 = 0LL;
  v4 = 0;
  v39 = 0LL;
  v5 = 0LL;
  v6 = 0;
  *(_OWORD *)NewIrql = 0LL;
  if ( a2 && *a2 )
  {
    v6 = *(_DWORD *)*a2;
    v5 = (unsigned int *)*a2;
    v41 = (unsigned int *)*a2;
  }
  v33 = 0LL;
  v42 = a1 + 800;
  v32 = a1 + 800;
  SpinLock = &AcpiDeviceTreeLock;
  v36 = 816LL;
  v37 = 1;
  for ( i = ACPIExtListStartEnum(&v32); ; i = ACPIExtListEnumNext(&v32) )
  {
    v8 = i;
    if ( !(unsigned __int8)ACPIExtListTestElement(&v32, v4 >= 0) )
      break;
    if ( !v8 )
    {
      if ( v37 == 2 )
        KeReleaseSpinLock(SpinLock, NewIrql[0]);
      break;
    }
    if ( _bittest64((const signed __int64 *)(v8 + 8), 0x39u) )
    {
      v39 = 0LL;
      v4 = ACPIGet(v8, 1096045407, -1878783998, 0, 0, 0LL, 0LL, (__int64)&v39, 0LL);
      if ( (*(_QWORD *)(v8 + 8) & 0x2000000000002LL) == 0
        || (AcpiOverrideAttributes & 0x80000) != 0 && (*(_DWORD *)(v8 + 1008) & 0x200000) != 0 )
      {
        if ( !*(_QWORD *)(v8 + 768) )
          v4 = ACPIBuildPdo(
                 *(struct _DRIVER_OBJECT **)(*(_QWORD *)(a1 + 768) + 8LL),
                 v8,
                 *(struct _DEVICE_OBJECT **)(a1 + 768),
                 0);
        v9 = *(_QWORD *)(v8 + 768);
        if ( v9 )
        {
          if ( !(unsigned __int8)ACPIExtListIsMemberOfRelation(v9, v5) )
            ++v6;
        }
      }
    }
  }
  if ( v4 >= 0 )
  {
    if ( v5 )
      v14 = v6 == *v5;
    else
      v14 = v6 == 0;
    if ( !v14 )
    {
      Pool2 = ExAllocatePool2(64LL, 8 * v6 + 8, 1148216129LL);
      v16 = (_DWORD *)Pool2;
      if ( !Pool2 )
        return 3221225626LL;
      if ( v5 )
      {
        memmove((void *)(Pool2 + 8), v5 + 2, 8LL * *v5);
        v17 = *v5;
      }
      else
      {
        v17 = 0;
      }
      v32 = v42;
      SpinLock = &AcpiDeviceTreeLock;
      v33 = 0LL;
      v36 = 816LL;
      v37 = 2;
      for ( j = ACPIExtListStartEnum(&v32); ; j = ACPIExtListEnumNext(&v32) )
      {
        v20 = j;
        LOBYTE(v19) = v6 > v17;
        if ( !(unsigned __int8)ACPIExtListTestElement(&v32, v19) )
          break;
        if ( v17 < v6 )
        {
          v21 = *(_QWORD *)(v20 + 8);
          if ( ((v21 & 0x2000000000002LL) == 0
             || (AcpiOverrideAttributes & 0x80000) != 0 && (*(_DWORD *)(v20 + 1008) & 0x200000) != 0)
            && (v21 & 0x200000000000000LL) != 0
            && *(_QWORD *)(v20 + 768) )
          {
            v22 = v17++;
            *(_QWORD *)&v16[2 * v22 + 2] = *(_QWORD *)(v20 + 784);
          }
        }
      }
      v23 = v41;
      *v16 = v17;
      if ( v23 )
        v24 = *v23;
      else
        v24 = 0;
      v25 = v40;
      if ( v24 < v17 )
      {
        v26 = v17 - v24;
        v27 = (PVOID *)&v16[2 * v24 + 2];
        do
        {
          v28 = ObReferenceObjectByPointer(*v27, 0, 0LL, 0);
          if ( v28 < 0 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v29) = 2;
              WPP_RECORDER_SF_qD(
                WPP_GLOBAL_Control->DeviceExtension,
                v29,
                21,
                11,
                (__int64)&WPP_e848b9e179ab32f347f39b604d9f0dbd_Traceguids,
                (char)*v27,
                v28);
            }
            v30 = (unsigned int)--*v16;
            v31 = *(void **)&v16[2 * v30 + 2];
            *(_QWORD *)&v16[2 * v30 + 2] = *v27;
            *v27 = v31;
          }
          ++v27;
          --v26;
        }
        while ( v26 );
        v25 = v40;
      }
      if ( v23 )
        ExFreePoolWithTag(*v25, 0);
      *v25 = v16;
    }
    return 0LL;
  }
  else
  {
    v10 = (const char *)&unk_1C00622D0;
    v11 = (const char *)&unk_1C00622D0;
    if ( v8 )
    {
      v12 = *(_QWORD *)(v8 + 8);
      v2 = v8;
      if ( (v12 & 0x200000000000LL) != 0 )
      {
        v10 = *(const char **)(v8 + 608);
        if ( (v12 & 0x400000000000LL) != 0 )
          v11 = *(const char **)(v8 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x12u,
        0xAu,
        (__int64)&WPP_e848b9e179ab32f347f39b604d9f0dbd_Traceguids,
        v4,
        v2,
        v10,
        v11);
    return (unsigned int)v4;
  }
}
