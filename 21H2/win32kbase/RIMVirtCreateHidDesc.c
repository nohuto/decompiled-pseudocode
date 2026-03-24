/*
 * XREFs of RIMVirtCreateHidDesc @ 0x1C0162D0C
 * Callers:
 *     RIMVirtCreateDev @ 0x1C014FD68 (RIMVirtCreateDev.c)
 * Callees:
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C0047360 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C0056570 (WPP_RECORDER_SF_qDD.c)
 *     RIMFreeHidDesc @ 0x1C0056658 (RIMFreeHidDesc.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0057904 (WPP_RECORDER_SF_DD.c)
 *     ?DbgPrintWarning@@YAXPEADZZ @ 0x1C0057AB4 (-DbgPrintWarning@@YAXPEADZZ.c)
 *     Win32AllocPoolNonPaged @ 0x1C005B490 (Win32AllocPoolNonPaged.c)
 *     ApiSetInkProcessorIsInkDevice @ 0x1C00AB718 (ApiSetInkProcessorIsInkDevice.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C00AC134 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMSearchHidTLCInfo @ 0x1C00AC2AC (RIMSearchHidTLCInfo.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memmove @ 0x1C00CF880 (memmove.c)
 *     fromIV_HIDP_CAPS @ 0x1C0160F84 (fromIV_HIDP_CAPS.c)
 *     RIMVirtAllocateHidDesc @ 0x1C0162908 (RIMVirtAllocateHidDesc.c)
 *     WPP_RECORDER_SF_DDq @ 0x1C016326C (WPP_RECORDER_SF_DDq.c)
 */

__int64 __fastcall RIMVirtCreateHidDesc(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r15
  __int64 HidDesc; // r12
  int v7; // edx
  __int128 *v8; // rax
  size_t v9; // r8
  const void *v10; // rdx
  __int128 v11; // xmm2
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  void *v14; // r9
  unsigned __int16 v15; // si
  int v16; // edx
  int v17; // edx
  unsigned __int16 v18; // di
  unsigned int v19; // ecx
  __int64 v20; // rax
  __int64 v21; // r8
  int v22; // edx
  int v23; // r9d
  __int64 v24; // rbx
  int v25; // edx
  int v26; // edx
  unsigned __int16 v27; // di
  __int16 v28; // si
  int v29; // edx
  _DWORD *v30; // rbx
  int v31; // r8d
  int v33; // edx
  char v34; // [rsp+28h] [rbp-B1h]
  char v35; // [rsp+30h] [rbp-A9h]
  __int64 v36; // [rsp+40h] [rbp-99h]
  __int64 v37; // [rsp+48h] [rbp-91h]
  int v38; // [rsp+50h] [rbp-89h]
  _BYTE v39[72]; // [rsp+58h] [rbp-81h] BYREF
  _OWORD v40[4]; // [rsp+A0h] [rbp-39h] BYREF
  __int64 v41; // [rsp+E0h] [rbp+7h] BYREF
  int v42; // [rsp+E8h] [rbp+Fh]

  v4 = a2;
  HidDesc = 0LL;
  if ( (unsigned __int8)(*(_BYTE *)(a2 + 48) - 1) > 1u )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2966);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 79, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids);
  }
  v36 = Win32AllocPoolNonPaged(*(unsigned int *)(a3 + 168), 0x70707352u);
  if ( !v36 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v7, 1, 80, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids);
    }
    return HidDesc;
  }
  LODWORD(v37) = *(_DWORD *)(a3 + 168);
  BYTE4(v37) = *(_DWORD *)(a3 + 172) != 0;
  BYTE5(v37) = *(_BYTE *)(a3 + 176);
  HIWORD(v37) = *(_WORD *)(a3 + 180);
  LOWORD(v38) = *(_WORD *)(a3 + 184);
  HIWORD(v38) = *(_WORD *)(a3 + 188);
  v42 = v38;
  v41 = v37;
  v8 = (__int128 *)fromIV_HIDP_CAPS((__int64)v39, a3 + 72);
  v9 = *(unsigned int *)(a3 + 168);
  v10 = *(const void **)(a3 + 192);
  v11 = *v8;
  v12 = v8[2];
  v40[1] = v8[1];
  v13 = v8[3];
  v40[0] = v11;
  v40[3] = v13;
  v40[2] = v12;
  memmove(v14, v10, v9);
  v15 = v40[0];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v16 = LOWORD(v40[0]);
    LOBYTE(v16) = 4;
    WPP_RECORDER_SF_DD(
      (_DWORD)gRimLog,
      v16,
      1,
      81,
      (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
      SBYTE2(v40[0]),
      v40[0]);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v17) = 4;
      WPP_RECORDER_SF_DD(
        (_DWORD)gRimLog,
        v17,
        1,
        82,
        (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
        SBYTE4(v40[0]),
        SBYTE8(v40[0]));
    }
  }
  v18 = WORD1(v40[0]);
  DbgPrintWarning("Found (Usage: %x, UsagePage: %x)\n", v15, WORD1(v40[0]));
  v19 = *(_DWORD *)(a1 + 88);
  if ( v19 )
  {
    v20 = 0LL;
    v21 = *(_QWORD *)(a1 + 96);
    while ( *(_WORD *)(v21 + 4 * v20) != v15 || *(_WORD *)(v21 + 4 * v20 + 2) != v18 )
    {
      v22 = 1;
      v20 = (unsigned int)(v20 + 1);
      if ( (unsigned int)v20 >= v19 )
        goto LABEL_19;
    }
    *(_DWORD *)(v4 + 184) |= 0x4000u;
  }
  v22 = 1;
LABEL_19:
  if ( (*(_DWORD *)(v4 + 184) & 0x4000) == 0 && v18 == 1 )
  {
    if ( v15 && (v15 <= 2u || v15 > 5u && (v15 <= 7u || v15 == 128)) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_29:
        v24 = v36;
LABEL_30:
        Win32FreePool(v24);
        return HidDesc;
      }
      v35 = v15;
      v34 = 1;
      v23 = 83;
      LOBYTE(v22) = 4;
LABEL_28:
      WPP_RECORDER_SF_DD(
        (_DWORD)gRimLog,
        v22,
        1,
        v23,
        (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
        v34,
        v35);
      goto LABEL_29;
    }
LABEL_37:
    if ( v15 == 14 && (*(_DWORD *)(a1 + 84) & 0x10) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_29;
      v35 = 14;
      v23 = 87;
      v34 = 1;
LABEL_35:
      LOBYTE(v22) = 3;
      goto LABEL_28;
    }
    goto LABEL_41;
  }
  if ( v18 != 13 )
  {
    if ( v18 != 1 )
      goto LABEL_41;
    goto LABEL_37;
  }
  if ( v15 == 14 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_29;
    v35 = 14;
    v23 = 86;
    v34 = 13;
    goto LABEL_35;
  }
LABEL_41:
  if ( (unsigned int)ApiSetInkProcessorIsInkDevice(v18, v15, (__int64)&v41 + 6) && (*(_DWORD *)(a1 + 84) & 4) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v25) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v25, 1, 88, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids);
    }
    goto LABEL_29;
  }
  v24 = v36;
  HidDesc = RIMVirtAllocateHidDesc(a1, v4, v36, (unsigned __int16 *)v40, (__int64)&v41, a3);
  if ( !HidDesc )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v26 = WORD1(v40[0]);
      LOBYTE(v26) = 3;
      WPP_RECORDER_SF_DD(
        (_DWORD)gRimLog,
        v26,
        1,
        89,
        (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
        SBYTE2(v40[0]),
        v40[0]);
    }
    goto LABEL_30;
  }
  v27 = v40[0];
  v28 = WORD1(v40[0]);
  v30 = RIMSearchHidTLCInfo(SWORD1(v40[0]), v40[0]);
  if ( v30 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDq(
        v27,
        v29,
        v31,
        90,
        (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
        v28,
        v27,
        (char)v30);
LABEL_51:
    ++v30[5];
    *(_QWORD *)(v4 + 472) = v30;
    return HidDesc;
  }
  v30 = RIMAllocateAndLinkHidTLCInfo(v28, v27);
  if ( v30 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v33) = 4;
      WPP_RECORDER_SF_qDD(
        (_DWORD)gRimLog,
        v33,
        1,
        92,
        (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
        (char)v30,
        v28,
        v27);
    }
    goto LABEL_51;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v33) = 3;
    WPP_RECORDER_SF_q((_DWORD)gRimLog, v33, 1, 91, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids, a1);
  }
  RIMFreeHidDesc(HidDesc);
  return 0LL;
}
