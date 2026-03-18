/*
 * XREFs of ?ivPreReceiveCallback@CBaseInput@@KAPEAXPEBX@Z @ 0x1C01EFE60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0096098 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0096270 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 */

__int64 __fastcall CBaseInput::ivPreReceiveCallback(const void *a1)
{
  __int64 v1; // rsi
  __int64 v2; // rdi
  void *v3; // rcx
  NTSTATUS v4; // eax
  int v5; // edx
  int v6; // r8d

  v1 = (__int64)*(&qword_1C0288018 + 6 * (int)a1);
  CPushLock::AcquireLockShared((CPushLock *)(v1 + 152));
  v2 = 0LL;
  if ( v1 )
  {
    v3 = *(void **)(v1 + 16);
    if ( v3 )
    {
      v4 = ObReferenceObjectByPointer(v3, 3u, ExRawInputManagerObjectType, 0);
      if ( v4 < 0 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
          || (LOBYTE(v5) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          LOBYTE(v5) = 0;
        }
        if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_D(
            WPP_GLOBAL_Control->AttachedDevice,
            v5,
            v6,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            2,
            12,
            30,
            (__int64)&WPP_4c82548882e434c25d4dd8d26e311b60_Traceguids,
            v4);
        }
      }
      else
      {
        v2 = *(_QWORD *)(v1 + 16);
      }
    }
  }
  CPushLock::ReleaseLock((CPushLock *)(v1 + 152));
  return v2;
}
