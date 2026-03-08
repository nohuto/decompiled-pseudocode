/*
 * XREFs of ACPIBuildPowerResourceExtension @ 0x1C000DFDC
 * Callers:
 *     OSNotifyCreatePowerResource @ 0x1C0032A14 (OSNotifyCreatePowerResource.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000ACAC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall ACPIBuildPowerResourceExtension(volatile signed __int32 *a1, __int64 *a2)
{
  __int64 Pool2; // rax
  int v5; // edx
  int v6; // ecx
  __int64 v7; // r8
  unsigned __int8 *v9; // rdx
  char v10; // al
  __int64 v11; // rax
  __int64 v12; // rax

  Pool2 = ExAllocatePool2(64LL, 144LL, 1148216129LL);
  v6 = 0;
  v7 = Pool2;
  if ( Pool2 )
  {
    v9 = *(unsigned __int8 **)(*(_QWORD *)a1 + 96LL);
    v10 = gdwfAMLI;
    *(_QWORD *)(v7 + 16) = 4LL;
    *(_QWORD *)(v7 + 32) = a1;
    dword_1C006F938 = 0;
    pszDest = 0;
    if ( (v10 & 4) != 0 )
      _InterlockedIncrement(a1 + 2);
    *(_BYTE *)(v7 + 40) = v9[1];
    *(_DWORD *)(v7 + 64) = 3;
    v11 = *v9;
    if ( (unsigned __int8)v11 < 6u )
      v6 = SystemPowerStateTranslation[v11];
    *(_DWORD *)(v7 + 44) = v6;
    *(_QWORD *)(v7 + 56) = v7 + 48;
    *(_QWORD *)(v7 + 48) = v7 + 48;
    *(_QWORD *)(v7 + 128) = v7 + 120;
    *(_QWORD *)(v7 + 120) = v7 + 120;
    *(_QWORD *)(v7 + 112) = v7 + 104;
    *(_QWORD *)(v7 + 104) = v7 + 104;
    v12 = *(_QWORD *)a1;
    *a2 = v7;
    *(_QWORD *)(v12 + 104) = v7;
    return 259LL;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v5,
        22,
        25,
        (__int64)&WPP_a0f908b75b693eaadb9088735086d97e_Traceguids,
        144);
    }
    return 3221225626LL;
  }
}
