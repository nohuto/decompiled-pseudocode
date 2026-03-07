__int64 __fastcall DrvGetPreferredMode(struct _devicemodeW *a1, struct tagGRAPHICS_DEVICE *a2)
{
  struct _devicemodeW *v3; // r13
  int v4; // edi
  unsigned int v5; // r12d
  NSInstrumentation::CLeakTrackingAllocator *v6; // rbx
  int v7; // eax
  __int64 Pool2; // rsi
  unsigned int v9; // r15d
  struct tagGRAPHICS_DEVICE *v10; // r13
  __int64 *v11; // rcx
  _BYTE *v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // rbx
  int DeviceInfoInternal; // edi
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // eax
  __int64 DxgkWin32kInterface; // rax
  unsigned int v20; // eax
  unsigned int v21; // ebx
  _QWORD *v23; // rax
  unsigned int v24; // r10d
  __int64 v25; // r11
  unsigned int v26; // [rsp+20h] [rbp-9E8h]
  unsigned int v27; // [rsp+28h] [rbp-9E0h] BYREF
  int v28; // [rsp+30h] [rbp-9D8h]
  unsigned __int64 v29[2]; // [rsp+40h] [rbp-9C8h] BYREF
  int v30; // [rsp+50h] [rbp-9B8h]
  __int64 v31; // [rsp+60h] [rbp-9A8h] BYREF
  _BYTE v32[8]; // [rsp+68h] [rbp-9A0h] BYREF
  unsigned int v33; // [rsp+70h] [rbp-998h]
  PVOID P; // [rsp+78h] [rbp-990h]
  __int64 v35; // [rsp+80h] [rbp-988h] BYREF
  struct tagGRAPHICS_DEVICE *v36; // [rsp+88h] [rbp-980h]
  struct _devicemodeW *v37; // [rsp+90h] [rbp-978h]
  _OWORD v38[5]; // [rsp+A0h] [rbp-968h] BYREF
  PVOID BackTrace[20]; // [rsp+F0h] [rbp-918h] BYREF
  _BYTE v40[944]; // [rsp+190h] [rbp-878h] BYREF
  _OWORD v41[14]; // [rsp+540h] [rbp-4C8h] BYREF
  __int64 v42; // [rsp+620h] [rbp-3E8h] BYREF
  unsigned __int64 v43; // [rsp+628h] [rbp-3E0h]
  __int128 v44; // [rsp+630h] [rbp-3D8h]
  __int128 v45; // [rsp+640h] [rbp-3C8h]
  __m128i v46; // [rsp+650h] [rbp-3B8h]
  __int128 v47; // [rsp+660h] [rbp-3A8h]
  __int64 v48; // [rsp+9B4h] [rbp-54h]
  int v49; // [rsp+9CCh] [rbp-3Ch]

  v36 = a2;
  v3 = a1;
  v37 = a1;
  if ( (*((_DWORD *)a2 + 40) & 0x800000) == 0 )
    return 3221225711LL;
  v4 = 0x7FFF;
  v26 = 0x7FFF;
  v28 = 0x7FFF;
  v5 = 0x7FFF;
  v27 = 1986356295;
  v31 = 260LL;
  v6 = gpLeakTrackingAllocator;
  v35 = 65755LL;
  v7 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( !*(_DWORD *)gpLeakTrackingAllocator )
  {
    Pool2 = ExAllocatePool2(260LL, 65755LL, 1986356295LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v6 + 14);
LABEL_5:
    if ( !Pool2 )
      return 3221225495LL;
    goto LABEL_6;
  }
  if ( v7 != 1 )
  {
    if ( v7 == 2 )
    {
      v29[0] = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x76656447u, v29) )
      {
        v29[0] = (unsigned __int64)&v31;
        v29[1] = (unsigned __int64)&v27;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v6,
                  (__int64)v29,
                  &v35);
        goto LABEL_5;
      }
      Pool2 = ExAllocatePool2(v25, 65771LL, v24);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v6 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v6,
                                  Pool2,
                                  v29[0],
                                  BackTrace) )
          {
            Pool2 += 16LL;
            goto LABEL_5;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v6,
                                     Pool2,
                                     v29[0],
                                     BackTrace) )
        {
          goto LABEL_5;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v6 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
LABEL_38:
    Pool2 = 0LL;
    goto LABEL_5;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x76656447u) )
    goto LABEL_38;
  v23 = (_QWORD *)ExAllocatePool2(v31 & 0xFFFFFFFFFFFFFFFDuLL, 65771LL, v27);
  Pool2 = (__int64)v23;
  if ( !v23
    || (_InterlockedIncrement64((volatile signed __int64 *)v6 + 14),
        *v23 = 1986356295LL,
        Pool2 = (__int64)(v23 + 2),
        v23 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v6 + 1),
      (const void *)0x76656447);
    goto LABEL_5;
  }
LABEL_6:
  v33 = 0;
  P = 0LL;
  EnsureMonitorDevices::UpdateMonitorDevicesOnGraphicsDevice((EnsureMonitorDevices *)v32, a2);
  v9 = 0;
  if ( !v33 )
    goto LABEL_20;
  v10 = v36;
  do
  {
    *(_OWORD *)v29 = 0LL;
    v30 = 0;
    EnsureMonitorDevices::GetMonitorDevice((EnsureMonitorDevices *)v32, v9, (struct tagVIDEO_MONITOR_DEVICE *)v29);
    if ( (v29[0] & 3) != 3 )
      goto LABEL_18;
    v49 = 0;
    memset(v40, 0, 0x3ACuLL);
    v11 = &v42;
    v12 = v40;
    v13 = 7LL;
    do
    {
      *(_OWORD *)v11 = *(_OWORD *)v12;
      *((_OWORD *)v11 + 1) = *((_OWORD *)v12 + 1);
      *((_OWORD *)v11 + 2) = *((_OWORD *)v12 + 2);
      *((_OWORD *)v11 + 3) = *((_OWORD *)v12 + 3);
      *((_OWORD *)v11 + 4) = *((_OWORD *)v12 + 4);
      *((_OWORD *)v11 + 5) = *((_OWORD *)v12 + 5);
      *((_OWORD *)v11 + 6) = *((_OWORD *)v12 + 6);
      v11 += 16;
      *((_OWORD *)v11 - 1) = *((_OWORD *)v12 + 7);
      v12 += 128;
      --v13;
    }
    while ( v13 );
    *(_OWORD *)v11 = *(_OWORD *)v12;
    *((_OWORD *)v11 + 1) = *((_OWORD *)v12 + 1);
    v11[4] = *((_QWORD *)v12 + 4);
    *((_DWORD *)v11 + 10) = *((_DWORD *)v12 + 10);
    v42 = 0x3ACFFFFFFF9LL;
    v14 = v29[1];
    v43 = v29[1];
    LODWORD(v44) = HIDWORD(v29[0]);
    DeviceInfoInternal = DrvDisplayConfigGetDeviceInfoInternal((struct DISPLAYCONFIG_DEVICE_INFO_HEADER *)&v42, 0);
    memset(v41, 0, 0xD8uLL);
    *(_QWORD *)&v41[1] = *((_QWORD *)v10 + 30);
    DWORD2(v41[1]) = *((_DWORD *)v10 + 62);
    HIDWORD(v41[1]) = HIDWORD(v29[0]);
    if ( DeviceInfoInternal < 0 )
    {
      memset(v38, 0, sizeof(v38));
      v44 = v38[1];
      v45 = v38[2];
      v46 = (__m128i)v38[3];
      v47 = v38[4];
      v42 = 0x5000000003LL;
      v43 = v14;
      LODWORD(v44) = HIDWORD(v29[0]);
      if ( (int)DrvDisplayConfigGetDeviceInfoInternal((struct DISPLAYCONFIG_DEVICE_INFO_HEADER *)&v42, 0) < 0 )
      {
        v4 = v26;
        goto LABEL_18;
      }
      v41[2] = v45;
      v41[3] = v46;
      v41[4] = v47;
      *(_QWORD *)((char *)&v41[12] + 4) = v46.m128i_i64[0];
      *((_QWORD *)&v41[5] + 1) = __PAIR64__(
                                   _mm_cvtsi128_si32(_mm_srli_si128(v46, 12)),
                                   _mm_cvtsi128_si32(_mm_srli_si128(v46, 8)));
      HIDWORD(v41[7]) = DWORD1(v44);
      v18 = DWORD2(v44);
    }
    else
    {
      v17 = (unsigned int)v48;
      *((_QWORD *)&v41[3] + 1) = v48;
      v18 = HIDWORD(v48);
      *(_QWORD *)&v41[3] = 0xFFFFFFFEFFFFFFFEuLL;
      *(_QWORD *)((char *)&v41[12] + 4) = 0xFFFFFFFEFFFFFFFEuLL;
      HIDWORD(v41[4]) = 1;
      *((_QWORD *)&v41[5] + 1) = v48;
      HIDWORD(v41[7]) = v48;
    }
    LODWORD(v41[8]) = v18;
    DWORD1(v41[13]) = 1;
    *(_QWORD *)&v41[0] = 0x700001030387LL;
    LODWORD(v41[7]) = 1;
    DWORD2(v41[6]) = 1;
    LODWORD(v41[6]) = 21;
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v17, v16);
    v4 = v26;
    if ( (*(int (__fastcall **)(_OWORD *, __int64))(DxgkWin32kInterface + 688))(v41, Pool2) >= 0 )
    {
      v20 = *(_DWORD *)(Pool2 + 184);
      if ( v20 >= v5 )
        v20 = v5;
      v5 = v20;
      if ( *(_DWORD *)(Pool2 + 172) <= v26 )
      {
        v4 = *(_DWORD *)(Pool2 + 172);
        v26 = v4;
        v28 = *(_DWORD *)(Pool2 + 176);
      }
    }
LABEL_18:
    ++v9;
  }
  while ( v9 < v33 );
  v3 = v37;
LABEL_20:
  NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)Pool2);
  v21 = -1073741583;
  if ( v4 != 0x7FFF )
    v21 = 0;
  v27 = v21;
  v3->dmDisplayFrequency = v5;
  v3->dmPelsWidth = v4;
  v3->dmPelsHeight = v28;
  v3->dmFields = 5767168;
  if ( P )
    ExFreePoolWithTag(P, 0);
  return v21;
}
