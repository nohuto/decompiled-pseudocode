/*
 * XREFs of _FindActivationFilterWindow @ 0x1C00111D4
 * Callers:
 *     _SetActivationFilter @ 0x1C0011114 (_SetActivationFilter.c)
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall FindActivationFilterWindow(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rdx
  _QWORD *v3; // r8
  _QWORD *i; // rax

  v1 = *(_QWORD *)(a1 + 24);
  v2 = 0LL;
  if ( v1 )
  {
    v3 = (_QWORD *)(v1 + 304);
    for ( i = (_QWORD *)*v3; i != v3; i = (_QWORD *)*i )
    {
      if ( i[2] == a1 )
        return i;
    }
  }
  return (_QWORD *)v2;
}
