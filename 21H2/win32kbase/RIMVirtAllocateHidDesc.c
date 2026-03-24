/*
 * XREFs of RIMVirtAllocateHidDesc @ 0x1C0162908
 * Callers:
 *     RIMVirtCreateHidDesc @ 0x1C0162D0C (RIMVirtCreateHidDesc.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0028440 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0046B08 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x1C0047360 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_S @ 0x1C0054A8C (WPP_RECORDER_SF_S.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0055804 (RimDeviceTypeToRimInputType.c)
 *     RIMFreeHidDesc @ 0x1C0056658 (RIMFreeHidDesc.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0057904 (WPP_RECORDER_SF_DD.c)
 *     ?DbgPrintWarning@@YAXPEADZZ @ 0x1C0057AB4 (-DbgPrintWarning@@YAXPEADZZ.c)
 *     Win32AllocPoolNonPaged @ 0x1C005B490 (Win32AllocPoolNonPaged.c)
 *     rimIsHidInputDevice @ 0x1C006B088 (rimIsHidInputDevice.c)
 *     ApiSetInkProcessorIsInkDevice @ 0x1C00AB718 (ApiSetInkProcessorIsInkDevice.c)
 *     RIMIsInteractiveCtrl @ 0x1C00B675C (RIMIsInteractiveCtrl.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0160150 (RIMVirtCreatePointerDeviceInfo.c)
 *     ApiSetEtwTracePointerDeviceArrivalStart @ 0x1C01CE9A4 (ApiSetEtwTracePointerDeviceArrivalStart.c)
 *     ApiSetEtwTracePointerDeviceArrivalStop @ 0x1C01CEA34 (ApiSetEtwTracePointerDeviceArrivalStop.c)
 */

__int64 __fastcall RIMVirtAllocateHidDesc(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v8; // r14
  char *v10; // rax
  int v11; // edx
  __int64 v12; // rbx
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int64 v16; // rax
  int v17; // edx
  unsigned __int16 v18; // r9
  __int64 v19; // xmm0_8
  int v20; // eax
  int v21; // edx
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int64 v25; // r8
  unsigned __int16 v26; // r9
  int v28; // edx
  int v29; // edx
  __int64 v30; // [rsp+40h] [rbp-78h] BYREF
  int v31; // [rsp+48h] [rbp-70h]
  _OWORD v32[4]; // [rsp+50h] [rbp-68h] BYREF

  v8 = a2;
  if ( !a3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 71, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids);
    }
    return 0LL;
  }
  if ( !a4[2] && (*(_DWORD *)(a2 + 184) & 0x4000) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 3;
      WPP_RECORDER_SF_DD(
        (_DWORD)gRimLog,
        a2,
        1,
        72,
        (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
        a4[1],
        *a4);
    }
    return 0LL;
  }
  v10 = (char *)Win32AllocPoolZInit(0x78uLL, 1147695954LL);
  v12 = (__int64)v10;
  if ( !v10 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 3;
      WPP_RECORDER_SF_S(
        (_DWORD)gRimLog,
        v11,
        1,
        73,
        (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
        *(_QWORD *)(v8 + 216));
    }
    return 0LL;
  }
  v13 = *((_OWORD *)a4 + 1);
  *(_OWORD *)(v10 + 40) = *(_OWORD *)a4;
  v14 = *((_OWORD *)a4 + 2);
  *(_OWORD *)(v10 + 56) = v13;
  v15 = *((_OWORD *)a4 + 3);
  *(_OWORD *)(v10 + 72) = v14;
  *(_OWORD *)(v10 + 88) = v15;
  if ( (unsigned int)rimIsHidInputDevice(v8, (__int64)v10) )
  {
    v16 = Win32AllocPoolNonPaged(10LL * *(unsigned __int16 *)(v12 + 44), 0x70707352u);
    *(_QWORD *)(v12 + 24) = v16;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v17) = 4;
      WPP_RECORDER_SF_q((_DWORD)gRimLog, v17, 1, 74, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids, v16);
      v16 = *(_QWORD *)(v12 + 24);
    }
    if ( !v16 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v17) = 3;
        WPP_RECORDER_SF_d(
          (_DWORD)gRimLog,
          v17,
          1,
          75,
          (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
          *(_WORD *)(v12 + 44));
      }
      RIMFreeHidDesc(v12);
      return 0LL;
    }
  }
  v18 = a4[1];
  *(_QWORD *)(v12 + 16) = a3;
  *(_QWORD *)(v12 + 104) = *(_QWORD *)a5;
  *(_DWORD *)(v12 + 112) = *(_DWORD *)(a5 + 8);
  if ( v18 != 13 || (unsigned __int16)(*a4 - 1) > 1u && (unsigned __int16)(*a4 - 4) > 1u )
  {
    v22 = *((_OWORD *)a4 + 1);
    v32[0] = *(_OWORD *)a4;
    v23 = *((_OWORD *)a4 + 2);
    v32[1] = v22;
    v24 = *((_OWORD *)a4 + 3);
    v32[2] = v23;
    v32[3] = v24;
    if ( (unsigned int)RIMIsInteractiveCtrl(v32) )
    {
      *(_DWORD *)(v8 + 200) |= 0x100u;
      goto LABEL_32;
    }
    if ( (unsigned int)ApiSetInkProcessorIsInkDevice(v26, *a4, v25 + 6) )
    {
      *(_DWORD *)(v8 + 200) |= 0x200u;
      goto LABEL_32;
    }
    if ( ((unsigned int)RimDeviceTypeToRimInputType(v8, *(unsigned __int8 *)(v8 + 48)) & *(_DWORD *)(a1 + 84)) != 0
      && (!*(_DWORD *)(a1 + 88) || (*(_DWORD *)(v8 + 184) & 0x4000) != 0) )
    {
      goto LABEL_32;
    }
LABEL_35:
    DbgPrintWarning("Ignore (Usage: %x, UsagePage: %x)\n", *a4, a4[1]);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v28) = 4;
      WPP_RECORDER_SF_DD(
        (_DWORD)gRimLog,
        v28,
        1,
        77,
        (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
        a4[1],
        *a4);
    }
    *(_QWORD *)(v12 + 16) = 0LL;
    *(_QWORD *)(v8 + 464) = 0LL;
    RIMFreeHidDesc(v12);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v29) = 4;
      WPP_RECORDER_SF_q((_DWORD)gRimLog, v29, 1, 78, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids, 0);
    }
    return 0LL;
  }
  ApiSetEtwTracePointerDeviceArrivalStart();
  v19 = *(_QWORD *)(v12 + 104);
  v31 = *(_DWORD *)(v12 + 112);
  v30 = v19;
  v20 = RIMVirtCreatePointerDeviceInfo(a1, v8, a3, (__int16 *)a4, &v30, a6);
  if ( v20 < 0 && (*a4 != 5 || v20 == -1073741808) )
    goto LABEL_35;
  ApiSetEtwTracePointerDeviceArrivalStop();
LABEL_32:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v21) = 4;
    WPP_RECORDER_SF_q((_DWORD)gRimLog, v21, 1, 76, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids, v12);
  }
  return v12;
}
