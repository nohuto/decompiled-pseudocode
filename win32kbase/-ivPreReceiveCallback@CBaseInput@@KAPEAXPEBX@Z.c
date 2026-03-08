/*
 * XREFs of ?ivPreReceiveCallback@CBaseInput@@KAPEAXPEBX@Z @ 0x1C0220DF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C006AE58 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00B9120 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 */

__int64 __fastcall CBaseInput::ivPreReceiveCallback(const void *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  void *v6; // rcx
  NTSTATUS v7; // eax
  int v8; // edx
  int v9; // r8d

  v4 = *(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 48LL * (int)a1 + 3304);
  CPushLock::AcquireLockShared((CPushLock *)(v4 + 152));
  v5 = 0LL;
  if ( v4 )
  {
    v6 = *(void **)(v4 + 16);
    if ( v6 )
    {
      v7 = ObReferenceObjectByPointer(v6, 3u, ExRawInputManagerObjectType, 0);
      if ( v7 < 0 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
          || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          LOBYTE(v8) = 0;
        }
        if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_d(
            WPP_GLOBAL_Control->AttachedDevice,
            v8,
            v9,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            2,
            12,
            30,
            (__int64)&WPP_6faef5775b8438fac85e142323c35be9_Traceguids,
            v7);
        }
      }
      else
      {
        v5 = *(_QWORD *)(v4 + 16);
      }
    }
  }
  CPushLock::ReleaseLock((CPushLock *)(v4 + 152));
  return v5;
}
