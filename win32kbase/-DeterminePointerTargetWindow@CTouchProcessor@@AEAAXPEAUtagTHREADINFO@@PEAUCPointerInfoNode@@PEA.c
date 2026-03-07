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
  struct tagQ *v11; // r14
  unsigned __int64 v13; // rdx
  int v14; // ebx
  CTouchProcessor *v15; // rcx
  int v16; // eax
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // r14d
  __int64 v20; // rcx
  __int64 v21; // rbx
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // r12
  struct CInputDest *v24; // rdx
  __int64 v25; // r9
  __int64 v26; // r9
  struct tagTHREADINFO *v27; // rbx
  int v28; // r14d
  _OWORD *v29; // rax
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  CPointerInfoNode *v42; // rcx
  __int64 v43; // [rsp+28h] [rbp-D8h]
  __int64 v44; // [rsp+38h] [rbp-C8h]
  int v45; // [rsp+48h] [rbp-B8h]
  char *v46; // [rsp+50h] [rbp-B0h]
  __int64 v47; // [rsp+58h] [rbp-A8h]
  int v48; // [rsp+74h] [rbp-8Ch] BYREF
  int v49; // [rsp+78h] [rbp-88h]
  unsigned __int16 v50; // [rsp+7Ch] [rbp-84h]
  struct tagPOINT v51; // [rsp+80h] [rbp-80h] BYREF
  struct CInputDest *v52; // [rsp+88h] [rbp-78h] BYREF
  struct tagTHREADINFO *v53; // [rsp+90h] [rbp-70h]
  struct tagQ *v54; // [rsp+98h] [rbp-68h]
  int *v55; // [rsp+A0h] [rbp-60h]
  _OWORD v56[7]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v57[40]; // [rsp+120h] [rbp+20h] BYREF
  CInpLockGuard *v58; // [rsp+148h] [rbp+48h]
  _BYTE v59[64]; // [rsp+150h] [rbp+50h] BYREF
  char v60; // [rsp+190h] [rbp+90h] BYREF
  _QWORD v61[16]; // [rsp+200h] [rbp+100h] BYREF

  v8 = *((unsigned __int16 *)a3 + 86);
  v51 = 0LL;
  v11 = a4;
  v48 = 0;
  v54 = a4;
  v53 = a2;
  v55 = a6;
  v50 = v8;
  if ( !(unsigned int)CPointerInfoNode::IsValid(a3) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12195);
  if ( (unsigned int)CPointerInfoNode::IsTargetSetForRetrieval(a3, a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12196);
  CInputDest::SetEmpty(a8);
  v13 = *((_QWORD *)a3 + 2);
  v52 = 0LL;
  v14 = CTouchProcessor::RecheckPointerCapture(this, v13, a5, &v52, &v48);
  if ( v14 )
  {
    CInputDest::operator=((__int64)a8, (__int64)v52);
  }
  else if ( !(unsigned int)CPointerInfoNode::IsHover(a3) && (*((_DWORD *)a3 + 45) & 0x10000) == 0 )
  {
    return;
  }
  CTouchProcessor::GetPointerOffset(this, *((_WORD *)a3 + 86), &v51);
  if ( !v14 )
  {
    v16 = CTouchProcessor::PointerFlagsToMessage(v15, *((_DWORD *)a3 + 45));
    v19 = *((unsigned __int16 *)a3 + 90);
    v20 = *((unsigned __int16 *)a3 + 100);
    v21 = *((_QWORD *)a3 + 25);
    v49 = v16;
    v22 = v8 | ((unsigned __int64)(v19 & 0xFFFFE1F7) << 16);
    v23 = v20 | ((unsigned __int64)*((unsigned __int16 *)a3 + 102) << 16);
    if ( *(_DWORD *)a8 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12254);
    v24 = (struct CPointerInfoNode *)((char *)a3 + 352);
    if ( (*((_DWORD *)a3 + 1) & 0x80u) != 0 )
    {
      CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v59, v24, v17, v18);
      CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
        (CInpUnlockGuardExclusive *)v57,
        (CTouchProcessor *)((char *)this + 32),
        *((void **)a3 + 2),
        v26);
      v47 = *((_QWORD *)a3 + 2);
      v46 = (char *)a3 + 160;
      v45 = 9;
    }
    else
    {
      CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v59, v24, v17, v18);
      CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
        (CInpUnlockGuardExclusive *)v57,
        (CTouchProcessor *)((char *)this + 32),
        *((void **)a3 + 2),
        v25);
      v47 = *((_QWORD *)a3 + 2);
      v46 = (char *)a3 + 160;
      v45 = 1;
    }
    v44 = v21;
    v27 = v53;
    v43 = v22;
    v28 = v49;
    v29 = (_OWORD *)ApiSetEditionPointerWindowHitTest(
                      (unsigned int)&v60,
                      (_DWORD)v53,
                      (int)a3 + 352,
                      -__CFSHR__(*((_DWORD *)a3 + 1), 8),
                      v49,
                      v43,
                      v23,
                      v44,
                      (__int64)&v48,
                      v45,
                      (__int64)v46,
                      v47,
                      (__int64)&v51);
    v30 = v29[1];
    v56[0] = *v29;
    v31 = v29[2];
    v56[1] = v30;
    v32 = v29[3];
    v56[2] = v31;
    v33 = v29[4];
    v56[3] = v32;
    v34 = v29[5];
    v56[4] = v33;
    v35 = v29[6];
    v56[5] = v34;
    v56[6] = v35;
    CInputDest::CInputDest((CInputDest *)v61, (const struct tagINPUTDEST *)v56);
    CInputDest::operator=((__int64)a8, v61);
    CInputDest::SetEmpty((CInputDest *)v61);
    CInpLockGuard::LockExclusive(v58);
    CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)v57, v36, v37, v38);
    CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v59, v39, v40, v41);
    InputTraceLogging::Pointer::SecondaryHitTest(
      (struct CPointerInfoNode *)((char *)a3 + 168),
      *((_QWORD *)a3 + 2),
      v28,
      a8,
      &v51);
    if ( *(_DWORD *)a8 )
    {
      if ( !gbIgnoreStressedOutStuff && v48 == -1 )
      {
        v49 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12296);
      }
      if ( CInputDest::TestWindowFlag(a8, 1152) || CInputDest::TestWindowFlag(a8, 896) )
        CInputDest::SetEmpty(a8);
      if ( *(_DWORD *)a8 )
        CTouchProcessor::SetPointerOffset(this, v50, &v51);
    }
    if ( !(unsigned int)CPointerInfoNode::IsValid(a3)
      || (unsigned int)CPointerInfoNode::IsTargetSetForRetrieval(v42, v27) )
    {
      CInputDest::SetEmpty(a8);
      return;
    }
    if ( (unsigned int)CTouchProcessor::RecheckPointerCapture(this, *((_QWORD *)a3 + 2), a5, &v52, &v48) )
      CInputDest::operator=((__int64)a8, (__int64)v52);
    v11 = v54;
  }
  if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ApiSetValidatePointerOffset)(
                        *((_QWORD *)a3 + 25),
                        (char *)a3 + 160,
                        v51,
                        a7) )
    *a7 = 0LL;
  if ( *(_DWORD *)a8 )
  {
    if ( v11 && !CInputDest::UsesQueue(a8, v11) )
      CInputDest::SetEmpty(a8);
    if ( *(_DWORD *)a8 )
      *v55 = v48;
  }
}
