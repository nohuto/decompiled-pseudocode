/*
 * XREFs of AslpFileQuery16BitDescription @ 0x140A56390
 * Callers:
 *     AslpFileGet16BitDescription @ 0x140A54EE4 (AslpFileGet16BitDescription.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileQuery16BitDescription(_BYTE *a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // r8
  __int64 v5; // rcx
  unsigned __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rdx
  size_t v9; // rsi

  v3 = 0;
  *a1 = 0;
  if ( *(_DWORD *)(a2 + 64) == 5 )
  {
    v4 = *(_QWORD *)(a2 + 32);
    v5 = *(int *)(v4 + 60);
    v6 = *(_QWORD *)(a2 + 24);
    if ( v6 >= v5 + 64
      && (v7 = *(int *)(v5 + v4 + 44), v6 >= v7 + 1)
      && (v8 = *(unsigned __int8 *)(v7 + v4), *(_BYTE *)(v7 + v4))
      && (unsigned int)(v8 + 1) <= 0x100
      && (v9 = *(unsigned __int8 *)(v7 + v4), v6 >= v8 + v7 + 1) )
    {
      memmove(a1, (const void *)(v7 + v4 + 1), v9);
      a1[v9] = 0;
    }
    else
    {
      v3 = -1073741701;
      AslLogCallPrintf(1LL);
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v3;
}
