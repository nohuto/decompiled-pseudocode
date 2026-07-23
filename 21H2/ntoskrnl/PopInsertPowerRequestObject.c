/*
 * XREFs of PopInsertPowerRequestObject @ 0x140670D60
 * Callers:
 *     PopCreateUserPowerRequest @ 0x140670C38 (PopCreateUserPowerRequest.c)
 *     PopCreateKernelPowerRequest @ 0x140772988 (PopCreateKernelPowerRequest.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall PopInsertPowerRequestObject(_QWORD *a1, char a2)
{
  _QWORD *result; // rax

  if ( !a2 )
  {
    result = (_QWORD *)qword_140C24F58;
    if ( *(__int64 **)qword_140C24F58 == &PopPowerRequestObjectList )
    {
      ++PopPowerRequestObjectCount;
      *a1 = &PopPowerRequestObjectList;
      a1[1] = result;
      *result = a1;
      qword_140C24F58 = (__int64)a1;
      return result;
    }
FatalListEntryError_78:
    __fastfail(3u);
  }
  result = (_QWORD *)qword_140C24F48;
  if ( *(__int64 **)qword_140C24F48 != &PopSpecialPowerRequestObjectList )
    goto FatalListEntryError_78;
  ++PopSpecialPowerRequestObjectCount;
  *a1 = &PopSpecialPowerRequestObjectList;
  a1[1] = result;
  *result = a1;
  qword_140C24F48 = (__int64)a1;
  return result;
}
