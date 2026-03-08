/*
 * XREFs of ?bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z @ 0x1C026E61C
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C005C780 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 * Callees:
 *     EngCopyBits @ 0x1C008AE00 (EngCopyBits.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall bCopySurface(struct SURFMEM *a1, struct _SURFOBJ *a2)
{
  unsigned int v2; // ebx
  __int64 p_hsurf; // rax
  ULONG iBitmapFormat; // ecx
  Gre::Base *v7; // rcx
  struct Gre::Base::SESSION_GLOBALS *v8; // rax
  int v10; // [rsp+60h] [rbp+7h] BYREF
  SIZEL sizlBitmap; // [rsp+64h] [rbp+Bh]
  int v12; // [rsp+6Ch] [rbp+13h]
  __int64 v13; // [rsp+70h] [rbp+17h]
  int v14; // [rsp+78h] [rbp+1Fh]
  int v15; // [rsp+7Ch] [rbp+23h]
  RECTL prclDest; // [rsp+80h] [rbp+27h] BYREF

  v2 = 0;
  sizlBitmap = a2->sizlBitmap;
  v12 = 0;
  p_hsurf = (__int64)&a2[1].hsurf;
  v15 = 0;
  if ( !a2 )
    p_hsurf = 112LL;
  v13 = 0LL;
  iBitmapFormat = a2->iBitmapFormat;
  v14 = *(_DWORD *)p_hsurf & 0x40000;
  if ( iBitmapFormat == 7 )
  {
    v10 = 2;
  }
  else if ( iBitmapFormat == 8 )
  {
    v10 = 3;
  }
  else
  {
    v10 = iBitmapFormat;
  }
  if ( !SURFMEM::bCreateDIB(a1, (struct _DEVBITMAPINFO *)&v10, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
    return 0LL;
  prclDest.right = a2->sizlBitmap.cx;
  prclDest.bottom = a2->sizlBitmap.cy;
  *(_QWORD *)&prclDest.left = 0LL;
  v8 = Gre::Base::Globals(v7);
  LOBYTE(v2) = EngCopyBits(
                 (SURFOBJ *)((*(_QWORD *)a1 + 24LL) & -(__int64)(*(_QWORD *)a1 != 0LL)),
                 a2,
                 0LL,
                 (XLATEOBJ *)((char *)v8 + 6896),
                 &prclDest,
                 (POINTL *)&prclDest);
  return v2;
}
