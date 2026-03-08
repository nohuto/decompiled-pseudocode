/*
 * XREFs of KdMarkHiberPhase @ 0x140A9B928
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x140AA049C (PopMarkComponentsBootPhase.c)
 * Callees:
 *     PoSetHiberRange @ 0x14058C400 (PoSetHiberRange.c)
 */

void KdMarkHiberPhase()
{
  __int64 i; // rbx
  void *v1; // r8

  PoSetHiberRange(0LL, 0x10000u, &KdPitchDebugger, 0LL, 0x626C644Bu);
  if ( !KdPitchDebugger )
  {
    KdSetHiberRange(&KdpContext);
    for ( i = 0LL; (unsigned int)i < (unsigned int)KeNumberProcessors_0; i = (unsigned int)(i + 1) )
    {
      v1 = (void *)KdLogBuffer[i];
      if ( v1 )
        PoSetHiberRange(0LL, 0x10000u, v1, 0x1000uLL, 0x626C644Bu);
    }
  }
}
