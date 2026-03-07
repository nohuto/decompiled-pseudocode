__int64 __fastcall CTouchProcessor::GetPointerMessagePoint(
        CTouchProcessor *this,
        unsigned __int16 a2,
        struct tagPOINT *a3)
{
  struct tagPOINT *v3; // r14
  unsigned __int16 v4; // di
  char v6; // bl
  struct tagTHREADINPUTPOINTERLIST *v7; // rdx
  unsigned int v8; // ebp
  __int64 ThreadPointerData; // rax
  __int64 v10; // rdx
  CTouchProcessor *v11; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  struct CPointerMsgData *v13; // rdi
  __int64 v14; // rax
  void *v15; // r8
  _BYTE v17[48]; // [rsp+40h] [rbp-58h] BYREF

  v3 = a3;
  v4 = a2;
  v6 = 1;
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
      a2,
      (_DWORD)a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      107,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v17,
    (CTouchProcessor *)((char *)this + 32),
    0LL);
  v7 = (struct tagTHREADINFO *)((char *)gptiCurrent + 1128);
  *v3 = 0LL;
  v8 = 0;
  ThreadPointerData = CTouchProcessor::GetThreadPointerData(this, v7, v4, 0LL, 0LL, 0LL);
  if ( ThreadPointerData )
  {
    NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v11, ThreadPointerData);
    v13 = NonConstMsgData;
    if ( NonConstMsgData )
    {
      v10 = CTouchProcessor::ReferenceFrame(this, *((unsigned int *)NonConstMsgData + 7));
      if ( v10 )
      {
        v14 = *(_QWORD *)(v10 + 240) + 480LL * *((unsigned int *)v13 + 8);
        if ( v14 )
        {
          v8 = 1;
          *v3 = *(struct tagPOINT *)(v14 + 200);
        }
        CTouchProcessor::UnreferenceFrame(this, v10);
      }
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v10) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v6 = 0;
  if ( (_BYTE)v10 || v6 )
  {
    v15 = &WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids;
    LOBYTE(v15) = v6;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_WORD)v10,
      (_DWORD)v15,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      108,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  }
  CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v17);
  return v8;
}
