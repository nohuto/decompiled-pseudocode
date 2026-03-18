/*
 * XREFs of sub_1406497E0 @ 0x1406497E0
 * Callers:
 *     sub_140A0F4D4 @ 0x140A0F4D4 (sub_140A0F4D4.c)
 *     sub_140A0F68C @ 0x140A0F68C (sub_140A0F68C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406497E0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, int a7)
{
  signed int v7; // ebx
  unsigned int v8; // r11d
  int v9; // r10d
  __int64 v13; // r8
  unsigned int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // eax
  _DWORD *v18; // rcx
  _DWORD *v19; // rdx

  v7 = a2 - 1;
  v8 = a5 - a3;
  v9 = 0;
  while ( v7 >= v9 )
  {
    v13 = (v7 + v9) / 2;
    v14 = *(_DWORD *)(a1 + 4 * v13) & 0xFFFFFFF;
    if ( v8 >= v14 )
    {
      if ( v8 <= v14 )
        goto LABEL_8;
      v9 = v13 + 1;
    }
    else
    {
      v7 = v13 - 1;
    }
  }
  LODWORD(v13) = v9;
LABEL_8:
  while ( (unsigned int)v13 < a2 )
  {
    v15 = *(_DWORD *)(a1 + 4LL * (unsigned int)v13);
    if ( (v15 & 0xFFFFFFF) >= v8 + a7 )
      break;
    LODWORD(v13) = v13 + 1;
    v16 = v15 & 0xFFFFFFF;
    v17 = v15 >> 28;
    v18 = (_DWORD *)(a3 + v16);
    v19 = (_DWORD *)((char *)v18 + a6 - a5);
    if ( v17 )
    {
      if ( v17 == 3 )
      {
        *v19 = a4 + *v18;
      }
      else if ( v17 == 10 )
      {
        *(_QWORD *)v19 = a4 + *(_QWORD *)v18;
      }
    }
  }
  return 0LL;
}
