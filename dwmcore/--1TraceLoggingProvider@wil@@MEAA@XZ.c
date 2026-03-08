/*
 * XREFs of ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x18019A438
 * Callers:
 *     ??_ECompositorTracing@@UEAAPEAXI@Z @ 0x18019A5C0 (--_ECompositorTracing@@UEAAPEAXI@Z.c)
 *     ??_ETraceLoggingProvider@wil@@MEAAPEAXI@Z @ 0x18019A600 (--_ETraceLoggingProvider@wil@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::TraceLoggingProvider::~TraceLoggingProvider(wil::TraceLoggingProvider *this)
{
  __int64 v1; // rax
  REGHANDLE v2; // rcx

  *(_QWORD *)this = &wil::TraceLoggingProvider::`vftable';
  if ( *((_BYTE *)this + 16) )
  {
    v1 = *((_QWORD *)this + 1);
    v2 = *(_QWORD *)(v1 + 32);
    *(_QWORD *)(v1 + 32) = 0LL;
    *(_DWORD *)v1 = 0;
    EventUnregister(v2);
  }
}
