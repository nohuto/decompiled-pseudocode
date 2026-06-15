/*
 * XREFs of ?GetStreamingResourceManager@CAudioDeviceGraph@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140017E10
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140017EBC (-CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetStreamingResourceManager(
        CAudioDeviceGraph *this,
        struct IAudioStreamingResourceRegistration **a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  int StreamingResourceManager; // esi
  __int64 v6; // rcx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 248);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 248));
  *a2 = 0LL;
  if ( *((_QWORD *)this + 44)
    || (StreamingResourceManager = CreateStreamingResourceManager((struct IAudioStreamingResourceRegistration **)this + 44),
        StreamingResourceManager >= 0) )
  {
    *a2 = (struct IAudioStreamingResourceRegistration *)*((_QWORD *)this + 44);
    v6 = *((_QWORD *)this + 44);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    StreamingResourceManager = 0;
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return (unsigned int)StreamingResourceManager;
}
