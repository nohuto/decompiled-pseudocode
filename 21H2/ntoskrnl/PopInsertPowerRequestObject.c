/*
 * XREFs of PopInsertPowerRequestObject @ 0x14067CEC4
 * Callers:
 *     PopCreateUserPowerRequest @ 0x14067CD9C (PopCreateUserPowerRequest.c)
 *     PopCreateKernelPowerRequest @ 0x1407727C8 (PopCreateKernelPowerRequest.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall PopInsertPowerRequestObject(_QWORD *a1, char a2)
{
  _QWORD *result; // rax

  if ( !a2 )
  {
    result = (_QWORD *)qword_140C25058;
    if ( *(__int64 **)qword_140C25058 == &PopPowerRequestObjectList )
    {
      ++PopPowerRequestObjectCount;
      *a1 = &PopPowerRequestObjectList;
      a1[1] = result;
      *result = a1;
      qword_140C25058 = (__int64)a1;
      return result;
    }
FatalListEntryError_75:
    __fastfail(3u);
  }
  result = (_QWORD *)qword_140C25028;
  if ( *(__int64 **)qword_140C25028 != &PopSpecialPowerRequestObjectList )
    goto FatalListEntryError_75;
  ++PopSpecialPowerRequestObjectCount;
  *a1 = &PopSpecialPowerRequestObjectList;
  a1[1] = result;
  *result = a1;
  qword_140C25028 = (__int64)a1;
  return result;
}
