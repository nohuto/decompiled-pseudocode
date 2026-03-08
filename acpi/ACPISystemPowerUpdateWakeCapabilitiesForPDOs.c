/*
 * XREFs of ACPISystemPowerUpdateWakeCapabilitiesForPDOs @ 0x1C003EAE0
 * Callers:
 *     ACPISystemPowerUpdateWakeCapabilities @ 0x1C00955A4 (ACPISystemPowerUpdateWakeCapabilities.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     ACPISystemPowerDetermineSupportedDeviceWakeState @ 0x1C003DE10 (ACPISystemPowerDetermineSupportedDeviceWakeState.c)
 *     AcpiGetIdleWakeInfo @ 0x1C0082BD0 (AcpiGetIdleWakeInfo.c)
 *     ACPISystemPowerGetDeviceWake @ 0x1C0094F08 (ACPISystemPowerGetDeviceWake.c)
 */

__int64 __fastcall ACPISystemPowerUpdateWakeCapabilitiesForPDOs(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int *a5,
        __int64 a6,
        int *a7,
        int *a8)
{
  int v8; // esi
  int v9; // ebx
  int *v10; // r15
  unsigned int v11; // edi
  int v13; // eax
  int v14; // r15d
  KIRQL v15; // r9
  __int64 v16; // rax
  int v17; // eax
  int v18; // ebp
  _DWORD *v19; // rax
  char v21; // cl
  int IdleWakeInfo; // eax
  int v23; // edx
  char v24; // [rsp+20h] [rbp-68h]
  unsigned int v25; // [rsp+24h] [rbp-64h] BYREF
  int *v26; // [rsp+28h] [rbp-60h]
  __int64 v27; // [rsp+30h] [rbp-58h]
  __int64 v28; // [rsp+38h] [rbp-50h]
  __m128i si128; // [rsp+40h] [rbp-48h]
  int v30; // [rsp+50h] [rbp-38h]
  int v31; // [rsp+54h] [rbp-34h]

  v8 = 0;
  v25 = 0;
  v9 = 0;
  v10 = a5;
  v11 = 0;
  v28 = a6;
  v13 = *(_DWORD *)(a1 + 8);
  v27 = a4;
  v26 = a5;
  v24 = 0;
  if ( (*(_QWORD *)&v13 & 0x10000LL) == 0 )
    goto LABEL_10;
  KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v11 = *(_DWORD *)(a1 + 536);
  v14 = ACPISystemPowerDetermineSupportedDeviceWakeState(a1);
  KeReleaseSpinLock(&AcpiPowerLock, v15);
  if ( !v11 )
  {
    v16 = *(_QWORD *)(a1 + 1008);
    if ( (v16 & 0x400000000LL) != 0 )
    {
      if ( (AcpiSupportedSystemStates & 0x20) != 0 )
        v11 = 5;
      else
        v11 = (AcpiSupportedSystemStates & 0x10) != 0 ? 4 : 1;
    }
    else
    {
      v11 = (v16 & 0x100000000LL) != 0;
    }
  }
  v17 = AcpiSupportedSystemStates;
  if ( !_bittest(&v17, v11) )
  {
    v10 = v26;
    v11 = 0;
LABEL_10:
    v18 = 0;
    goto LABEL_11;
  }
  if ( v14 )
  {
    v21 = v14;
    v24 = 1;
    v9 = v14;
    v10 = v26;
    *v26 = 1 << v21;
  }
  else
  {
    v10 = v26;
  }
  v8 = v9;
  IdleWakeInfo = AcpiGetIdleWakeInfo(a1, v11, &v25);
  if ( IdleWakeInfo == -1073741275 )
    IdleWakeInfo = ACPISystemPowerGetDeviceWake(a1, &v25);
  if ( IdleWakeInfo < 0 )
  {
    v23 = v9;
    if ( !v24 )
    {
      v9 = *(_DWORD *)(v27 + 4LL * (int)v11);
      if ( !v9 )
        v9 = 4;
      goto LABEL_29;
    }
  }
  else
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v30 = 4;
    v31 = 4;
    if ( v25 > 5 )
      v9 = 0;
    else
      v9 = si128.m128i_i32[v25];
    v8 = v9;
    v23 = v9;
  }
  if ( !v9 )
    goto LABEL_10;
LABEL_29:
  v8 = v23;
  v18 = 1 << v9;
LABEL_11:
  v19 = (_DWORD *)v28;
  *v10 = v18;
  if ( v19 )
    *v19 = v11;
  if ( a7 )
    *a7 = v9;
  if ( a8 )
    *a8 = v8;
  return 0LL;
}
