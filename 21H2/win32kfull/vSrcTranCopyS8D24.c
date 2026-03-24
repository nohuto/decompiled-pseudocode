/*
 * XREFs of vSrcTranCopyS8D24 @ 0x1C027B3A0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C009032C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAU_BLENDINFO@@H@Z @ 0x1C00C8048 (-pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAU_BLENDINFO@@H@Z.c)
 *     memset @ 0x1C016E780 (memset.c)
 *     ulBlendPixelCT @ 0x1C0278AF0 (ulBlendPixelCT.c)
 */

void __fastcall vSrcTranCopyS8D24(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        int a10,
        struct SURFACE *a11)
{
  __int64 v12; // rbx
  __int64 v14; // r12
  _BYTE *v15; // r14
  unsigned __int8 *v16; // rdi
  unsigned int v17; // r13d
  unsigned int near **v18; // rcx
  _BYTE *v20; // rsi
  unsigned __int8 *v21; // rbx
  unsigned __int8 *v22; // r12
  unsigned int *v23; // rcx
  unsigned int v24; // edx
  __int64 v25; // rax
  unsigned __int8 *v26; // rbx
  int v27; // [rsp+30h] [rbp-B8h] BYREF
  unsigned __int8 *v28; // [rsp+38h] [rbp-B0h]
  unsigned int v29; // [rsp+40h] [rbp-A8h] BYREF
  unsigned int v30; // [rsp+44h] [rbp-A4h]
  unsigned int v31; // [rsp+48h] [rbp-A0h]
  unsigned int near **v32; // [rsp+50h] [rbp-98h]
  _BYTE *v33; // [rsp+58h] [rbp-90h]
  HSEMAPHORE v34[2]; // [rsp+60h] [rbp-88h] BYREF
  _BYTE v35[120]; // [rsp+70h] [rbp-78h] BYREF

  v12 = a2;
  memset(v35, 0, 0x40uLL);
  v29 = a9 & 0xFFFFFF;
  v27 = 0;
  v34[0] = ghsemEUDC2;
  GreAcquireSemaphore(ghsemEUDC2);
  v14 = (unsigned int)(3 * (a6 - a5));
  v30 = 3 * (a6 - a5);
  v15 = (_BYTE *)(v12 + a1);
  v16 = (unsigned __int8 *)(3 * a5 + a4);
  v17 = *v16 | (*(unsigned __int16 *)(v16 + 1) << 8);
  v31 = v17;
  v18 = pvFillOpaqTableCT(4u, a9, v17, a11, (struct _BLENDINFO *)v35, 1);
  v32 = v18;
  while ( a8 )
  {
    v20 = v15;
    v33 = v15;
    v21 = v16;
    v28 = v16;
    v22 = &v16[v14];
    while ( v21 < v22 )
    {
      if ( *v20 )
      {
        if ( *v20 == 114 )
        {
          v23 = &v29;
        }
        else
        {
          v24 = *v21 | (*(unsigned __int16 *)(v21 + 1) << 8);
          v25 = (unsigned __int8)*v20;
          if ( v24 == v17 )
          {
            v23 = (unsigned int *)v18 + v25;
          }
          else
          {
            v27 = ulBlendPixelCT((__int64)v35, v24, (unsigned __int8 *)off_1C032B0D0 + 4 * v25);
            v23 = (unsigned int *)&v27;
          }
        }
        *v21 = *(_BYTE *)v23;
        v26 = v21 + 1;
        v28 = v26;
        *v26++ = *((_BYTE *)v23 + 1);
        v28 = v26;
        *v26 = *((_BYTE *)v23 + 2);
        v21 = v26 + 1;
        v18 = v32;
      }
      else
      {
        v21 += 3;
      }
      v28 = v21;
      v33 = ++v20;
    }
    --a8;
    v15 += a3;
    v16 += a7;
    v14 = v30;
  }
  SEMOBJ::vUnlock((SEMOBJ *)v34);
}
