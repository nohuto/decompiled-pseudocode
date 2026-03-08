/*
 * XREFs of ?vSpCorrectHdevReferences@@YAXPEAU_SPRITESTATE@@PEAUHDEV__@@@Z @ 0x1C00E5D98
 * Callers:
 *     vSpDynamicModeChange @ 0x1C00E5A90 (vSpDynamicModeChange.c)
 * Callees:
 *     <none>
 */

void __fastcall vSpCorrectHdevReferences(struct _SPRITESTATE *a1, HDEV a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // rcx
  __int64 i; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx

  *(_QWORD *)a1 = a2;
  v4 = (_QWORD *)((char *)a1 + 152);
  v5 = 64LL;
  do
  {
    if ( *v4 )
      SURFACE::hdev((SURFACE *)(*v4 - 24LL), a2);
    ++v4;
    --v5;
  }
  while ( v5 );
  v6 = *((_QWORD *)a1 + 128);
  if ( v6 )
    SURFACE::hdev((SURFACE *)(v6 - 24), a2);
  for ( i = *((_QWORD *)a1 + 1); i; i = *(_QWORD *)(i + 24) )
  {
    v8 = *(_QWORD *)(i + 128);
    *(_QWORD *)(i + 16) = a1;
    if ( v8 && (*(_DWORD *)i & 0x40) == 0 )
      SURFACE::hdev((SURFACE *)(v8 - 24), a2);
    v9 = *(_QWORD *)(i + 160);
    if ( v9 )
      SURFACE::hdev((SURFACE *)(v9 - 24), a2);
  }
}
