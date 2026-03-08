/*
 * XREFs of PpmParkSteerInterrupts @ 0x1402341D0
 * Callers:
 *     <none>
 * Callees:
 *     KiOrAffinityEx @ 0x14022B190 (KiOrAffinityEx.c)
 *     KiCopyAffinityEx @ 0x1402337D0 (KiCopyAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x140234A60 (KeEnumerateNextProcessor.c)
 *     KeCheckProcessorAffinityEx @ 0x140234B10 (KeCheckProcessorAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x140234B50 (KeAddProcessorAffinityEx.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x140236F18 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     KeCountSetBitsAffinityEx @ 0x140237550 (KeCountSetBitsAffinityEx.c)
 *     KiAndAffinityEx @ 0x140237720 (KiAndAffinityEx.c)
 *     KeIntSteerPeriodic @ 0x1402A8BB0 (KeIntSteerPeriodic.c)
 *     KiIntPartGetLowestClassProcessorInMask @ 0x1402A9324 (KiIntPartGetLowestClassProcessorInMask.c)
 *     KeIntSteerSnapPerf @ 0x1402A94D0 (KeIntSteerSnapPerf.c)
 *     KiComplementAffinityEx @ 0x1402AF184 (KiComplementAffinityEx.c)
 *     KiSubtractAffinityEx @ 0x1402D4CBC (KiSubtractAffinityEx.c)
 *     HalQueryMaximumProcessorCount @ 0x140375910 (HalQueryMaximumProcessorCount.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

char PpmParkSteerInterrupts()
{
  __int64 v0; // rcx
  unsigned int v1; // edi
  int v2; // esi
  __int64 v3; // r14
  __int64 v4; // rbx
  __int64 *v5; // rdx
  __int64 v6; // rax
  _DWORD *v7; // r14
  _DWORD *v8; // r15
  _DWORD *v9; // rsi
  unsigned int v10; // ebx
  unsigned int v11; // eax
  int MaximumProcessorCount; // eax
  unsigned int LowestClassProcessorInMask; // eax
  unsigned int v15; // [rsp+50h] [rbp-B0h] BYREF
  int v16; // [rsp+54h] [rbp-ACh] BYREF
  __int128 v17; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v18; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v19[2]; // [rsp+70h] [rbp-90h] BYREF
  __int16 v20; // [rsp+80h] [rbp-80h]
  int v21; // [rsp+82h] [rbp-7Eh]
  __int16 v22; // [rsp+86h] [rbp-7Ah]
  _DWORD v23[68]; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v24[68]; // [rsp+1A0h] [rbp+A0h] BYREF
  _DWORD v25[68]; // [rsp+2B0h] [rbp+1B0h] BYREF
  _QWORD v26[34]; // [rsp+3C0h] [rbp+2C0h] BYREF
  _DWORD v27[68]; // [rsp+4D0h] [rbp+3D0h] BYREF
  _DWORD v28[68]; // [rsp+5E0h] [rbp+4E0h] BYREF

  memset(&v26[1], 0, 0x100uLL);
  *(_QWORD *)&v17 = 0LL;
  v18 = 0LL;
  v21 = 0;
  v22 = 0;
  memset(v23, 0, 0x108uLL);
  memset(&v25[2], 0, 0x100uLL);
  memset(v27, 0, 0x108uLL);
  memset(&v24[2], 0, 0x100uLL);
  memset(v28, 0, 0x108uLL);
  v16 = 0;
  v15 = 0;
  if ( !PpmIntSteerDisabled )
  {
    if ( KiIntTrackRootEnabled )
    {
      if ( PpmIntSteerTrigger
        || (MaximumProcessorCount = HalQueryMaximumProcessorCount(),
            (PpmIntSteerTrigger = ExAllocatePool2(64LL, (unsigned int)(8 * MaximumProcessorCount), 1802654793LL)) != 0) )
      {
        LODWORD(v26[0]) = 2097153;
        memset((char *)v26 + 4, 0, 0x104uLL);
        KiCopyAffinityEx((__int64)v26, 0x20u, (unsigned __int16 *)&KeActiveProcessors);
        KeIntSteerSnapPerf(v0, &v18, &v16, &v17);
        v24[0] = 2097153;
        memset(&v24[1], 0, 0x104uLL);
        KiComplementAffinityEx(v24, 32LL, PpmPerfCoreParkingMask);
        KeQuerySystemAllowedCpuSetAffinity(&PpmCachedSystemAllowedCpuSet, &PpmCachedSystemAllowedCpuSetVersion);
        KiAndAffinityEx(v24, &PpmCachedSystemAllowedCpuSet, v24, HIWORD(v24[0]));
        v25[0] = 2097153;
        v1 = 0;
        v2 = 0;
        memset(&v25[1], 0, 0x104uLL);
        v3 = v17;
        v19[1] = v26[1];
        v19[0] = v26;
        v20 = 0;
        while ( !(unsigned int)KeEnumerateNextProcessor(&v15, v19) )
        {
          v4 = v15;
          if ( (unsigned int)KeCheckProcessorAffinityEx(v24, v15) )
          {
            v5 = (__int64 *)(PpmIntSteerTrigger + 8 * v4);
            ++v2;
            v6 = *v5;
            if ( !*v5 )
            {
              *v5 = v3;
              v6 = v3;
            }
            if ( v3 - v6 >= (unsigned __int64)(10000 * PpmIntSteerTriggerMax) )
            {
              KeAddProcessorAffinityEx(v25, (unsigned int)v4);
              ++v1;
            }
          }
          else
          {
            *(_QWORD *)(PpmIntSteerTrigger + 8 * v4) = 0LL;
          }
        }
        if ( !v2 )
        {
          if ( (_WORD)PpmCachedSystemAllowedCpuSet == 1 )
          {
            v17 = (unsigned __int64)qword_140C388E8;
            LowestClassProcessorInMask = KiIntPartGetLowestClassProcessorInMask(&v17);
          }
          else
          {
            LowestClassProcessorInMask = 0;
          }
          KeAddProcessorAffinityEx(v24, LowestClassProcessorInMask);
          v2 = 1;
        }
        if ( !v1 )
        {
          KiCopyAffinityEx((__int64)v25, HIWORD(v25[0]), (unsigned __int16 *)v24);
          v1 = v2;
        }
        switch ( PpmIntSteerMode )
        {
          case 0:
            goto LABEL_15;
          case 1:
            v9 = 0LL;
            v8 = v26;
            v7 = 0LL;
            break;
          case 2:
            v9 = 0LL;
            v8 = v25;
            v7 = 0LL;
            break;
          case 3:
            v9 = 0LL;
            v8 = v24;
            v7 = 0LL;
            break;
          default:
            if ( (unsigned int)(PpmIntSteerMode - 5) > 1 )
            {
LABEL_15:
              v7 = v25;
              v8 = v24;
              v9 = 0LL;
              v10 = (PpmIntSteerLoadMax + v16) / (unsigned int)PpmIntSteerLoadMax;
              if ( v10 < v1 )
              {
                v23[0] = 2097153;
                memset(&v23[1], 0, 0x104uLL);
                v28[0] = 2097153;
                memset(&v28[1], 0, 0x104uLL);
                if ( PpmParkPreferenceHandler )
                  PpmParkPreferenceHandler(1LL, PpmCheckTime, v10, v25, 0LL, 0LL, v28, v23);
                v11 = KeCountSetBitsAffinityEx(v23);
                if ( v11 <= v10 )
                {
                  if ( v11 < v10 )
                  {
                    v27[0] = 2097153;
                    memset(&v27[1], 0, 0x104uLL);
                    KiSubtractAffinityEx(v25, v28, v27, 32LL);
                    KiOrAffinityEx((char *)v23, v27, v23, HIWORD(v23[0]));
                    v11 = KeCountSetBitsAffinityEx(v23);
                  }
                  if ( v11 )
                    v9 = v23;
                }
              }
              break;
            }
            v23[0] = 2097153;
            memset(&v23[1], 0, 0x104uLL);
            KeAddProcessorAffinityEx(v23, (unsigned int)(PpmIntSteerMode - 5));
            v9 = 0LL;
            v8 = v23;
            v7 = 0LL;
            break;
        }
        KeIntSteerPeriodic(v18, v9, v7, v8);
      }
    }
  }
  return 1;
}
