/*
 * XREFs of IovpAdvanceStackDownwards @ 0x140AC8FE8
 * Callers:
 *     IovpCallDriver1 @ 0x140AC9170 (IovpCallDriver1.c)
 *     IovpCompleteRequest1 @ 0x140AC99CC (IovpCompleteRequest1.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall IovpAdvanceStackDownwards(
        __int64 a1,
        char a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        _QWORD *a8)
{
  int v8; // r14d
  unsigned __int8 *v11; // rdi
  int v12; // ebp
  __int64 v13; // r13
  __int64 v14; // r12
  _QWORD *v15; // rsi
  __int64 result; // rax
  unsigned __int8 *v17; // [rsp+70h] [rbp+8h]
  unsigned __int8 *v18; // [rsp+80h] [rbp+18h]
  __int64 v19; // [rsp+88h] [rbp+20h]

  v8 = a7;
  v11 = (unsigned __int8 *)(120LL * a2 + a1 - 120);
  if ( !*v11 && a7 )
  {
    memset(v11, 0, 0x78uLL);
    *((_QWORD *)v11 + 4) = a3;
    *((_QWORD *)v11 + 3) = v11 + 16;
    *((_QWORD *)v11 + 2) = v11 + 16;
  }
  v12 = 0;
  if ( a4 )
  {
    if ( a5 <= 0 )
      goto LABEL_12;
    v14 = *(_QWORD *)&v11[120 * a5 + 8];
    v13 = *(_QWORD *)&v11[120 * a5 + 40];
    v18 = &v11[120 * a5 + 48];
    *((_QWORD *)v11 + 1) = v14;
    v12 = *(_DWORD *)&v11[120 * a5 + 4] & 0x10000000;
    v17 = &v11[120 * a5 + 56];
    *((_DWORD *)v11 + 1) |= v12;
  }
  else
  {
    v17 = 0LL;
    v13 = 0LL;
    v14 = 0LL;
    v18 = 0LL;
  }
  if ( a5 > 1 )
  {
    v15 = v11 + 16;
    v19 = (unsigned int)(a5 - 1);
    do
    {
      v15 += 15;
      a3 += 72LL;
      memset(v15 - 2, 0, 0x78uLL);
      v15[1] = v15;
      *v15 = v15;
      *((_BYTE *)v15 - 16) = 1;
      v15[2] = a3;
      *(v15 - 1) = v14;
      v15[4] = *(_QWORD *)v18;
      v15[5] = *(_QWORD *)v17;
      v15[3] = v13;
      *((_DWORD *)v15 - 3) |= v12 | 0x800000;
      --v19;
    }
    while ( v19 );
    v8 = a7;
  }
LABEL_12:
  *a8 = v11;
  if ( !v8 )
    return *v11;
  if ( a6 )
    *((_QWORD *)v11 + 1) = v11;
  result = *v11;
  *v11 = 1;
  return result;
}
