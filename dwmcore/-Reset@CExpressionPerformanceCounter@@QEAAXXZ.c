/*
 * XREFs of ?Reset@CExpressionPerformanceCounter@@QEAAXXZ @ 0x18025FC98
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAX_K0@Z @ 0x180051314 (-UpdateExpressions@CExpressionManager@@QEAAX_K0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CExpressionPerformanceCounter::Reset(CExpressionPerformanceCounter *this)
{
  __int64 v1; // rax
  _QWORD *v2; // rdx

  v1 = 0LL;
  v2 = (_QWORD *)((char *)this + 24);
  do
  {
    *((_DWORD *)this + v1++) = 0;
    *v2++ = 0LL;
  }
  while ( v1 < 6 );
}
