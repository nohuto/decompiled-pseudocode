/*
 * XREFs of IoRemoveLinkShareAccessEx @ 0x1406F3450
 * Callers:
 *     RawCleanup @ 0x1406F3368 (RawCleanup.c)
 *     IoRemoveShareAccess @ 0x1406F3430 (IoRemoveShareAccess.c)
 *     IoRemoveLinkShareAccess @ 0x1409444B0 (IoRemoveLinkShareAccess.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall IoRemoveLinkShareAccessEx(__int64 a1, _DWORD *a2, _DWORD *a3, char a4)
{
  unsigned int *result; // rax

  result = *(unsigned int **)(a1 + 208);
  if ( !result || (result = (unsigned int *)*result, ((unsigned __int8)result & 1) == 0) )
  {
    if ( *(_BYTE *)(a1 + 74) || *(_BYTE *)(a1 + 75) || *(_BYTE *)(a1 + 76) )
    {
      --*a2;
      if ( *(_BYTE *)(a1 + 74) )
        --a2[1];
      if ( *(_BYTE *)(a1 + 75) )
        --a2[2];
      if ( *(_BYTE *)(a1 + 77) )
        --a2[4];
      if ( *(_BYTE *)(a1 + 78) )
        --a2[5];
      if ( *(_BYTE *)(a1 + 76) )
        --a2[3];
      if ( *(_BYTE *)(a1 + 79) )
        --a2[6];
      if ( a3 )
      {
        --*a3;
        if ( a4 >= 0 && *(_BYTE *)(a1 + 76) )
          --a3[1];
        if ( *(_BYTE *)(a1 + 79) )
          --a3[2];
      }
    }
  }
  return result;
}
