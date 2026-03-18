/*
 * XREFs of vSrcTranCopyS1D8 @ 0x1C0125200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall vSrcTranCopyS1D8(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned __int8 a9)
{
  int v9; // r14d
  int v10; // edi
  unsigned __int8 v12; // r13
  __int64 v14; // rbx
  int v15; // ebp
  unsigned int v16; // r8d
  unsigned __int64 *v17; // rax
  unsigned __int64 *v18; // rsi
  unsigned __int8 *v19; // r9
  int v20; // r11d
  unsigned __int64 *v21; // r10
  unsigned __int8 v22; // cl
  unsigned __int8 *v23; // r9
  unsigned __int64 *i; // rax
  unsigned __int64 v25; // rcx
  int v26; // edx
  int v27; // edi
  __int64 v28; // rbx
  unsigned __int64 *v29; // r9
  char *v30; // rcx
  char v31; // dl
  unsigned __int64 *v32; // r8
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rcx
  unsigned __int8 *v35; // r8
  unsigned __int8 *v36; // r10
  __int64 v37; // rdx
  unsigned __int8 *v38; // rdi
  unsigned __int8 *v39; // rcx
  __int64 v41; // [rsp+0h] [rbp-58h]
  unsigned __int8 *v42; // [rsp+8h] [rbp-50h]
  int v44; // [rsp+68h] [rbp+10h]

  v9 = a5;
  v10 = a7;
  v12 = a9;
  v14 = 0x101010101010101LL * a9;
  v44 = a5 & 7;
  v15 = 255 >> (a5 & 7);
  v16 = (a6 & 0xFFFFFFF8) - (a5 & 0xFFFFFFF8);
  v17 = (unsigned __int64 *)(a4 + (a5 & 0xFFFFFFF8));
  v41 = a8 * a7;
  v18 = (unsigned __int64 *)((char *)v17 + v41);
  v42 = (unsigned __int8 *)(a1 + ((__int64)a2 >> 3));
  v19 = v42;
  v20 = a3 - (v16 >> 3);
  if ( (a6 & 0xFFFFFFF8) != (a5 & 0xFFFFFFF8) )
  {
    do
    {
      v21 = (unsigned __int64 *)((char *)v17 + v16);
      v22 = v15 & *v19;
      if ( v22 )
      {
        v34 = dword_1C02ED810[(unsigned __int64)v22 >> 4] | ((unsigned __int64)dword_1C02ED810[(unsigned __int8)v15 & *v19 & 0xF] << 32);
        *v17 = v14 & v34 | *v17 & ~v34;
      }
      v23 = v19 + 1;
      for ( i = v17 + 1; i != v21; ++i )
      {
        v25 = *v23;
        if ( (_BYTE)v25 )
        {
          v33 = dword_1C02ED810[v25 >> 4] | ((unsigned __int64)dword_1C02ED810[v25 & 0xF] << 32);
          *i = v14 & v33 | *i & ~v33;
        }
        ++v23;
      }
      v17 = (unsigned __int64 *)((char *)i + (int)(a7 - v16));
      v19 = &v23[v20];
    }
    while ( v17 != v18 );
    v12 = a9;
    v10 = a7;
    v9 = a5;
  }
  v26 = a6 & 7;
  if ( (a6 & 7) != 0 )
  {
    if ( ((a6 ^ v9) & 0xFFFFFFF8) != 0 )
    {
      v27 = v10 - v26;
      v28 = a6 & 7;
      v17 = (unsigned __int64 *)(a4 + (a6 & 0xFFFFFFFFFFFFFFF8uLL));
      v29 = (unsigned __int64 *)((char *)v17 + v41);
      v30 = (char *)(a1 + ((__int64)(a6 + a2 - v9) >> 3));
      do
      {
        v31 = *v30;
        v32 = (unsigned __int64 *)((char *)v17 + v28);
        if ( *v30 )
        {
          do
          {
            if ( v31 < 0 )
              *(_BYTE *)v17 = v12;
            v31 *= 2;
            v17 = (unsigned __int64 *)((char *)v17 + 1);
          }
          while ( v17 != v32 );
        }
        else
        {
          v17 = (unsigned __int64 *)((char *)v17 + v28);
        }
        v17 = (unsigned __int64 *)((char *)v17 + v27);
        v30 += a3;
      }
      while ( v17 != v29 );
    }
    else
    {
      LODWORD(v17) = v26 - v44;
      if ( v26 - v44 > 0 )
      {
        v35 = (unsigned __int8 *)(a4 + v9);
        v36 = &v35[v41];
        v37 = v10 - (int)v17;
        v38 = v42;
        do
        {
          LOBYTE(v17) = *v38 << v44;
          v39 = &v35[(a6 & 7) - (unsigned __int64)(a5 & 7)];
          do
          {
            if ( (char)v17 < 0 )
              *v35 = v12;
            LOBYTE(v17) = 2 * (_BYTE)v17;
            ++v35;
          }
          while ( v35 != v39 );
          v35 += v37;
          v38 += a3;
        }
        while ( v35 != v36 );
      }
    }
  }
  return (char)v17;
}
