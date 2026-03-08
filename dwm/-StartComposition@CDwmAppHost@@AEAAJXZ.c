/*
 * XREFs of ?StartComposition@CDwmAppHost@@AEAAJXZ @ 0x1400038B0
 * Callers:
 *     ?Run@CDwmAppHost@@QEAAJXZ @ 0x140003700 (-Run@CDwmAppHost@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x14000309C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StartKernelRedirection@CDwmAppHost@@AEAAJXZ @ 0x14000394C (-StartKernelRedirection@CDwmAppHost@@AEAAJXZ.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x14000B0CC (McTemplateU0q_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CDwmAppHost::StartComposition(CDwmAppHost *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  HANDLE CurrentProcess; // rax
  int v4; // eax
  CDwmAppHost *v5; // rcx
  int started; // eax
  struct HMIL_CONNECTION__ *v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = this;
  v1 = MilCompositionEngine_Initialize(15, &v8);
  v2 = v1;
  if ( v1 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v1, 0x129u);
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_DwmEnableBits & 1) != 0 )
      McTemplateU0q_EtwEventWriteTransfer();
    CurrentProcess = GetCurrentProcess();
    D3DKMTSetProcessSchedulingPriorityClass(CurrentProcess, 5LL);
    v4 = DwmClientStartup(&g_dwmAppHost);
    v2 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x131u);
    }
    else
    {
      started = CDwmAppHost::StartKernelRedirection(v5);
      v2 = started;
      if ( started < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x133u);
      else
        LOBYTE(word_140016B88) = 1;
    }
  }
  return v2;
}
