/*
 * XREFs of PnpiCmResourceSidebandConnection @ 0x1C0092EB4
 * Callers:
 *     PnpiCmResourceRemoveSidebandResources @ 0x1C0092CD4 (PnpiCmResourceRemoveSidebandResources.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpiCmResourceSidebandConnection(__int64 a1, __int64 a2, char *a3)
{
  unsigned int v3; // ebx
  char v4; // r9
  unsigned int v6; // r10d
  __int64 v7; // rcx
  __int64 result; // rax

  v3 = *(_DWORD *)(a1 + 4);
  v4 = 0;
  v6 = 0;
  if ( v3 )
  {
    while ( 1 )
    {
      v7 = 32LL * v6;
      if ( *(_BYTE *)(v7 + a1 + 9) == 0x84
        && *(_DWORD *)(v7 + a1 + 24) == *(_DWORD *)(a2 + 12)
        && *(_DWORD *)(v7 + a1 + 20) == *(_DWORD *)(a2 + 8) )
      {
        break;
      }
      if ( ++v6 >= v3 )
        goto LABEL_8;
    }
    v4 = 1;
  }
LABEL_8:
  result = 0LL;
  *a3 = v4;
  return result;
}
