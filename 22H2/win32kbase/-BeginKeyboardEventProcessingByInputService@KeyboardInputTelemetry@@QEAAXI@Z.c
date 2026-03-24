/*
 * XREFs of ?BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI@Z @ 0x1C0001F30
 * Callers:
 *     DeferSysPeekMsg @ 0x1C0001720 (DeferSysPeekMsg.c)
 * Callees:
 *     ?_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ @ 0x1C00020F0 (-_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0010F04 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 */

void __fastcall KeyboardInputTelemetry::BeginKeyboardEventProcessingByInputService(
        KeyboardInputTelemetry *this,
        int a2)
{
  __int64 v3; // rax

  if ( !dword_1C0253AF8 )
    memset(&dword_1C0253A78, 0, 0x80uLL);
  if ( dword_1C0253AFC != a2 )
  {
    if ( dword_1C0253AFC )
    {
      KeyboardInputTelemetry::_UploadTelemetryData(this);
      memset(&dword_1C0253A78, 0, 0x80uLL);
    }
    dword_1C0253AFC = a2;
    if ( gptiForeground )
    {
      v3 = *((_QWORD *)gptiForeground + 53);
      if ( v3 )
      {
        if ( dword_1C0253AF8 != *(_DWORD *)(v3 + 56) )
        {
          dword_1C0253AF8 = *(_DWORD *)(v3 + 56);
          RtlStringCchCopyW(
            &word_1C0253A58,
            0x10uLL,
            (const unsigned __int16 *)(*((_QWORD *)gptiForeground + 53) + 992LL));
        }
      }
    }
  }
  gKeyboardInputTelemetry = KeQueryPerformanceCounter(0LL).QuadPart;
}
