/*
 * XREFs of ACPIDevicePowerProcessPhase3 @ 0x1C001FEA4
 * Callers:
 *     ACPIDevicePowerDpc @ 0x1C001E5C0 (ACPIDevicePowerDpc.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C000ABD8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001B508 (WPP_RECORDER_SF_qD.c)
 *     ACPIDeviceCompletePhase3Off @ 0x1C001C6C0 (ACPIDeviceCompletePhase3Off.c)
 *     ACPIIsPowerNodeMissingDependencies @ 0x1C0022140 (ACPIIsPowerNodeMissingDependencies.c)
 *     WPP_RECORDER_SF_qsL @ 0x1C0022EB8 (WPP_RECORDER_SF_qsL.c)
 *     AMLIAsyncEvalObject @ 0x1C00478E8 (AMLIAsyncEvalObject.c)
 */

__int64 ACPIDevicePowerProcessPhase3()
{
  int v0; // edi
  char v1; // r14
  char v2; // r9
  char v3; // dl
  __int64 *v4; // r12
  char v5; // cl
  __int64 v6; // rbx
  unsigned __int8 *v7; // r13
  _QWORD *v8; // r9
  __int32 v9; // ecx
  _QWORD *v10; // r8
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rsi
  const char *v16; // r15
  void (__fastcall *v17)(__int64, int, __int64, __int64); // rbp
  int v18; // edx
  unsigned int v19; // edi
  __int64 v20; // rax
  __int64 *v21; // rsi
  __int64 v22; // rbx
  unsigned int v23; // eax
  int v24; // edx
  bool v25; // zf
  char v27; // [rsp+90h] [rbp+8h]
  char v28; // [rsp+98h] [rbp+10h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      4,
      10,
      70,
      (__int64)&WPP_afb93ce9a898342faba18bc7242ff62e_Traceguids);
  v0 = 0;
  v1 = 0;
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  while ( 1 )
  {
    if ( Phase3PendingOffWorkCount )
    {
      v2 = 1;
      v27 = 1;
    }
    else
    {
      Phase3CurrentOffResourceOrder = -1;
      v2 = 0;
      v27 = 0;
    }
    if ( Phase3PendingOnWorkCount )
    {
      v3 = 1;
    }
    else
    {
      v3 = 0;
      Phase3CurrentOnResourceOrder = 0;
    }
    v28 = v3;
    if ( !Phase3PendingOnWorkCount && !Phase3PendingOffWorkCount )
      v1 = 1;
    v4 = (__int64 *)AcpiPowerNodeList;
    ++Phase3PendingOnWorkCount;
    v5 = 0;
    if ( (__int64 *)AcpiPowerNodeList != &AcpiPowerNodeList )
    {
      while ( 1 )
      {
        v6 = (__int64)v4;
        v4 = (__int64 *)*v4;
        v7 = (unsigned __int8 *)(v6 + 40);
        if ( v3 && *v7 > (unsigned int)Phase3CurrentOnResourceOrder )
          goto LABEL_60;
        if ( v2
          && *v7 > (unsigned int)Phase3CurrentOffResourceOrder
          && _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 64), 1, 1) == 3 )
        {
          v5 = 1;
          break;
        }
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 64), 4, 3) != 3 )
          goto LABEL_57;
        v1 = 0;
        v8 = *(_QWORD **)(v6 + 48);
        v9 = 0;
        if ( v8 == (_QWORD *)(v6 + 48) )
          goto LABEL_34;
        do
        {
          v10 = v8;
          v11 = *(v8 - 1);
          v8 = (_QWORD *)*v8;
          if ( _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 552), 0, 0) && *((_BYTE *)v10 - 16) )
            goto LABEL_31;
          v12 = *(_DWORD *)(v11 + 544);
          if ( v12 != *((_DWORD *)v10 - 5) )
            continue;
          if ( v12 != 4 )
          {
            if ( v12 == 1 )
              *(_BYTE *)(v11 + 665) = 0;
LABEL_31:
            ++v9;
            continue;
          }
          if ( (*(_DWORD *)(v11 + 8) & 0x800LL) != 0 && (*(_DWORD *)(v11 + 1008) & 0x10000000) == 0
            || *(_BYTE *)(v11 + 665) )
          {
            goto LABEL_31;
          }
        }
        while ( v8 != (_QWORD *)(v6 + 48) );
        v3 = v28;
LABEL_34:
        _InterlockedExchange((volatile __int32 *)(v6 + 24), v9);
        v13 = *(_QWORD *)(v6 + 16);
        if ( (v13 & 0x440) == 0 && ((v13 & 0x2220) != 0 || v9) )
        {
          _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 64), 1, 4);
          ++Phase3PendingOnWorkCount;
          *(_DWORD *)(v6 + 68) = 0;
          KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
          v14 = *(_QWORD *)(v6 + 16) & 0x2000LL;
          if ( (*(_QWORD *)(v6 + 16) & 0x2000) != 0 )
            v15 = *(_QWORD *)(v6 + 88);
          else
            v15 = *(_QWORD *)(v6 + 72);
          v16 = "_RST";
          if ( !v14 )
            v16 = "_ON";
          v17 = ACPIDeviceCompletePhase3Reset;
          if ( !v14 )
            v17 = ACPIDeviceCompletePhase3On;
          if ( (unsigned __int8)ACPIIsPowerNodeMissingDependencies(v6) )
          {
            v19 = -1073741661;
          }
          else
          {
            v19 = AMLIAsyncEvalObject(v15, 0, 0, 0, (__int64)v17, v6);
            v20 = *(_QWORD *)(v6 + 16);
            if ( (v20 & 0x2000) != 0 )
              *(_QWORD *)(v6 + 16) = v20 & 0xFFFFFFFFFFFFDFFFuLL;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qsL(
              WPP_GLOBAL_Control->DeviceExtension,
              v18,
              10,
              71,
              (__int64)&WPP_afb93ce9a898342faba18bc7242ff62e_Traceguids,
              v6,
              (__int64)v16,
              v19);
          if ( v19 != 259 )
            v17(v15, v19, 0LL, v6);
          KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
          v3 = v28;
          v2 = v27;
          if ( v19 == 259 )
          {
            v0 = 0;
            if ( !v28 )
            {
              v3 = 1;
              v28 = 1;
              Phase3CurrentOnResourceOrder = *v7;
            }
          }
          else
          {
            v0 = 0;
          }
        }
        else
        {
          v2 = v27;
        }
LABEL_57:
        if ( v4 == &AcpiPowerNodeList )
        {
LABEL_60:
          v5 = 0;
          break;
        }
      }
    }
    if ( --Phase3PendingOnWorkCount )
    {
      if ( v3 )
        break;
    }
    else
    {
      Phase3CurrentOnResourceOrder = 0;
    }
    if ( v4 == &AcpiPowerNodeList || v5 )
    {
      do
      {
        ++Phase3PendingOffWorkCount;
        v21 = (__int64 *)qword_1C006F258;
        while ( v21 != &AcpiPowerNodeList )
        {
          v22 = (__int64)v21;
          v21 = (__int64 *)v21[1];
          v23 = *(unsigned __int8 *)(v22 + 40);
          if ( v23 <= Phase3CurrentOffResourceOrder )
          {
            if ( v2 && v23 < Phase3CurrentOffResourceOrder )
              break;
            if ( _InterlockedCompareExchange((volatile signed __int32 *)(v22 + 64), 1, 4) == 4 )
            {
              ++Phase3PendingOffWorkCount;
              v1 = 0;
              *(_DWORD *)(v22 + 68) = 0;
              KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
              if ( (unsigned __int8)ACPIIsPowerNodeMissingDependencies(v22) )
              {
                v0 = -1073741661;
              }
              else if ( (AcpiOverrideAttributes & 0x4000000) == 0 || !AcpiKsrInProgress )
              {
                v0 = AMLIAsyncEvalObject(*(_QWORD *)(v22 + 80), 0, 0, 0, (__int64)ACPIDeviceCompletePhase3Off, v22);
              }
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v24) = 4;
                WPP_RECORDER_SF_qD(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v24,
                  10,
                  72,
                  (__int64)&WPP_afb93ce9a898342faba18bc7242ff62e_Traceguids,
                  v22,
                  v0);
              }
              if ( v0 != 259 )
                ACPIDeviceCompletePhase3Off(*(_QWORD *)(v22 + 80), v0, 0LL, v22);
              KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
              if ( v0 == 259 )
              {
                v2 = 1;
                Phase3CurrentOffResourceOrder = *(unsigned __int8 *)(v22 + 40);
                v27 = 1;
              }
              else
              {
                v2 = v27;
              }
              v0 = 0;
            }
          }
        }
        v25 = Phase3PendingOffWorkCount-- == 1;
        v27 = v2;
        if ( v25 )
        {
          Phase3CurrentOffResourceOrder = -1;
          v2 = 0;
          v27 = 0;
        }
        else if ( v2 )
        {
          goto LABEL_90;
        }
      }
      while ( v21 != &AcpiPowerNodeList );
      if ( v1 )
        break;
    }
  }
LABEL_90:
  if ( Phase3PendingOnWorkCount > 0 || Phase3PendingOffWorkCount > 0 )
    v1 = 0;
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  return v1 == 0 ? 0x103 : 0;
}
