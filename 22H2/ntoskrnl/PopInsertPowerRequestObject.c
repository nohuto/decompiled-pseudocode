/*
 * XREFs of PopInsertPowerRequestObject @ 0x1406F72F0
 * Callers:
 *     PopCreateUserPowerRequest @ 0x1406F71C8 (PopCreateUserPowerRequest.c)
 *     PopCreateKernelPowerRequest @ 0x140772488 (PopCreateKernelPowerRequest.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall PopInsertPowerRequestObject(_QWORD *a1, char a2)
{
  _QWORD *result; // rax

  if ( !a2 )
  {
    result = (_QWORD *)qword_140C250B8;
    if ( *(__int64 **)qword_140C250B8 == &PopPowerRequestObjectList )
    {
      ++PopPowerRequestObjectCount;
      *a1 = &PopPowerRequestObjectList;
      a1[1] = result;
      *result = a1;
      qword_140C250B8 = (__int64)a1;
      return result;
    }
FatalListEntryError_89:
    __fastfail(3u);
  }
  result = (_QWORD *)qword_140C250E8;
  if ( *(__int64 **)qword_140C250E8 != &PopSpecialPowerRequestObjectList )
    goto FatalListEntryError_89;
  ++PopSpecialPowerRequestObjectCount;
  *a1 = &PopSpecialPowerRequestObjectList;
  a1[1] = result;
  *result = a1;
  qword_140C250E8 = (__int64)a1;
  return result;
}
