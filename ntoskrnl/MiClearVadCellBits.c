/*
 * XREFs of MiClearVadCellBits @ 0x1403336C0
 * Callers:
 *     MiClearVadBits @ 0x1403335A0 (MiClearVadBits.c)
 * Callees:
 *     RtlClearBitsEx @ 0x14020FC50 (RtlClearBitsEx.c)
 *     MiVadBitToUserVa @ 0x1407C8764 (MiVadBitToUserVa.c)
 */

unsigned __int64 __fastcall MiClearVadCellBits(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        _DWORD *a6)
{
  unsigned __int64 result; // rax
  int v11; // edx
  _QWORD *v12; // rcx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rcx
  int v16; // r13d
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rbp
  int v21; // ecx
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // r9

  result = MiVadBitToUserVa(a1, 0LL);
  v14 = result >> 16;
  if ( !a2 )
  {
    if ( v14 )
      goto LABEL_3;
    a2 = 1LL;
  }
  if ( a2 > v13 )
    return result;
LABEL_3:
  if ( v13 < v14 )
    return result;
  v15 = v14 + *v12;
  if ( a2 >= v15 )
    return result;
  v16 = 0;
  if ( a2 < v14 )
  {
    a2 = result >> 16;
    v16 = 1;
  }
  if ( v13 >= v15 )
  {
    a3 = v15 - 1;
    v16 = 1;
  }
  v17 = a3 - a2 + 1;
  v18 = a2 - v14;
  v19 = a3 - v14;
  v20 = a1[8] - v14;
  if ( *a6 == v11 )
  {
    RtlClearBitsEx((__int64)a1, v18, v17);
    if ( !v16 )
      *a6 = 1;
  }
  result = a1[2];
  v21 = 1;
  if ( result < v20 || a1[4] < v20 )
    v21 = 0;
  if ( result > v18 )
  {
    if ( v18 < v20 && v21 )
    {
      if ( v19 >= v20 )
        a1[2] = v20;
    }
    else
    {
      a1[2] = v18;
    }
  }
  v22 = 0LL;
  if ( !a4 )
    goto LABEL_32;
  result = *(unsigned int *)(a4 + 28);
  v23 = ((((result | ((unsigned __int64)*(unsigned __int8 *)(a4 + 33) << 32)) << 12) | 0xFFF) + 0xFFFF) >> 16;
  if ( v23 <= v14 )
  {
    v22 = 0LL;
LABEL_32:
    if ( !v14 )
      v22 = 1LL;
    goto LABEL_19;
  }
  v22 = v23 - v14;
  if ( !v22 )
    goto LABEL_32;
LABEL_19:
  if ( v21 && v22 < v20 )
    v22 = v20;
  if ( v22 <= v19 )
  {
    result = a5;
    v24 = *a1;
    if ( a5 )
    {
      result = (((unsigned __int64)*(unsigned int *)(a5 + 24) >> 4) | ((unsigned __int64)*(unsigned __int8 *)(a5 + 32) << 28))
             - v14;
      if ( (((unsigned __int64)*(unsigned int *)(a5 + 24) >> 4) | ((unsigned __int64)*(unsigned __int8 *)(a5 + 32) << 28)) <= v24 + v14 )
        v24 = (((unsigned __int64)*(unsigned int *)(a5 + 24) >> 4) | ((unsigned __int64)*(unsigned __int8 *)(a5 + 32) << 28))
            - v14;
    }
    if ( v22 < a1[4] && v24 - v22 >= a1[3] )
      a1[4] = v22;
  }
  return result;
}
