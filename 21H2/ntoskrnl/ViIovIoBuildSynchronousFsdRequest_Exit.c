/*
 * XREFs of ViIovIoBuildSynchronousFsdRequest_Exit @ 0x140601C30
 * Callers:
 *     <none>
 * Callees:
 *     ViSetIoBuildRequestFlag @ 0x140601CA0 (ViSetIoBuildRequestFlag.c)
 */

__int64 __fastcall ViIovIoBuildSynchronousFsdRequest_Exit(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 72) )
    return ViSetIoBuildRequestFlag();
  return result;
}
