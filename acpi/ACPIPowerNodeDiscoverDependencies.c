/*
 * XREFs of ACPIPowerNodeDiscoverDependencies @ 0x1C0022428
 * Callers:
 *     ACPIDeviceRecordDependencies @ 0x1C0021C48 (ACPIDeviceRecordDependencies.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     ACPIInternalGetDeviceFromNSOBJ @ 0x1C00035BC (ACPIInternalGetDeviceFromNSOBJ.c)
 *     WPP_RECORDER_SF_ @ 0x1C000ABD8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C000ACAC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_sL @ 0x1C0015638 (WPP_RECORDER_SF_sL.c)
 *     AMLIDereferenceHandleEx @ 0x1C0047B40 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C00483B8 (AMLIGetNameSpaceObject.c)
 */

void __fastcall ACPIPowerNodeDiscoverDependencies(_QWORD **a1)
{
  _QWORD **v1; // r15
  __int64 *v2; // rbx
  __int64 *v3; // rsi
  __int64 v4; // rax
  _DWORD *v5; // rcx
  unsigned int v6; // r12d
  void **v7; // r14
  int v8; // eax
  int v9; // edx
  __int64 v10; // r8
  PVOID v11; // rdi
  __int64 DeviceExtension; // r13
  _QWORD *v13; // rdi
  _QWORD *v14; // r15
  __int64 v15; // rax
  __int64 v16; // rdx
  char v17; // al
  int v18; // eax
  int v19; // edx
  _QWORD *v20; // rax
  int v21; // edx
  __int64 **v22; // r8
  __int64 *v23; // rdx
  _QWORD *v24; // rdx
  PVOID Object[2]; // [rsp+48h] [rbp-10h] BYREF
  int v27; // [rsp+A8h] [rbp+50h] BYREF
  int v28; // [rsp+B0h] [rbp+58h] BYREF
  unsigned int v29; // [rsp+B8h] [rbp+60h]

  v1 = a1;
  v28 = 0;
  v27 = 0;
  Object[0] = 0LL;
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  v2 = (__int64 *)AcpiPowerNodeList;
  if ( (__int64 *)AcpiPowerNodeList != &AcpiPowerNodeList )
  {
    while ( 1 )
    {
      v3 = v2;
      v2 = (__int64 *)*v2;
      if ( (v3[2] & 0x1000) != 0 )
      {
        v4 = v3[12];
        if ( v4 )
        {
          v5 = *(_DWORD **)(v4 + 32);
          v6 = 0;
          v29 = *v5;
          if ( v29 )
            break;
        }
      }
LABEL_30:
      if ( v2 == &AcpiPowerNodeList )
        goto LABEL_31;
    }
    v7 = (void **)(v5 + 10);
    while ( 1 )
    {
      v8 = AMLIGetNameSpaceObject(*v7);
      if ( v8 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_sL(
            WPP_GLOBAL_Control->DeviceExtension,
            v9,
            21,
            40,
            (__int64)&WPP_afb93ce9a898342faba18bc7242ff62e_Traceguids,
            (__int64)*v7,
            v8);
        goto LABEL_29;
      }
      ACPIInternalGetDeviceFromNSOBJ(0LL, Object, v10, 0LL);
      AMLIDereferenceHandleEx(0LL);
      v11 = Object[0];
      if ( Object[0] )
      {
        DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)Object[0]);
        ObfDereferenceObject(v11);
        Object[0] = 0LL;
        if ( DeviceExtension )
          break;
      }
LABEL_29:
      ++v6;
      v7 += 5;
      if ( v6 >= v29 )
        goto LABEL_30;
    }
    v13 = *v1;
    while ( 1 )
    {
      if ( v13 == v1 )
        goto LABEL_29;
      v14 = v13;
      v13 = (_QWORD *)*v13;
      v15 = v14[5];
      if ( v15 )
      {
        v16 = *(_QWORD *)(v15 + 784);
        if ( v16 )
        {
          if ( v15 == DeviceExtension )
          {
            v17 = 1;
            v27 = 1;
            goto LABEL_21;
          }
          v18 = IoTestDependency(*(_QWORD *)(DeviceExtension + 784), v16, &v28, &v27);
          if ( v18 >= 0 )
          {
            v17 = v27;
LABEL_21:
            if ( (v17 & 3) != 0 )
            {
              v20 = ExAllocateFromNPagedLookasideList(&RequestDependencyLookAsideList);
              if ( v20 )
              {
                v22 = (__int64 **)v3[14];
                v23 = v20 + 2;
                if ( *v22 != v3 + 13
                  || (*v23 = (__int64)(v3 + 13),
                      v20[3] = v22,
                      *v22 = v23,
                      v3[14] = (__int64)v23,
                      v24 = (_QWORD *)v14[11],
                      (_QWORD *)*v24 != v14 + 10) )
                {
                  __fastfail(3u);
                }
                *v20 = v14 + 10;
                v20[1] = v24;
                *v24 = v20;
                v14[11] = v20;
              }
              else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v21) = 2;
                WPP_RECORDER_SF_(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v21,
                  21,
                  42,
                  (__int64)&WPP_afb93ce9a898342faba18bc7242ff62e_Traceguids);
              }
            }
            goto LABEL_28;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v19) = 2;
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              v19,
              21,
              41,
              (__int64)&WPP_afb93ce9a898342faba18bc7242ff62e_Traceguids,
              v18);
          }
        }
      }
LABEL_28:
      v1 = a1;
    }
  }
LABEL_31:
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
}
