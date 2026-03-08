/*
 * XREFs of RtlLengthCurrentClearRunBackward @ 0x14020B26C
 * Callers:
 *     MiCoalescePageFileBitmapsCache @ 0x14020B47C (MiCoalescePageFileBitmapsCache.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlLengthCurrentClearRunBackward(__int64 a1, unsigned int a2, unsigned int a3)
{
  _DWORD *v3; // rbx
  unsigned __int64 v4; // rax
  unsigned int v5; // edx
  unsigned int v6; // r11d
  unsigned int v8; // r8d
  _DWORD *v9; // rcx
  unsigned int v10; // edx
  unsigned __int64 v11; // rax
  char v12; // dl
  __int64 v14; // rcx
  unsigned int v15; // r8d

  v3 = *(_DWORD **)(a1 + 8);
  v4 = a2;
  v5 = a2 & 0x1F;
  v6 = 31 - v5;
  v8 = 0;
  v9 = &v3[v4 >> 5];
  v10 = *v9 & *((_DWORD *)qword_140016150 + v5);
  if ( v10 )
  {
LABEL_2:
    v11 = v10;
    v12 = -1;
    if ( _BitScanReverse64((unsigned __int64 *)&v14, v11) )
      v12 = v14;
    v8 += 31 - v12;
  }
  else
  {
    while ( 1 )
    {
      v8 += 32;
      if ( v8 >= a3 && v8 - v6 >= a3 )
        break;
      if ( v9 == v3 )
        break;
      v10 = *--v9;
      if ( *v9 )
        goto LABEL_2;
    }
  }
  v15 = v8 - v6;
  if ( v15 > a3 )
    return a3;
  return v15;
}
