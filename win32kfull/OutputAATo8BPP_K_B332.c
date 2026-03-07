void __fastcall OutputAATo8BPP_K_B332(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        _BYTE *a4,
        __int64 a5,
        unsigned __int16 *a6,
        unsigned __int64 a7,
        int a8)
{
  unsigned __int8 *v8; // rdx
  unsigned int v11; // r12d
  unsigned int v12; // r15d
  __int64 v13; // rax
  unsigned int v14; // ebx
  __int64 v15; // rax
  unsigned int v16; // r11d
  char v17; // al
  unsigned int v18; // ecx
  unsigned int v19; // r14d
  unsigned int v20; // esi
  __int128 i; // [rsp+0h] [rbp-30h]
  _DWORD v22[4]; // [rsp+18h] [rbp-18h]

  v8 = (unsigned __int8 *)(a2 + 4);
  for ( i = *(_OWORD *)(a5 - 24); (unsigned __int64)v8 < a3; v8 += 4 )
  {
    if ( v8[3] )
    {
      v11 = a6[2];
      v12 = *(_DWORD *)(a5 + 4LL * v8[2] + 2048);
      v13 = v8[1];
      v22[0] = v12;
      v14 = *(_DWORD *)(a5 + 4 * v13 + 1024);
      v15 = *v8;
      v22[1] = v14;
      v16 = *(_DWORD *)(a5 + 4 * v15);
      v22[3] = v16;
      v22[2] = v16;
      v17 = BYTE14(i);
      v18 = v22[(v12 >= v14) | (unsigned __int64)(v22[v12 >= v14] >= v16 ? 2 : 0)] >> 21;
      if ( v18 < v11 )
      {
        v19 = a6[1];
        if ( v18 < v19 )
        {
          v20 = *a6;
          if ( v18 < v20 )
            v17 = ((v20 - (unsigned int)i) >> 12) & ((v16 - v20) >> 12) & 3 | ((v19 - DWORD1(i)) >> 12) & ((v14 - v19) >> 12) & 0x1C | ((v12 - v11) >> 12) & ((v11 - DWORD2(i)) >> 12) & 0xE0;
        }
      }
      *a4 = v17;
    }
    ++a4;
    a6 += 3;
    if ( (unsigned __int64)a6 >= a7 )
      a6 = (unsigned __int16 *)((char *)a6 + a8);
  }
}
