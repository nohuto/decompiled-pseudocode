/*
 * XREFs of ACPIFanPrepareImpactZoneSupport @ 0x1C0084960
 * Callers:
 *     ACPIFanStartDevice @ 0x1C0085270 (ACPIFanStartDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_dqss @ 0x1C0009A6C (WPP_RECORDER_SF_dqss.c)
 *     WPP_RECORDER_SF_ddqss @ 0x1C0014AC8 (WPP_RECORDER_SF_ddqss.c)
 *     WPP_RECORDER_SF_dDqss @ 0x1C0027D7C (WPP_RECORDER_SF_dDqss.c)
 *     AMLIEvalPkgDataElement @ 0x1C0047F38 (AMLIEvalPkgDataElement.c)
 *     AMLIFreeDataBuffs @ 0x1C00482C4 (AMLIFreeDataBuffs.c)
 *     ACPIAmliEvaluateDsm @ 0x1C007C65C (ACPIAmliEvaluateDsm.c)
 *     ACPIFanValidateImpactZoneSupport @ 0x1C0085554 (ACPIFanValidateImpactZoneSupport.c)
 */

__int64 __fastcall ACPIFanPrepareImpactZoneSupport(__int64 a1)
{
  _QWORD *v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx
  char *v5; // rdi
  char *v6; // rdx
  unsigned __int16 v7; // r9
  unsigned __int8 v8; // dl
  __int64 v9; // r13
  const char *v10; // rdi
  __int64 *v11; // r12
  const char *v12; // r8
  const char *v13; // rdx
  unsigned __int8 v14; // r10
  __int64 v15; // rax
  const char *v16; // r10
  __int64 v17; // rcx
  const char *v18; // r8
  _QWORD *v19; // rcx
  const char *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  int v23; // r8d
  const char *v24; // rdx
  const char *v25; // r8
  _QWORD *v26; // rcx
  char *v27; // rcx
  __int64 v28; // r13
  __int64 v29; // rdx
  const char *v30; // rax
  int v31; // edx
  const char *v32; // rax
  unsigned int v33; // r13d
  int v34; // eax
  __int64 v35; // r8
  __int64 v36; // rdx
  char v37; // al
  const char *v38; // rcx
  const char *v39; // rax
  int v40; // [rsp+28h] [rbp-79h]
  int v41; // [rsp+28h] [rbp-79h]
  int v42; // [rsp+28h] [rbp-79h]
  char v43; // [rsp+30h] [rbp-71h]
  char v44; // [rsp+38h] [rbp-69h]
  const char *v45; // [rsp+40h] [rbp-61h]
  const char *v46; // [rsp+48h] [rbp-59h]
  __int64 v47; // [rsp+58h] [rbp-49h] BYREF
  int v48; // [rsp+60h] [rbp-41h]
  __int128 v49; // [rsp+68h] [rbp-39h] BYREF
  __int128 v50; // [rsp+78h] [rbp-29h] BYREF
  __int128 v51; // [rsp+88h] [rbp-19h]
  __int64 v52; // [rsp+98h] [rbp-9h]
  __int128 v53; // [rsp+A0h] [rbp-1h] BYREF
  __int128 v54; // [rsp+B0h] [rbp+Fh]
  __int128 v55; // [rsp+C0h] [rbp+1Fh]

  v52 = 0LL;
  *(_DWORD *)(a1 + 320) = 0;
  v2 = *(_QWORD **)(a1 + 760);
  v50 = 0LL;
  v48 = 0;
  v51 = 0LL;
  v53 = 0LL;
  v47 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v49 = FAN_EXTENSIONS_DSM_UUID;
  result = ACPIAmliEvaluateDsm(v2, (__int64)&v49, 0, 0, &v53, &v47);
  if ( (int)result < 0 )
  {
    v4 = *(_QWORD *)(a1 + 8);
    v5 = byte_1C00622D0;
    v6 = byte_1C00622D0;
    if ( (v4 & 0x200000000000LL) != 0 )
    {
      v5 = *(char **)(a1 + 608);
      if ( (v4 & 0x400000000000LL) != 0 )
        v6 = *(char **)(a1 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return result;
    v46 = v6;
    v7 = 34;
    v45 = v5;
    v44 = a1;
    v43 = result;
    v8 = 3;
    return WPP_RECORDER_SF_dqss(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             v8,
             0x10u,
             v7,
             (__int64)&WPP_851d451e9c8635d57712462b586962d1_Traceguids,
             v43,
             v44,
             v45,
             v46);
  }
  v9 = v47;
  if ( *(_WORD *)(v47 + 2) == 3 && *(_DWORD *)(v47 + 24) )
  {
    v10 = byte_1C00622D0;
    v11 = (__int64 *)(a1 + 8);
    v12 = byte_1C00622D0;
    v13 = byte_1C00622D0;
    v14 = **(_BYTE **)(v47 + 32);
    v15 = *(_QWORD *)(a1 + 8);
    v48 = v14;
    if ( (v15 & 0x200000000000LL) != 0 )
    {
      v12 = *(const char **)(a1 + 608);
      if ( (v15 & 0x400000000000LL) != 0 )
        v13 = *(const char **)(a1 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x10u,
        0x23u,
        (__int64)&WPP_851d451e9c8635d57712462b586962d1_Traceguids,
        v14,
        a1,
        v12,
        v13);
  }
  else
  {
    v10 = byte_1C00622D0;
    v11 = (__int64 *)(a1 + 8);
    v16 = byte_1C00622D0;
    v17 = *(_QWORD *)(a1 + 8);
    v18 = byte_1C00622D0;
    if ( (v17 & 0x200000000000LL) != 0 )
    {
      v16 = *(const char **)(a1 + 608);
      if ( (v17 & 0x400000000000LL) != 0 )
        v18 = *(const char **)(a1 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dDqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        *(unsigned __int16 *)(v47 + 2),
        (__int64)v18,
        0x24u,
        v40,
        *(_WORD *)(v47 + 2),
        *(_DWORD *)(v47 + 24),
        a1,
        v16,
        v18);
  }
  AMLIFreeDataBuffs(v9);
  result = v48 & 0xF;
  if ( (_BYTE)result != 15 )
    return result;
  v19 = *(_QWORD **)(a1 + 760);
  v47 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v49 = FAN_EXTENSIONS_DSM_UUID;
  result = ACPIAmliEvaluateDsm(v19, (__int64)&v49, 0, 1u, &v53, &v47);
  v20 = byte_1C00622D0;
  if ( (int)result < 0 )
  {
    if ( (*v11 & 0x200000000000LL) != 0 )
    {
      v10 = *(const char **)(a1 + 608);
      if ( (*v11 & 0x400000000000LL) != 0 )
        v20 = *(const char **)(a1 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return result;
    v46 = v20;
    v7 = 37;
    v45 = v10;
    v44 = a1;
    v43 = result;
LABEL_27:
    v8 = 2;
    return WPP_RECORDER_SF_dqss(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             v8,
             0x10u,
             v7,
             (__int64)&WPP_851d451e9c8635d57712462b586962d1_Traceguids,
             v43,
             v44,
             v45,
             v46);
  }
  v21 = *(unsigned __int16 *)(v47 + 2);
  v22 = *v11;
  if ( (_WORD)v21 == 1 )
  {
    v23 = *(_DWORD *)(v47 + 16);
    v24 = byte_1C00622D0;
    *(_DWORD *)(a1 + 324) = v23;
    if ( (v22 & 0x200000000000LL) != 0 )
    {
      v24 = *(const char **)(a1 + 608);
      if ( (v22 & 0x400000000000LL) != 0 )
        v20 = *(const char **)(a1 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x10u,
        0x26u,
        (__int64)&WPP_851d451e9c8635d57712462b586962d1_Traceguids,
        v23,
        a1,
        v24,
        v20);
  }
  else
  {
    v25 = byte_1C00622D0;
    if ( (v22 & 0x200000000000LL) != 0 )
    {
      v25 = *(const char **)(a1 + 608);
      if ( (v22 & 0x400000000000LL) != 0 )
        v20 = *(const char **)(a1 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dDqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v21,
        (__int64)v25,
        0x27u,
        v41,
        v21,
        *(_DWORD *)(v47 + 24),
        a1,
        v25,
        v20);
  }
  AMLIFreeDataBuffs(v47);
  v26 = *(_QWORD **)(a1 + 760);
  v47 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v49 = FAN_EXTENSIONS_DSM_UUID;
  result = ACPIAmliEvaluateDsm(v26, (__int64)&v49, 0, 3u, &v53, &v47);
  if ( (int)result < 0 )
  {
    v27 = byte_1C00622D0;
    if ( (*v11 & 0x200000000000LL) != 0 )
    {
      v10 = *(const char **)(a1 + 608);
      if ( (*v11 & 0x400000000000LL) != 0 )
        v27 = *(char **)(a1 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return result;
    v46 = v27;
    v7 = 40;
    v45 = v10;
    v44 = a1;
    v43 = result;
    goto LABEL_27;
  }
  v28 = v47;
  v29 = *(unsigned __int16 *)(v47 + 2);
  if ( (_WORD)v29 != 4 )
  {
    v30 = byte_1C00622D0;
    if ( (*v11 & 0x200000000000LL) != 0 )
    {
      v10 = *(const char **)(a1 + 608);
      if ( (*v11 & 0x400000000000LL) != 0 )
        v30 = *(const char **)(a1 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dDqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v29,
        4LL,
        0x29u,
        v42,
        v29,
        *(_DWORD *)(v47 + 24),
        a1,
        v10,
        v30);
    return AMLIFreeDataBuffs(v28);
  }
  v31 = **(_DWORD **)(v47 + 32);
  if ( v31 != 4 )
  {
    v32 = byte_1C00622D0;
    if ( (*v11 & 0x200000000000LL) != 0 )
    {
      v10 = *(const char **)(a1 + 608);
      if ( (*v11 & 0x400000000000LL) != 0 )
        v32 = *(const char **)(a1 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x10u,
        0x2Au,
        (__int64)&WPP_851d451e9c8635d57712462b586962d1_Traceguids,
        4,
        v31,
        a1,
        v10,
        v32);
    return AMLIFreeDataBuffs(v28);
  }
  v33 = 0;
  *(_QWORD *)&v49 = a1 + 328;
  do
  {
    v34 = AMLIEvalPkgDataElement(v47, v33, (__int64)&v50);
    v36 = (unsigned int)v34;
    if ( v34 < 0 )
    {
      v39 = byte_1C00622D0;
      if ( (*v11 & 0x200000000000LL) != 0 )
      {
        v10 = *(const char **)(a1 + 608);
        if ( (*v11 & 0x400000000000LL) != 0 )
          v39 = *(const char **)(a1 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dDqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v36,
          v35,
          0x2Bu,
          v42,
          v33,
          v36,
          a1,
          v10,
          v39);
      goto LABEL_74;
    }
    if ( WORD1(v50) != 1 )
    {
      v38 = byte_1C00622D0;
      if ( (*v11 & 0x200000000000LL) != 0 )
      {
        v10 = *(const char **)(a1 + 608);
        if ( (*v11 & 0x400000000000LL) != 0 )
          v38 = *(const char **)(a1 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dDqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          (unsigned int)v34,
          v35,
          0x2Cu,
          v42,
          v33,
          SBYTE2(v50),
          a1,
          v10,
          v38);
      AMLIFreeDataBuffs((__int64)&v50);
LABEL_74:
      v28 = v47;
      return AMLIFreeDataBuffs(v28);
    }
    *(_DWORD *)v49 = v51;
    AMLIFreeDataBuffs((__int64)&v50);
    ++v33;
    *(_QWORD *)&v49 = v49 + 4;
  }
  while ( v33 < 4 );
  v37 = ACPIFanValidateImpactZoneSupport(a1);
  v28 = v47;
  if ( v37 )
    *(_DWORD *)(a1 + 320) = v48;
  return AMLIFreeDataBuffs(v28);
}
