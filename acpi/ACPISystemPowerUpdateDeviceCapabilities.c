__int64 __fastcall ACPISystemPowerUpdateDeviceCapabilities(ULONG_PTR BugCheckParameter2, __m128i *a2, __int64 a3)
{
  __int32 v3; // eax
  char v4; // di
  __int64 v5; // xmm0_8
  int v7; // eax
  const char *v8; // rsi
  unsigned int v9; // edx
  int v10; // r14d
  const char *v11; // rdx
  __int64 v12; // rcx
  __int64 result; // rax
  unsigned int v14; // r14d
  int updated; // eax
  const char *v16; // rsi
  const char *v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // ecx
  int v20; // eax
  int SxD; // ecx
  char v22; // r8
  const char *v23; // r10
  const char *v24; // rdx
  __int64 v25; // rax
  CCHAR LeastSignificantBit; // al
  ULONG_PTR BugCheckParameter4; // r15
  __int64 *v28; // rax
  KIRQL v29; // r10
  const char *v30; // rcx
  __int64 v31; // rax
  int v32; // eax
  const char *v33; // rdx
  __int64 v34; // rcx
  const char *v35; // rcx
  __int64 v36; // rdx
  KIRQL v37; // al
  __int32 v38; // ecx
  KIRQL v39; // r8
  unsigned int v40; // eax
  __int64 v41; // xmm1_8
  int v42; // edx
  char v43; // [rsp+50h] [rbp-49h]
  unsigned int v44; // [rsp+54h] [rbp-45h]
  int v45; // [rsp+54h] [rbp-45h]
  int v46; // [rsp+58h] [rbp-41h] BYREF
  int v47; // [rsp+5Ch] [rbp-3Dh] BYREF
  __int64 *v48; // [rsp+60h] [rbp-39h]
  int v49; // [rsp+68h] [rbp-31h] BYREF
  int v50; // [rsp+6Ch] [rbp-2Dh]
  unsigned int v51; // [rsp+70h] [rbp-29h]
  int v52; // [rsp+74h] [rbp-25h] BYREF
  int v53; // [rsp+78h] [rbp-21h] BYREF
  int v54; // [rsp+7Ch] [rbp-1Dh]
  int v55; // [rsp+80h] [rbp-19h]
  __int64 v56; // [rsp+88h] [rbp-11h]
  __m128i v57; // [rsp+90h] [rbp-9h] BYREF
  __int64 v58; // [rsp+A0h] [rbp+7h]
  __int32 v59; // [rsp+A8h] [rbp+Fh]

  v3 = a2[2].m128i_i32[2];
  v4 = 0;
  v5 = a2[2].m128i_i64[0];
  v57 = a2[1];
  v59 = v3;
  v56 = a3;
  v7 = _mm_cvtsi128_si32(_mm_srli_si128(v57, 4));
  v49 = 0;
  v53 = 0;
  if ( v57.m128i_i32[1] != 1 )
    v7 = 1;
  v52 = 0;
  v57.m128i_i32[1] = v7;
  v46 = 0;
  v50 = 0;
  v55 = 0;
  v47 = 0;
  v58 = v5;
  v8 = (const char *)&unk_1C00622D0;
  v10 = ACPIDevicePowerDetermineSupportedDeviceStates(BugCheckParameter2);
  if ( v10 < 0 )
  {
    v11 = (const char *)&unk_1C00622D0;
    if ( BugCheckParameter2 )
    {
      v12 = *(_QWORD *)(BugCheckParameter2 + 8);
      v4 = BugCheckParameter2;
      if ( (v12 & 0x200000000000LL) != 0 )
      {
        v8 = *(const char **)(BugCheckParameter2 + 608);
        if ( (v12 & 0x400000000000LL) != 0 )
          v11 = *(const char **)(BugCheckParameter2 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xFu,
        0x14u,
        (__int64)&WPP_63048e4611d63d39c0d94317710a082a_Traceguids,
        v10,
        v4,
        v8,
        v11);
    return (unsigned int)v10;
  }
  v14 = v50 | v55;
  if ( v50 | v55 )
    goto LABEL_15;
  v9 = *(_DWORD *)(v56 + 4);
  if ( (v9 & 3) != 0 || (*(_BYTE *)(BugCheckParameter2 + 8) & 0x60) != 64 )
  {
    v14 = 4 * (*(_DWORD *)(v56 + 4) & 1) + 18;
    if ( (v9 & 2) != 0 )
      v14 |= 8u;
LABEL_15:
    updated = ACPISystemPowerUpdateWakeCapabilities(
                BugCheckParameter2,
                v9,
                v56,
                (unsigned int)&v57,
                (__int64)&v47,
                (__int64)&v46,
                (__int64)&v53,
                (__int64)&v52);
    v44 = updated;
    if ( updated < 0 )
    {
      v16 = (const char *)&unk_1C00622D0;
      v17 = (const char *)&unk_1C00622D0;
      if ( BugCheckParameter2 )
      {
        v18 = *(_QWORD *)(BugCheckParameter2 + 8);
        v4 = BugCheckParameter2;
        if ( (v18 & 0x200000000000LL) != 0 )
        {
          v16 = *(const char **)(BugCheckParameter2 + 608);
          if ( (v18 & 0x400000000000LL) != 0 )
            v17 = *(const char **)(BugCheckParameter2 + 616);
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xFu,
          0x15u,
          (__int64)&WPP_63048e4611d63d39c0d94317710a082a_Traceguids,
          updated,
          v4,
          v16,
          v17);
      return v44;
    }
    v19 = 2;
    v45 = 2;
    v48 = &v57.m128i_i64[1];
LABEL_24:
    v20 = AcpiSupportedSystemStates;
    if ( !_bittest(&v20, v19) )
      goto LABEL_57;
    SxD = ACPISystemPowerGetSxD(BugCheckParameter2, v19, &v49);
    if ( SxD >= 0 )
    {
      if ( v49 > *(_DWORD *)v48 )
        *(_DWORD *)v48 = v49;
      goto LABEL_57;
    }
    if ( SxD != -1073741772 )
    {
      v22 = 0;
      v23 = (const char *)&unk_1C00622D0;
      v24 = (const char *)&unk_1C00622D0;
      if ( BugCheckParameter2 )
      {
        v25 = *(_QWORD *)(BugCheckParameter2 + 8);
        v22 = BugCheckParameter2;
        if ( (v25 & 0x200000000000LL) != 0 )
        {
          v23 = *(const char **)(BugCheckParameter2 + 608);
          if ( (v25 & 0x400000000000LL) != 0 )
            v24 = *(const char **)(BugCheckParameter2 + 616);
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xFu,
          0x16u,
          (__int64)&WPP_63048e4611d63d39c0d94317710a082a_Traceguids,
          SxD,
          v22,
          v23,
          v24);
    }
    v43 = 0;
    v9 = v14 & (-1 << *(_DWORD *)v48);
    v51 = v9;
    if ( !v9 )
      goto LABEL_48;
    while ( 1 )
    {
      LeastSignificantBit = RtlFindLeastSignificantBit(v9);
      BugCheckParameter4 = LeastSignificantBit;
      v49 = LeastSignificantBit;
      v9 = ~(1 << LeastSignificantBit) & v51;
      v51 = v9;
      if ( v45 > v46 )
      {
        v28 = v48;
      }
      else
      {
        if ( (v9 & v47) != 0 )
          goto LABEL_46;
        v28 = v48;
        if ( (_DWORD)BugCheckParameter4 == v52 )
        {
          v43 = 1;
          *(_DWORD *)v48 = BugCheckParameter4;
        }
      }
      if ( (_DWORD)BugCheckParameter4 == 4 || !v50 )
        goto LABEL_56;
      KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
      v54 = ACPISystemPowerDetermineSupportedSystemState(BugCheckParameter2, BugCheckParameter4);
      if ( !v54 )
      {
        v33 = (const char *)&unk_1C00622D0;
        if ( BugCheckParameter2 )
        {
          v34 = *(_QWORD *)(BugCheckParameter2 + 8);
          v4 = BugCheckParameter2;
          if ( (v34 & 0x200000000000LL) != 0 )
          {
            v8 = *(const char **)(BugCheckParameter2 + 608);
            if ( (v34 & 0x400000000000LL) != 0 )
              v33 = *(const char **)(BugCheckParameter2 + 616);
          }
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0xFu,
            0x17u,
            (__int64)&WPP_63048e4611d63d39c0d94317710a082a_Traceguids,
            BugCheckParameter4 - 1,
            v4,
            v8,
            v33);
        KeBugCheckEx(0xA5u, 0x10uLL, BugCheckParameter2, 0LL, BugCheckParameter4);
      }
      KeReleaseSpinLock(&AcpiPowerLock, v29);
      if ( v54 >= v45 )
      {
        v28 = v48;
LABEL_56:
        *(_DWORD *)v28 = BugCheckParameter4;
LABEL_57:
        v48 = (__int64 *)((char *)v48 + 4);
        v32 = v45 + 1;
        v45 = v32;
        if ( v32 > 6 )
          break;
        v19 = v32;
        goto LABEL_24;
      }
      v9 = v51;
LABEL_46:
      if ( !v9 )
      {
        if ( v43 )
          goto LABEL_57;
LABEL_48:
        v30 = (const char *)&unk_1C00622D0;
        if ( BugCheckParameter2 )
        {
          v31 = *(_QWORD *)(BugCheckParameter2 + 8);
          v4 = BugCheckParameter2;
          if ( (v31 & 0x200000000000LL) != 0 )
          {
            v8 = *(const char **)(BugCheckParameter2 + 608);
            if ( (v31 & 0x400000000000LL) != 0 )
              v30 = *(const char **)(BugCheckParameter2 + 616);
          }
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0xFu,
            0x18u,
            (__int64)&WPP_63048e4611d63d39c0d94317710a082a_Traceguids,
            v45 - 1,
            v4,
            v8,
            v30);
        KeBugCheckEx(0xA5u, 0x10uLL, BugCheckParameter2, 1uLL, v45);
      }
    }
  }
  result = ACPISystemPowerUpdateWakeCapabilities(
             BugCheckParameter2,
             v9,
             v56,
             (unsigned int)&v57,
             (__int64)&v47,
             (__int64)&v46,
             (__int64)&v53,
             (__int64)&v52);
  v54 = result;
  if ( (int)result >= 0 )
  {
    v37 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
    v38 = v59;
    v39 = v37;
    v40 = *(_DWORD *)(BugCheckParameter2 + 600) & 0xFFFFFFC0;
    v41 = v58;
    v42 = 2 * (v47 & 0x1E);
    *(__m128i *)(BugCheckParameter2 + 508) = v57;
    *(_QWORD *)(BugCheckParameter2 + 524) = v41;
    *(_DWORD *)(BugCheckParameter2 + 532) = v38;
    *(_DWORD *)(BugCheckParameter2 + 540) = v53;
    *(_DWORD *)(BugCheckParameter2 + 536) = v46;
    *(_DWORD *)(BugCheckParameter2 + 600) = v40 | (v14 >> 2) & 3 | v42;
    KeReleaseSpinLock(&AcpiPowerLock, v39);
    if ( !_bittest64((const signed __int64 *)(BugCheckParameter2 + 8), 0x33u) )
      _InterlockedOr64((volatile signed __int64 *)(BugCheckParameter2 + 8), 0x100000000000000uLL);
    return 0LL;
  }
  else
  {
    v35 = (const char *)&unk_1C00622D0;
    if ( BugCheckParameter2 )
    {
      v36 = *(_QWORD *)(BugCheckParameter2 + 8);
      v4 = BugCheckParameter2;
      if ( (v36 & 0x200000000000LL) != 0 )
      {
        v8 = *(const char **)(BugCheckParameter2 + 608);
        if ( (v36 & 0x400000000000LL) != 0 )
          v35 = *(const char **)(BugCheckParameter2 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_dqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xFu,
        0x19u,
        (__int64)&WPP_63048e4611d63d39c0d94317710a082a_Traceguids,
        result,
        v4,
        v8,
        v35);
      return (unsigned int)v54;
    }
  }
  return result;
}
