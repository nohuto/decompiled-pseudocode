__int64 __fastcall OutputAATo8BPP_K_XLATE(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        _BYTE *a4,
        __int64 a5,
        unsigned __int16 *a6,
        unsigned __int64 a7,
        int a8,
        __int64 a9)
{
  unsigned __int8 *v9; // r10
  __int64 result; // rax
  unsigned int v14; // r13d
  char v15; // r14
  unsigned int v16; // r15d
  __int64 v17; // rcx
  unsigned int v18; // r12d
  __int64 v19; // rcx
  unsigned int v20; // r8d
  unsigned int v21; // edx
  unsigned int v22; // esi
  unsigned int v23; // ecx
  __int128 v24; // [rsp+0h] [rbp-30h]
  _DWORD v25[4]; // [rsp+18h] [rbp-18h]

  v9 = (unsigned __int8 *)(a2 + 4);
  result = a9;
  v24 = *(_OWORD *)(a5 - 24);
  if ( a2 + 4 < a3 )
  {
    do
    {
      if ( v9[3] )
      {
        v14 = a6[2];
        v15 = BYTE14(v24);
        v16 = *(_DWORD *)(a5 + 4LL * v9[2] + 2048);
        v17 = v9[1];
        v25[0] = v16;
        v18 = *(_DWORD *)(a5 + 4 * v17 + 1024);
        v19 = *v9;
        v25[1] = v18;
        v20 = *(_DWORD *)(a5 + 4 * v19);
        v25[3] = v20;
        v25[2] = v20;
        v21 = v25[(v16 >= v18) | (unsigned __int64)(v25[v16 >= v18] >= v20 ? 2 : 0)] >> 21;
        if ( v21 < v14 )
        {
          v22 = a6[1];
          if ( v21 < v22 )
          {
            v23 = *a6;
            if ( v21 < v23 )
              v15 = *(_BYTE *)((((v22 - DWORD1(v24)) & (v18 - v22) & 0x38000 | (v14 - DWORD2(v24)) & (v16 - v14) & 0x1C0000 | (unsigned __int64)((unsigned __int16)(v23 - v24) & (unsigned __int16)(v20 - v23) & 0x7000)) >> 12)
                             + a9);
          }
        }
        *a4 = v15;
      }
      ++a4;
      a6 += 3;
      if ( (unsigned __int64)a6 >= a7 )
        a6 = (unsigned __int16 *)((char *)a6 + a8);
      v9 += 4;
    }
    while ( (unsigned __int64)v9 < a3 );
  }
  return result;
}
