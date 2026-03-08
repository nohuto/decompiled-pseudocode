/*
 * XREFs of HvpViewMapSealRange @ 0x1407A50A4
 * Callers:
 *     HvpSetRangeProtection @ 0x1407A5934 (HvpSetRangeProtection.c)
 * Callees:
 *     CmSiProtectViewOfSection @ 0x14030D290 (CmSiProtectViewOfSection.c)
 */

void __fastcall HvpViewMapSealRange(__int64 a1, int a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rsi
  unsigned __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 *v9; // rdx
  __int64 v10; // r8
  int v11; // [rsp+58h] [rbp+10h] BYREF

  v3 = (unsigned int)(a2 + 4096);
  v4 = v3 + a3;
  v5 = a1;
  if ( v3 < (unsigned __int64)v4 )
  {
    v6 = a1 + 40;
    do
    {
      v7 = *(_QWORD *)v6;
      if ( (*(_BYTE *)(v6 + 8) & 1) != 0 && v7 )
        v7 ^= v6;
      while ( v7 )
      {
        if ( v3 >= *(_QWORD *)(v7 + 40) )
        {
          if ( v3 < *(_QWORD *)(v7 + 48) )
            break;
          a1 = *(_QWORD *)(v7 + 8);
        }
        else
        {
          a1 = *(_QWORD *)v7;
        }
        if ( (*(_BYTE *)(v6 + 8) & 1) != 0 && a1 )
          v7 ^= a1;
        else
          v7 = a1;
      }
      v8 = v4;
      v9 = *(__int64 **)(v5 + 24);
      if ( v4 >= *(_QWORD *)(v7 + 48) )
        v8 = *(_QWORD *)(v7 + 48);
      v10 = *(_QWORD *)(v7 + 56) - *(_QWORD *)(v7 + 24);
      v11 = 0;
      CmSiProtectViewOfSection(a1, v9, v3 + v10, v8 - v3, 2u, (__int64)&v11);
      while ( v3 < v8 )
      {
        *(_BYTE *)(((unsigned __int64)(v3 - *(_QWORD *)(v7 + 24)) >> 12) + v7 + 72) &= ~8u;
        v3 += 4096LL;
      }
      v3 = v8;
    }
    while ( v8 < v4 );
  }
}
