/*
 * XREFs of RIMFixUpCompleteFrames @ 0x1C01CDB54
 * Callers:
 *     rimProcessInput @ 0x1C00045B0 (rimProcessInput.c)
 * Callees:
 *     RIMFixUpCompleteFrame @ 0x1C01CD8B0 (RIMFixUpCompleteFrame.c)
 */

_UNKNOWN **__fastcall RIMFixUpCompleteFrames(__int64 a1, __int64 a2, unsigned int *a3, _QWORD *a4, unsigned int a5)
{
  _UNKNOWN **result; // rax
  _QWORD *v6; // rbx
  unsigned __int64 v7; // rsi
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  v6 = a4;
  v7 = (unsigned __int64)a4 + a5;
  if ( (unsigned __int64)a4 < v7 )
  {
    do
    {
      RIMFixUpCompleteFrame(a1, a2, (__int64)a3, v6, 0);
      v6 = (_QWORD *)((char *)v6 + *(unsigned int *)v6);
      result = (_UNKNOWN **)*a3;
      a3 = (unsigned int *)((char *)a3 + (_QWORD)result);
    }
    while ( (unsigned __int64)v6 < v7 );
  }
  return result;
}
