/*
 * XREFs of MagContextDestroy @ 0x1C00F61E0
 * Callers:
 *     <none>
 * Callees:
 *     MagContextThreadCallout @ 0x1C01A4070 (MagContextThreadCallout.c)
 */

__int64 __fastcall MagContextDestroy(_QWORD *a1)
{
  _QWORD *i; // rdi
  _QWORD *v3; // rdx
  __int64 result; // rax

  for ( i = (_QWORD *)*a1; i != a1; result = MagContextThreadCallout(a1, v3[2], v3, 1LL) )
  {
    v3 = i;
    i = (_QWORD *)*i;
  }
  a1[1] = a1;
  *a1 = a1;
  return result;
}
