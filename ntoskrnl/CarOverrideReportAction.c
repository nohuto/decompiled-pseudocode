/*
 * XREFs of CarOverrideReportAction @ 0x1405D1AF0
 * Callers:
 *     CarQueryReportActionForTriage @ 0x1405D1B40 (CarQueryReportActionForTriage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CarOverrideReportAction(_DWORD *a1, _DWORD *a2)
{
  __int64 result; // rax

  if ( *a2 != 5 )
    *a1 = *a2;
  result = (unsigned int)a2[1];
  if ( (_DWORD)result != 3 )
    a1[1] = result;
  return result;
}
