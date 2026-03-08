/*
 * XREFs of EtwpCovSampCaptureQueueRebalance @ 0x1406012C8
 * Callers:
 *     EtwpCovSampLookasidePop @ 0x140461CA8 (EtwpCovSampLookasidePop.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1402302B0 (KiInsertQueueDpc.c)
 */

__int64 __fastcall EtwpCovSampCaptureQueueRebalance(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a1 + 1068));
  if ( (unsigned int)result >= 0x40 )
  {
    *(_DWORD *)(a1 + 1068) = MEMORY[0xFFFFF78000000320];
    return KiInsertQueueDpc(a1 + 976, 0LL, 0LL, 0LL, 0);
  }
  return result;
}
