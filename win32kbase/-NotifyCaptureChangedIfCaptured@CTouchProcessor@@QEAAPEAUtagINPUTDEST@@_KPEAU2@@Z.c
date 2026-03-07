struct tagINPUTDEST *__fastcall CTouchProcessor::NotifyCaptureChangedIfCaptured(
        CTouchProcessor *this,
        void *a2,
        struct tagINPUTDEST *a3)
{
  struct tagINPUTDEST *v6; // rbx
  CTouchProcessor *v7; // rcx
  CInputDest *v8; // rbp
  struct CPointerMsgData *NonConstMsgData; // r15
  struct CPointerCaptureData *PointerCaptureData; // rax
  __int64 v11; // rcx
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  __int128 v14; // xmm3
  __int128 v15; // xmm4
  __int128 v16; // xmm5
  __int128 v17; // xmm6
  char v18; // r10
  bool v19; // di
  __int64 v20; // r11
  int v21; // r8d
  char v22; // r10
  int v23; // edx
  int v25; // [rsp+20h] [rbp-98h]
  _BYTE v26[64]; // [rsp+60h] [rbp-58h] BYREF
  CInputDest *v27; // [rsp+C0h] [rbp+8h] BYREF

  v6 = 0LL;
  v27 = 0LL;
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v26,
    (CTouchProcessor *)((char *)this + 32),
    a2);
  CTouchProcessor::GetPointerCapture(this, (unsigned __int64)a2, 0, &v27, 0LL);
  v8 = v27;
  if ( v27 )
  {
    NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v7, (__int64)a2);
    CTouchProcessor::SetPointerInfoNodeFlag(
      this,
      *((_DWORD *)NonConstMsgData + 7),
      *((_WORD *)NonConstMsgData + 8),
      0x200000u);
    PointerCaptureData = CTouchProcessor::GetPointerCaptureData(this, (__int64)a2);
    if ( PointerCaptureData )
      CTouchProcessor::SetDelegateActionInt(v11, PointerCaptureData, 5LL);
    v12 = *((_OWORD *)v8 + 1);
    v13 = *((_OWORD *)v8 + 2);
    v14 = *((_OWORD *)v8 + 3);
    v15 = *((_OWORD *)v8 + 4);
    v16 = *((_OWORD *)v8 + 5);
    v17 = *((_OWORD *)v8 + 6);
    *(_OWORD *)a3 = *(_OWORD *)v8;
    *((_OWORD *)a3 + 1) = v12;
    *((_OWORD *)a3 + 2) = v13;
    *((_OWORD *)a3 + 3) = v14;
    *((_OWORD *)a3 + 4) = v15;
    *((_OWORD *)a3 + 5) = v16;
    *((_OWORD *)a3 + 6) = v17;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (v18 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v18 = 0;
    }
    v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      CInputDest::GetWindowHandle(v8);
      LOBYTE(v21) = v19;
      LOBYTE(v23) = v22;
      WPP_RECORDER_AND_TRACE_SF_qHL(*(_QWORD *)(v20 + 24), v23, v21, WPP_MAIN_CB.Queue.ListEntry.Flink, v25);
    }
    v6 = a3;
  }
  CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v26);
  return v6;
}
