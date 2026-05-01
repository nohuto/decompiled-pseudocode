/*
 * XREFs of ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x1801A9148
 * Callers:
 *     ??_ECustomShellHostTelemetry@@UEAAPEAXI@Z @ 0x1800A1F10 (--_ECustomShellHostTelemetry@@UEAAPEAXI@Z.c)
 *     ??_EImmersiveIconsLogging@@UEAAPEAXI@Z @ 0x180137390 (--_EImmersiveIconsLogging@@UEAAPEAXI@Z.c)
 *     ??_GViewManagerInteropTraceLogging@@UEAAPEAXI@Z @ 0x1801A94D0 (--_GViewManagerInteropTraceLogging@@UEAAPEAXI@Z.c)
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
