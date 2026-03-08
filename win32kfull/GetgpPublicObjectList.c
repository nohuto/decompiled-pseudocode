/*
 * XREFs of GetgpPublicObjectList @ 0x1C00E9E20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetgpPublicObjectList(_QWORD *a1)
{
  __int64 result; // rax

  result = gpPublicObjectList;
  *a1 = gpPublicObjectList;
  return result;
}
