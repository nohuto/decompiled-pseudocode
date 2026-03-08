/*
 * XREFs of ?GetNotifiedWorldUpVector@CVisual@@QEBA?AUVector3@Numerics@Foundation@Windows@@XZ @ 0x1800DFA18
 * Callers:
 *     ?IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z @ 0x1800DF63C (-IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::GetNotifiedWorldUpVector(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 i; // rcx

  v2 = *(_QWORD *)(a1 + 224);
  if ( (*(_DWORD *)(v2 + 4) & 0x200000) != 0 )
  {
    for ( i = v2 + 12; (*(_DWORD *)i & 0x7F000000) != 0xB000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
      ;
    *(_QWORD *)a2 = *(_QWORD *)(i + 4);
    v3 = *(_DWORD *)(i + 12);
  }
  else
  {
    v3 = 0;
    *(_QWORD *)a2 = 0LL;
  }
  *(_DWORD *)(a2 + 8) = v3;
  return a2;
}
