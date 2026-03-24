/*
 * XREFs of RIMAllocateHidDesc @ 0x1C0057F3C
 * Callers:
 *     RIMCreateHidDesc @ 0x1C00582E8 (RIMCreateHidDesc.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C00298B0 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0047F78 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x1C00487D0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_S @ 0x1C0055A8C (WPP_RECORDER_SF_S.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0056804 (RimDeviceTypeToRimInputType.c)
 *     RIMFreeHidDesc @ 0x1C0057658 (RIMFreeHidDesc.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0058904 (WPP_RECORDER_SF_DD.c)
 *     ?DbgPrintWarning@@YAXPEADZZ @ 0x1C0058AB4 (-DbgPrintWarning@@YAXPEADZZ.c)
 *     Win32AllocPoolNonPaged @ 0x1C005C490 (Win32AllocPoolNonPaged.c)
 *     rimIsHidInputDevice @ 0x1C006BB38 (rimIsHidInputDevice.c)
 *     ApiSetInkProcessorIsInkDevice @ 0x1C00ABC18 (ApiSetInkProcessorIsInkDevice.c)
 *     RIMIsInteractiveCtrl @ 0x1C00B6A9C (RIMIsInteractiveCtrl.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C015BF5C (RIMCreatePointerDeviceInfo.c)
 *     RIMConfigurePointerDevice @ 0x1C0161264 (RIMConfigurePointerDevice.c)
 *     RIMFindSiblingMouseDevice @ 0x1C0161A0C (RIMFindSiblingMouseDevice.c)
 *     RIMMarkSiblingMouseDevice @ 0x1C0161C70 (RIMMarkSiblingMouseDevice.c)
 *     ApiSetEtwTracePointerDeviceArrivalStart @ 0x1C01CE8D4 (ApiSetEtwTracePointerDeviceArrivalStart.c)
 *     ApiSetEtwTracePointerDeviceArrivalStop @ 0x1C01CE964 (ApiSetEtwTracePointerDeviceArrivalStop.c)
 *     ApiSetSetUserPTPEnabledPreference @ 0x1C01D0EE4 (ApiSetSetUserPTPEnabledPreference.c)
 */

__int64 __fastcall RIMAllocateHidDesc(
        __int64 a1,
        __int64 a2,
        void *a3,
        unsigned __int16 *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  char *v7; // rbx
  __int64 v9; // rsi
  char *v10; // rax
  int v11; // edx
  __int64 v12; // rdi
  __int64 v13; // rax
  int v14; // edx
  __int64 v15; // r8
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  int v19; // edx
  __int64 v20; // r8
  unsigned __int16 v21; // r9
  int v22; // edx
  int v23; // edx
  __int64 v25; // xmm0_8
  int v26; // eax
  unsigned __int16 v27; // cx
  PVOID v28; // rsi
  int v29; // [rsp+48h] [rbp-51h]
  __int64 v30; // [rsp+58h] [rbp-41h] BYREF
  int v31; // [rsp+60h] [rbp-39h]
  _OWORD v32[7]; // [rsp+68h] [rbp-31h] BYREF
  PVOID Object; // [rsp+F8h] [rbp+5Fh] BYREF

  Object = a3;
  v7 = 0LL;
  v9 = a2;
  if ( !a3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 46, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids);
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
        47,
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
        48,
        (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
        *(_QWORD *)(v9 + 216));
    }
    return 0LL;
  }
  *(_OWORD *)(v10 + 40) = *(_OWORD *)a4;
  *(_OWORD *)(v10 + 56) = *((_OWORD *)a4 + 1);
  *(_OWORD *)(v10 + 72) = *((_OWORD *)a4 + 2);
  *(_OWORD *)(v10 + 88) = *((_OWORD *)a4 + 3);
  if ( (unsigned int)rimIsHidInputDevice(v9, v10) )
  {
    v13 = Win32AllocPoolNonPaged(10LL * *(unsigned __int16 *)(v12 + 44), 1886417746LL);
    *(_QWORD *)(v12 + 24) = v13;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 4;
      WPP_RECORDER_SF_q((_DWORD)gRimLog, v14, 1, 49, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids, v13);
      v13 = *(_QWORD *)(v12 + 24);
    }
    if ( !v13 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 3;
        WPP_RECORDER_SF_d(
          (_DWORD)gRimLog,
          v14,
          1,
          50,
          (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
          *(_WORD *)(v12 + 44));
      }
      RIMFreeHidDesc(v12);
      return 0LL;
    }
  }
  v15 = a5;
  *(_QWORD *)(v12 + 16) = Object;
  *(_QWORD *)(v12 + 104) = *(_QWORD *)v15;
  *(_DWORD *)(v12 + 112) = *(_DWORD *)(v15 + 8);
  if ( a4[1] == 13 && ((unsigned __int16)(*a4 - 1) <= 1u || (unsigned __int16)(*a4 - 4) <= 1u) )
  {
    ApiSetEtwTracePointerDeviceArrivalStart();
    v25 = *(_QWORD *)(v12 + 104);
    v31 = *(_DWORD *)(v12 + 112);
    v30 = v25;
    v26 = RIMCreatePointerDeviceInfo(a1, v9, Object, a4, a6, a7, &v30);
    v27 = *a4;
    v29 = v26;
    if ( v26 >= 0 )
    {
      if ( (unsigned __int16)(v27 - 4) <= 1u )
      {
        RIMConfigurePointerDevice(a1, v9, v12);
        if ( *a4 == 5 )
        {
          if ( !*(_QWORD *)(v9 + 480) )
          {
            LODWORD(Object) = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1002LL);
          }
          ApiSetSetUserPTPEnabledPreference(v9, v12, a1);
        }
        v26 = v29;
      }
    }
    else if ( v27 != 5 || v26 == -1073741808 )
    {
      goto LABEL_14;
    }
    Object = 0LL;
    if ( v26 >= 0 && (unsigned int)RIMFindSiblingMouseDevice(v12, v9, &Object) )
    {
      v28 = Object;
      if ( Object )
        v7 = (char *)Object + 88;
      RIMMarkSiblingMouseDevice(v7, *a4);
      ObfDereferenceObject(v28);
    }
    ApiSetEtwTracePointerDeviceArrivalStop();
  }
  else
  {
    v16 = *((_OWORD *)a4 + 1);
    v32[0] = *(_OWORD *)a4;
    v17 = *((_OWORD *)a4 + 2);
    v32[1] = v16;
    v18 = *((_OWORD *)a4 + 3);
    v32[2] = v17;
    v32[3] = v18;
    if ( (unsigned int)RIMIsInteractiveCtrl(v32) )
    {
      *(_DWORD *)(v9 + 200) |= 0x100u;
    }
    else if ( (unsigned int)ApiSetInkProcessorIsInkDevice(v21, *a4, v20 + 6) )
    {
      *(_DWORD *)(v9 + 200) |= 0x200u;
    }
    else if ( ((unsigned int)RimDeviceTypeToRimInputType(v9, *(unsigned __int8 *)(v9 + 48)) & *(_DWORD *)(a1 + 84)) == 0
           || *(_DWORD *)(a1 + 88) && (*(_DWORD *)(v9 + 184) & 0x4000) == 0 )
    {
LABEL_14:
      DbgPrintWarning("Ignore (Usage: %x, UsagePage: %x)\n", *a4, a4[1]);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v22) = 4;
        WPP_RECORDER_SF_DD(
          (_DWORD)gRimLog,
          v22,
          1,
          52,
          (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
          a4[1],
          *a4);
      }
      *(_QWORD *)(v12 + 16) = 0LL;
      *(_QWORD *)(v9 + 464) = 0LL;
      RIMFreeHidDesc(v12);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v23) = 4;
        WPP_RECORDER_SF_q((_DWORD)gRimLog, v23, 1, 53, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids, 0);
      }
      return 0LL;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v19) = 4;
    WPP_RECORDER_SF_q((_DWORD)gRimLog, v19, 1, 51, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids, v12);
  }
  return v12;
}
