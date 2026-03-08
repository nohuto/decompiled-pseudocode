/*
 * XREFs of ?bSpComputeScan@@YAHPEAU_SPRITESTATE@@PEAVSPRITE@@JJPEAPEAU_SPRITESCAN@@PEA_K@Z @ 0x1C010DCC4
 * Callers:
 *     ?vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C010DBBC (-vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z.c)
 * Callees:
 *     ?pSpGrowRanges@@YAPEAU_SPRITERANGE@@PEAU_SPRITESTATE@@PEAU1@PEAPEAU_SPRITESCAN@@PEAPEAU1@@Z @ 0x1C00F19A0 (-pSpGrowRanges@@YAPEAU_SPRITERANGE@@PEAU_SPRITESTATE@@PEAU1@PEAPEAU_SPRITESCAN@@PEAPEAU1@@Z.c)
 */

__int64 __fastcall bSpComputeScan(
        struct _SPRITESTATE *a1,
        struct SPRITE *a2,
        int a3,
        int a4,
        struct _SPRITESCAN **a5,
        unsigned __int64 *a6)
{
  int v6; // ebp
  int v8; // r14d
  struct _SPRITESCAN **v10; // r13
  struct _SPRITESCAN *v11; // r10
  __int64 v12; // rax
  struct _SPRITERANGE *v13; // rax
  struct _SPRITESCAN **v14; // rdx
  int v15; // esi
  struct SPRITE *v16; // rdi
  int v17; // ebx
  struct _SPRITESCAN *v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 result; // rax
  int v21; // ecx
  struct _SPRITERANGE *v22; // rcx
  struct _SPRITESCAN *v23; // [rsp+50h] [rbp+8h] BYREF

  v6 = *((_DWORD *)a1 + 10);
  v8 = *((_DWORD *)a1 + 12);
  v10 = a5;
  v12 = *a6;
  v23 = *a5;
  v11 = v23;
  *(_DWORD *)v23 = a3;
  *((_DWORD *)v11 + 1) = a4;
  *((_QWORD *)v11 + 2) = v12;
  v13 = (struct _SPRITESCAN *)((char *)v11 + 24);
  v14 = (struct _SPRITESCAN **)(*((_QWORD *)a1 + 18) - 56LL);
  a5 = v14;
  while ( 1 )
  {
    v15 = 0;
    v16 = a2;
    v17 = v8;
    if ( a2 )
    {
      do
      {
        v21 = *((_DWORD *)v16 + 20);
        if ( v21 > v6 )
        {
          if ( v21 <= v17 )
            v17 = *((_DWORD *)v16 + 20);
        }
        else if ( *((_DWORD *)v16 + 22) > v6 )
        {
          ++v15;
          if ( v13 >= (struct _SPRITERANGE *)v14 )
          {
            v13 = pSpGrowRanges(a1, v13, &v23, (struct _SPRITERANGE **)&a5);
            if ( !v13 )
              return 0LL;
            v14 = a5;
          }
          *((_QWORD *)v13 + 1) = v16;
          v13 = (struct _SPRITERANGE *)((char *)v13 + 16);
          if ( *((_DWORD *)v16 + 22) <= v17 )
            v17 = *((_DWORD *)v16 + 22);
        }
        v16 = (struct SPRITE *)*((_QWORD *)v16 + 7);
      }
      while ( v16 );
      if ( v15 )
      {
        v22 = v13;
        do
        {
          v22 = (struct _SPRITERANGE *)((char *)v22 - 16);
          *(_DWORD *)v22 = v6;
          *((_DWORD *)v22 + 1) = v17;
          --v15;
        }
        while ( v15 );
        goto LABEL_5;
      }
    }
    if ( v13 >= (struct _SPRITERANGE *)v14 )
      break;
LABEL_4:
    *((_QWORD *)v13 + 1) = 0LL;
    *(_DWORD *)v13 = v6;
    *((_DWORD *)v13 + 1) = v17;
    v13 = (struct _SPRITERANGE *)((char *)v13 + 16);
LABEL_5:
    v6 = v17;
    if ( v17 >= v8 )
    {
      v18 = v23;
      v19 = v13 - v23;
      *v10 = v13;
      result = 1LL;
      *((_QWORD *)v18 + 1) = v19;
      *a6 = v19;
      return result;
    }
  }
  v13 = pSpGrowRanges(a1, v13, &v23, (struct _SPRITERANGE **)&a5);
  if ( v13 )
  {
    v14 = a5;
    goto LABEL_4;
  }
  return 0LL;
}
