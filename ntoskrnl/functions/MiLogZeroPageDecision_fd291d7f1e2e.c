void __fastcall MiLogZeroPageDecision(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int16 a4, char a5)
{
  unsigned int *v5; // r10
  unsigned int v7; // eax
  unsigned int v8; // edx
  unsigned int *v9; // r11
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // r11
  __int16 v14; // ax

  v5 = *(unsigned int **)(a1 + 288);
  if ( v5 )
  {
    v7 = v5[2];
    ++v5[1];
    v8 = *v5;
    if ( v7 < *v5 || (v7 = 1, v5[2] = 1, v8 > 1) )
    {
      v9 = &v5[4 * v7];
      v10 = a2 | 1;
      if ( a2 < 0x100000000LL )
        v10 = a2 & 0xFFFFFFFE;
      *v9 = v10;
      v11 = a3 | 1;
      if ( a3 < 0x100000000LL )
        v11 = a3 & 0xFFFFFFFE;
      v9[1] = v11;
      *((_WORD *)v9 + 4) = a4;
      *((_WORD *)v9 + 5) = *(_WORD *)(a1 + 12);
      *((_BYTE *)v9 + 12) = a5;
      *((_BYTE *)v9 + 13) = 0;
      *((_WORD *)v9 + 7) = 1;
      v12 = v5[2];
      if ( v12 == 1 || !(unsigned int)MiZeroPageLogEntriesMergable(v9, v9 - 4) || (v14 = *(_WORD *)(v13 - 2), v14 == -1) )
      {
        ++dword_140C12F60;
        v5[2] = v12 + 1;
      }
      else
      {
        ++dword_140C12F5C;
        *(_WORD *)(v13 - 2) = v14 + 1;
      }
    }
  }
}
