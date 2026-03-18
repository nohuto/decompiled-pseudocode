/*
 * XREFs of PpmParkSteerInterrupts @ 0x1402FF620
 * Callers:
 *     <none>
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     KiOrAffinityEx @ 0x1402FEC10 (KiOrAffinityEx.c)
 *     KiSubtractAffinityEx @ 0x1402FEDA0 (KiSubtractAffinityEx.c)
 *     KeIntSteerSnapPerf @ 0x1402FEEE0 (KeIntSteerSnapPerf.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x1402FF090 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     KiAndAffinityEx @ 0x1402FF140 (KiAndAffinityEx.c)
 *     KiComplementAffinityEx @ 0x1402FF270 (KiComplementAffinityEx.c)
 *     KeCountSetBitsAffinityEx @ 0x1402FFAC0 (KeCountSetBitsAffinityEx.c)
 *     KiCopyAffinityEx @ 0x140300030 (KiCopyAffinityEx.c)
 *     KeIntSteerPeriodic @ 0x140300190 (KeIntSteerPeriodic.c)
 *     HalQueryMaximumProcessorCount @ 0x14036FA30 (HalQueryMaximumProcessorCount.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KeGetMostEfficientProcessorInMask @ 0x140571FDC (KeGetMostEfficientProcessorInMask.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

char PpmParkSteerInterrupts()
{
  unsigned int v0; // ebx
  int v1; // edi
  unsigned __int64 v2; // r9
  __int64 v3; // r11
  __int64 v4; // rsi
  unsigned __int64 v5; // rdx
  __int64 v6; // rax
  unsigned int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // r8
  char v10; // cl
  __int64 *v11; // rdx
  __int64 v12; // rax
  _DWORD *v13; // r14
  _DWORD *v14; // r15
  _DWORD *v15; // rsi
  unsigned int v16; // edi
  unsigned int v17; // eax
  int MaximumProcessorCount; // eax
  int MostEfficientProcessorInMask; // eax
  int v21; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v23[68]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v24[68]; // [rsp+170h] [rbp+70h] BYREF
  _DWORD v25[68]; // [rsp+280h] [rbp+180h] BYREF
  _QWORD v26[34]; // [rsp+390h] [rbp+290h] BYREF
  _DWORD v27[68]; // [rsp+4A0h] [rbp+3A0h] BYREF
  _DWORD v28[68]; // [rsp+5B0h] [rbp+4B0h] BYREF

  memset(&v26[1], 0, 0x100uLL);
  v22 = 0LL;
  memset(v23, 0, 0x108uLL);
  memset(&v25[2], 0, 0x100uLL);
  memset(v27, 0, 0x108uLL);
  memset(&v24[2], 0, 0x100uLL);
  memset(v28, 0, 0x108uLL);
  v21 = 0;
  if ( PpmIntSteerDisabled )
    return 1;
  if ( !KiIntTrackRootEnabled )
    return 1;
  if ( !PpmIntSteerTrigger )
  {
    MaximumProcessorCount = HalQueryMaximumProcessorCount();
    PpmIntSteerTrigger = ExAllocatePool2(64LL, (unsigned int)(8 * MaximumProcessorCount), 1802654793LL);
    if ( !PpmIntSteerTrigger )
      return 1;
  }
  LODWORD(v26[0]) = 2097153;
  memset((char *)v26 + 4, 0, 0x104uLL);
  KiCopyAffinityEx(v26, 32LL, &KeActiveProcessors);
  KeIntSteerSnapPerf(&v21, &v22);
  v24[0] = 2097153;
  memset(&v24[1], 0, 0x104uLL);
  KiComplementAffinityEx((__int64)v24, 0x20u, PpmPerfCoreParkingMask);
  KeQuerySystemAllowedCpuSetAffinity(
    (unsigned __int16 *)&PpmCachedSystemAllowedCpuSet,
    PpmCachedSystemAllowedCpuSetVersion);
  KiAndAffinityEx((unsigned __int16 *)v24, (unsigned __int16 *)&PpmCachedSystemAllowedCpuSet, v24, HIWORD(v24[0]));
  v25[0] = 2097153;
  v0 = 0;
  v1 = 0;
  memset(&v25[1], 0, 0x104uLL);
  v2 = v26[1];
  v3 = v22;
  LOWORD(v4) = 0;
  while ( v2 )
  {
LABEL_6:
    _BitScanForward64(&v5, v2);
    v2 &= ~(1LL << v5);
    v6 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * (unsigned __int16)v4 + (unsigned __int8)v5];
    v7 = KiProcessorIndexToNumberMappingTable[v6];
    v8 = 8 * v6;
    v9 = v7 >> 6;
    if ( (unsigned int)v9 < LOWORD(v24[0]) && (v10 = v7 & 0x3F, ((*(_QWORD *)&v24[2 * v9 + 2] >> v10) & 1) != 0) )
    {
      v11 = (__int64 *)(PpmIntSteerTrigger + v8);
      ++v1;
      v12 = *v11;
      if ( !*v11 )
      {
        v12 = v3;
        *v11 = v3;
      }
      if ( v3 - v12 >= (unsigned __int64)(10000 * PpmIntSteerTriggerMax) )
      {
        if ( LOWORD(v25[0]) > (unsigned int)v9 )
          goto LABEL_12;
        if ( HIWORD(v25[0]) > (unsigned int)v9 )
        {
          LOWORD(v25[0]) = v9 + 1;
LABEL_12:
          *(_QWORD *)&v25[2 * (unsigned int)v9 + 2] |= 1LL << v10;
        }
        ++v0;
      }
    }
    else
    {
      *(_QWORD *)(v8 + PpmIntSteerTrigger) = 0LL;
    }
  }
  while ( 1 )
  {
    v4 = (unsigned __int16)(v4 + 1);
    if ( (unsigned int)v4 >= LOWORD(v26[0]) )
      break;
    v2 = v26[v4 + 1];
    if ( v2 )
    {
      v3 = v22;
      goto LABEL_6;
    }
  }
  if ( !v1 )
  {
    MostEfficientProcessorInMask = KeGetMostEfficientProcessorInMask();
    KeAddProcessorAffinityEx((unsigned __int16 *)v24, MostEfficientProcessorInMask);
    v1 = 1;
  }
  if ( !v0 )
  {
    KiCopyAffinityEx(v25, HIWORD(v25[0]), v24);
    v0 = v1;
  }
  if ( PpmIntSteerMode >= 1 )
  {
    switch ( PpmIntSteerMode )
    {
      case 1:
        v15 = 0LL;
        v14 = v26;
        v13 = 0LL;
        break;
      case 2:
        v15 = 0LL;
        v14 = v25;
        v13 = 0LL;
        break;
      case 3:
        v15 = 0LL;
        v14 = v24;
        v13 = 0LL;
        break;
      default:
        if ( (unsigned int)(PpmIntSteerMode - 5) > 1 )
          goto LABEL_20;
        v23[0] = 2097153;
        memset(&v23[1], 0, 0x104uLL);
        KeAddProcessorAffinityEx((unsigned __int16 *)v23, PpmIntSteerMode - 5);
        v15 = 0LL;
        v14 = v23;
        v13 = 0LL;
        break;
    }
  }
  else
  {
LABEL_20:
    v13 = v25;
    v14 = v24;
    v15 = 0LL;
    v16 = (PpmIntSteerLoadMax + v21) / (unsigned int)PpmIntSteerLoadMax;
    if ( v16 < v0 )
    {
      v23[0] = 2097153;
      memset(&v23[1], 0, 0x104uLL);
      v28[0] = 2097153;
      memset(&v28[1], 0, 0x104uLL);
      if ( PpmParkPreferenceHandler )
        PpmParkPreferenceHandler(1LL, PpmCheckTime, v16, v25, 0LL, 0LL, v28, v23);
      v17 = KeCountSetBitsAffinityEx(v23);
      if ( v17 <= v16 )
      {
        if ( v17 < v16 )
        {
          v27[0] = 2097153;
          memset(&v27[1], 0, 0x104uLL);
          KiSubtractAffinityEx(v25, (char *)v28, v27, 0x20u);
          KiOrAffinityEx((char *)v23, v27, v23, HIWORD(v23[0]));
          v17 = KeCountSetBitsAffinityEx(v23);
        }
        if ( v17 )
          v15 = v23;
      }
    }
  }
  KeIntSteerPeriodic(v15, v13, v14);
  return 1;
}
