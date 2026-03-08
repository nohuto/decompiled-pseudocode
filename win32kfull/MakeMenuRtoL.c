/*
 * XREFs of MakeMenuRtoL @ 0x1C023B2B8
 * Callers:
 *     xxxSetMenuItemInfo @ 0x1C00A2218 (xxxSetMenuItemInfo.c)
 *     xxxInsertMenuItem @ 0x1C00A7ADC (xxxInsertMenuItem.c)
 *     MakeMenuRtoL @ 0x1C023B2B8 (MakeMenuRtoL.c)
 * Callees:
 *     MakeMenuRtoL @ 0x1C023B2B8 (MakeMenuRtoL.c)
 */

__int64 __fastcall MakeMenuRtoL(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  int v5; // esi
  __int64 v6; // rdi
  __int64 v7; // rcx
  int *v8; // rdx
  int v9; // eax
  __int64 v10; // rcx

  v2 = *(_QWORD *)(a1 + 40);
  if ( a2 )
    *(_DWORD *)(v2 + 40) |= 0x20u;
  else
    *(_DWORD *)(v2 + 40) &= ~0x20u;
  v5 = 0;
  if ( *(int *)(*(_QWORD *)(a1 + 40) + 44LL) > 0 )
  {
    v6 = 0LL;
    do
    {
      v7 = *(_QWORD *)(a1 + 88);
      v8 = *(int **)(v6 + v7);
      v9 = *v8;
      if ( a2 )
      {
        *v8 = v9 | 0x4000;
        **(_DWORD **)(v6 + v7) |= 0x2000u;
      }
      else
      {
        *v8 = v9 & 0xFFFFBFFF;
        **(_DWORD **)(v6 + v7) &= ~0x2000u;
      }
      v10 = *(_QWORD *)(v6 + v7 + 16);
      if ( v10 )
        MakeMenuRtoL(v10, a2);
      ++v5;
      v6 += 96LL;
    }
    while ( v5 < *(_DWORD *)(*(_QWORD *)(a1 + 40) + 44LL) );
  }
  return a1;
}
