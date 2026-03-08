/*
 * XREFs of ?xxxHandleVolumeUpDownCombo@@YAXXZ @ 0x1C01C1438
 * Callers:
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0097FCC (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 * Callees:
 *     ?xxxVolumeUpDownComboSupported@@YA_NXZ @ 0x1C01C14D4 (-xxxVolumeUpDownComboSupported@@YA_NXZ.c)
 *     ?xxxUserBeep@@YAHKK_N@Z @ 0x1C01FA214 (-xxxUserBeep@@YAHKK_N@Z.c)
 */

void xxxHandleVolumeUpDownCombo(void)
{
  LARGE_INTEGER PerformanceCounter; // rax
  int v1; // r8d
  __int64 v2; // rdx

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v1 = guVolComboCount;
  if ( guVolComboCount )
  {
    if ( PerformanceCounter.QuadPart <= gliVolComboTicks )
      goto LABEL_5;
    v1 = 0;
  }
  gliVolComboTicks = PerformanceCounter.QuadPart + 2LL * gliQpcFreq;
LABEL_5:
  guVolComboCount = v1 + 1;
  if ( (unsigned int)(v1 + 1) >= 3 )
  {
    if ( xxxVolumeUpDownComboSupported() )
    {
      xxxUserBeep(0x1EEu, 0xC8u, 1);
      LOBYTE(v2) = 1;
      xxxDisplayDiagBlackScreenDetected(2LL, v2);
    }
    guVolComboCount = 0;
  }
}
