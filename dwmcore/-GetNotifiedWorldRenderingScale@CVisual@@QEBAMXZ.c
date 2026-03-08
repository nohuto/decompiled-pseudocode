/*
 * XREFs of ?GetNotifiedWorldRenderingScale@CVisual@@QEBAMXZ @ 0x1800DFA78
 * Callers:
 *     ?IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z @ 0x1800DF63C (-IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall CVisual::GetNotifiedWorldRenderingScale(CVisual *this)
{
  __int64 v1; // rcx
  __int64 i; // rcx

  v1 = *((_QWORD *)this + 28);
  if ( (*(_DWORD *)(v1 + 4) & 0x1000000) == 0 )
    return 0.0;
  for ( i = v1 + 12; (*(_DWORD *)i & 0x7F000000) != 0x8000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
    ;
  return *(float *)(i + 4);
}
