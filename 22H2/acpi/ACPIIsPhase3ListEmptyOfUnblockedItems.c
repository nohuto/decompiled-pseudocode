/*
 * XREFs of ACPIIsPhase3ListEmptyOfUnblockedItems @ 0x1C002ADE8
 * Callers:
 *     ACPIDevicePowerDpc @ 0x1C0020030 (ACPIDevicePowerDpc.c)
 * Callees:
 *     ACPIDevicePowerEnumerateAssociatedPowerNodes @ 0x1C001C214 (ACPIDevicePowerEnumerateAssociatedPowerNodes.c)
 *     WPP_RECORDER_SF_sqL @ 0x1C002AF3C (WPP_RECORDER_SF_sqL.c)
 */

bool ACPIIsPhase3ListEmptyOfUnblockedItems()
{
  char v0; // si
  char v1; // bp
  int v2; // edx
  __int64 *v3; // rbx
  __int64 *v4; // rcx
  __int64 *v5; // rdi
  int v6; // eax
  __int64 v8; // rax
  const char *v9; // rcx
  __int64 *v10; // rbx
  __int64 v11; // rcx
  __int64 *v12; // rbx
  __int64 v13; // rcx

  v0 = 0;
  v1 = 0;
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  if ( AcpiPowerCurrentPagingPathTransitions > 0 )
  {
    v10 = (__int64 *)AcpiPowerPhase3List;
    while ( v10 != &AcpiPowerPhase3List )
    {
      v11 = (__int64)v10;
      v10 = (__int64 *)*v10;
      if ( !*(_DWORD *)(v11 + 48) && (*(_DWORD *)(v11 + 56) & 0x2000000) != 0 )
        ACPIDevicePowerEnumerateAssociatedPowerNodes(
          v11,
          (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))ACPIMarkPagingPathPowerNodeEnum,
          v11);
    }
  }
  v3 = (__int64 *)AcpiPowerNodeList;
  if ( (__int64 *)AcpiPowerNodeList != &AcpiPowerNodeList )
  {
    do
    {
      v4 = v3;
      v5 = v3;
      v3 = (__int64 *)*v3;
      v6 = *((_DWORD *)v4 + 16);
      if ( v6 == 1 )
      {
        v8 = v5[2];
        if ( (v8 & 0x1000) == 0
          || (AcpiPowerCurrentPagingPathTransitions <= 0 || (v8 & 0x40000) != 0) && (__int64 *)v5[13] == v5 + 13 )
        {
          _InterlockedAnd64(v4 + 2, 0xFFFFFFFFFFFFFFF7uLL);
          v1 = 1;
        }
        else
        {
          _InterlockedOr64(v4 + 2, 8uLL);
          v0 = 1;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v9 = "IS";
          if ( (v5[2] & 8) == 0 )
            v9 = "NOT";
          LOBYTE(v2) = 4;
          WPP_RECORDER_SF_sqL(
            WPP_GLOBAL_Control->DeviceExtension,
            v2,
            10,
            47,
            (__int64)&WPP_095c070a05c4368bad966ca54a81e920_Traceguids,
            (__int64)v9,
            (char)v5,
            *((_DWORD *)v5 + 4));
        }
      }
      else if ( (unsigned int)(v6 - 3) <= 1 )
      {
        v0 = 1;
      }
      _InterlockedAnd64(v5 + 2, 0xFFFFFFFFFFFBFFFFuLL);
    }
    while ( v3 != &AcpiPowerNodeList );
    if ( !v1 && v0 )
    {
      v12 = (__int64 *)AcpiPowerPhase3List;
      while ( v12 != &AcpiPowerPhase3List )
      {
        v13 = (__int64)v12;
        v12 = (__int64 *)*v12;
        if ( !*(_DWORD *)(v13 + 48) )
          ACPIDevicePowerEnumerateAssociatedPowerNodes(
            v13,
            (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))ACPIIsPhase3ListEmptyOfUnblockedItemsPowerNodeEnum,
            v13);
      }
    }
  }
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  return v1 == 0;
}
