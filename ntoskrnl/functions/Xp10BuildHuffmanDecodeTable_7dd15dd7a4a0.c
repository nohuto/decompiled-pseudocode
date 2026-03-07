__int64 __fastcall Xp10BuildHuffmanDecodeTable(
        __int64 a1,
        __int64 a2,
        _WORD *a3,
        int a4,
        unsigned int a5,
        int a6,
        __int64 a7,
        int a8,
        __int64 a9)
{
  _WORD *v9; // r13
  __int64 v10; // rdi
  __int64 *v11; // rbx
  unsigned int v12; // r11d
  int v13; // esi
  unsigned int v14; // r8d
  __int64 result; // rax
  __int16 v16; // r8
  unsigned __int16 v17; // r10
  _WORD *v18; // rdx
  unsigned int v19; // edx
  unsigned int v20; // r14d
  unsigned int v21; // ebp
  unsigned int v22; // r12d
  unsigned __int16 v23; // r9
  unsigned int v24; // edx
  __int16 v25; // r8
  __int16 v26; // r8
  __int64 v27; // r8
  char v28; // cl
  unsigned __int16 v29; // r14
  unsigned int v30; // esi
  unsigned int v31; // edx
  unsigned int v32; // edi
  __int64 v33; // r12
  __int64 v34; // rcx
  __int64 v35; // rdx
  _QWORD *v36; // [rsp+0h] [rbp-58h]
  int v38; // [rsp+68h] [rbp+10h]
  unsigned int v40; // [rsp+78h] [rbp+20h]
  unsigned int v41; // [rsp+98h] [rbp+40h]
  char v43; // [rsp+A8h] [rbp+50h]

  v9 = a3;
  v10 = a1;
  v36 = 0LL;
  v11 = 0LL;
  v38 = 0;
  v12 = 0;
  v40 = 0;
  v13 = 0;
  v14 = 0;
  if ( a4 == 1 )
  {
    result = a9;
    v16 = 16 * *v9 + *(unsigned __int8 *)((unsigned __int16)*v9 + a1);
    v17 = 1 << a5;
    if ( 1 << a5 )
    {
      v18 = (_WORD *)(a9 + 2LL * v17);
      do
      {
        *--v18 = v16;
        --v17;
      }
      while ( v17 );
    }
  }
  else
  {
    do
    {
      v19 = *(unsigned __int8 *)((unsigned __int16)v9[v13] + v10);
      if ( v11 && *((unsigned __int16 *)v11 + 5) > v19 )
        v19 = *((unsigned __int16 *)v11 + 5);
      v20 = v19;
      if ( v19 <= a5 )
        v20 = a5;
      v43 = v20;
      v21 = a5 < v19 ? v19 - a6 : 0;
      v22 = v20 - v21;
      v41 = v20 - v21;
      v23 = 1 << (v20 - (a5 < v19 ? v19 - a6 : 0));
      if ( v23 )
      {
        do
        {
          if ( v11 && (v24 = *((unsigned __int16 *)v11 + 5), v24 > v21) )
          {
            v25 = *((_WORD *)v11 + 4);
            v11 = (__int64 *)*v11;
            v26 = v24 + (v25 << a6) - v21 - v12;
          }
          else
          {
            v27 = (unsigned __int16)v9[v13];
            LOWORD(v24) = *(unsigned __int8 *)(v27 + v10);
            v26 = v24 + 16 * v27 - v21;
            v38 = ++v13;
          }
          v28 = v20 - v24;
          v29 = v23 - (1 << (v20 - v24));
          if ( v23 > (unsigned __int16)(v23 - (1 << v28)) )
          {
            do
            {
              --v23;
              v30 = 0;
              v31 = v23;
              v32 = v22;
              if ( v22 > 8 )
              {
                v33 = ((v22 - 9) >> 3) + 1;
                do
                {
                  v34 = (unsigned __int8)v31;
                  v32 -= 8;
                  v31 >>= 8;
                  v30 = *((unsigned __int8 *)qword_14001BB30 + v34) | (v30 << 8);
                  --v33;
                }
                while ( v33 );
                v22 = v41;
              }
              if ( v32 )
                v30 = (*((unsigned __int8 *)qword_14001BB30 + (unsigned __int8)v31) | (v30 << 8)) >> (8 - v32);
              *(_WORD *)(a9 + 2LL * (v30 + v12)) = v26;
            }
            while ( v23 > v29 );
            v9 = a3;
            v10 = a1;
            v13 = v38;
          }
          LOBYTE(v20) = v43;
        }
        while ( v23 );
        v14 = v40;
      }
      v35 = a7 + 16LL * v14;
      *(_WORD *)(v35 + 8) = v12 >> a6;
      *(_WORD *)(v35 + 10) = v21;
      *(_QWORD *)v35 = 0LL;
      if ( v11 )
        *v36 = v35;
      else
        v11 = (__int64 *)(a7 + 16LL * v14);
      ++v14;
      v36 = (_QWORD *)v35;
      v40 = v14;
      v12 += 1 << v22;
    }
    while ( v21 );
    return a9 + 2LL * (v12 - (1 << a5));
  }
  return result;
}
