/*
 * XREFs of RtlpGetContainingRange @ 0x1800F3DB4
 * Callers:
 *     RtlpQueryExtendedInformationHeap @ 0x18007B8F0 (RtlpQueryExtendedInformationHeap.c)
 * Callees:
 *     RtlpGetHeapProtection @ 0x18000EE34 (RtlpGetHeapProtection.c)
 */

__int64 __fastcall RtlpGetContainingRange(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 *a4,
        int *a5,
        _DWORD *a6)
{
  int v6; // r10d
  _QWORD *v7; // r15
  _QWORD *v9; // rsi
  _QWORD *v10; // rcx
  _QWORD *v12; // r11
  _QWORD *v13; // rbx
  unsigned __int64 v14; // rdx
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  __int64 result; // rax

  v6 = 0;
  v7 = (_QWORD *)(a1 + 96);
  v9 = (_QWORD *)a3;
  v10 = *(_QWORD **)(a1 + 96);
  v12 = 0LL;
  v13 = 0LL;
  if ( v10 == v7 )
  {
LABEL_15:
    v15 = a1;
    if ( a1 + 24 == *(_QWORD *)(*(_QWORD *)(a1 + 40) + 288LL) )
      v15 = *(_QWORD *)(a1 + 40);
  }
  else
  {
    do
    {
      a3 = v10[2];
      if ( a2 < a3 )
        goto LABEL_6;
      v14 = a3 + v10[3];
      if ( a2 < v14 )
      {
        *v9 = a3;
        *a4 = v14;
        goto LABEL_21;
      }
      if ( a2 >= a3 )
      {
        if ( !v12 || v12[4] < a3 )
          v12 = v10 - 2;
      }
      else
      {
LABEL_6:
        if ( !v13 || v13[4] > a3 )
          v13 = v10 - 2;
      }
      v10 = (_QWORD *)*v10;
    }
    while ( v10 != v7 );
    if ( !v12 )
      goto LABEL_15;
    v15 = v12[4] + v12[5];
  }
  *v9 = v15;
  if ( v13 )
    v16 = v13[4];
  else
    v16 = v15 + ((unsigned __int64)*(unsigned int *)(a1 + 56) << 12);
  *a4 = v16;
  v6 = 1;
LABEL_21:
  v17 = *(_QWORD *)(a1 + 40);
  *a5 = v6;
  result = RtlpGetHeapProtection(v17, 0, a3);
  *a6 = result;
  return result;
}
