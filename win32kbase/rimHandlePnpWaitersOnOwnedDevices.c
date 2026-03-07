void __fastcall rimHandlePnpWaitersOnOwnedDevices(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebp
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD **v13; // rsi
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // r15
  __int64 v22; // r9
  __int64 v23; // rcx

  v4 = a2;
  v6 = SGDGetUserSessionState(a1, a2, a3, a4);
  RIMLockExclusive(v6 + 240);
  v13 = (_QWORD **)(SGDGetUserSessionState(v8, v7, v9, v10) + 320);
  v16 = *v13;
  if ( *v13 != v13 )
  {
    v11 = 2LL;
    do
    {
      v17 = (__int64)(v16 + 13);
      if ( v16 == (_QWORD *)16 )
        v17 = 48LL;
      v12 = *(unsigned __int8 *)v17;
      if ( (_DWORD)v12 == v4 || (_BYTE)v12 == 3 && v4 == 2 )
      {
        v19 = (__int64)(v16 + 49);
        v12 = 336LL;
        if ( v16 == (_QWORD *)16 )
          v19 = 336LL;
        if ( *(_QWORD *)v19 == a1 )
        {
          v20 = (__int64)(v16 + 30);
          if ( v16 == (_QWORD *)16 )
            v20 = 184LL;
          if ( (*(_DWORD *)v20 & 0x10) != 0 )
          {
            v21 = (__int64)(v16 + 46);
            if ( v16 == (_QWORD *)16 )
              v21 = 312LL;
            if ( !*(_QWORD *)v21 )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1627LL);
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
              || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
            {
              LOBYTE(v11) = 0;
            }
            if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v22 = (__int64)(v16 + 11);
              if ( v16 == (_QWORD *)16 )
                v22 = 32LL;
              LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_qqq(
                WPP_GLOBAL_Control->AttachedDevice,
                v11,
                v14,
                (_DWORD)gRimLog,
                4,
                1,
                49,
                (__int64)&WPP_89c3e44078983ba1070baf237427a4e9_Traceguids,
                a1,
                *(_QWORD *)v22,
                *(_QWORD *)v21);
            }
            *(_DWORD *)v20 &= ~0x10u;
            v23 = (__int64)(v16 + 51);
            if ( v16 == (_QWORD *)16 )
              v23 = 352LL;
            KeSetEvent(*(PRKEVENT *)v23, 1, 0);
            v11 = 2LL;
          }
        }
      }
      v16 = (_QWORD *)*v16;
    }
    while ( v16 != v13 );
  }
  v18 = SGDGetUserSessionState(v12, v11, v14, v15);
  *(_QWORD *)(v18 + 248) = 0LL;
  ExReleasePushLockExclusiveEx(v18 + 240, 0LL);
  KeLeaveCriticalRegion();
}
