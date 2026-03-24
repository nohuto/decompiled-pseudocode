/*
 * XREFs of PoCopyDeepIdleMask @ 0x14035DDD0
 * Callers:
 *     PpmCheckContinueExecution @ 0x14022B0F0 (PpmCheckContinueExecution.c)
 *     KiGetDeepIdleProcessors @ 0x14035DD30 (KiGetDeepIdleProcessors.c)
 *     PpmIdleSelectStates @ 0x140394E80 (PpmIdleSelectStates.c)
 *     RtlUpdateSwapReference @ 0x1407CABDC (RtlUpdateSwapReference.c)
 *     PpmPostProcessMediaBuffering @ 0x1408F5E78 (PpmPostProcessMediaBuffering.c)
 * Callees:
 *     memset @ 0x140413800 (memset.c)
 */

__int64 __fastcall PoCopyDeepIdleMask(_DWORD *a1)
{
  __int64 result; // rax
  __int64 *v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // r9

  a1[1] = 0;
  *a1 = 1310721;
  memset(a1 + 2, 0, 0xA0uLL);
  result = (unsigned __int16)KeNumberNodes;
  if ( KeNumberNodes )
  {
    v3 = KeNodeBlock;
    v4 = (unsigned __int16)KeNumberNodes;
    do
    {
      result = *v3;
      v5 = *(unsigned __int16 *)(*v3 + 144);
      v6 = *(_QWORD *)(*v3 + 64);
      if ( *(_WORD *)a1 <= (unsigned __int16)v5 )
      {
        result = (unsigned int)(v5 + 1);
        *(_WORD *)a1 = v5 + 1;
      }
      *(_QWORD *)&a1[2 * v5 + 2] |= v6;
      ++v3;
      --v4;
    }
    while ( v4 );
  }
  return result;
}
