/*
 * XREFs of ?bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z @ 0x1C0272DD8
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C008C800 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 * Callees:
 *     EngCopyBits @ 0x1C007EAA0 (EngCopyBits.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

int __fastcall bCopySurface(struct SURFMEM *a1, struct _SURFOBJ *a2)
{
  int v2; // ebx
  __int64 p_hsurf; // rax
  ULONG iBitmapFormat; // ecx
  int result; // eax
  __int64 v8; // rax
  int v9; // [rsp+60h] [rbp+7h] BYREF
  SIZEL sizlBitmap; // [rsp+64h] [rbp+Bh]
  int v11; // [rsp+6Ch] [rbp+13h]
  __int64 v12; // [rsp+70h] [rbp+17h]
  int v13; // [rsp+78h] [rbp+1Fh]
  int v14; // [rsp+7Ch] [rbp+23h]
  RECTL prclDest; // [rsp+80h] [rbp+27h] BYREF

  v2 = 0;
  sizlBitmap = a2->sizlBitmap;
  v11 = 0;
  p_hsurf = (__int64)&a2[1].hsurf;
  v14 = 0;
  if ( !a2 )
    p_hsurf = 112LL;
  v12 = 0LL;
  iBitmapFormat = a2->iBitmapFormat;
  v13 = *(_DWORD *)p_hsurf & 0x40000;
  if ( iBitmapFormat == 7 )
  {
    v9 = 2;
  }
  else if ( iBitmapFormat == 8 )
  {
    v9 = 3;
  }
  else
  {
    v9 = iBitmapFormat;
  }
  result = SURFMEM::bCreateDIB(a1, (struct _DEVBITMAPINFO *)&v9, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
  if ( result )
  {
    prclDest.right = a2->sizlBitmap.cx;
    prclDest.bottom = a2->sizlBitmap.cy;
    v8 = *(_QWORD *)a1;
    *(_QWORD *)&prclDest.left = 0LL;
    LOBYTE(v2) = EngCopyBits(
                   (SURFOBJ *)((v8 + 24) & -(__int64)(v8 != 0)),
                   a2,
                   0LL,
                   xloIdent,
                   &prclDest,
                   (POINTL *)&prclDest);
    return v2;
  }
  return result;
}
