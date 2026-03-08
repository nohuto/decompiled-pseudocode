/*
 * XREFs of VfSuspectDriversInsert @ 0x140AD76D0
 * Callers:
 *     VfSuspectDriversParseRegistryString @ 0x140B93B7C (VfSuspectDriversParseRegistryString.c)
 *     VfTriageAddDrivers @ 0x140B93E98 (VfTriageAddDrivers.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall VfSuspectDriversInsert(_QWORD *a1)
{
  _QWORD *result; // rax

  result = (_QWORD *)qword_140C36FB8;
  if ( *(__int64 **)qword_140C36FB8 != &VfSuspectDriversList )
    __fastfail(3u);
  *a1 = &VfSuspectDriversList;
  a1[1] = result;
  *result = a1;
  qword_140C36FB8 = (__int64)a1;
  return result;
}
