/*
 * XREFs of ACPIIsPhase3ListEmptyOfUnblockedItems @ 0x1C0021D74
 * Callers:
 *     ACPIDevicePowerDpc @ 0x1C001E5C0 (ACPIDevicePowerDpc.c)
 * Callees:
 *     ACPIDevicePowerEnumerateAssociatedPowerNodes @ 0x1C001E980 (ACPIDevicePowerEnumerateAssociatedPowerNodes.c)
 *     WPP_RECORDER_SF_sqL @ 0x1C0023338 (WPP_RECORDER_SF_sqL.c)
 */

bool ACPIIsPhase3ListEmptyOfUnblockedItems()
{
  char v0; // bp
  char v1; // di
  int v2; // edx
  __int64 *v3; // rbx
  __int64 v4; // rcx
  __int64 *v5; // rsi
  __int64 *v6; // rbx
  int v7; // eax
  __int64 v8; // rax
  const char *v9; // rcx
  __int64 *v10; // rbx
  __int64 v11; // rcx

  v0 = 0;
  v1 = 0;
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  if ( AcpiPowerCurrentPagingPathTransitions > 0 )
  {
    v3 = (__int64 *)AcpiPowerPhase3List;
    while ( v3 != &AcpiPowerPhase3List )
    {
      v4 = (__int64)v3;
      v3 = (__int64 *)*v3;
      if ( !*(_DWORD *)(v4 + 48) && (*(_DWORD *)(v4 + 56) & 0x2000000) != 0 )
        ACPIDevicePowerEnumerateAssociatedPowerNodes(
          v4,
          (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))ACPIMarkPagingPathPowerNodeEnum,
          v4);
    }
  }
  v5 = (__int64 *)AcpiPowerNodeList;
  if ( (__int64 *)AcpiPowerNodeList != &AcpiPowerNodeList )
  {
    do
    {
      v6 = v5;
      v5 = (__int64 *)*v5;
      v7 = *((_DWORD *)v6 + 16);
      if ( v7 == 1 )
      {
        v8 = v6[2];
        if ( (v8 & 0x1000) == 0
          || (AcpiPowerCurrentPagingPathTransitions <= 0 || (v8 & 0x40000) != 0) && (__int64 *)v6[13] == v6 + 13 )
        {
          _InterlockedAnd64(v6 + 2, 0xFFFFFFFFFFFFFFF7uLL);
          v1 = 1;
        }
        else
        {
          _InterlockedOr64(v6 + 2, 8uLL);
          v0 = 1;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v9 = "IS";
          if ( (v6[2] & 8) == 0 )
            v9 = "NOT";
          LOBYTE(v2) = 4;
          WPP_RECORDER_SF_sqL(
            WPP_GLOBAL_Control->DeviceExtension,
            v2,
            10,
            47,
            (__int64)&WPP_afb93ce9a898342faba18bc7242ff62e_Traceguids,
            (__int64)v9,
            (char)v6,
            *((_DWORD *)v6 + 4));
        }
      }
      else if ( (unsigned int)(v7 - 3) <= 1 )
      {
        v0 = 1;
      }
      _InterlockedAnd64(v6 + 2, 0xFFFFFFFFFFFBFFFFuLL);
    }
    while ( v5 != &AcpiPowerNodeList );
    if ( !v1 && v0 )
    {
      v10 = (__int64 *)AcpiPowerPhase3List;
      while ( v10 != &AcpiPowerPhase3List )
      {
        v11 = (__int64)v10;
        v10 = (__int64 *)*v10;
        if ( !*(_DWORD *)(v11 + 48) )
          ACPIDevicePowerEnumerateAssociatedPowerNodes(
            v11,
            (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))ACPIIsPhase3ListEmptyOfUnblockedItemsPowerNodeEnum,
            v11);
      }
    }
  }
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  return v1 == 0;
}
