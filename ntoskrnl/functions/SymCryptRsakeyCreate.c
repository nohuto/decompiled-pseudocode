__int64 __fastcall SymCryptRsakeyCreate(__int64 a1, unsigned __int64 a2, unsigned int *a3)
{
  unsigned int v4; // esi
  __int64 v5; // r15
  unsigned int v8; // ebp
  __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rbp
  unsigned int v13; // eax
  unsigned int i; // ebx
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned int v17; // eax
  unsigned int j; // ebx

  v4 = 0;
  v5 = 0LL;
  v8 = SymCryptSizeofRsakeyFromParams(a3);
  if ( a2 >= v8 && a3[1] - 256 <= 0xFF00 && a3[3] == 1 && (a3[2] & 0xFFFFFFFD) == 0 )
  {
    v5 = a1;
    SymCryptWipe(a1, a2);
    *(_DWORD *)a1 = v8;
    *(_BYTE *)(a1 + 4) = 0;
    v9 = a3[1];
    *(_DWORD *)(a1 + 8) = v9;
    v10 = SymCryptDigitsFromBits(v9);
    *(_DWORD *)(a1 + 16) = v10;
    *(_DWORD *)(a1 + 24) = a3[2];
    *(_DWORD *)(a1 + 20) = a3[3];
    v11 = (unsigned int)SymCryptSizeofModulusFromDigits(v10);
    v12 = v11 + a1 + 192;
    *(_QWORD *)(a1 + 112) = SymCryptModulusCreate(a1 + 192, v11, *(unsigned int *)(a1 + 16));
    v13 = *(_DWORD *)(a1 + 24);
    for ( i = 0; i < v13; v13 = *(_DWORD *)(a1 + 24) )
    {
      *(_QWORD *)(a1 + 8LL * i++ + 56) = v12;
      v12 += (unsigned int)SymCryptSizeofModulusFromDigits(*(unsigned int *)(a1 + 16));
    }
    v15 = 0LL;
    if ( v13 )
    {
      do
      {
        v16 = (unsigned int)v15;
        v15 = (unsigned int)(v15 + 1);
        *(_QWORD *)(a1 + 8 * v16 + 72) = v12;
        v12 += ((((a3[1] & 0x1FF) + 511) >> 9) + (a3[1] >> 9)) << 6;
      }
      while ( (unsigned int)v15 < *(_DWORD *)(a1 + 24) );
    }
    v17 = *(_DWORD *)(a1 + 20);
    for ( j = 0; j < v17; v17 = *(_DWORD *)(a1 + 20) )
    {
      *(_QWORD *)(a1 + 8LL * j++ + 88) = v12;
      v12 += (unsigned int)SymCryptSizeofIntFromDigits(*(unsigned int *)(a1 + 16), v15);
    }
    if ( *(_DWORD *)(a1 + 24) * v17 )
    {
      do
      {
        *(_QWORD *)(a1 + 8LL * v4++ + 96) = v12;
        v12 += (unsigned int)SymCryptSizeofIntFromDigits(*(unsigned int *)(a1 + 16), v15);
      }
      while ( v4 < *(_DWORD *)(a1 + 24) * *(_DWORD *)(a1 + 20) );
    }
  }
  return v5;
}
