/*
 * XREFs of MiFindEmptyAddressRangeInTree @ 0x140769234
 * Callers:
 *     MiFindEmptyAddressRange @ 0x1407D6F10 (MiFindEmptyAddressRange.c)
 * Callees:
 *     MiHonorRangeStraddleRequirement @ 0x1402DE750 (MiHonorRangeStraddleRequirement.c)
 */

__int64 __fastcall MiFindEmptyAddressRangeInTree(
        _QWORD **a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        _QWORD *a7)
{
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rsi
  unsigned int v9; // r10d
  __int64 v10; // r15
  __int64 v12; // r12
  unsigned __int64 v13; // r11
  unsigned __int64 v14; // rdi
  _QWORD *v15; // rax
  unsigned __int64 i; // rbx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  _QWORD **v19; // rax
  unsigned __int64 v20; // rcx
  _QWORD *v21; // rcx
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  unsigned __int64 v26; // rcx

  v7 = a3 >> 12;
  v8 = (unsigned __int64)(a2 + 4095) >> 12;
  v9 = 0;
  v10 = a4 >> 12;
  v12 = ~((a3 >> 12) - 1);
  v13 = v12 & ((a3 >> 12) + (a5 >> 12) - 1);
  if ( a4 >> 12 )
    v13 = MiHonorRangeStraddleRequirement(v13, (unsigned __int64)(a2 + 4095) >> 12, v10, 0);
  v14 = a6 >> 12;
  if ( v13 > a6 >> 12 || v8 > v14 - v13 + 1 )
    return (unsigned int)-1073741801;
  v15 = *a1;
  if ( !*a1 )
    goto LABEL_29;
  do
  {
    i = (unsigned __int64)v15;
    v15 = (_QWORD *)*v15;
  }
  while ( v15 );
  v17 = i;
  v18 = *(unsigned int *)(i + 24) | ((unsigned __int64)*(unsigned __int8 *)(i + 32) << 32);
  if ( v18 > v13 && v8 <= v18 - v13 )
    goto LABEL_29;
  while ( 1 )
  {
    v19 = *(_QWORD ***)(i + 8);
    v20 = i;
    if ( v19 )
    {
      v21 = *v19;
      for ( i = *(_QWORD *)(i + 8); v21; v21 = (_QWORD *)*v21 )
        i = (unsigned __int64)v21;
    }
    else
    {
      while ( 1 )
      {
        i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !i || *(_QWORD *)i == v20 )
          break;
        v20 = i;
      }
    }
    v22 = v7 + (*(unsigned int *)(v17 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v17 + 33) << 32));
    if ( !i )
      break;
    if ( (v12 & (v22 - 1)) < v13 )
    {
      if ( (*(unsigned int *)(i + 24) | ((unsigned __int64)*(unsigned __int8 *)(i + 32) << 32)) <= v13 )
        goto LABEL_21;
      v23 = v13;
    }
    else
    {
      v23 = v12 & v22;
    }
    if ( v10 )
      v23 = MiHonorRangeStraddleRequirement(v23, v8, v10, 0);
    if ( v23 > v14 )
      return (unsigned int)-1073741801;
    v24 = *(unsigned int *)(i + 24) | ((unsigned __int64)*(unsigned __int8 *)(i + 32) << 32);
    if ( v24 > v23 && v8 <= v24 - v23 && v8 <= v14 - v23 + 1 )
    {
      *a7 = v23 << 12;
      return v9;
    }
LABEL_21:
    v17 = i;
  }
  v26 = v12 & v22;
  if ( v26 >= v13 )
    v13 = v26;
  if ( v10 )
    v13 = MiHonorRangeStraddleRequirement(v13, v8, v10, 0);
  if ( v14 < v13 || v8 > v14 - v13 + 1 )
    return (unsigned int)-1073741801;
LABEL_29:
  *a7 = v13 << 12;
  return v9;
}
