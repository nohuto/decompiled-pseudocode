/*
 * XREFs of ?ResolveSourceReference@CExpression@@UEAAPEAVCResource@@I@Z @ 0x1800D9B90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CResource *__fastcall CExpression::ResolveSourceReference(CExpression *this, unsigned int a2)
{
  if ( a2 >= *((_DWORD *)this + 106) || !*(_QWORD *)(*((_QWORD *)this + 52) + 8LL * a2) )
    return 0LL;
  _mm_lfence();
  return *(struct CResource **)(*(_QWORD *)(*((_QWORD *)this + 52) + 8LL * a2) + 16LL);
}
