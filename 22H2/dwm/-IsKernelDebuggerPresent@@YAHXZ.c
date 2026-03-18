/*
 * XREFs of ?IsKernelDebuggerPresent@@YAHXZ @ 0x14000D0AC
 * Callers:
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x14000D120 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerPresent(void)
{
  char v0; // al
  char v1; // cl
  unsigned int v2; // ebx

  v0 = word_140015308;
  if ( !(_BYTE)word_140015308 )
    return 0;
  v1 = HIBYTE(word_140015308);
  v2 = 1;
  if ( HIBYTE(word_140015308) )
  {
    if ( NtQuerySystemInformation(SystemKernelDebuggerInformation, &word_140015308, 2u, 0LL) >= 0 )
    {
      v1 = HIBYTE(word_140015308);
      v0 = word_140015308;
    }
    else
    {
      v0 = 1;
      word_140015308 = 257;
      v1 = 1;
    }
  }
  if ( !v0 || v1 )
    return 0;
  return v2;
}
