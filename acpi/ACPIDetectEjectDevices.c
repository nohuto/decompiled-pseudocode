/*
 * XREFs of ACPIDetectEjectDevices @ 0x1C001A6C0
 * Callers:
 *     ACPIDockIrpQueryEjectRelations @ 0x1C007B228 (ACPIDockIrpQueryEjectRelations.c)
 *     ACPIBusAndFilterIrpQueryEjectRelations @ 0x1C007DD9C (ACPIBusAndFilterIrpQueryEjectRelations.c)
 * Callees:
 *     memmove @ 0x1C0001E80 (memmove.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C000D9B4 (ACPIBuildMissingEjectionRelations.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001B508 (WPP_RECORDER_SF_qD.c)
 *     ACPIExtListEnumNext @ 0x1C00263F4 (ACPIExtListEnumNext.c)
 *     ACPIExtListIsMemberOfRelation @ 0x1C00264C4 (ACPIExtListIsMemberOfRelation.c)
 *     ACPIExtListStartEnum @ 0x1C00264F8 (ACPIExtListStartEnum.c)
 *     ACPIExtListTestElement @ 0x1C0026554 (ACPIExtListTestElement.c)
 *     ACPIDetectCouldExtensionBeInRelation @ 0x1C00824A0 (ACPIDetectCouldExtensionBeInRelation.c)
 */

__int64 __fastcall ACPIDetectEjectDevices(__int64 a1, PVOID *a2, __int64 a3)
{
  unsigned int *v3; // rdi
  unsigned int v4; // r14d
  __int64 v8; // r15
  __int64 i; // rax
  __int64 v10; // rdx
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rcx
  PVOID *v14; // r12
  __int64 v15; // rcx
  bool v16; // zf
  __int64 Pool2; // rax
  _DWORD *v18; // rsi
  unsigned int v20; // ebx
  __int64 j; // rax
  __int64 v22; // rdx
  __int64 v23; // r15
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rax
  unsigned int v30; // ecx
  __int64 v31; // rbx
  PVOID *v32; // r14
  NTSTATUS v33; // eax
  int v34; // edx
  __int64 v35; // rdx
  void *v36; // rcx
  __int64 v37; // [rsp+40h] [rbp-40h] BYREF
  __int64 v38; // [rsp+48h] [rbp-38h]
  PKSPIN_LOCK SpinLock; // [rsp+50h] [rbp-30h]
  KIRQL NewIrql[16]; // [rsp+58h] [rbp-28h]
  __int64 v41; // [rsp+68h] [rbp-18h]
  int v42; // [rsp+70h] [rbp-10h]
  int v43; // [rsp+74h] [rbp-Ch]
  __int64 v44; // [rsp+C0h] [rbp+40h] BYREF
  PVOID *v45; // [rsp+C8h] [rbp+48h]

  v45 = a2;
  *(_OWORD *)NewIrql = 0LL;
  v43 = 0;
  v3 = 0LL;
  v44 = 0LL;
  v4 = 0;
  ACPIBuildMissingEjectionRelations();
  if ( a2 && *a2 )
  {
    v4 = *(_DWORD *)*a2;
    v3 = (unsigned int *)*a2;
  }
  v38 = 0LL;
  v8 = a1 + 832;
  SpinLock = &AcpiDeviceTreeLock;
  v37 = a1 + 832;
  v41 = 848LL;
  v42 = 1;
  for ( i = ACPIExtListStartEnum(&v37); ; i = ACPIExtListEnumNext(&v37) )
  {
    LOBYTE(v10) = 1;
    v11 = i;
    if ( !(unsigned __int8)ACPIExtListTestElement(&v37, v10) )
      break;
    if ( (*(_QWORD *)(v11 + 8) & 0x2000000000002LL) == 0 )
    {
      if ( *(_QWORD *)(v11 + 784) )
      {
        v12 = ACPIDetectCouldExtensionBeInRelation(v11, (_DWORD)v3, 0, 0, (__int64)&v44);
        if ( !v44 && v12 >= 0 )
        {
          v13 = *(_QWORD *)(v11 + 784);
          if ( v13 )
          {
            if ( !(unsigned __int8)ACPIExtListIsMemberOfRelation(v13, v3) )
              ++v4;
          }
        }
      }
    }
  }
  v14 = v45;
  if ( a3 )
  {
    if ( (*(_QWORD *)(a3 + 8) & 0x2000000000002LL) == 0 )
    {
      v15 = *(_QWORD *)(a3 + 784);
      if ( v15 )
      {
        if ( !(unsigned __int8)ACPIExtListIsMemberOfRelation(v15, v3) )
          ++v4;
      }
    }
  }
  if ( v3 )
    v16 = v4 == *v3;
  else
    v16 = v4 == 0;
  if ( !v16 )
  {
    Pool2 = ExAllocatePool2(256LL, 8 * v4 + 8, 1148216129LL);
    v18 = (_DWORD *)Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    if ( v3 )
    {
      memmove((void *)(Pool2 + 8), v3 + 2, 8LL * *v3);
      v20 = *v3;
    }
    else
    {
      v20 = 0;
    }
    v38 = 0LL;
    SpinLock = &AcpiDeviceTreeLock;
    v37 = v8;
    v41 = 848LL;
    v42 = 1;
    for ( j = ACPIExtListStartEnum(&v37); ; j = ACPIExtListEnumNext(&v37) )
    {
      v23 = j;
      LOBYTE(v22) = v4 > v20;
      if ( !(unsigned __int8)ACPIExtListTestElement(&v37, v22) )
        break;
      if ( !v23 )
      {
        if ( v42 == 2 )
          KeReleaseSpinLock(SpinLock, NewIrql[0]);
        break;
      }
      if ( (*(_QWORD *)(v23 + 8) & 0x202000000000002LL) == 0 )
      {
        v24 = *(_QWORD *)(v23 + 784);
        if ( v24 )
        {
          if ( !(unsigned __int8)ACPIExtListIsMemberOfRelation(v24, v3) && v20 < v4 )
          {
            v26 = v20++;
            *(_QWORD *)&v18[2 * v26 + 2] = v25;
          }
        }
      }
    }
    if ( a3 )
    {
      if ( (*(_QWORD *)(a3 + 8) & 0x2000000000002LL) == 0 )
      {
        v27 = *(_QWORD *)(a3 + 784);
        if ( v27 )
        {
          if ( !(unsigned __int8)ACPIExtListIsMemberOfRelation(v27, v3) && v20 < v4 )
          {
            v29 = v20++;
            *(_QWORD *)&v18[2 * v29 + 2] = v28;
          }
        }
      }
    }
    *v18 = v20;
    if ( v3 )
      v30 = *v3;
    else
      v30 = 0;
    if ( v30 < v20 )
    {
      v31 = v20 - v30;
      v32 = (PVOID *)&v18[2 * v30 + 2];
      do
      {
        v33 = ObReferenceObjectByPointer(*v32, 0, 0LL, 0);
        if ( v33 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v34) = 2;
            WPP_RECORDER_SF_qD(
              WPP_GLOBAL_Control->DeviceExtension,
              v34,
              22,
              15,
              (__int64)&WPP_e848b9e179ab32f347f39b604d9f0dbd_Traceguids,
              (char)*v32,
              v33);
          }
          v35 = (unsigned int)--*v18;
          v36 = *(void **)&v18[2 * v35 + 2];
          *(_QWORD *)&v18[2 * v35 + 2] = *v32;
          *v32 = v36;
        }
        ++v32;
        --v31;
      }
      while ( v31 );
    }
    if ( v3 )
      ExFreePoolWithTag(*v14, 0);
    *v14 = v18;
  }
  return 0LL;
}
