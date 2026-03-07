__int64 __fastcall CTouchProcessor::StopAndEndInertia(CTouchProcessor *this, int a2, void *a3)
{
  int v3; // edi
  unsigned int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  char *v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rax
  struct tagPOINT v12; // rdi
  struct tagPOINT v13; // rbx
  __int64 v14; // rbp
  int v15; // edx
  CInertiaManager *v16; // rcx
  int v17; // r8d
  int v18; // edx
  int v19; // r8d
  CInpLockGuard *v21[8]; // [rsp+50h] [rbp-58h] BYREF

  v3 = a2;
  v5 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      7,
      309,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids,
      v3);
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v21,
    (CTouchProcessor *)((char *)this + 32),
    0LL);
  v8 = *((_QWORD *)this + 8);
  v9 = (char *)this + 56;
  while ( 1 )
  {
    if ( (char *)v8 == v9 )
      goto LABEL_14;
    v7 = *(unsigned int *)(v8 + 40);
    v6 = 0LL;
    if ( (_DWORD)v7 )
      break;
LABEL_12:
    v8 = *(_QWORD *)(v8 + 8);
  }
  while ( 1 )
  {
    v10 = *(_QWORD *)(v8 + 232) + 480LL * (unsigned int)v6;
    if ( *(unsigned __int16 *)(v10 + 172) == v3 )
      break;
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= (unsigned int)v7 )
      goto LABEL_12;
  }
  if ( !v10 )
  {
LABEL_14:
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v6) = 0;
    }
    if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        v7,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        7,
        310,
        (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
    }
    UserSetLastError(1168);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v18) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v18) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      LOBYTE(v5) = 0;
    if ( (_BYTE)v18 || (_BYTE)v5 )
    {
      LOBYTE(v19) = v5;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v18,
        v19,
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        7,
        311,
        (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
    }
LABEL_41:
    v5 = 0;
    goto LABEL_42;
  }
  v11 = SGDGetUserSessionState(v8, v6, v7, v9);
  v12 = *(struct tagPOINT *)(v10 + 208);
  v13 = *(struct tagPOINT *)(v10 + 200);
  v14 = v11 + 16904;
  if ( !((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))CInertiaManager::QueryInertia)(v11 + 16904, v13, 3LL)
    || !CInertiaManager::PostInertiaMessage(v16, 0x23Cu, (const struct INERTIA_INFO_INTERNAL *)(v14 + 8), v13, v12) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      LOBYTE(v5) = 0;
    }
    if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = v5;
      LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v15,
        v17,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        7,
        312,
        (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
    }
    goto LABEL_41;
  }
LABEL_42:
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v21);
  return v5;
}
