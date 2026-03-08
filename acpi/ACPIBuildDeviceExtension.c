/*
 * XREFs of ACPIBuildDeviceExtension @ 0x1C000C314
 * Callers:
 *     ACPIBuildDockExtension @ 0x1C000CEDC (ACPIBuildDockExtension.c)
 *     ACPIBuildFixedButtonExtension @ 0x1C000D3DC (ACPIBuildFixedButtonExtension.c)
 *     ACPIBuildProcessorExtension @ 0x1C0012FA8 (ACPIBuildProcessorExtension.c)
 *     ACPIBuildThermalZoneExtension @ 0x1C0013D70 (ACPIBuildThermalZoneExtension.c)
 *     OSNotifyCreateDevice @ 0x1C0032738 (OSNotifyCreateDevice.c)
 * Callees:
 *     memset @ 0x1C0002180 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000ACAC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall ACPIBuildDeviceExtension(volatile signed __int32 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rcx
  char *v8; // rax
  int v9; // edx
  char *v10; // rbx
  _QWORD *v11; // rdx
  _QWORD *v12; // rax

  if ( a1 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)a1 + 104LL);
    if ( v6 )
    {
      if ( *(_QWORD *)(v6 + 792) != a2 )
        return 3221225486LL;
      *a3 = 0LL;
      return 0LL;
    }
  }
  v8 = (char *)ExAllocateFromNPagedLookasideList(&DeviceExtensionLookAsideList);
  v10 = v8;
  if ( v8 )
  {
    memset(v8, 0, 0x3F8uLL);
    *((_QWORD *)v10 + 95) = a1;
    ++*((_DWORD *)v10 + 183);
    ++*((_DWORD *)v10 + 182);
    if ( a1 )
    {
      dword_1C006F938 = 0;
      pszDest = 0;
      if ( (gdwfAMLI & 4) != 0 )
        _InterlockedAdd(a1 + 2, 1u);
    }
    *((_QWORD *)v10 + 3) = 0LL;
    *((_DWORD *)v10 + 92) = 0;
    *((_DWORD *)v10 + 127) = 0;
    *((_DWORD *)v10 + 134) = 0;
    *((_DWORD *)v10 + 135) = 0;
    *((_QWORD *)v10 + 101) = v10 + 800;
    *((_QWORD *)v10 + 100) = v10 + 800;
    *((_QWORD *)v10 + 105) = v10 + 832;
    *((_QWORD *)v10 + 104) = v10 + 832;
    *((_QWORD *)v10 + 107) = v10 + 848;
    *((_QWORD *)v10 + 106) = v10 + 848;
    *((_QWORD *)v10 + 71) = v10 + 560;
    *((_QWORD *)v10 + 70) = v10 + 560;
    *((_QWORD *)v10 + 74) = v10 + 584;
    *((_QWORD *)v10 + 73) = v10 + 584;
    *((_DWORD *)v10 + 132) = 4;
    *((_DWORD *)v10 + 133) = 4;
    *((_QWORD *)v10 + 109) = v10 + 864;
    *((_QWORD *)v10 + 108) = v10 + 864;
    *((_DWORD *)v10 + 4) = 1599293264;
    *((_QWORD *)v10 + 1) = 10LL;
    *a3 = v10;
    *((_DWORD *)v10 + 128) = 1;
    *((_DWORD *)v10 + 129) = 1;
    *((_DWORD *)v10 + 130) = 1;
    *((_DWORD *)v10 + 131) = 1;
    *((_DWORD *)v10 + 137) = 1;
    KeInitializeEvent((PRKEVENT)(v10 + 904), SynchronizationEvent, 1u);
    ExInitializeRundownProtection((PEX_RUNDOWN_REF)v10 + 125);
    *((_QWORD *)v10 + 116) = 0LL;
    v10[936] = 0;
    *((_QWORD *)v10 + 99) = a2;
    if ( a2 )
    {
      _InterlockedAdd((volatile signed __int32 *)(a2 + 732), 1u);
      v11 = *(_QWORD **)(a2 + 808);
      v12 = v10 + 816;
      if ( *v11 != a2 + 800 )
        __fastfail(3u);
      *v12 = a2 + 800;
      *((_QWORD *)v10 + 103) = v11;
      *v11 = v12;
      *(_QWORD *)(a2 + 808) = v12;
      _InterlockedOr64((volatile signed __int64 *)(a2 + 8), 0x40000000000uLL);
    }
    if ( a1 )
      *(_QWORD *)(*(_QWORD *)a1 + 104LL) = v10;
    *((_DWORD *)v10 + 176) = -1;
    *((_QWORD *)v10 + 90) = v10 + 712;
    *((_QWORD *)v10 + 89) = v10 + 712;
    *(_QWORD *)v10 = &gAcpiTriageInfo;
    return 0LL;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 2;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v9,
      22,
      10,
      (__int64)&WPP_a0f908b75b693eaadb9088735086d97e_Traceguids,
      (char)a1);
  }
  return 3221225626LL;
}
