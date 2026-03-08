/*
 * XREFs of ?IsKernelDebuggerPresent@@YAHXZ @ 0x14000E328
 * Callers:
 *     ?LpcVerifyOutgoingPayloadSize@@YAXPEBU_PORT_MESSAGE@@@Z @ 0x140002CA0 (-LpcVerifyOutgoingPayloadSize@@YAXPEBU_PORT_MESSAGE@@@Z.c)
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x14000E39C (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerPresent(void)
{
  char v0; // al
  char v1; // cl
  unsigned int v2; // ebx

  v0 = word_140016228;
  if ( !(_BYTE)word_140016228 )
    return 0;
  v1 = HIBYTE(word_140016228);
  v2 = 1;
  if ( HIBYTE(word_140016228) )
  {
    if ( NtQuerySystemInformation(SystemKernelDebuggerInformation, &word_140016228, 2u, 0LL) >= 0 )
    {
      v1 = HIBYTE(word_140016228);
      v0 = word_140016228;
    }
    else
    {
      v0 = 1;
      word_140016228 = 257;
      v1 = 1;
    }
  }
  if ( !v0 || v1 )
    return 0;
  return v2;
}
