/*
 * XREFs of ?UpdatePointerInfoTarget@CTouchProcessor@@QEAAH_KUtagINPUTDEST@@HHPEAUtagPOINT@@2@Z @ 0x1C01D9E70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0038C0C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C003A380 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C0088D40 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C0088D80 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00DC94C (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z @ 0x1C01C9164 (-GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C01D30A4 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C01D6E88 (-SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUta.c)
 *     GetAdjustedPointerPixelLocation @ 0x1C01E7A90 (GetAdjustedPointerPixelLocation.c)
 *     ApiSetEditionDoPointerDPITransforms @ 0x1C0206D4C (ApiSetEditionDoPointerDPITransforms.c)
 *     ApiSetPointerPromotionOnPointerInputRetrieval @ 0x1C020E9E4 (ApiSetPointerPromotionOnPointerInputRetrieval.c)
 */

__int64 __fastcall CTouchProcessor::UpdatePointerInfoTarget(
        struct _KTHREAD **a1,
        void *a2,
        struct tagINPUTDEST *a3,
        int a4,
        unsigned int a5,
        _QWORD *a6,
        _QWORD *a7)
{
  void *v7; // rsi
  unsigned int v9; // ebx
  char v10; // di
  CTouchProcessor *v11; // rcx
  __int64 v12; // r8
  const struct CPointerMsgData *MsgData; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  const struct CPointerMsgData *v16; // r14
  PDEVICE_OBJECT v17; // rcx
  __int16 v18; // ax
  const struct CPointerInputFrame *v19; // r15
  _QWORD *v20; // rsi
  __int64 v21; // r8
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  struct tagINPUTDEST *v30; // [rsp+60h] [rbp-A0h]
  CInpLockGuard *v31[7]; // [rsp+68h] [rbp-98h] BYREF
  _OWORD v32[8]; // [rsp+A0h] [rbp-60h] BYREF

  v7 = a2;
  v30 = a3;
  v9 = 0;
  v10 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      (_DWORD)a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      102,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v31, (struct CInpLockGuard *)(a1 + 4), v7);
  MsgData = CTouchProcessor::GetMsgData(v11, (__int64)v7, v12);
  v16 = MsgData;
  if ( MsgData )
  {
    v19 = CTouchProcessor::ReferenceFrame(a1, *((unsigned int *)MsgData + 7), v15);
    if ( v19 )
    {
      CInputDest::CInputDest((CInputDest *)v32, v30);
      CTouchProcessor::SetPointerInfoNodeTarget(
        (CTouchProcessor *)a1,
        v19,
        *((unsigned int *)v16 + 8),
        (const struct CInputDest *)v32,
        a4,
        0LL,
        1,
        0,
        1,
        0);
      CInputDest::SetEmpty((CInputDest *)v32);
      v20 = (_QWORD *)(*((_QWORD *)v19 + 30) + 480LL * *((unsigned int *)v16 + 8));
      if ( !(unsigned int)GetAdjustedPointerPixelLocation(v20[25], *(_QWORD *)((char *)v20 + 148), a6) )
        *a6 = v20[25];
      if ( !(unsigned int)GetAdjustedPointerPixelLocation(v20[27], *(_QWORD *)((char *)v20 + 148), a7) )
        *a7 = v20[27];
      CTouchProcessor::UnreferenceFrame((__int64)a1, (__int64)v19, v21);
      ApiSetPointerPromotionOnPointerInputRetrieval(*((unsigned __int16 *)v16 + 8), *((unsigned int *)v16 + 7), *a7, a5);
      v22 = *((_OWORD *)v30 + 1);
      v32[0] = *(_OWORD *)v30;
      v23 = *((_OWORD *)v30 + 2);
      v32[1] = v22;
      v24 = *((_OWORD *)v30 + 3);
      v32[2] = v23;
      v25 = *((_OWORD *)v30 + 4);
      v32[3] = v24;
      v26 = *((_OWORD *)v30 + 5);
      v32[4] = v25;
      v27 = *((_OWORD *)v30 + 6);
      v32[5] = v26;
      v32[6] = v27;
      ApiSetEditionDoPointerDPITransforms(v32, a6, a7);
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v14) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (LOBYTE(v15) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
      {
        LOBYTE(v15) = 0;
      }
      if ( (_BYTE)v14 || (_BYTE)v15 )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v14,
          v15,
          WPP_GLOBAL_Control->DeviceExtension,
          5,
          7,
          105,
          (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
      v9 = 1;
    }
    else
    {
      v17 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v14) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        v10 = 0;
      if ( (_BYTE)v14 || v10 )
      {
        v18 = 104;
        goto LABEL_33;
      }
    }
  }
  else
  {
    v17 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v14) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v10 = 0;
    if ( (_BYTE)v14 || v10 )
    {
      v18 = 103;
LABEL_33:
      LOBYTE(v15) = v10;
      WPP_RECORDER_AND_TRACE_SF_(
        v17->AttachedDevice,
        v14,
        v15,
        v17->DeviceExtension,
        5,
        7,
        v18,
        (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
    }
  }
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v31, v14, v15);
  return v9;
}
