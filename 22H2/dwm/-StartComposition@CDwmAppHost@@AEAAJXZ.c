/*
 * XREFs of ?StartComposition@CDwmAppHost@@AEAAJXZ @ 0x140001EC4
 * Callers:
 *     ?Run@CDwmAppHost@@QEAAJXZ @ 0x140001BB8 (-Run@CDwmAppHost@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x14000171C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StartKernelRedirection@CDwmAppHost@@AEAAJXZ @ 0x140001F74 (-StartKernelRedirection@CDwmAppHost@@AEAAJXZ.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x140007CA0 (McTemplateU0q_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CDwmAppHost::StartComposition(CDwmAppHost *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  HANDLE CurrentProcess; // rax
  int v4; // eax
  CDwmAppHost *v5; // rcx
  int started; // eax
  __int64 *v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = &qword_140015B48;
  v1 = DwmInitializeEngine(&v8, &qword_140015B38);
  v2 = v1;
  if ( v1 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v1, 0x127u);
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_DwmEnableBits & 1) != 0 )
      McTemplateU0q_EtwEventWriteTransfer();
    CurrentProcess = GetCurrentProcess();
    D3DKMTSetProcessSchedulingPriorityClass(CurrentProcess, 5LL);
    v4 = DwmClientStartup(&v8, &qword_140015B38);
    v2 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x12Fu);
    }
    else
    {
      started = CDwmAppHost::StartKernelRedirection(v5);
      v2 = started;
      if ( started < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x131u);
      else
        LOBYTE(word_140015BB0) = 1;
    }
  }
  return v2;
}
