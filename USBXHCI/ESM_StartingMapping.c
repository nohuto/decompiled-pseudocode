/*
 * XREFs of ESM_StartingMapping @ 0x1C0007FF0
 * Callers:
 *     <none>
 * Callees:
 *     TR_StartMapping @ 0x1C00081FC (TR_StartMapping.c)
 */

__int64 __fastcall ESM_StartingMapping(__int64 a1)
{
  __int64 v1; // rcx
  __int64 *v2; // rbx
  __int64 v4; // rdi
  unsigned int v5; // esi

  v1 = *(_QWORD *)(a1 + 960);
  _InterlockedExchange((volatile __int32 *)(v1 + 32), 0);
  v2 = (__int64 *)(v1 + 136);
  if ( *(_BYTE *)(v1 + 37) && (*(_DWORD *)(*v2 + 24) = 0, *(_BYTE *)(v1 + 37)) )
  {
    v4 = *v2;
    v5 = 1;
    for ( *(_DWORD *)(v4 + 20) = 0; v5 <= *(_DWORD *)(v4 + 8); ++v5 )
      TR_StartMapping(*(_QWORD *)(104LL * (v5 - 1) + *v2 + 48));
  }
  else
  {
    TR_StartMapping(*(_QWORD *)(v1 + 88));
  }
  return 29LL;
}
