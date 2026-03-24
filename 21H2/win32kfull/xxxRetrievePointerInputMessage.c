/*
 * XREFs of xxxRetrievePointerInputMessage @ 0x1C01F06C8
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00C2120 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?DiscardPointerMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@PEAUtagWND@@PEAUtagMSG@@@Z @ 0x1C01F0E44 (-DiscardPointerMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@P.c)
 * Callees:
 *     IsPointerInputMessageWithState @ 0x1C006B350 (IsPointerInputMessageWithState.c)
 *     HMValidateHandleNoSecure @ 0x1C008C3F8 (HMValidateHandleNoSecure.c)
 *     ?CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z @ 0x1C00C15F8 (-CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z.c)
 *     CheckPwndFilter @ 0x1C00C1850 (CheckPwndFilter.c)
 *     INPUTDEST_FROM_PWND @ 0x1C01325F4 (INPUTDEST_FROM_PWND.c)
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1C01F0F94 (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
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
        __int64 *a9,
        unsigned int *a10,
        unsigned __int64 *a11,
        unsigned __int64 *a12,
        int *a13,
        struct tagQMSG **a14,
        int a15)
{
  struct tagQMSG *v15; // rsi
  unsigned __int64 v18; // rbx
  unsigned int v19; // r14d
  bool v20; // cf
  int v21; // r12d
  int v22; // eax
  __int64 result; // rax
  __int64 v24; // rax
  HWND v25; // rcx
  __int64 v26; // rax
  __int64 v27; // r15
  unsigned int v28; // ebx
  int *v29; // r13
  __int64 v30; // rcx
  int v31; // ecx
  unsigned __int16 v32; // si
  struct tagTHREADPOINTERDATA *ThreadPointerData; // rax
  __int128 *v34; // rax
  struct tagQMSG **v35; // rsi
  __int128 v36; // xmm1
  __int128 v37; // xmm2
  __int128 v38; // xmm3
  __int128 v39; // xmm4
  __int128 v40; // xmm5
  __int128 v41; // xmm6
  __int64 v42; // rcx
  struct tagQMSG **v43; // [rsp+28h] [rbp-E0h]
  int v44; // [rsp+40h] [rbp-C8h]
  unsigned int v45; // [rsp+58h] [rbp-B0h] BYREF
  int v46; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v47; // [rsp+60h] [rbp-A8h] BYREF
  HWND v48; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v49; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v50; // [rsp+78h] [rbp-90h]
  __int64 v51; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int64 v52; // [rsp+88h] [rbp-80h]
  __int128 v53; // [rsp+98h] [rbp-70h] BYREF
  __int128 v54; // [rsp+A8h] [rbp-60h]
  __int128 v55; // [rsp+B8h] [rbp-50h]
  __int128 v56; // [rsp+C8h] [rbp-40h]
  __int128 v57; // [rsp+D8h] [rbp-30h]
  __int128 v58; // [rsp+E8h] [rbp-20h]
  __int128 v59; // [rsp+F8h] [rbp-10h]
  __int128 v60; // [rsp+108h] [rbp+0h]
  __int128 v61; // [rsp+118h] [rbp+10h]
  __int128 v62; // [rsp+128h] [rbp+20h]
  __int128 v63; // [rsp+138h] [rbp+30h]
  __int128 v64; // [rsp+148h] [rbp+40h]
  __int128 v65; // [rsp+158h] [rbp+50h]
  __int128 v66; // [rsp+168h] [rbp+60h]
  int v67[32]; // [rsp+178h] [rbp+70h] BYREF
  unsigned int v68; // [rsp+238h] [rbp+130h] BYREF
  __int64 v69; // [rsp+240h] [rbp+138h]
  unsigned int v70; // [rsp+248h] [rbp+140h]

  v70 = a3;
  v69 = a2;
  v15 = a8;
  v48 = 0LL;
  v49 = 0LL;
  v18 = *((_QWORD *)a8 + 5);
  v19 = *((_DWORD *)a8 + 6);
  v20 = __CFSHR__(*((_DWORD *)a8 + 25), 6);
  v50 = *((_QWORD *)a8 + 4);
  LOWORD(a8) = v50;
  v21 = -v20;
  v22 = *(_DWORD *)(a1 + 1232);
  v51 = 0LL;
  v68 = 0;
  a15 = 0;
  v46 = 0;
  v45 = 0;
  LODWORD(v47) = 0;
  v52 = v18;
  if ( (v22 & 0x100) != 0 )
  {
    *a9 = 0LL;
    *a13 = 0;
    return 2LL;
  }
  if ( !a6 )
  {
    *(_DWORD *)(a1 + 1232) = v22 | 0x100;
    EtwTraceBeginPointerSetTargetWindows(v19);
    if ( !CTouchProcessor::SetPointerFrameTargetWindows(gpTouchProcessor, (struct tagTHREADINFO *)a1, v18, v19, &v46) )
    {
      EtwTraceEndPointerSetTargetWindows(v19);
      *(_DWORD *)(a1 + 1232) &= ~0x100u;
      return (unsigned int)(v46 != 0) + 3;
    }
    EtwTraceEndPointerSetTargetWindows(v19);
    v24 = *(_QWORD *)(a1 + 432);
    *(_DWORD *)(a1 + 1232) &= ~0x100u;
    if ( *(struct tagQMSG **)(v24 + 80) != v15 )
      return 4LL;
  }
  if ( v19 == 595 )
  {
    v25 = (HWND)*((_QWORD *)v15 + 2);
    v48 = v25;
    a15 = 1;
    v68 = 1;
    v45 = 1;
  }
  else
  {
    if ( !CTouchProcessor::GetPointerMessageInfo(
            gpTouchProcessor,
            v18,
            v21,
            &v48,
            &a15,
            (int *)&v68,
            &v45,
            (unsigned int *)&v47) )
      return 3LL;
    v25 = v48;
  }
  v26 = HMValidateHandleNoSecure((unsigned __int64)v25, 1);
  v27 = v26;
  if ( !v26 )
    return 3LL;
  if ( !(unsigned int)CheckPwndFilter(v26, v69) )
    return 4LL;
  v28 = v19;
  if ( a5 && v68 != 1 )
  {
    switch ( v19 )
    {
      case 0x245u:
        v28 = 577;
        break;
      case 0x246u:
        v28 = 578;
        break;
      case 0x247u:
        v28 = 579;
        break;
    }
  }
  if ( v70 || a4 != -1 )
  {
    if ( v70 <= a4 )
    {
      if ( v28 < v70 || v28 > a4 )
        return 4LL;
    }
    else if ( v28 >= a4 && v28 <= v70 )
    {
      return 4LL;
    }
  }
  v29 = a13;
  if ( (unsigned int)CheckCrossThreadInput((struct tagWND *const)v27, v15, a13, a7, a14) )
  {
LABEL_36:
    *a9 = v27;
    return 2LL;
  }
  if ( *v29 )
  {
    v30 = *(_QWORD *)(v27 + 16);
    if ( *(_QWORD *)(v30 + 432) == *(_QWORD *)(a1 + 432) )
    {
      v31 = *(_DWORD *)(v30 + 1232) & 0x8000;
      if ( !v31 || ((v68 + 2) & 0xFFFFFFFD) != 0 )
      {
        if ( !v31 )
          goto LABEL_36;
        return 4LL;
      }
    }
    return 3LL;
  }
  if ( !(unsigned int)IsPointerInputMessageWithState(v28) )
  {
    v32 = (unsigned __int16)a8;
    ThreadPointerData = FindThreadPointerData((struct _LIST_ENTRY *)(a1 + 1088), (unsigned __int16)a8);
    if ( ThreadPointerData )
      *((_DWORD *)ThreadPointerData + 12) |= 8u;
    goto LABEL_43;
  }
  v34 = (__int128 *)INPUTDEST_FROM_PWND(v67, v27);
  v35 = (struct tagQMSG **)v52;
  v36 = v34[1];
  v37 = v34[2];
  v38 = v34[3];
  v39 = v34[4];
  v40 = v34[5];
  v41 = v34[6];
  v60 = *v34;
  v61 = v36;
  v44 = *a7;
  v62 = v37;
  v63 = v38;
  v64 = v39;
  v65 = v40;
  v66 = v41;
  v53 = v60;
  v54 = v36;
  v55 = v37;
  v56 = v38;
  v57 = v39;
  v58 = v40;
  v59 = v41;
  CTouchProcessor::AdjustCaptureOnRetrieval(gpTouchProcessor, &v53, (unsigned int)v47, v52, v68, a15, v21, v44, v19);
  v53 = v60;
  v55 = v62;
  v54 = v61;
  v57 = v64;
  v56 = v63;
  v59 = v66;
  v58 = v65;
  if ( !(unsigned int)CTouchProcessor::UpdatePointerInfoTarget(gpTouchProcessor, v35, &v53, v68, v21, &v49, &v51) )
    return 3LL;
  if ( ((v68 + 2) & 0xFFFFFFFD) == 0 )
    return 3LL;
  v53 = v60;
  v54 = v61;
  v55 = v62;
  v43 = v35;
  v32 = (unsigned __int16)a8;
  v56 = v63;
  v57 = v64;
  v58 = v65;
  v59 = v66;
  if ( !(unsigned int)CTouchProcessor::AddThreadPointerData(
                        gpTouchProcessor,
                        a1 + 1088,
                        (unsigned __int16)a8,
                        v45,
                        v43,
                        v28,
                        &v53,
                        1) )
    return 3LL;
LABEL_43:
  *a9 = v27;
  *a10 = v28;
  if ( v28 - 577 <= 3 )
    v50 = v32 | (unsigned __int64)((unsigned __int16)v68 << 16);
  result = 1LL;
  *a11 = v50;
  *a12 = (unsigned __int16)v49 | (unsigned __int64)(WORD2(v49) << 16);
  v42 = v51;
  *v29 = 0;
  *(_QWORD *)(a1 + 1292) = v42;
  return result;
}
