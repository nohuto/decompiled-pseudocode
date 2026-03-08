/*
 * XREFs of ESM_StoppingMappingAfterControllerResetInEnabled @ 0x1C0051DE0
 * Callers:
 *     <none>
 * Callees:
 *     TR_StopMapping @ 0x1C000FC90 (TR_StopMapping.c)
 */

__int64 __fastcall ESM_StoppingMappingAfterControllerResetInEnabled(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rsi
  unsigned int v3; // edi

  v1 = *(_QWORD *)(a1 + 960);
  if ( *(_BYTE *)(v1 + 37) )
  {
    v2 = *(_QWORD *)(v1 + 136);
    v3 = 1;
    for ( *(_DWORD *)(v2 + 20) = 0; v3 <= *(_DWORD *)(v2 + 8); ++v3 )
      TR_StopMapping(*(_QWORD *)(104LL * (v3 - 1) + *(_QWORD *)(v1 + 136) + 48));
  }
  else
  {
    TR_StopMapping(*(_QWORD *)(v1 + 88));
  }
  return 1000LL;
}
