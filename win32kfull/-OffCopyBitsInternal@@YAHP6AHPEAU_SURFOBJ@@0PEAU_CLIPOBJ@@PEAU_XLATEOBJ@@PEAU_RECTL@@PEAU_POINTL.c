/*
 * XREFs of ?OffCopyBitsInternal@@YAHP6AHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z40401234@Z @ 0x1C015052E
 * Callers:
 *     ?bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETTE@@KK4@Z @ 0x1C012ACE4 (-bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETT.c)
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C014E3F0 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 *     ?vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0283F18 (-vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?MulUpdateColors@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C02B4350 (-MulUpdateColors@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02B447C (-bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PE.c)
 *     ?bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02B4900 (-bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 * Callees:
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x1C001CE94 (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall OffCopyBitsInternal(
        int (*a1)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *),
        struct _POINTL *a2,
        struct _SURFOBJ *a3,
        struct _POINTL *a4,
        struct _SURFOBJ *a5,
        struct _CLIPOBJ *a6,
        struct _XLATEOBJ *a7,
        struct _RECTL *a8,
        struct _POINTL *a9)
{
  struct _XLATEOBJ *v11; // r10
  LONG x; // ebx
  LONG y; // edi
  int v14; // r8d
  int v15; // ecx
  unsigned int v16; // ebp
  struct _POINTL v18; // [rsp+40h] [rbp-78h]
  _DWORD v19[2]; // [rsp+48h] [rbp-70h] BYREF
  struct _XLATEOBJ *v20; // [rsp+50h] [rbp-68h]
  _DWORD v21[4]; // [rsp+58h] [rbp-60h] BYREF

  v11 = a7;
  x = a2->x;
  y = a2->y;
  v18 = *a4;
  v20 = a7;
  if ( a6 )
  {
    CLIPOBJ_vOffset(a6, x, y);
    v11 = v20;
  }
  v14 = a9->y + v18.y;
  v21[0] = x + a8->left;
  v15 = x + a8->right;
  v19[1] = v14;
  v21[2] = v15;
  v21[1] = y + a8->top;
  v21[3] = y + a8->bottom;
  v16 = 0;
  v19[0] = a9->x + v18.x;
  if ( a1 )
    v16 = ((__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, _DWORD *, _DWORD *))a1)(
            a3,
            a5,
            a6,
            v11,
            v21,
            v19);
  if ( a6 )
    CLIPOBJ_vOffset(a6, -x, -y);
  return v16;
}
