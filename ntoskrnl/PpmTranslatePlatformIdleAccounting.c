/*
 * XREFs of PpmTranslatePlatformIdleAccounting @ 0x140595CF8
 * Callers:
 *     PpmEventTracePlatformIdleAccounting @ 0x140996070 (PpmEventTracePlatformIdleAccounting.c)
 * Callees:
 *     PpmConvertTime @ 0x140235D70 (PpmConvertTime.c)
 */

__int64 __fastcall PpmTranslatePlatformIdleAccounting(__int64 a1, __int64 a2)
{
  __int64 v2; // r11
  __int64 v3; // rsi
  unsigned int v4; // edx
  __int64 result; // rax
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // rbx
  unsigned int v9; // ecx
  unsigned __int64 v10; // r12
  _DWORD *v11; // r14
  __int64 v12; // r15
  __int64 v13; // r13

  v2 = a2;
  v3 = 0LL;
  v4 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)v2 = v4;
  *(_DWORD *)(v2 + 4) = *(_DWORD *)a1;
  result = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v2 + 16) = result;
  if ( v4 )
  {
    v6 = v2 + 40;
    v7 = v4;
    v8 = a1 + 28;
    do
    {
      v9 = *(_DWORD *)v8 + *(_DWORD *)(v8 - 4) + *(_DWORD *)(v8 + 4);
      v10 = PopQpcFrequency;
      *(_DWORD *)(v6 - 8) = v9;
      v3 += v9;
      *(_DWORD *)(v6 - 4) = *(_DWORD *)v8;
      *(_DWORD *)v6 = *(_DWORD *)(v8 - 4);
      *(_DWORD *)(v6 + 12) = *(_DWORD *)(v8 + 36);
      *(_QWORD *)(v6 + 16) = PpmConvertTime(*(_QWORD *)(v8 + 28), v10, 0xF4240uLL);
      *(_DWORD *)(v6 + 8) = PpmConvertTime(*(_QWORD *)(v8 + 20), v10, 0xF4240uLL);
      *(_DWORD *)(v6 + 4) = PpmConvertTime(*(_QWORD *)(v8 + 12), v10, 0xF4240uLL);
      v11 = (_DWORD *)(v6 + 44);
      v12 = v8 + 196;
      v13 = 26LL;
      do
      {
        *(_QWORD *)(v11 - 3) = PpmConvertTime(*(_QWORD *)(v12 - 16), v10, 0xF4240uLL);
        *(v11 - 1) = PpmConvertTime(*(_QWORD *)(v12 - 8), v10, 0xF4240uLL);
        *v11 = PpmConvertTime(*(_QWORD *)v12, v10, 0xF4240uLL);
        v11 += 6;
        result = *(unsigned int *)(v12 + 8);
        v12 += 32LL;
        *(v11 - 5) = result;
        --v13;
      }
      while ( v13 );
      v6 += 664LL;
      v8 += 1016LL;
      --v7;
    }
    while ( v7 );
  }
  *(_QWORD *)(v2 + 8) = v3;
  return result;
}
