/*
 * XREFs of SymCryptRsakeyCreate @ 0x1403FF10C
 * Callers:
 *     HashpVerifyPkcs1Signature @ 0x140A375DC (HashpVerifyPkcs1Signature.c)
 * Callees:
 *     SymCryptWipe @ 0x1403FDDE8 (SymCryptWipe.c)
 *     SymCryptSizeofRsakeyFromParams @ 0x1403FF8AC (SymCryptSizeofRsakeyFromParams.c)
 *     SymCryptDigitsFromBits @ 0x140400AB4 (SymCryptDigitsFromBits.c)
 *     SymCryptModulusCreate @ 0x140401320 (SymCryptModulusCreate.c)
 *     SymCryptSizeofIntFromDigits @ 0x140401350 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptSizeofModulusFromDigits @ 0x140401380 (SymCryptSizeofModulusFromDigits.c)
 */

__int64 __fastcall SymCryptRsakeyCreate(__int64 a1, unsigned __int64 a2, unsigned int *a3)
{
  unsigned int v4; // esi
  __int64 v5; // r15
  unsigned __int64 v8; // rbx
  __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rax
  unsigned int v13; // ecx
  __int64 v14; // rbp
  unsigned int i; // ebx
  unsigned int v16; // eax
  __int64 j; // rdx
  __int64 v18; // rax
  unsigned int v19; // eax
  unsigned int v20; // ebx

  v4 = 0;
  v5 = 0LL;
  v8 = (unsigned int)SymCryptSizeofRsakeyFromParams(a3);
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
    v12 = SymCryptModulusCreate(a1 + 192, v11, *(unsigned int *)(a1 + 16));
    v13 = *(_DWORD *)(a1 + 24);
    v14 = v11 + a1 + 192;
    *(_QWORD *)(a1 + 112) = v12;
    for ( i = 0; i < v13; v14 += v16 )
    {
      *(_QWORD *)(a1 + 8LL * i + 56) = v14;
      v16 = SymCryptSizeofModulusFromDigits(*(unsigned int *)(a1 + 16));
      v13 = *(_DWORD *)(a1 + 24);
      ++i;
    }
    for ( j = 0LL; (unsigned int)j < v13; v14 += ((((a3[1] & 0x1FF) + 511) >> 9) + (a3[1] >> 9)) << 6 )
    {
      v18 = (unsigned int)j;
      j = (unsigned int)(j + 1);
      *(_QWORD *)(a1 + 8 * v18 + 72) = v14;
      v13 = *(_DWORD *)(a1 + 24);
    }
    v19 = *(_DWORD *)(a1 + 20);
    v20 = 0;
    if ( v19 )
    {
      do
      {
        *(_QWORD *)(a1 + 8LL * v20++ + 88) = v14;
        v14 += (unsigned int)SymCryptSizeofIntFromDigits(*(unsigned int *)(a1 + 16), j);
        v19 = *(_DWORD *)(a1 + 20);
      }
      while ( v20 < v19 );
      v13 = *(_DWORD *)(a1 + 24);
    }
    if ( v13 * v19 )
    {
      do
      {
        *(_QWORD *)(a1 + 8LL * v4++ + 96) = v14;
        v14 += (unsigned int)SymCryptSizeofIntFromDigits(*(unsigned int *)(a1 + 16), j);
      }
      while ( v4 < *(_DWORD *)(a1 + 20) * *(_DWORD *)(a1 + 24) );
    }
  }
  return v5;
}
