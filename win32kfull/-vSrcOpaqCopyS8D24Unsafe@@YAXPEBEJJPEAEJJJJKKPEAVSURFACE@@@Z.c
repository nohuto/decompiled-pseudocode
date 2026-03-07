void __fastcall vSrcOpaqCopyS8D24Unsafe(
        const unsigned __int8 *a1,
        int a2,
        int a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        unsigned int a10,
        struct SURFACE *a11)
{
  __int64 v12; // r15
  __int64 v13; // r14
  __int64 v15; // r11
  const unsigned __int8 *v16; // rdi
  unsigned __int8 *v17; // rbx
  const unsigned __int8 *v19; // r8
  unsigned __int8 *v20; // rdx
  unsigned __int8 *v21; // rcx
  _BYTE *v22; // rdx
  _BYTE v23[104]; // [rsp+50h] [rbp-68h] BYREF

  v12 = a3;
  v13 = a2;
  memset_0(v23, 0, 0x40uLL);
  v15 = pvFillOpaqTableCT(4LL, a9, a10, a11, (struct BLENDINFO *)v23, 0);
  v16 = &a1[v13];
  v17 = &a4[3 * a5];
  while ( a8 )
  {
    v19 = v16;
    v20 = v17;
    while ( v20 < &v17[3 * (a6 - a5)] )
    {
      v21 = (unsigned __int8 *)(v15 + 4LL * *v19);
      *v20 = *v21;
      v22 = v20 + 1;
      *v22++ = v21[1];
      *v22 = v21[2];
      v20 = v22 + 1;
      ++v19;
    }
    --a8;
    v16 += v12;
    v17 += a7;
  }
}
