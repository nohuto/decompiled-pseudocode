/*
 * XREFs of ?vSrcTranCopyS8D16NewUnsafe@@YAXPEAEJJ0JJJJKKPEAVSURFACE@@P6AXPEBE00JPEAPEAG@Z0@Z @ 0x1C0276F60
 * Callers:
 *     ?vSrcTranCopyS8D16New@@YAXPEAEJJ0JJJJKKPEAVSURFACE@@P6AXPEBE00JPEAPEAG@Z0@Z @ 0x1C0276E94 (-vSrcTranCopyS8D16New@@YAXPEAEJJ0JJJJKKPEAVSURFACE@@P6AXPEBE00JPEAPEAG@Z0@Z.c)
 * Callees:
 *     ?pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAU_BLENDINFO@@H@Z @ 0x1C00D60B4 (-pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAU_BLENDINFO@@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     ulBlendPixelCT @ 0x1C0276300 (ulBlendPixelCT.c)
 */

void __fastcall vSrcTranCopyS8D16NewUnsafe(
        unsigned __int8 *a1,
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
  unsigned int v16; // r13d
  const unsigned __int8 *v17; // rbx
  unsigned __int8 *v18; // r15
  const unsigned __int8 *v20; // r14
  unsigned __int8 *v21; // rdi
  unsigned int v22; // esi
  __int64 v23; // rcx
  unsigned int v24; // edx
  __int16 v25; // ax
  unsigned int near **v26; // [rsp+38h] [rbp-90h]
  _BYTE v27[120]; // [rsp+50h] [rbp-78h] BYREF
  unsigned int v29; // [rsp+F0h] [rbp+28h]

  v14 = a2;
  v16 = a6 - a5;
  memset(v27, 0, 0x40uLL);
  v17 = &a1[v14];
  v18 = &a4[2 * a5];
  v29 = *(unsigned __int16 *)v18;
  v26 = pvFillOpaqTableCT(2u, a9, v29, a11, (struct _BLENDINFO *)v27, 1);
  while ( a8 )
  {
    v20 = v17;
    v21 = v18;
    v22 = v16;
    a12 = 0LL;
    vCopyAlphaBuffer16bpp(v17, v18, a13, v16, (unsigned __int16 **)&a12);
    while ( v22 )
    {
      v23 = *v20;
      if ( (_BYTE)v23 )
      {
        v24 = *(unsigned __int16 *)a12;
        if ( v24 == v29 )
        {
          *(_WORD *)v21 = *((_WORD *)v26 + *v20);
        }
        else
        {
          if ( (_BYTE)v23 == 114 )
            v25 = a9;
          else
            v25 = ulBlendPixelCT((__int64)v27, v24, (unsigned __int8 *)off_1C03260D0 + 4 * v23);
          *(_WORD *)v21 = v25;
        }
      }
      --v22;
      v21 += 2;
      ++v20;
      a12 = (void (*)(const unsigned __int8 *, unsigned __int8 *, unsigned __int8 *, int, unsigned __int16 **))((char *)a12 + 2);
    }
    --a8;
    v17 += a3;
    v18 += a7;
  }
}
