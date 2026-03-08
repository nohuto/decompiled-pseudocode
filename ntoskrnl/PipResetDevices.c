/*
 * XREFs of PipResetDevices @ 0x140B5B0A4
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140B599CC (IopInitializePlugPlayServices.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     DbgPrintEx @ 0x1402BDD70 (DbgPrintEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     _CmGetMatchingFilteredDeviceList @ 0x140778448 (_CmGetMatchingFilteredDeviceList.c)
 *     _PnpCtxRegOpenKey @ 0x14081D410 (_PnpCtxRegOpenKey.c)
 *     _PnpCtxRegCloseKey @ 0x1408653B4 (_PnpCtxRegCloseKey.c)
 *     _PnpCtxRegQueryValue @ 0x14086617C (_PnpCtxRegQueryValue.c)
 *     _PnpCtxRegEnumValue @ 0x140866444 (_PnpCtxRegEnumValue.c)
 *     _PnpCtxRegQueryInfoKey @ 0x1408665AC (_PnpCtxRegQueryInfoKey.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     PipResetDevice @ 0x140B91440 (PipResetDevice.c)
 */

__int64 __fastcall PipResetDevices(__int64 a1)
{
  __int64 v1; // r13
  ULONG v2; // r14d
  __int64 result; // rax
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // rcx
  struct _KTHREAD *CurrentThread; // rax
  void *v8; // rbx
  int v9; // edi
  void *Pool2; // rsi
  __int64 v11; // rcx
  struct _KTHREAD *v12; // rax
  _WORD *v13; // rbx
  int v14; // r13d
  void *v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rcx
  unsigned int v18; // r15d
  unsigned int v19; // r12d
  int v20; // eax
  int MatchingFilteredDeviceList; // eax
  int v22; // edi
  __int64 v23; // rax
  _WORD *i; // rdi
  __int64 v25; // rax
  unsigned int v26; // r15d
  int v27; // r12d
  int v28; // eax
  int v29; // eax
  __int64 v30; // rax
  _WORD *v31; // rsi
  __int64 v32; // r15
  __int64 v33; // rax
  unsigned int v34; // [rsp+50h] [rbp-28h]
  void *v35; // [rsp+58h] [rbp-20h] BYREF
  __int64 v36; // [rsp+60h] [rbp-18h]
  void *v37; // [rsp+68h] [rbp-10h] BYREF
  unsigned int v38; // [rsp+C0h] [rbp+48h] BYREF
  int v39; // [rsp+C4h] [rbp+4Ch]
  unsigned int v40; // [rsp+C8h] [rbp+50h] BYREF
  int v41; // [rsp+D0h] [rbp+58h] BYREF
  int v42; // [rsp+D8h] [rbp+60h]

  v39 = HIDWORD(a1);
  v1 = *(_QWORD *)&PiPnpRtlCtx;
  v2 = 0;
  v36 = *(_QWORD *)&PiPnpRtlCtx;
  v37 = 0LL;
  v41 = 0;
  v38 = 0;
  result = PnpCtxRegOpenKey(*(__int64 *)&PiPnpRtlCtx, 2147483650LL, (__int64)L"SYSTEM", 0, 1u, (__int64)&v37);
  if ( (int)result >= 0 )
  {
    v40 = 4;
    v5 = PnpCtxRegQueryValue(v4, v37, L"DevModeEverEnabled", &v41, &v38, &v40);
    v34 = v5;
    PnpCtxRegCloseKey(v6, v37);
    if ( v5 >= 0 && v38 )
    {
      return (unsigned int)v5;
    }
    else
    {
      v38 = 0;
      v35 = 0LL;
      CurrentThread = KeGetCurrentThread();
      v8 = 0LL;
      v42 = 0;
      v9 = 0;
      v41 = 0;
      v40 = 0;
      Pool2 = 0LL;
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
      if ( (int)PnpCtxRegOpenKey(
                  v1,
                  2147483650LL,
                  (__int64)L"System\\CurrentControlSet\\Control\\StateSeparation\\PnP\\ResetDevices\\Classes",
                  0,
                  0x20019u,
                  (__int64)&v35) >= 0
        && (int)PnpCtxRegQueryInfoKey(v11, (int)v35, 0, 0, (__int64)&v40, (__int64)&v41, 0LL) >= 0 )
      {
        v18 = v40;
        if ( v40 )
        {
          v19 = v41 + 1;
          Pool2 = (void *)ExAllocatePool2(256LL, 2LL * (unsigned int)(v41 + 1), 0x6E697050u);
          if ( Pool2 )
          {
            v11 = 0LL;
            if ( v18 )
            {
              while ( 1 )
              {
                v40 = v19;
                v20 = PnpCtxRegEnumValue(0LL, v35, v2, Pool2, (__int64)&v40, 0LL, 0LL, 0LL);
                v11 = 0LL;
                if ( v20 >= 0 )
                {
                  DbgPrintEx(0x20u, 0, "Resetting devices in device setup class '%ws'\n", Pool2);
                  MatchingFilteredDeviceList = CmGetMatchingFilteredDeviceList(
                                                 v1,
                                                 (__int64)Pool2,
                                                 128,
                                                 0LL,
                                                 0LL,
                                                 (__int64)v8,
                                                 v9,
                                                 (__int64)&v38);
                  if ( MatchingFilteredDeviceList == -1073741789 )
                  {
                    if ( v8 )
                      ExFreePoolWithTag(v8, 0);
                    v22 = v38;
                    v42 = v38;
                    v23 = ExAllocatePool2(256LL, 2LL * v38, 0x6E697050u);
                    v11 = 0LL;
                    v8 = (void *)v23;
                    if ( !v23 )
                    {
LABEL_38:
                      v2 = 0;
                      break;
                    }
                    MatchingFilteredDeviceList = CmGetMatchingFilteredDeviceList(
                                                   v1,
                                                   (__int64)Pool2,
                                                   128,
                                                   0LL,
                                                   0LL,
                                                   v23,
                                                   v22,
                                                   (__int64)&v38);
                  }
                  v11 = 0LL;
                  if ( MatchingFilteredDeviceList >= 0 )
                  {
                    if ( v38 )
                    {
                      for ( i = v8; *i; i += v25 + 1 )
                      {
                        PipResetDevice(v1, i);
                        v25 = -1LL;
                        v11 = 0LL;
                        do
                          ++v25;
                        while ( i[v25] );
                      }
                    }
                  }
                }
                v9 = v42;
                if ( ++v2 >= v18 )
                  goto LABEL_38;
              }
            }
          }
        }
      }
      if ( v35 )
        PnpCtxRegCloseKey(v11, v35);
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
      if ( v8 )
        ExFreePoolWithTag(v8, 0);
      ExReleaseResourceLite(&PnpRegistryDeviceResource);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v38 = 0;
      v35 = 0LL;
      v12 = KeGetCurrentThread();
      v13 = 0LL;
      v14 = 0;
      v41 = 0;
      v40 = 0;
      v15 = 0LL;
      --v12->KernelApcDisable;
      ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
      v16 = v36;
      if ( (int)PnpCtxRegOpenKey(
                  v36,
                  2147483650LL,
                  (__int64)L"System\\CurrentControlSet\\Control\\StateSeparation\\PnP\\ResetDevices\\Services",
                  0,
                  0x20019u,
                  (__int64)&v35) >= 0
        && (int)PnpCtxRegQueryInfoKey(v17, (int)v35, 0, 0, (__int64)&v40, (__int64)&v41, 0LL) >= 0 )
      {
        v26 = v40;
        if ( v40 )
        {
          v27 = v41 + 1;
          v42 = v41 + 1;
          v15 = (void *)ExAllocatePool2(256LL, 2LL * (unsigned int)(v41 + 1), 0x6E697050u);
          if ( v15 )
          {
            v17 = 0LL;
            if ( v26 )
            {
              do
              {
                v41 = v27;
                v28 = PnpCtxRegEnumValue(0LL, v35, v2, v15, (__int64)&v41, 0LL, 0LL, 0LL);
                v17 = 0LL;
                if ( v28 >= 0 )
                {
                  DbgPrintEx(0x20u, 0, "Resetting devices using service '%ws'\n", v15);
                  v29 = CmGetMatchingFilteredDeviceList(
                          v16,
                          (__int64)v15,
                          2,
                          0LL,
                          0LL,
                          (__int64)v13,
                          v14,
                          (__int64)&v38);
                  if ( v29 == -1073741789 )
                  {
                    if ( v13 )
                      ExFreePoolWithTag(v13, 0);
                    v14 = v38;
                    v30 = ExAllocatePool2(256LL, 2LL * v38, 0x6E697050u);
                    v17 = 0LL;
                    v13 = (_WORD *)v30;
                    if ( !v30 )
                      break;
                    v29 = CmGetMatchingFilteredDeviceList(v16, (__int64)v15, 2, 0LL, 0LL, v30, v14, (__int64)&v38);
                  }
                  v17 = 0LL;
                  if ( v29 >= 0 && v38 )
                  {
                    v31 = v13;
                    if ( *v13 )
                    {
                      v32 = v36;
                      do
                      {
                        PipResetDevice(v32, v31);
                        v33 = -1LL;
                        v17 = 0LL;
                        do
                          ++v33;
                        while ( v31[v33] );
                        v31 += v33 + 1;
                      }
                      while ( *v31 );
                      v26 = v40;
                      v27 = v42;
                    }
                    v16 = v36;
                  }
                }
                ++v2;
              }
              while ( v2 < v26 );
            }
          }
        }
      }
      if ( v35 )
        PnpCtxRegCloseKey(v17, v35);
      if ( v15 )
        ExFreePoolWithTag(v15, 0);
      if ( v13 )
        ExFreePoolWithTag(v13, 0);
      ExReleaseResourceLite(&PnpRegistryDeviceResource);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      return v34;
    }
  }
  return result;
}
