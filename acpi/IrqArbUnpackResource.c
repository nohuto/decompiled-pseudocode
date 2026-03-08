/*
 * XREFs of IrqArbUnpackResource @ 0x1C009D990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IrqArbUnpackResource(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 result; // rax

  if ( *(_BYTE *)a1 != 2 )
    return 3221225485LL;
  *a2 = *(unsigned int *)(a1 + 8);
  result = 0LL;
  *a3 = 1LL;
  return result;
}
