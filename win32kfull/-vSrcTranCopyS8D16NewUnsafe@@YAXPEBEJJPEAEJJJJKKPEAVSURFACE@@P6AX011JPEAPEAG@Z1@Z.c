void __fastcall vSrcTranCopyS8D16NewUnsafe(
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
        struct SURFACE *a11,
        void (*a12)(const unsigned __int8 *, unsigned __int8 *, unsigned __int8 *, int, unsigned __int16 **),
        unsigned __int8 *a13)
{
  __int64 v14; // rsi
  unsigned int v16; // r12d
  const unsigned __int8 *v17; // rbx
  unsigned __int8 *v18; // rsi
  const unsigned __int8 *v20; // r15
  unsigned __int8 *v21; // rdi
  unsigned int v22; // r14d
  __int64 v23; // rcx
  __int64 v24; // r12
  __int16 v25; // ax
  __int64 v26; // rax
  unsigned __int16 *v27; // [rsp+30h] [rbp-A8h] BYREF
  unsigned int v28; // [rsp+38h] [rbp-A0h]
  __int64 v29; // [rsp+40h] [rbp-98h]
  unsigned __int8 *v30; // [rsp+48h] [rbp-90h]
  const unsigned __int8 *v31; // [rsp+50h] [rbp-88h]
  int v32[30]; // [rsp+60h] [rbp-78h] BYREF
  unsigned int v34; // [rsp+100h] [rbp+28h]
  int v35; // [rsp+108h] [rbp+30h]
  unsigned int v36; // [rsp+128h] [rbp+50h]

  v14 = a2;
  v16 = a6 - a5;
  v35 = a6 - a5;
  memset_0(v32, 0, 0x40uLL);
  v17 = &a1[v14];
  v18 = &a4[2 * a5];
  v34 = *(unsigned __int16 *)v18;
  v29 = pvFillOpaqTableCT(2LL, a9, v34, a11, (struct BLENDINFO *)v32, 1);
  while ( a8 )
  {
    v20 = v17;
    v31 = v17;
    v21 = v18;
    v30 = v18;
    v22 = v16;
    v28 = v16;
    v27 = 0LL;
    vCopyAlphaBuffer16bpp(v17, v18, a13, v16, &v27);
    while ( v22 )
    {
      v24 = *v20;
      if ( (_BYTE)v24 )
      {
        v36 = *v27;
        if ( v36 == v34 )
        {
          v23 = *(unsigned __int16 *)(v29 + 2 * v24);
          *(_WORD *)v21 = v23;
        }
        else
        {
          if ( (_BYTE)v24 == 114 )
          {
            v25 = a9;
          }
          else
          {
            v26 = SGDGetSessionState(v23);
            v25 = ulBlendPixelCT(v32, v36, (unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v26 + 32) + 8592LL) + 4 * v24));
          }
          *(_WORD *)v21 = v25;
        }
      }
      v28 = --v22;
      v21 += 2;
      v30 = v21;
      v31 = ++v20;
      ++v27;
    }
    --a8;
    v17 += a3;
    v18 += a7;
    v16 = v35;
  }
}
