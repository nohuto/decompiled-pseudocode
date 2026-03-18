/*
 * XREFs of xxxRetrievePointerInputMessage @ 0x1C01EB168
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0058FB0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?DiscardPointerMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@PEAUtagWND@@PEAUtagMSG@@@Z @ 0x1C01EB954 (-DiscardPointerMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@P.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     CheckPwndFilter @ 0x1C005C1A8 (CheckPwndFilter.c)
 *     INPUTDEST_FROM_PWND @ 0x1C0077618 (INPUTDEST_FROM_PWND.c)
 *     IsPointerInputMessageWithState @ 0x1C00AC37C (IsPointerInputMessageWithState.c)
 *     ?CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z @ 0x1C00F61A4 (-CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z.c)
 *     ?RetrieveMessage@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1C016C39A (-RetrieveMessage@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@.c)
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1C01EBAA4 (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 */

__int64 __fastcall xxxRetrievePointerInputMessage(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        int *a7,
        struct tagQMSG *a8,
        struct tagWND **a9,
        unsigned int *a10,
        unsigned __int64 *a11,
        unsigned __int64 *a12,
        int *a13,
        struct tagQMSG **a14)
{
  struct tagQMSG *v14; // rbx
  unsigned __int64 v17; // rsi
  unsigned int v18; // edi
  bool v19; // cf
  int v20; // r12d
  int v21; // eax
  __int64 result; // rax
  __int64 v23; // rax
  HWND v24; // rcx
  __int64 v25; // rax
  struct tagWND *v26; // r15
  unsigned int v27; // esi
  int *v28; // r13
  __int64 v29; // rcx
  unsigned __int16 v30; // r12
  struct tagTHREADPOINTERDATA *ThreadPointerData; // rax
  unsigned __int64 v32; // rbx
  __int128 *v33; // rax
  __int128 v34; // xmm1
  __int128 v35; // xmm2
  __int128 v36; // xmm3
  __int128 v37; // xmm4
  __int128 v38; // xmm5
  __int128 v39; // xmm6
  const struct CPointerInputFrame *v40; // r13
  LARGE_INTEGER PerformanceCounter; // rbx
  __int64 v42; // rcx
  int v43; // [rsp+40h] [rbp-C8h]
  int v44; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v45; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v46; // [rsp+60h] [rbp-A8h] BYREF
  HWND v47; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v48; // [rsp+70h] [rbp-98h]
  __int64 v49; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v50; // [rsp+80h] [rbp-88h]
  __int64 v51; // [rsp+88h] [rbp-80h] BYREF
  __int128 v52; // [rsp+98h] [rbp-70h] BYREF
  __int128 v53; // [rsp+A8h] [rbp-60h]
  __int128 v54; // [rsp+B8h] [rbp-50h]
  __int128 v55; // [rsp+C8h] [rbp-40h]
  __int128 v56; // [rsp+D8h] [rbp-30h]
  __int128 v57; // [rsp+E8h] [rbp-20h]
  __int128 v58; // [rsp+F8h] [rbp-10h]
  __int128 v59; // [rsp+108h] [rbp+0h]
  __int128 v60; // [rsp+118h] [rbp+10h]
  __int128 v61; // [rsp+128h] [rbp+20h]
  __int128 v62; // [rsp+138h] [rbp+30h]
  __int128 v63; // [rsp+148h] [rbp+40h]
  __int128 v64; // [rsp+158h] [rbp+50h]
  __int128 v65; // [rsp+168h] [rbp+60h]
  int v66[32]; // [rsp+178h] [rbp+70h] BYREF
  unsigned int v67; // [rsp+238h] [rbp+130h] BYREF
  __int64 v68; // [rsp+240h] [rbp+138h]
  unsigned int v69; // [rsp+248h] [rbp+140h]

  v69 = a3;
  v68 = a2;
  v14 = a8;
  v47 = 0LL;
  v49 = 0LL;
  v17 = *((_QWORD *)a8 + 5);
  v18 = *((_DWORD *)a8 + 6);
  v19 = __CFSHR__(*((_DWORD *)a8 + 25), 6);
  v50 = *((_QWORD *)a8 + 4);
  LOWORD(a8) = v50;
  v20 = -v19;
  v21 = *(_DWORD *)(a1 + 1256);
  v51 = 0LL;
  v67 = 0;
  v44 = 0;
  v46 = 0LL;
  v45 = 0;
  v48 = v17;
  if ( (v21 & 0x100) != 0 )
  {
    *a9 = 0LL;
    *a13 = 0;
    return 2LL;
  }
  if ( !a6 )
  {
    *(_DWORD *)(a1 + 1256) = v21 | 0x100;
    EtwTraceBeginPointerSetTargetWindows(v18);
    if ( !CTouchProcessor::SetPointerFrameTargetWindows(
            gpTouchProcessor,
            (struct tagTHREADINFO *)a1,
            v17,
            v18,
            (int *)&v46) )
    {
      EtwTraceEndPointerSetTargetWindows(v18);
      *(_DWORD *)(a1 + 1256) &= ~0x100u;
      return (unsigned int)((_DWORD)v46 != 0) + 3;
    }
    EtwTraceEndPointerSetTargetWindows(v18);
    v23 = *(_QWORD *)(a1 + 432);
    *(_DWORD *)(a1 + 1256) &= ~0x100u;
    if ( *(struct tagQMSG **)(v23 + 80) != v14 )
      return 4LL;
  }
  if ( v18 == 595 )
  {
    v24 = (HWND)*((_QWORD *)v14 + 2);
    v47 = v24;
    v44 = 1;
    v67 = 1;
    v45 = 1;
  }
  else
  {
    if ( !CTouchProcessor::GetPointerMessageInfo(
            gpTouchProcessor,
            v17,
            v20,
            &v47,
            &v44,
            (int *)&v67,
            &v45,
            (unsigned int *)&v46 + 1) )
      return 3LL;
    LODWORD(v24) = (_DWORD)v47;
  }
  v25 = HMValidateHandleNoSecure((int)v24, 1);
  v26 = (struct tagWND *)v25;
  if ( !v25 )
    return 3LL;
  if ( !(unsigned int)CheckPwndFilter(v25, v68) )
    return 4LL;
  v27 = v18;
  if ( a5 && v67 != 1 )
  {
    switch ( v18 )
    {
      case 0x245u:
        v27 = 577;
        break;
      case 0x246u:
        v27 = 578;
        break;
      case 0x247u:
        v27 = 579;
        break;
    }
  }
  if ( v69 || a4 != -1 )
  {
    if ( v69 <= a4 )
    {
      if ( v27 < v69 || v27 > a4 )
        return 4LL;
    }
    else if ( v27 >= a4 && v27 <= v69 )
    {
      return 4LL;
    }
  }
  v28 = a13;
  if ( (unsigned int)CheckCrossThreadInput(v26, v14, a13, a7, a14) )
  {
LABEL_49:
    *a9 = v26;
    return 2LL;
  }
  if ( *v28 )
  {
    v29 = *((_QWORD *)v26 + 2);
    if ( *(_QWORD *)(v29 + 432) == *(_QWORD *)(a1 + 432) )
    {
      if ( (*(_DWORD *)(v29 + 1256) & 0x8000) != 0 )
      {
        if ( ((v67 + 2) & 0xFFFFFFFD) == 0 )
          return 3LL;
        return 4LL;
      }
      goto LABEL_49;
    }
    return 3LL;
  }
  if ( (unsigned int)IsPointerInputMessageWithState(v27) )
  {
    v33 = (__int128 *)INPUTDEST_FROM_PWND(v66, (__int64)v26);
    v32 = v48;
    v34 = v33[1];
    v35 = v33[2];
    v36 = v33[3];
    v37 = v33[4];
    v38 = v33[5];
    v39 = v33[6];
    v59 = *v33;
    v60 = v34;
    v43 = *a7;
    v61 = v35;
    v62 = v36;
    v63 = v37;
    v64 = v38;
    v65 = v39;
    v52 = v59;
    v53 = v34;
    v54 = v35;
    v55 = v36;
    v56 = v37;
    v57 = v38;
    v58 = v39;
    CTouchProcessor::AdjustCaptureOnRetrieval(gpTouchProcessor, &v52, HIDWORD(v46), v48, v67, v44, v20, v43, v18);
    v52 = v59;
    v54 = v61;
    v53 = v60;
    v56 = v63;
    v55 = v62;
    v58 = v65;
    v57 = v64;
    if ( !(unsigned int)CTouchProcessor::UpdatePointerInfoTarget(gpTouchProcessor, v32, &v52, v67, v20, &v49, &v51) )
      return 3LL;
    if ( ((v67 + 2) & 0xFFFFFFFD) == 0 )
      return 3LL;
    v30 = (unsigned __int16)a8;
    v52 = v59;
    v53 = v60;
    v54 = v61;
    v55 = v62;
    v56 = v63;
    v57 = v64;
    v58 = v65;
    if ( !(unsigned int)CTouchProcessor::AddThreadPointerData(
                          gpTouchProcessor,
                          a1 + 1112,
                          (unsigned __int16)a8,
                          v45,
                          v32,
                          v27,
                          &v52,
                          1) )
      return 3LL;
  }
  else
  {
    v30 = (unsigned __int16)a8;
    ThreadPointerData = FindThreadPointerData((struct _LIST_ENTRY *)(a1 + 1112), (unsigned __int16)a8);
    v32 = v48;
    if ( ThreadPointerData )
      *((_DWORD *)ThreadPointerData + 12) |= 8u;
  }
  if ( v27 != 595 )
  {
    v40 = CTouchProcessor::ReferenceFrameFromPointerMsgId(gpTouchProcessor, v32);
    if ( v40 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      *(LARGE_INTEGER *)((char *)v40 + ((unsigned __int8)isChildPartition() != 0 ? 0x48 : 0) + 128) = PerformanceCounter;
      InputTraceLogging::TelemetryDebug::Pointer::RetrieveMessage((const struct CPointerInputFrame *)((char *)v40 + 72));
      CTouchProcessor::UnreferenceFrameExternal(gpTouchProcessor, v40);
    }
    v28 = a13;
  }
  *a9 = v26;
  *a10 = v27;
  if ( v27 - 577 <= 3 )
    v50 = v30 | (unsigned __int64)((unsigned __int16)v67 << 16);
  result = 1LL;
  *a11 = v50;
  *a12 = (unsigned __int16)v49 | (unsigned __int64)(WORD2(v49) << 16);
  v42 = v51;
  *v28 = 0;
  *(_QWORD *)(a1 + 1324) = v42;
  return result;
}
