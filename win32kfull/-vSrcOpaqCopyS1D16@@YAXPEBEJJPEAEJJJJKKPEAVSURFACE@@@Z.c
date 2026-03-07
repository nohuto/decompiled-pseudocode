void __fastcall vSrcOpaqCopyS1D16(
        const unsigned __int8 *a1,
        int a2,
        int a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        __int16 a9,
        __int16 a10)
{
  int v10; // ebx
  unsigned __int8 *v11; // r11
  __int64 v12; // r15
  int v13; // esi
  const unsigned __int8 *v14; // r9
  __int64 v15; // r14
  unsigned __int8 *v16; // rdi
  __int64 v17; // r10
  unsigned __int8 *v18; // r8
  unsigned __int8 v19; // dl
  unsigned __int8 *v20; // rcx
  unsigned __int64 v21; // rax
  unsigned __int8 *v22; // rdx
  unsigned int v23; // ecx
  unsigned __int8 v24; // cl
  unsigned __int64 v25; // rax

  v10 = a2 & 7;
  v11 = &a4[2 * a5];
  v12 = a6 - a5;
  v13 = a6 - a5;
  v14 = &a1[(__int64)a2 >> 3];
  v15 = a7 - 2 * (a6 - a5);
  v16 = &v11[a8 * a7];
  v17 = a3 - ((v10 + a6 - a5 + 7) >> 3);
  if ( a6 - a5 >= 8 - v10 )
    v13 = 8 - v10;
  LOWORD(a5) = a10;
  HIWORD(a5) = a9;
  do
  {
    v18 = &v11[2 * v12];
    if ( v10 )
    {
      v19 = *v14++ << v10;
      v20 = &v11[2 * v13];
      do
      {
        v21 = v19;
        v19 *= 2;
        *(_WORD *)v11 = *(_WORD *)((char *)&a5 + ((v21 >> 6) & 2));
        v11 += 2;
      }
      while ( v11 != v20 );
    }
    v22 = &v11[(v18 - v11) & 0xFFFFFFFFFFFFFFF0uLL];
    while ( v11 != v22 )
    {
      v23 = *v14++;
      *(_WORD *)v11 = *(_WORD *)((char *)&a5 + ((v23 >> 6) & 2));
      *((_WORD *)v11 + 1) = *(_WORD *)((char *)&a5 + ((v23 >> 5) & 2));
      *((_WORD *)v11 + 2) = *(_WORD *)((char *)&a5 + ((v23 >> 4) & 2));
      *((_WORD *)v11 + 3) = *(_WORD *)((char *)&a5 + ((v23 >> 3) & 2));
      *((_WORD *)v11 + 4) = *(_WORD *)((char *)&a5 + ((v23 >> 2) & 2));
      *((_WORD *)v11 + 5) = *(_WORD *)((char *)&a5 + ((v23 >> 1) & 2));
      *((_WORD *)v11 + 6) = *(_WORD *)((char *)&a5 + (v23 & 2));
      *((_WORD *)v11 + 7) = *((_WORD *)&a5 + (v23 & 1));
      v11 += 16;
    }
    if ( v11 != v18 )
    {
      v24 = *v14++;
      do
      {
        v25 = v24;
        v24 *= 2;
        *(_WORD *)v11 = *(_WORD *)((char *)&a5 + ((v25 >> 6) & 2));
        v11 += 2;
      }
      while ( v11 != v18 );
    }
    v11 += v15;
    v14 += v17;
  }
  while ( v11 != v16 );
}
