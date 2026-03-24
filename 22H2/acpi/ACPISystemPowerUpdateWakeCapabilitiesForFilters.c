/*
 * XREFs of ACPISystemPowerUpdateWakeCapabilitiesForFilters @ 0x1C0016C4C
 * Callers:
 *     ACPISystemPowerUpdateWakeCapabilities @ 0x1C009DC14 (ACPISystemPowerUpdateWakeCapabilities.c)
 * Callees:
 *     ACPISystemPowerDetermineSupportedDeviceWakeState @ 0x1C00163F4 (ACPISystemPowerDetermineSupportedDeviceWakeState.c)
 *     __security_check_cookie @ 0x1C0031C80 (__security_check_cookie.c)
 *     ACPISystemPowerGetDeviceWake @ 0x1C009C01C (ACPISystemPowerGetDeviceWake.c)
 *     AcpiGetIdleWakeInfo @ 0x1C009CB40 (AcpiGetIdleWakeInfo.c)
 */

__int64 __fastcall ACPISystemPowerUpdateWakeCapabilitiesForFilters(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        int *a5,
        signed int *a6,
        signed int *a7,
        signed int *a8)
{
  signed int v9; // edi
  signed int v11; // ebx
  int v12; // ecx
  int v13; // eax
  int DeviceWake; // eax
  bool v15; // zf
  signed int *v16; // rdx
  int v17; // eax
  signed int v18; // ecx
  signed int v20; // r13d
  signed int v21; // r12d
  KIRQL v22; // r9
  signed int v23; // eax
  bool v24; // r12
  int IdleWakeInfo; // eax
  bool v26; // zf
  int v27; // esi
  int v28; // eax
  int v29; // eax
  __int64 v30; // rax
  unsigned int v31; // ecx
  int v32; // eax
  signed int v33; // ecx
  int v34; // eax
  char v35; // [rsp+20h] [rbp-50h]
  unsigned int v36; // [rsp+24h] [rbp-4Ch] BYREF
  __int64 v37; // [rsp+28h] [rbp-48h]
  signed int *v38; // [rsp+30h] [rbp-40h]
  signed int *v39; // [rsp+38h] [rbp-38h]
  signed int *v40; // [rsp+40h] [rbp-30h]
  __m128i si128; // [rsp+48h] [rbp-28h]
  int v42; // [rsp+58h] [rbp-18h]
  int v43; // [rsp+5Ch] [rbp-14h]

  v9 = a3[12];
  v11 = a3[11];
  v38 = a6;
  v39 = a7;
  *a5 = 0;
  v12 = a3[1];
  v40 = a8;
  v13 = 0;
  v37 = a4;
  v35 = 0;
  v36 = 0;
  if ( (v12 & 0x400) != 0 )
  {
    v13 = 2;
    *a5 = 2;
    v12 = a3[1];
  }
  if ( (v12 & 0x800) != 0 )
  {
    v13 |= 4u;
    *a5 = v13;
    v12 = a3[1];
  }
  if ( (v12 & 0x1000) != 0 )
  {
    v13 |= 8u;
    *a5 = v13;
    v12 = a3[1];
  }
  if ( (v12 & 0x2000) != 0 )
    *a5 = v13 | 0x10;
  if ( !v9 || !v11 )
  {
    v35 = 1;
    v9 = 0;
    v11 = 0;
  }
  if ( (*(_DWORD *)(a1 + 8) & 0x10000LL) != 0 )
  {
    KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
    v20 = *(_DWORD *)(a1 + 496);
    v21 = ACPISystemPowerDetermineSupportedDeviceWakeState(a1);
    KeReleaseSpinLock(&AcpiPowerLock, v22);
    if ( v35 || v20 < v11 )
      v11 = v20;
    if ( !v11 )
    {
      v30 = *(_QWORD *)(a1 + 960);
      if ( (v30 & 0x400000000LL) != 0 )
      {
        if ( (AcpiSupportedSystemStates & 0x20) != 0 )
          v11 = 5;
        else
          v11 = (AcpiSupportedSystemStates & 0x10) != 0 ? 4 : 1;
      }
      else
      {
        v11 = (v30 & 0x100000000LL) != 0;
      }
    }
    v23 = v21;
    if ( !v21 )
      v23 = v9;
    v24 = v21 != 0;
    v9 = v23;
    IdleWakeInfo = AcpiGetIdleWakeInfo(a1, (unsigned int)v20, &v36);
    if ( IdleWakeInfo == -1073741275 )
    {
      IdleWakeInfo = AcpiGetIdleWakeInfo(a1, (unsigned int)v11, &v36);
      if ( IdleWakeInfo == -1073741275 )
        IdleWakeInfo = ACPISystemPowerGetDeviceWake(a1, &v36);
    }
    if ( IdleWakeInfo >= 0 )
    {
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      v42 = 4;
      v43 = 4;
      v31 = v36 > 5 ? 0 : si128.m128i_i32[v36];
      v32 = *a5;
      if ( _bittest(&v32, v31) )
      {
        v24 = 1;
        v9 = v31;
      }
    }
    if ( !v24 )
    {
      if ( (unsigned int)v11 > 6 )
        v11 = 0;
      v9 = *(_DWORD *)(v37 + 4LL * v11);
      if ( !v9 )
        v9 = 4;
    }
    if ( !v35 )
    {
      v26 = v9 == 5;
      if ( v9 >= 5 )
      {
LABEL_48:
        if ( v26 || !v9 )
        {
          v9 = 0;
          v11 = 0;
          v27 = 0;
        }
        else
        {
          v27 = 1 << v9;
        }
        *a5 = v27;
        goto LABEL_23;
      }
      do
      {
        v29 = *a5;
        if ( _bittest(&v29, v9) )
          break;
        ++v9;
      }
      while ( v9 < 5 );
    }
    v26 = v9 == 5;
    goto LABEL_48;
  }
  DeviceWake = AcpiGetIdleWakeInfo(a1, (unsigned int)v11, &v36);
  if ( DeviceWake == -1073741275 )
    DeviceWake = ACPISystemPowerGetDeviceWake(a1, &v36);
  if ( DeviceWake >= 0 )
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v42 = 4;
    v43 = 4;
    v33 = v36 > 5 ? 0 : si128.m128i_i32[v36];
    if ( v33 > 0 )
    {
      while ( 1 )
      {
        v34 = *a5;
        if ( _bittest(&v34, v33) )
          break;
        if ( --v33 <= 0 )
          goto LABEL_15;
      }
      v9 = v33;
    }
  }
LABEL_15:
  v15 = v11 == 0;
  if ( v11 > 0 )
  {
    v16 = (signed int *)(a4 + 4LL * v11);
    while ( 1 )
    {
      v17 = AcpiSupportedSystemStates;
      if ( _bittest(&v17, v11) )
      {
        v18 = *v16;
        if ( *v16 )
        {
          if ( v18 <= v9 )
            goto LABEL_20;
          v28 = *a5;
          if ( _bittest(&v28, v18) )
            break;
        }
      }
      --v11;
      --v16;
      if ( v11 <= 0 )
        goto LABEL_20;
    }
    v9 = *v16;
LABEL_20:
    v15 = v11 == 0;
  }
  if ( v15 )
  {
    v9 = 0;
    *a5 = 0;
  }
LABEL_23:
  if ( v38 )
    *v38 = v11;
  if ( v39 )
    *v39 = v9;
  if ( v40 )
    *v40 = v9;
  return 0LL;
}
