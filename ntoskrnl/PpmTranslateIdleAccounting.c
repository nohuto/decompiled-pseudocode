/*
 * XREFs of PpmTranslateIdleAccounting @ 0x140595AC0
 * Callers:
 *     PpmWmiFireIdleAccountingEvent @ 0x140596990 (PpmWmiFireIdleAccountingEvent.c)
 *     PpmEventTraceProcessorIdleAccounting @ 0x140599C40 (PpmEventTraceProcessorIdleAccounting.c)
 * Callees:
 *     PpmConvertTime @ 0x140235D70 (PpmConvertTime.c)
 *     PpmUpdateProcessorIdleAccounting @ 0x14039B154 (PpmUpdateProcessorIdleAccounting.c)
 */

unsigned __int64 __fastcall PpmTranslateIdleAccounting(_QWORD *a1, __int64 a2, unsigned __int64 *a3)
{
  int *v6; // rcx
  unsigned int v7; // edx
  unsigned __int64 result; // rax
  unsigned __int64 v9; // r13
  __int64 v10; // rbx
  __int64 v11; // r14
  _DWORD *v12; // rdi
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // r11
  unsigned __int64 v15; // r11
  _DWORD *v16; // r11
  _DWORD *v17; // rsi
  __int64 v18; // r12
  __int64 v19; // r11
  unsigned __int64 *v20; // r11
  __int64 v21; // r11
  int v22; // eax
  _DWORD *v23; // rsi
  __int64 v24; // rbp
  int v25; // eax
  unsigned __int64 v26; // r11
  unsigned int v27; // r12d
  unsigned __int64 v28; // r11
  unsigned int v29; // eax
  __int64 v30; // rdx
  _DWORD *v31; // rcx

  PpmUpdateProcessorIdleAccounting(a1);
  v6 = (int *)a1[1];
  v7 = *v6;
  *(_DWORD *)a2 = *v6;
  *(_DWORD *)(a2 + 4) = v6[1];
  *(_DWORD *)(a2 + 8) = v6[2];
  *(_DWORD *)(a2 + 12) = v6[3];
  result = *((_QWORD *)v6 + 2);
  *(_QWORD *)(a2 + 16) = result;
  v9 = *((_QWORD *)v6 + 3);
  if ( v7 )
  {
    v10 = a2 + 32;
    v11 = v7;
    v12 = v6 + 220;
    do
    {
      v9 += *((_QWORD *)v12 - 105);
      v13 = PopQpcFrequency;
      *(_DWORD *)v10 = *(v12 - 208) + *(v12 - 207) + *(v12 - 206);
      *(_DWORD *)(v10 + 4) = *(v12 - 207);
      *(_DWORD *)(v10 + 20) = *(v12 - 208);
      *(_DWORD *)(v10 + 8) = *(v12 - 205);
      *(_QWORD *)(v10 - 8) = PpmConvertTime(*((_QWORD *)v12 - 105), v13, 0xF4240uLL);
      *(_DWORD *)(v10 + 12) = PpmConvertTime(*((_QWORD *)v12 - 102), v13, v14);
      *(_DWORD *)(v10 + 16) = PpmConvertTime(*((_QWORD *)v12 - 101), v13, v15);
      v16 = v12 - 130;
      v17 = (_DWORD *)(v10 + 36);
      v18 = 16LL;
      do
      {
        *(_QWORD *)(v17 - 3) = PpmConvertTime(*((_QWORD *)v16 - 2), v13, 0xF4240uLL);
        *(v17 - 1) = PpmConvertTime(*(_QWORD *)(v19 - 8), v13, 0xF4240uLL);
        *v17 = PpmConvertTime(*v20, v13, 0xF4240uLL);
        v17 += 6;
        v22 = *(_DWORD *)(v21 + 8);
        v16 = (_DWORD *)(v21 + 32);
        *(v17 - 5) = v22;
        --v18;
      }
      while ( v18 );
      v23 = v12 - 164;
      v24 = 4LL;
      do
      {
        v25 = v23[4];
        if ( v25 )
        {
          *(_DWORD *)(v10 + 40) += v25;
          *(_QWORD *)(v10 + 24) += PpmConvertTime(*((_QWORD *)v23 - 1), PopQpcFrequency, 0xF4240uLL);
          v27 = PpmConvertTime(*(_QWORD *)v23, v26, 0xF4240uLL);
          v29 = PpmConvertTime(*((_QWORD *)v23 + 1), v28, 0xF4240uLL);
          if ( *(_DWORD *)(v10 + 32) > v27 )
            *(_DWORD *)(v10 + 32) = v27;
          if ( *(_DWORD *)(v10 + 36) < v29 )
            *(_DWORD *)(v10 + 36) = v29;
        }
        v23 += 8;
        --v24;
      }
      while ( v24 );
      LODWORD(result) = *(_DWORD *)(v10 + 8);
      v30 = 6LL;
      v31 = v12;
      do
      {
        result = (unsigned int)(*v31 + result);
        v31 += 8;
        *(_DWORD *)(v10 + 8) = result;
        --v30;
      }
      while ( v30 );
      v10 += 416LL;
      v12 += 252;
      --v11;
    }
    while ( v11 );
  }
  if ( a3 )
  {
    result = PpmConvertTime(v9, PopQpcFrequency, 0xF4240uLL);
    *a3 = result;
  }
  return result;
}
