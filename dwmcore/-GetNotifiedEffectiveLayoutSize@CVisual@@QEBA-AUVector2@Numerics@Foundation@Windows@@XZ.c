/*
 * XREFs of ?GetNotifiedEffectiveLayoutSize@CVisual@@QEBA?AUVector2@Numerics@Foundation@Windows@@XZ @ 0x1800DF960
 * Callers:
 *     ?IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z @ 0x1800DF63C (-IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CVisual::GetNotifiedEffectiveLayoutSize(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 i; // rcx

  v2 = *(_QWORD *)(a1 + 224);
  if ( (*(_DWORD *)(v2 + 4) & 0x800000) != 0 )
  {
    for ( i = v2 + 12; (*(_DWORD *)i & 0x7F000000) != 0x9000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
      ;
    v3 = *(_QWORD *)(i + 4);
  }
  else
  {
    v3 = 0LL;
  }
  *a2 = v3;
  return a2;
}
