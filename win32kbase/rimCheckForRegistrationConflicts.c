__int64 __fastcall rimCheckForRegistrationConflicts(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebp
  __int64 v5; // rax
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  PDEVICE_OBJECT v12; // rcx
  _QWORD *i; // rsi
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rax

  v4 = a1;
  v5 = SGDGetUserSessionState(a1, a2, a3, a4);
  RIMLockExclusive(v5 + 240);
  v6 = 0;
  for ( i = *(_QWORD **)(SGDGetUserSessionState(v8, v7, v9, v10) + 304);
        i != (_QWORD *)(SGDGetUserSessionState(v12, v11, v14, v15) + 304);
        i = (_QWORD *)*i )
  {
    v16 = i - 2;
    if ( !*((_BYTE *)i + 64) && !*((_BYTE *)v16 + 81) && (v4 & *((_DWORD *)v16 + 21)) != 0 && *((_DWORD *)v16 + 264) )
    {
      if ( !(unsigned int)RIMIsCurrentProcessTrusted() || v16[4] == PsGetCurrentProcess(v17, v11, v14, v15) )
      {
        v6 = 1;
        v12 = WPP_GLOBAL_Control;
        LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
        LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_qqqd(WPP_GLOBAL_Control->AttachedDevice, v11, v14, v15);
      }
      else
      {
        v6 = 2;
      }
      break;
    }
  }
  v18 = SGDGetUserSessionState(v12, v11, v14, v15);
  *(_QWORD *)(v18 + 248) = 0LL;
  ExReleasePushLockExclusiveEx(v18 + 240, 0LL);
  KeLeaveCriticalRegion();
  return v6;
}
