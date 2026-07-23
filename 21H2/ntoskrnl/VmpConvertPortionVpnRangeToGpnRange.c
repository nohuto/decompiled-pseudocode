/*
 * XREFs of VmpConvertPortionVpnRangeToGpnRange @ 0x1405A30B0
 * Callers:
 *     VmpFillGpnRanges @ 0x1405A35D0 (VmpFillGpnRanges.c)
 *     VmpFlushTbVaRange @ 0x1405A39E0 (VmpFlushTbVaRange.c)
 *     VmpQueryAccessedState @ 0x1405A4E1C (VmpQueryAccessedState.c)
 * Callees:
 *     VmpVaMemoryRangeGetNext @ 0x1405A5790 (VmpVaMemoryRangeGetNext.c)
 */

unsigned __int64 __fastcall VmpConvertPortionVpnRangeToGpnRange(
        __int64 a1,
        unsigned __int64 *a2,
        unsigned __int64 a3,
        _QWORD *a4,
        _QWORD *a5)
{
  unsigned __int64 v5; // rdi
  _QWORD *v6; // r14
  __int64 v8; // rsi
  _QWORD *v9; // rdx
  unsigned __int64 v10; // rsi
  unsigned __int64 v14; // r11
  _QWORD *v15; // rax
  __int64 v16; // rdx
  bool v17; // zf
  unsigned __int64 v18; // rcx
  int v19; // r9d
  unsigned __int64 v20; // rax
  _QWORD *v21; // r8
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // r9
  int v26; // r10d
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rsi
  __int128 v30; // [rsp+20h] [rbp-28h]

  v5 = *a2;
  v6 = 0LL;
  v8 = a2[1] - 1;
  v9 = (_QWORD *)*a4;
  v10 = v5 + v8;
  v30 = 0uLL;
  a5[1] = 0LL;
  v14 = v5;
  if ( !v9 )
    goto LABEL_61;
  v15 = (_QWORD *)a4[1];
  if ( v15 )
  {
    a4[1] = 0LL;
    v6 = v15;
    v14 = a4[2];
    a4[2] = 0LL;
  }
  else if ( v5 < v9[3] || v5 > v9[4] )
  {
    v9 = 0LL;
  }
  if ( !v9 )
  {
LABEL_61:
    v16 = a1 + 24;
    v17 = (*(_BYTE *)(a1 + 32) & 1) == 0;
    v18 = *(_QWORD *)(a1 + 24);
    if ( !v17 && v18 )
      v18 ^= v16;
    v19 = *(_BYTE *)(v16 + 8) & 1;
    v9 = 0LL;
    while ( v18 )
    {
      if ( v14 > *(_QWORD *)(v18 + 32) )
      {
        v20 = *(_QWORD *)(v18 + 8);
      }
      else
      {
        v9 = (_QWORD *)v18;
        v20 = *(_QWORD *)v18;
        if ( v14 >= *(_QWORD *)(v18 + 24) )
        {
          if ( v19 && v20 )
            v20 ^= v18;
          v21 = 0LL;
          if ( v20 )
          {
            do
            {
              if ( v14 > *(_QWORD *)(v20 + 32) )
              {
                v22 = *(_QWORD *)(v20 + 8);
              }
              else
              {
                v22 = *(_QWORD *)v20;
                if ( v14 >= *(_QWORD *)(v20 + 24) )
                  v21 = (_QWORD *)v20;
              }
              if ( v19 && v22 )
                v20 ^= v22;
              else
                v20 = v22;
            }
            while ( v20 );
            if ( v21 )
              v9 = v21;
          }
          break;
        }
      }
      if ( v19 && v20 )
        v18 ^= v20;
      else
        v18 = v20;
    }
    if ( !v9 )
      goto LABEL_54;
  }
  v23 = v9[3];
  if ( v14 < v23 )
  {
    if ( v10 < v23 )
    {
LABEL_54:
      *(_OWORD *)a2 = v30;
      return v14;
    }
    v14 = v9[3];
  }
  *a4 = v9;
  if ( !v6 )
    v6 = (_QWORD *)v9[5];
  *a5 = v14 + v6[6] - v23;
  if ( v10 - v14 + 1 <= a3 )
    v24 = v10;
  else
    v24 = v14 + a3 - 1;
  v25 = v9[4];
  v26 = 0;
  if ( v24 >= v25 )
  {
    a5[1] = v25 - v14 + 1;
    v27 = v25 + 1;
    *(_QWORD *)&v30 = v25 + 1;
LABEL_48:
    v26 = 1;
    goto LABEL_50;
  }
  a5[1] = v24 - v14 + 1;
  v27 = v24 + 1;
  *(_QWORD *)&v30 = v24 + 1;
  if ( v24 == v10 )
    goto LABEL_48;
  a4[1] = v6;
  a4[2] = v27;
LABEL_50:
  v28 = v10 - v27;
  *((_QWORD *)&v30 + 1) = v28 + 1;
  if ( v26 )
  {
    if ( (_QWORD *)*v6 == v9 + 5 )
    {
      if ( v28 != -1LL )
        *a4 = VmpVaMemoryRangeGetNext(a1);
      goto LABEL_54;
    }
    a4[1] = *v6;
    if ( v5 <= v23 )
      v5 = v23;
    a4[2] = v5;
  }
  return v14;
}
