/*
 * XREFs of RestoreDesktopsMonitorsAndWindowsRects @ 0x1C0153530
 * Callers:
 *     xxxRemoteReconnect @ 0x1C01528E0 (xxxRemoteReconnect.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C005BDE0 (PopAndFreeW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0061D10 (PopAndFreeAlwaysW32ThreadLock.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0077CC4 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     RestoreMonitorsAndWindowsRects @ 0x1C01D2C24 (RestoreMonitorsAndWindowsRects.c)
 */

__int64 __fastcall RestoreDesktopsMonitorsAndWindowsRects(__int64 a1, _QWORD *a2, __int64 a3, int a4)
{
  char v4; // di
  _QWORD *v5; // r14
  int v7; // r8d
  _QWORD *v9; // rbx
  int v10; // ebp
  _QWORD *v11; // rax
  __int64 v12; // rsi
  _QWORD *v13; // rdx
  _QWORD *v14; // rcx
  int v15; // r9d
  __int128 v16; // [rsp+50h] [rbp-48h] BYREF
  __int64 v17; // [rsp+60h] [rbp-38h]
  __int128 v18; // [rsp+68h] [rbp-30h] BYREF
  __int64 v19; // [rsp+78h] [rbp-20h]

  v4 = 1;
  v5 = a2;
  v7 = gpDispInfo;
  if ( *(_DWORD *)*gpDispInfo <= 1u )
    return 0LL;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      v7,
      a4,
      4,
      23,
      19,
      (__int64)&WPP_638f61f5370132f305bd20c35bb3250c_Traceguids);
  }
  v9 = *(_QWORD **)(a1 + 16);
  v10 = 0;
  if ( v9 )
  {
    while ( 1 )
    {
      v11 = (_QWORD *)*v5;
      v12 = 0LL;
      while ( v11 != v5 )
      {
        if ( (_QWORD *)v11[5] == v9 )
        {
          v12 = (__int64)v11;
          break;
        }
        v11 = (_QWORD *)*v11;
      }
      if ( v12 )
      {
        v13 = (_QWORD *)*v11;
        v17 = 0LL;
        v16 = 0LL;
        if ( (_QWORD *)v13[1] != v11 || (v14 = (_QWORD *)v11[1], (_QWORD *)*v14 != v11) )
          __fastfail(3u);
        *v14 = v13;
        v13[1] = v14;
        v19 = 0LL;
        v18 = 0LL;
        PushW32ThreadLock(v12, &v18, (__int64)DeleteMonitorsAndWindowsSnapShot);
        PushW32ThreadLock((__int64)v9, &v16, UserDereferenceObject);
        ObfReferenceObject(v9);
        v10 = RestoreMonitorsAndWindowsRects(v12);
        PopAndFreeW32ThreadLock((__int64)&v16);
        PopAndFreeAlwaysW32ThreadLock((__int64)&v18);
        if ( v10 < 0 )
          break;
      }
      v9 = (_QWORD *)v9[4];
      if ( !v9 )
        goto LABEL_27;
    }
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        v7,
        v15,
        3,
        23,
        20,
        (__int64)&WPP_638f61f5370132f305bd20c35bb3250c_Traceguids);
    }
  }
LABEL_27:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v4 = 0;
  }
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = v4;
    LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      v7,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      23,
      21,
      (__int64)&WPP_638f61f5370132f305bd20c35bb3250c_Traceguids,
      v10);
  }
  return (unsigned int)v10;
}
