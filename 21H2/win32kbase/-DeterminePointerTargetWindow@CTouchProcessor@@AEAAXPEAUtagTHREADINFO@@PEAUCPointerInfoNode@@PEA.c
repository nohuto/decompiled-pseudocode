/*
 * XREFs of ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C018D368
 * Callers:
 *     ?DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C018D7C8 (-DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInput.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C019CB20 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0042894 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0042A50 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00435A0 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C009C24C (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x1C009C338 (-TestWindowFlag@CInputDest@@QEBA_NK@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C009E41C (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C009EBB4 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00CCBA8 (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?UsesQueue@CInputDest@@QEBA_NPEBUtagQ@@@Z @ 0x1C0183138 (-UsesQueue@CInputDest@@QEBA_NPEBUtagQ@@@Z.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1C0187524 (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ?GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z @ 0x1C0194628 (-GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z.c)
 *     ?IsHover@CPointerInfoNode@@QEBAHXZ @ 0x1C019697C (-IsHover@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z @ 0x1C01970A4 (-IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01971B4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z @ 0x1C0197978 (-PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z.c)
 *     ?RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C019AB7C (-RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?SecondaryHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@AEBUtagPOINT@@@Z @ 0x1C019B5A4 (-SecondaryHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@AEBUtagPOI.c)
 *     ?SetPointerOffset@CTouchProcessor@@AEAAHGPEBUtagPOINT@@@Z @ 0x1C019E620 (-SetPointerOffset@CTouchProcessor@@AEAAHGPEBUtagPOINT@@@Z.c)
 *     ApiSetEditionPointerWindowHitTest @ 0x1C01CCF28 (ApiSetEditionPointerWindowHitTest.c)
 *     ApiSetValidatePointerOffset @ 0x1C01D1490 (ApiSetValidatePointerOffset.c)
 */

void __fastcall CTouchProcessor::DeterminePointerTargetWindow(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        struct CPointerInfoNode *a3,
        struct tagQ *a4,
        int a5,
        int *a6,
        struct tagPOINT *a7,
        struct CInputDest *a8)
{
  __int64 v8; // r12
  const struct tagQ *v11; // r14
  unsigned __int64 v13; // rdx
  int v14; // ebx
  CTouchProcessor *v15; // rcx
  unsigned int v16; // eax
  int v17; // r14d
  __int64 v18; // rcx
  __int64 v19; // rbx
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // r12
  struct CInputDest *v22; // rdx
  struct tagTHREADINFO *v23; // rbx
  _OWORD *v24; // rax
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  CPointerInfoNode *v31; // rcx
  int v32; // r9d
  __int64 v33; // [rsp+38h] [rbp-C8h]
  int v34; // [rsp+48h] [rbp-B8h]
  char *v35; // [rsp+50h] [rbp-B0h]
  __int64 v36; // [rsp+58h] [rbp-A8h]
  int v37; // [rsp+74h] [rbp-8Ch] BYREF
  int v38; // [rsp+78h] [rbp-88h]
  unsigned __int16 v39; // [rsp+7Ch] [rbp-84h]
  struct tagPOINT v40; // [rsp+80h] [rbp-80h] BYREF
  struct CInputDest *v41; // [rsp+88h] [rbp-78h] BYREF
  struct tagTHREADINFO *v42; // [rsp+90h] [rbp-70h]
  struct tagQ *v43; // [rsp+98h] [rbp-68h]
  int *v44; // [rsp+A0h] [rbp-60h]
  _OWORD v45[7]; // [rsp+B0h] [rbp-50h] BYREF
  PERESOURCE *v46[6]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v47[64]; // [rsp+150h] [rbp+50h] BYREF
  char v48; // [rsp+190h] [rbp+90h] BYREF
  _QWORD v49[16]; // [rsp+200h] [rbp+100h] BYREF

  v8 = *((unsigned __int16 *)a3 + 86);
  v40 = 0LL;
  v11 = a4;
  v37 = 0;
  v43 = a4;
  v42 = a2;
  v44 = a6;
  v39 = v8;
  if ( !(unsigned int)CPointerInfoNode::IsValid(a3) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 11466);
  if ( (unsigned int)CPointerInfoNode::IsTargetSetForRetrieval(a3, a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 11467);
  CInputDest::SetEmpty(a8);
  v13 = *((_QWORD *)a3 + 2);
  v41 = 0LL;
  v14 = CTouchProcessor::RecheckPointerCapture(this, v13, a5, &v41, &v37);
  if ( v14 )
  {
    CInputDest::operator=((__int64)a8, (__int64)v41);
  }
  else if ( !(unsigned int)CPointerInfoNode::IsHover(a3) && (*((_DWORD *)a3 + 45) & 0x10000) == 0 )
  {
    return;
  }
  CTouchProcessor::GetPointerOffset(this, *((_WORD *)a3 + 86), &v40);
  if ( !v14 )
  {
    v16 = CTouchProcessor::PointerFlagsToMessage(v15, *((_DWORD *)a3 + 45));
    v17 = *((unsigned __int16 *)a3 + 90);
    v18 = *((unsigned __int16 *)a3 + 100);
    v19 = *((_QWORD *)a3 + 25);
    v38 = v16;
    v20 = v8 | ((unsigned __int64)(v17 & 0xFFFFE1F7) << 16);
    v21 = v18 | ((unsigned __int64)*((unsigned __int16 *)a3 + 102) << 16);
    if ( *(_DWORD *)a8 )
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 11525);
    v22 = (struct CPointerInfoNode *)((char *)a3 + 352);
    if ( (*((_DWORD *)a3 + 1) & 0x80u) != 0 )
    {
      CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v47, v22);
      CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
        (CInpUnlockGuardExclusive *)v46,
        (CTouchProcessor *)((char *)this + 40),
        *((void **)a3 + 2));
      v36 = *((_QWORD *)a3 + 2);
      v35 = (char *)a3 + 160;
      v34 = 9;
    }
    else
    {
      CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v47, v22);
      CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
        (CInpUnlockGuardExclusive *)v46,
        (CTouchProcessor *)((char *)this + 40),
        *((void **)a3 + 2));
      v36 = *((_QWORD *)a3 + 2);
      v35 = (char *)a3 + 160;
      v34 = 1;
    }
    v33 = v19;
    v23 = v42;
    v24 = (_OWORD *)ApiSetEditionPointerWindowHitTest(
                      (unsigned int)&v48,
                      (_DWORD)v42,
                      (int)a3 + 352,
                      -__CFSHR__(*((_DWORD *)a3 + 1), 8),
                      v38,
                      v20,
                      v21,
                      v33,
                      (__int64)&v37,
                      v34,
                      (__int64)v35,
                      v36,
                      (__int64)&v40);
    v25 = v24[1];
    v45[0] = *v24;
    v26 = v24[2];
    v45[1] = v25;
    v27 = v24[3];
    v45[2] = v26;
    v28 = v24[4];
    v45[3] = v27;
    v29 = v24[5];
    v45[4] = v28;
    v30 = v24[6];
    v45[5] = v29;
    v45[6] = v30;
    CInputDest::CInputDest((CInputDest *)v49, (const struct tagINPUTDEST *)v45);
    CInputDest::operator=((__int64)a8, v49);
    CInputDest::SetEmpty((CInputDest *)v49);
    CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v46);
    CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v47);
    InputTraceLogging::Pointer::SecondaryHitTest((struct CPointerInfoNode *)((char *)a3 + 168), a8, &v40);
    if ( *(_DWORD *)a8 )
    {
      if ( v37 == -1 )
      {
        v38 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 11565);
      }
      if ( CInputDest::TestWindowFlag(a8, 1152) || CInputDest::TestWindowFlag(a8, 896) )
        CInputDest::SetEmpty(a8);
      if ( *(_DWORD *)a8 )
        CTouchProcessor::SetPointerOffset(this, v39, &v40);
    }
    if ( !(unsigned int)CPointerInfoNode::IsValid(a3)
      || (unsigned int)CPointerInfoNode::IsTargetSetForRetrieval(v31, v23) )
    {
      CInputDest::SetEmpty(a8);
      return;
    }
    if ( (unsigned int)CTouchProcessor::RecheckPointerCapture(this, *((_QWORD *)a3 + 2), a5, &v41, &v37) )
      CInputDest::operator=((__int64)a8, (__int64)v41);
    v11 = v43;
  }
  if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ApiSetValidatePointerOffset)(
                        *((_QWORD *)a3 + 25),
                        (char *)a3 + 160,
                        v40,
                        a7) )
    *a7 = 0LL;
  v32 = *(_DWORD *)a8;
  if ( *(_DWORD *)a8 && v11 && !CInputDest::UsesQueue(a8, v11) )
  {
    CInputDest::SetEmpty(a8);
    v32 = *(_DWORD *)a8;
  }
  if ( v32 )
    *v44 = v37;
}
