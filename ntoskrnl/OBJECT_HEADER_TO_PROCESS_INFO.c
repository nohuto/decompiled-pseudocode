/*
 * XREFs of OBJECT_HEADER_TO_PROCESS_INFO @ 0x140300B7C
 * Callers:
 *     ObpIncrementHandleCountEx @ 0x1407C1090 (ObpIncrementHandleCountEx.c)
 *     ObGetObjectInformation @ 0x140978914 (ObGetObjectInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall OBJECT_HEADER_TO_PROCESS_INFO(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 26) & 0x10) != 0 )
    return a1 - ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 0x1F];
  else
    return 0LL;
}
