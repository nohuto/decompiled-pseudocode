/*
 * XREFs of ?SetDesktopInputSink@CDesktopInputSink@@SA_NPEAXAEBU_LUID@@@Z @ 0x1C0094ED0
 * Callers:
 *     UnInitializeInputComponents @ 0x1C0094C50 (UnInitializeInputComponents.c)
 *     NtUserSetDesktopVisualInputSink @ 0x1C0176080 (NtUserSetDesktopVisualInputSink.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C006AE58 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?GetInstance@CDesktopInputSink@@CAAEAV1@XZ @ 0x1C0094F6C (-GetInstance@CDesktopInputSink@@CAAEAV1@XZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C00AB5F0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?Set@CDesktopInputSink@@AEAA_NPEAXAEBU_LUID@@@Z @ 0x1C02148B0 (-Set@CDesktopInputSink@@AEAA_NPEAXAEBU_LUID@@@Z.c)
 *     ?AddMapping@InputObjectMap@@SAJAEBU_LUID@@PEBUCompositionInputObject@@@Z @ 0x1C0270AE4 (-AddMapping@InputObjectMap@@SAJAEBU_LUID@@PEBUCompositionInputObject@@@Z.c)
 *     ?RemoveMapping@InputObjectMap@@SAJAEBU_LUID@@W4RemoveRestriction@1@@Z @ 0x1C027110C (-RemoveMapping@InputObjectMap@@SAJAEBU_LUID@@W4RemoveRestriction@1@@Z.c)
 */

bool __fastcall CDesktopInputSink::SetDesktopInputSink(void *a1, const struct _LUID *a2)
{
  bool v4; // bp
  void *v5; // rsi
  struct CDesktopInputSink *Instance; // rdi
  void *v7; // rcx
  __int64 v8; // rbx
  int v10; // edx
  int v11; // r8d
  __int64 v12; // [rsp+80h] [rbp+18h] BYREF

  v4 = 1;
  v5 = 0LL;
  Instance = CDesktopInputSink::GetInstance();
  CPushLock::AcquireLockExclusive(Instance);
  v7 = (void *)*((_QWORD *)Instance + 2);
  v8 = *((_QWORD *)Instance + 3);
  if ( v7 )
  {
    *((_QWORD *)Instance + 3) = 0LL;
    ObfDereferenceObject(v7);
    *((_QWORD *)Instance + 2) = 0LL;
    LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800000) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v10,
        v11,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        24,
        17,
        (__int64)&WPP_57191d14ba8d34808e88878d5fc76f63_Traceguids);
    }
  }
  v12 = v8;
  if ( a1 )
  {
    v4 = CDesktopInputSink::Set(Instance, a1, a2);
    if ( v4 )
    {
      v5 = (void *)*((_QWORD *)Instance + 2);
      ObReferenceObjectByPointer(v5, 3u, ExCompositionObjectType, 0);
    }
  }
  CPushLock::ReleaseLock(Instance);
  if ( v8 )
    InputObjectMap::RemoveMapping(&v12, 1LL);
  if ( v5 )
  {
    InputObjectMap::AddMapping(a2, (const struct CompositionInputObject *)v5);
    ObfDereferenceObject(v5);
  }
  return v4;
}
