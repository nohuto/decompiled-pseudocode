/*
 * XREFs of ??$CopyPartialStringToBuffer@$0EA@@@YAXAEAY0EA@_WPEBU_UNICODE_STRING@@@Z @ 0x1C00FE554
 * Callers:
 *     ndisMiniportDeviceReadyNotification @ 0x1C00FC5E0 (ndisMiniportDeviceReadyNotification.c)
 * Callees:
 *     memmove @ 0x1C0040840 (memmove.c)
 *     memset @ 0x1C0040B00 (memset.c)
 */

__int128 *__fastcall CopyPartialStringToBuffer<64>(__int64 a1, const void **a2)
{
  __int128 *result; // rax

  if ( *(_WORD *)a2 < 0x80u )
  {
    memset(&xmmword_1C00E7050, 0, 0x80uLL);
    return (__int128 *)memmove(&xmmword_1C00E7050, a2[1], *(unsigned __int16 *)a2);
  }
  else
  {
    result = (__int128 *)a2[1];
    xmmword_1C00E7050 = *result;
    xmmword_1C00E7060 = result[1];
    xmmword_1C00E7070 = result[2];
    xmmword_1C00E7080 = result[3];
    xmmword_1C00E7090 = result[4];
    xmmword_1C00E70A0 = result[5];
    xmmword_1C00E70B0 = result[6];
    xmmword_1C00E70C0 = result[7];
  }
  return result;
}
