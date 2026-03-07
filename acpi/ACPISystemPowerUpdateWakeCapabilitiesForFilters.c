__int64 __fastcall ACPISystemPowerUpdateWakeCapabilitiesForFilters(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        int *a5,
        _DWORD *a6,
        signed int *a7,
        signed int *a8)
{
  signed int v9; // edi
  __int64 v11; // rbx
  int v12; // ecx
  unsigned int v13; // r12d
  signed int v14; // r13d
  KIRQL v15; // r9
  __int64 v16; // rax
  bool v17; // r13
  int IdleWakeInfo; // eax
  unsigned int v19; // ecx
  int v20; // eax
  bool v21; // zf
  int v22; // eax
  int v23; // esi
  int DeviceWake; // eax
  signed int v25; // ecx
  int v26; // eax
  bool v27; // zf
  signed int *v28; // rdx
  int v29; // eax
  signed int v30; // ecx
  int v31; // eax
  char v33; // [rsp+20h] [rbp-50h]
  unsigned int v34; // [rsp+24h] [rbp-4Ch] BYREF
  __int64 v35; // [rsp+28h] [rbp-48h]
  _DWORD *v36; // [rsp+30h] [rbp-40h]
  signed int *v37; // [rsp+38h] [rbp-38h]
  signed int *v38; // [rsp+40h] [rbp-30h]
  __m128i si128; // [rsp+48h] [rbp-28h]
  int v40; // [rsp+58h] [rbp-18h]
  int v41; // [rsp+5Ch] [rbp-14h]

  v9 = a3[12];
  v11 = (unsigned int)a3[11];
  v12 = 0;
  v36 = a6;
  v37 = a7;
  *a5 = 0;
  v21 = (a3[1] & 0x400) == 0;
  v38 = a8;
  v35 = a4;
  v33 = 0;
  v34 = 0;
  if ( !v21 )
  {
    v12 = 2;
    *a5 = 2;
  }
  if ( (a3[1] & 0x800) != 0 )
  {
    v12 |= 4u;
    *a5 = v12;
  }
  if ( (a3[1] & 0x1000) != 0 )
  {
    v12 |= 8u;
    *a5 = v12;
  }
  if ( (a3[1] & 0x2000) != 0 )
    *a5 = v12 | 0x10;
  if ( !v9 || !(_DWORD)v11 )
  {
    v33 = 1;
    v9 = 0;
    v11 = 0LL;
  }
  if ( (*(_DWORD *)(a1 + 8) & 0x10000LL) != 0 )
  {
    KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
    v13 = *(_DWORD *)(a1 + 536);
    v14 = ACPISystemPowerDetermineSupportedDeviceWakeState(a1);
    KeReleaseSpinLock(&AcpiPowerLock, v15);
    if ( (int)v13 < (int)v11 || v33 )
      v11 = v13;
    if ( !(_DWORD)v11 )
    {
      v16 = *(_QWORD *)(a1 + 1008);
      if ( (v16 & 0x400000000LL) != 0 )
      {
        if ( (AcpiSupportedSystemStates & 0x20) != 0 )
          v11 = 5LL;
        else
          v11 = (AcpiSupportedSystemStates & 0x10) != 0 ? 4 : 1;
      }
      else if ( (v16 & 0x100000000LL) != 0 )
      {
        v11 = 1LL;
      }
    }
    if ( v14 )
      v9 = v14;
    v17 = v14 != 0;
    IdleWakeInfo = AcpiGetIdleWakeInfo(a1, v13, &v34);
    if ( IdleWakeInfo == -1073741275 )
    {
      IdleWakeInfo = AcpiGetIdleWakeInfo(a1, (unsigned int)v11, &v34);
      if ( IdleWakeInfo == -1073741275 )
        IdleWakeInfo = ACPISystemPowerGetDeviceWake(a1, &v34);
    }
    if ( IdleWakeInfo >= 0
      && ((si128 = _mm_load_si128((const __m128i *)&_xmm), v40 = 4, v41 = 4, v34 > 5)
        ? (v19 = 0)
        : (v19 = si128.m128i_u32[v34]),
          v20 = *a5,
          _bittest(&v20, v19)) )
    {
      v9 = v19;
    }
    else if ( !v17 )
    {
      if ( (unsigned int)v11 > 6 )
        v11 = 0LL;
      v9 = *(_DWORD *)(v35 + 4 * v11);
      if ( !v9 )
        v9 = 4;
    }
    if ( v33 )
    {
LABEL_43:
      v21 = v9 == 5;
    }
    else
    {
      v21 = v9 == 5;
      if ( v9 < 5 )
      {
        while ( 1 )
        {
          v22 = *a5;
          if ( _bittest(&v22, v9) )
            break;
          if ( ++v9 >= 5 )
            goto LABEL_43;
        }
LABEL_45:
        if ( v9 )
        {
          v23 = 1 << v9;
LABEL_48:
          *a5 = v23;
          goto LABEL_70;
        }
LABEL_47:
        v9 = 0;
        LODWORD(v11) = 0;
        v23 = 0;
        goto LABEL_48;
      }
    }
    if ( v21 )
      goto LABEL_47;
    goto LABEL_45;
  }
  DeviceWake = AcpiGetIdleWakeInfo(a1, (unsigned int)v11, &v34);
  if ( DeviceWake == -1073741275 )
    DeviceWake = ACPISystemPowerGetDeviceWake(a1, &v34);
  if ( DeviceWake >= 0 )
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v40 = 4;
    v41 = 4;
    if ( v34 <= 5 )
    {
      v25 = si128.m128i_i32[v34];
      if ( v25 > 0 )
      {
        while ( 1 )
        {
          v26 = *a5;
          if ( _bittest(&v26, v25) )
            break;
          if ( --v25 <= 0 )
            goto LABEL_58;
        }
        v9 = v25;
      }
    }
  }
LABEL_58:
  v27 = (_DWORD)v11 == 0;
  if ( (int)v11 > 0 )
  {
    v28 = (signed int *)(a4 + 4LL * (int)v11);
    while ( 1 )
    {
      v29 = AcpiSupportedSystemStates;
      if ( _bittest(&v29, v11) )
      {
        v30 = *v28;
        if ( *v28 )
        {
          if ( v30 <= v9 )
            goto LABEL_67;
          v31 = *a5;
          if ( _bittest(&v31, v30) )
            break;
        }
      }
      LODWORD(v11) = v11 - 1;
      --v28;
      if ( (int)v11 <= 0 )
        goto LABEL_67;
    }
    v9 = *v28;
LABEL_67:
    v27 = (_DWORD)v11 == 0;
  }
  if ( v27 )
  {
    v9 = 0;
    *a5 = 0;
  }
LABEL_70:
  if ( v36 )
    *v36 = v11;
  if ( v37 )
    *v37 = v9;
  if ( v38 )
    *v38 = v9;
  return 0LL;
}
