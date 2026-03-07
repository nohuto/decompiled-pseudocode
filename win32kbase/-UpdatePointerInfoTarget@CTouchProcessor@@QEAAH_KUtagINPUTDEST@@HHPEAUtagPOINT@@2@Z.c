__int64 __fastcall CTouchProcessor::UpdatePointerInfoTarget(
        __int64 a1,
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
  struct CPointerMsgData *NonConstMsgData; // rax
  int v13; // edx
  int v14; // r8d
  struct CPointerMsgData *v15; // r14
  PDEVICE_OBJECT v16; // rcx
  __int16 v17; // ax
  __int64 v18; // r15
  _QWORD *v19; // rsi
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  int v26; // edx
  int v27; // r8d
  struct tagINPUTDEST *v30; // [rsp+60h] [rbp-A0h]
  _BYTE v31[56]; // [rsp+68h] [rbp-98h] BYREF
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
      109,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v31, (struct CInpLockGuard *)(a1 + 32), v7);
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v11, (__int64)v7);
  v15 = NonConstMsgData;
  if ( NonConstMsgData )
  {
    v18 = CTouchProcessor::ReferenceFrame(a1, *((_DWORD *)NonConstMsgData + 7));
    if ( v18 )
    {
      CInputDest::CInputDest((CInputDest *)v32, v30);
      CTouchProcessor::SetPointerInfoNodeTarget(
        (CTouchProcessor *)a1,
        (const struct CPointerInputFrame *)v18,
        *((_DWORD *)v15 + 8),
        (const struct CInputDest *)v32,
        a4,
        0LL,
        1,
        0,
        1,
        0);
      CInputDest::SetEmpty((CInputDest *)v32);
      v19 = (_QWORD *)(*(_QWORD *)(v18 + 240) + 480LL * *((unsigned int *)v15 + 8));
      if ( !(unsigned int)GetAdjustedPointerPixelLocation(v19[25], *(_QWORD *)((char *)v19 + 148), a6) )
        *a6 = v19[25];
      if ( !(unsigned int)GetAdjustedPointerPixelLocation(v19[27], *(_QWORD *)((char *)v19 + 148), a7) )
        *a7 = v19[27];
      CTouchProcessor::UnreferenceFrame(a1, v18);
      ApiSetPointerPromotionOnPointerInputRetrieval(*((unsigned __int16 *)v15 + 8), *((unsigned int *)v15 + 7), *a7, a5);
      v20 = *((_OWORD *)v30 + 1);
      v32[0] = *(_OWORD *)v30;
      v21 = *((_OWORD *)v30 + 2);
      v32[1] = v20;
      v22 = *((_OWORD *)v30 + 3);
      v32[2] = v21;
      v23 = *((_OWORD *)v30 + 4);
      v32[3] = v22;
      v24 = *((_OWORD *)v30 + 5);
      v32[4] = v23;
      v25 = *((_OWORD *)v30 + 6);
      v32[5] = v24;
      v32[6] = v25;
      ApiSetEditionDoPointerDPITransforms(v32, a6, a7);
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v26) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v26) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (LOBYTE(v27) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
      {
        LOBYTE(v27) = 0;
      }
      if ( (_BYTE)v26 || (_BYTE)v27 )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v26,
          v27,
          WPP_GLOBAL_Control->DeviceExtension,
          5,
          7,
          112,
          (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
      v9 = 1;
    }
    else
    {
      v16 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v13) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        v10 = 0;
      if ( (_BYTE)v13 || v10 )
      {
        v17 = 111;
        goto LABEL_33;
      }
    }
  }
  else
  {
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v13) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v10 = 0;
    if ( (_BYTE)v13 || v10 )
    {
      v17 = 110;
LABEL_33:
      LOBYTE(v14) = v10;
      WPP_RECORDER_AND_TRACE_SF_(
        v16->AttachedDevice,
        v13,
        v14,
        v16->DeviceExtension,
        5,
        7,
        v17,
        (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
    }
  }
  CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v31);
  return v9;
}
