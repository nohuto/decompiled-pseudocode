void __fastcall rimHandleAnyPnpRemovePendingDevices(__int64 a1)
{
  __int64 v2; // rbp
  unsigned int v3; // esi
  int v4; // r14d
  int v5; // edx
  int v6; // r8d
  __int64 i; // rbx
  int v8; // eax
  int v9; // eax

  v2 = a1 + 760;
  v3 = 0;
  while ( 2 )
  {
    v4 = 0;
    RIMLockExclusive(v2);
    for ( i = *(_QWORD *)(a1 + 424); i; i = *(_QWORD *)(i + 40) )
    {
      if ( (*(_DWORD *)(i + 184) & 0x40) == 0 )
      {
        v9 = *(_DWORD *)(i + 188);
        if ( (v9 & 8) != 0 )
        {
          *(_DWORD *)(i + 188) = v9 & 0xFFFFFFF7;
          LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_q(
              WPP_GLOBAL_Control->AttachedDevice,
              v5,
              v6,
              (_DWORD)gRimLog,
              4,
              1,
              37,
              (__int64)&WPP_89c3e44078983ba1070baf237427a4e9_Traceguids,
              i);
          }
        }
        v8 = *(_DWORD *)(i + 200);
        if ( ((v8 & 1) != 0 || (v8 & 2) != 0) && (*(_DWORD *)(i + 188) & 0x10) == 0 && !*(_QWORD *)(i + 192) )
        {
          if ( IS_USERCRIT_OWNED_AT_ALL() )
          {
            v4 = 1;
            v3 = (*(_DWORD *)(i + 200) & 2u) >> 1;
            *(_DWORD *)(i + 200) &= 0xFFFFFFFC;
            LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
            if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_q(
                WPP_GLOBAL_Control->AttachedDevice,
                v5,
                v6,
                (_DWORD)gRimLog,
                4,
                1,
                38,
                (__int64)&WPP_89c3e44078983ba1070baf237427a4e9_Traceguids,
                i);
            }
            break;
          }
          if ( !*(_DWORD *)(a1 + 1116) )
            rimQueueHandleAnyPnpRemovePendingDevicesAsyncWorkItem(a1);
        }
      }
    }
    *(_QWORD *)(v2 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
    if ( v4 )
    {
      if ( v3 )
      {
        RIMLockExclusive(v2);
        *(_DWORD *)(a1 + 1076) |= 2u;
      }
      rimDoRimDevChange(a1, i, 3LL);
      RIMFreeDev(a1, i);
      if ( v3 )
      {
        *(_DWORD *)(a1 + 1076) &= ~2u;
        *(_QWORD *)(v2 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v2, 0LL);
        KeLeaveCriticalRegion();
      }
      continue;
    }
    break;
  }
}
