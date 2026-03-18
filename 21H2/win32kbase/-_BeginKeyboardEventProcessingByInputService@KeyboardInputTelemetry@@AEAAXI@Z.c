/*
 * XREFs of ?_BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@AEAAXI@Z @ 0x1C00018E8
 * Callers:
 *     DeferSysPeekMsg @ 0x1C00015E0 (DeferSysPeekMsg.c)
 * Callees:
 *     ?_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ @ 0x1C0001180 (-_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0047358 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

void __fastcall KeyboardInputTelemetry::_BeginKeyboardEventProcessingByInputService(
        KeyboardInputTelemetry *this,
        int a2)
{
  int v2; // eax
  __int64 v5; // rax
  int v6; // ecx

  v2 = *((_DWORD *)this + 47);
  if ( v2 != a2 )
  {
    if ( v2 )
    {
      KeyboardInputTelemetry::_UploadTelemetryData(this);
      *((_DWORD *)this + 2) = 0;
    }
    *((_DWORD *)this + 47) = a2;
    if ( gptiForeground )
    {
      v5 = *((_QWORD *)gptiForeground + 53);
      if ( v5 )
      {
        v6 = *(_DWORD *)(v5 + 56);
        if ( *((_DWORD *)this + 46) != v6 )
        {
          *((_DWORD *)this + 46) = v6;
          RtlStringCchCopyW(
            (unsigned __int16 *)this + 12,
            0x10uLL,
            (const unsigned __int16 *)(*((_QWORD *)gptiForeground + 53) + 992LL));
        }
      }
    }
  }
}
