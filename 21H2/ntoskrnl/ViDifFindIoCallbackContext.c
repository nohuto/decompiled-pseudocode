/*
 * XREFs of ViDifFindIoCallbackContext @ 0x1405FEE84
 * Callers:
 *     VfDifRecoverIoCallbacks @ 0x1405FE9EC (VfDifRecoverIoCallbacks.c)
 *     ViDifCaptureDriverEntry @ 0x1405FEC4C (ViDifCaptureDriverEntry.c)
 *     ViDifCaptureIoCallbacks @ 0x1405FECBC (ViDifCaptureIoCallbacks.c)
 * Callees:
 *     <none>
 */

char **__fastcall ViDifFindIoCallbackContext(int a1)
{
  char **result; // rax

  result = &VfDifIoCallbackThunks;
  while ( *((_DWORD *)result + 7) != a1 )
  {
    result += 4;
    if ( !*result )
      return 0LL;
  }
  return result;
}
