int __fastcall SpCopyBits(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _POINTL *a6)
{
  return SpBitBlt(a1, a2, 0LL, a3, a4, a5, a6, 0LL, 0LL, 0LL, 0xCCCCu);
}
