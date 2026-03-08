/*
 * XREFs of ACPIDeviceIrpDeviceRequest @ 0x1C001DBF8
 * Callers:
 *     ACPIDockIrpSetDevicePower @ 0x1C0002734 (ACPIDockIrpSetDevicePower.c)
 *     ACPIFilterIrpSetPower @ 0x1C0028B10 (ACPIFilterIrpSetPower.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qdqss @ 0x1C0009EDC (WPP_RECORDER_SF_qdqss.c)
 *     ACPIDeviceInitializePowerRequest @ 0x1C001CF98 (ACPIDeviceInitializePowerRequest.c)
 */

__int64 __fastcall ACPIDeviceIrpDeviceRequest(ULONG_PTR a1, __int64 a2, __int64 (__fastcall *a3)())
{
  __int64 DeviceExtension; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  char v8; // r8
  int v9; // r14d
  int v10; // r15d
  const char *v11; // rcx
  const char *v12; // rdx
  __int64 v13; // rax
  int v14; // esi
  __int64 v16; // rax
  KIRQL v17; // al
  __int64 *v18; // rcx
  KIRQL v19; // si
  __int64 *Pool2; // rax
  int v21; // eax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v6 = *(_QWORD *)(a2 + 184);
  v7 = DeviceExtension;
  v8 = 0;
  v9 = *(_DWORD *)(v6 + 24);
  v10 = *(_DWORD *)(v6 + 32);
  v11 = (const char *)&unk_1C00622D0;
  v12 = (const char *)&unk_1C00622D0;
  if ( DeviceExtension )
  {
    v8 = DeviceExtension;
    v13 = *(_QWORD *)(DeviceExtension + 8);
    if ( (v13 & 0x200000000000LL) != 0 )
    {
      v11 = *(const char **)(v7 + 608);
      if ( (v13 & 0x400000000000LL) != 0 )
        v12 = *(const char **)(v7 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)v12,
      0xAu,
      0x1Fu,
      (__int64)&WPP_afb93ce9a898342faba18bc7242ff62e_Traceguids,
      a2,
      v9 - 1,
      v8,
      v11,
      v12);
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  v14 = *(_DWORD *)(a2 + 48);
  if ( v14 < 0 || v9 == *(_DWORD *)(v7 + 384) )
  {
    if ( a3 )
      ((void (__fastcall *)(__int64, __int64, _QWORD))a3)(v7, a2, (unsigned int)v14);
    return (unsigned int)v14;
  }
  else
  {
    if ( v9 == 1 )
    {
      v16 = *(_QWORD *)(v7 + 8);
      if ( (v16 & 0x102000000LL) != 0 )
      {
        if ( (v16 & 0x2000000) != 0
          && (_InterlockedCompareExchange((volatile signed __int32 *)(v7 + 184), 0, 0) & 1) != 0 )
        {
          KeSetEvent((PRKEVENT)(v7 + 272), 0, 0);
        }
        else if ( (*(_QWORD *)(v7 + 8) & 0x800000000010000LL) == 0x800000000010000LL )
        {
          v17 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
          v18 = (__int64 *)AcpiPowerWaitWakeList;
          v19 = v17;
          while ( v18 != &AcpiPowerWaitWakeList )
          {
            if ( v18[5] == v7 )
            {
              Pool2 = (__int64 *)ExAllocatePool2(64LL, 16LL, 1349542721LL);
              if ( Pool2 )
              {
                *Pool2 = a2;
                a2 = (__int64)Pool2;
                Pool2[1] = (__int64)a3;
                a3 = ACPIWaitWakeEnableOnPowerUp;
              }
              break;
            }
            v18 = (__int64 *)*v18;
          }
          KeReleaseSpinLock(&AcpiPowerLock, v19);
        }
      }
    }
    if ( (unsigned int)(v10 - 4) <= 1 || (v21 = 0, v10 == 6) )
      v21 = 1;
    return ACPIDeviceInitializePowerRequest(
             v7,
             v9,
             0LL,
             (void (__fastcall *)(__int64, __int64, __int64))a3,
             a2,
             v10,
             0,
             8 * v21);
  }
}
