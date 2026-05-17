/*
 * XREFs of ShipAssertGetBufferInfo @ 0x1800DDF00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 *__fastcall ShipAssertGetBufferInfo(_QWORD *a1, _QWORD *a2)
{
  __int64 *result; // rax

  if ( a1 )
  {
    result = &qword_18016DA18;
    *a1 = &qword_18016DA18;
  }
  if ( a2 )
  {
    result = (__int64 *)&dword_1801697B4;
    *a2 = &dword_1801697B4;
  }
  return result;
}
