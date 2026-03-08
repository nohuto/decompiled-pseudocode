/*
 * XREFs of ACPIBusAndFilterIrpQueryRemovalRelations @ 0x1C0016248
 * Callers:
 *     ACPIFilterIrpQueryDeviceRelations @ 0x1C007A330 (ACPIFilterIrpQueryDeviceRelations.c)
 *     ACPIBusIrpQueryDeviceRelations @ 0x1C007F9F0 (ACPIBusIrpQueryDeviceRelations.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     memmove @ 0x1C0001E80 (memmove.c)
 *     WPP_RECORDER_SF_dqss @ 0x1C0009A6C (WPP_RECORDER_SF_dqss.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C000A374 (WPP_RECORDER_SF_qqss.c)
 *     WPP_RECORDER_SF_qss @ 0x1C0015444 (WPP_RECORDER_SF_qss.c)
 *     WPP_RECORDER_SF_dqqss @ 0x1C0017D70 (WPP_RECORDER_SF_dqqss.c)
 */

__int64 __fastcall ACPIBusAndFilterIrpQueryRemovalRelations(ULONG_PTR a1, PVOID *a2)
{
  __int64 DeviceExtension; // rax
  unsigned int v4; // ebx
  _QWORD *v5; // rdi
  __int64 v6; // rax
  const char *v7; // rsi
  const char *v8; // rcx
  KIRQL v10; // al
  __int64 v11; // rcx
  const char *v12; // rsi
  __int64 v13; // rdx
  _QWORD **v14; // r13
  int v15; // eax
  _QWORD *v16; // rcx
  __int64 Pool2; // rax
  _DWORD *v18; // r15
  unsigned int *v19; // r14
  __int64 v20; // rax
  const char *v21; // rdx
  const char *v22; // rcx
  _QWORD *i; // r14
  void *v24; // r8
  void *v25; // rcx
  void *v26; // rbp
  __int64 v27; // rax
  __int64 v28; // rcx
  const char *v29; // rax
  int v30; // [rsp+20h] [rbp-68h]
  KIRQL NewIrql; // [rsp+A0h] [rbp+18h]

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v4 = 0;
  v5 = (_QWORD *)DeviceExtension;
  if ( *(_QWORD *)(DeviceExtension + 760) )
  {
    v10 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
    v11 = v5[119];
    v12 = (const char *)&unk_1C00622D0;
    NewIrql = v10;
    if ( v11 && (v13 = *(_QWORD *)(v11 + 72)) != 0 )
    {
      v14 = (_QWORD **)(v13 + 48);
      v15 = 0;
      v16 = *(_QWORD **)(v13 + 48);
      while ( v16 != v14 )
      {
        v16 = (_QWORD *)*v16;
        ++v15;
      }
      if ( *a2 )
        v15 += *(_DWORD *)*a2;
      Pool2 = ExAllocatePool2(64LL, 8LL * (unsigned int)(v15 - 1) + 16, 1148216129LL);
      v18 = (_DWORD *)Pool2;
      if ( Pool2 )
      {
        v19 = (unsigned int *)*a2;
        if ( *a2 )
        {
          memmove((void *)(Pool2 + 8), v19 + 2, 8LL * *v19);
          *v18 = *v19;
        }
        v20 = v5[1];
        v21 = (const char *)&unk_1C00622D0;
        v22 = (const char *)&unk_1C00622D0;
        if ( (v20 & 0x200000000000LL) != 0 )
        {
          v21 = (const char *)v5[76];
          if ( (v20 & 0x400000000000LL) != 0 )
            v22 = (const char *)v5[77];
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            0xCu,
            0x13u,
            (__int64)&WPP_efe410a963c03a77fa130710cec25e42_Traceguids,
            (char)v5,
            v21,
            v22);
        for ( i = *v14; i != v14; i = (_QWORD *)*i )
        {
          v24 = &unk_1C00622D0;
          v25 = &unk_1C00622D0;
          v26 = *(void **)(*(i - 1) + 784LL);
          v27 = v5[1];
          if ( (v27 & 0x200000000000LL) != 0 )
          {
            v24 = (void *)v5[76];
            if ( (v27 & 0x400000000000LL) != 0 )
              v25 = (void *)v5[77];
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_dqqss(
              WPP_GLOBAL_Control->DeviceExtension,
              (_DWORD)v21,
              (_DWORD)v24,
              0,
              v30,
              *v18,
              (char)v26,
              (char)v5,
              (__int64)v24,
              (__int64)v25);
          if ( v26 && ObReferenceObjectByPointer(v26, 0, 0LL, 0) >= 0 )
            *(_QWORD *)&v18[2 * (*v18)++ + 2] = v26;
        }
        if ( *a2 )
          ExFreePoolWithTag(*a2, 0);
        *a2 = v18;
      }
      else
      {
        v4 = -1073741670;
      }
    }
    else
    {
      v4 = -1073741637;
    }
    KeReleaseSpinLock(&AcpiPowerLock, NewIrql);
    if ( (int)(v4 + 0x80000000) >= 0 && v4 != -1073741637 )
    {
      v28 = v5[1];
      v29 = (const char *)&unk_1C00622D0;
      if ( (v28 & 0x200000000000LL) != 0 )
      {
        v12 = (const char *)v5[76];
        if ( (v28 & 0x400000000000LL) != 0 )
          v29 = (const char *)v5[77];
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xCu,
          0x15u,
          (__int64)&WPP_efe410a963c03a77fa130710cec25e42_Traceguids,
          v4,
          (char)v5,
          v12,
          v29);
    }
    return v4;
  }
  else
  {
    v6 = *(_QWORD *)(DeviceExtension + 8);
    v7 = (const char *)&unk_1C00622D0;
    v8 = (const char *)&unk_1C00622D0;
    if ( (v6 & 0x200000000000LL) != 0 )
    {
      v7 = (const char *)v5[76];
      if ( (v6 & 0x400000000000LL) != 0 )
        v8 = (const char *)v5[77];
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xCu,
        0x12u,
        (__int64)&WPP_efe410a963c03a77fa130710cec25e42_Traceguids,
        0,
        (char)v5,
        v7,
        v8);
    return 3221225485LL;
  }
}
