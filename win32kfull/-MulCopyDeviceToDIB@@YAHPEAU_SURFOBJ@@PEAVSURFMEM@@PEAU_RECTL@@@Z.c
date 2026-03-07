__int64 __fastcall MulCopyDeviceToDIB(struct _SURFOBJ *a1, struct SURFMEM *a2, struct _RECTL *a3)
{
  struct _RECTL v3; // xmm0
  __int64 p_hdev; // rax
  LONG v6; // esi
  LONG top; // r14d
  __int64 p_sizlBitmap; // rcx
  __int64 v11; // rax
  LONG v12; // edx
  LONG right; // r8d
  LONG v14; // edx
  int v15; // ecx
  __int64 p_cy; // rax
  LONG bottom; // edx
  LONG v18; // ecx
  LONG v19; // r8d
  LONG v20; // edx
  __int64 v21; // rax
  __int64 *v22; // rax
  __int64 p_iBitmapFormat; // rax
  __int64 p_hsurf; // rax
  Gre::Base *v25; // rcx
  struct Gre::Base::SESSION_GLOBALS *v26; // rax
  struct _POINTL v28; // [rsp+60h] [rbp-19h] BYREF
  _DWORD v29[4]; // [rsp+68h] [rbp-11h] BYREF
  __int64 v30; // [rsp+78h] [rbp-1h]
  int v31; // [rsp+80h] [rbp+7h]
  int v32; // [rsp+84h] [rbp+Bh]
  struct _RECTL v33; // [rsp+88h] [rbp+Fh] BYREF

  v3 = *a3;
  p_hdev = (__int64)&a1->hdev;
  v29[3] = 0;
  v6 = _mm_cvtsi128_si32((__m128i)v3);
  v32 = 0;
  v33 = v3;
  top = v3.top;
  if ( !a1 )
    p_hdev = 48LL;
  p_sizlBitmap = (__int64)&a1->sizlBitmap;
  v11 = *(_QWORD *)p_hdev;
  v12 = *(_DWORD *)(v11 + 2560);
  if ( v6 < v12 )
    v6 = *(_DWORD *)(v11 + 2560);
  if ( !a1 )
    p_sizlBitmap = 56LL;
  right = v33.right;
  v14 = *(_DWORD *)p_sizlBitmap + v12;
  v15 = *(_DWORD *)(v11 + 2564);
  p_cy = (__int64)&a1->sizlBitmap.cy;
  if ( v33.right > v14 )
    right = v14;
  if ( v3.top < v15 )
    top = v15;
  if ( !a1 )
    p_cy = 60LL;
  bottom = v33.bottom;
  v18 = *(_DWORD *)p_cy + v15;
  if ( v33.bottom > v18 )
    bottom = v18;
  if ( top >= bottom || v6 >= right )
    return 1LL;
  v19 = right - v6;
  *(_QWORD *)&v33.left = 0LL;
  v20 = bottom - top;
  v33.right = v19;
  v33.bottom = v20;
  v21 = (__int64)&a1[1].hdev;
  v28.x = v6;
  v28.y = top;
  if ( !a1 )
    v21 = 128LL;
  v29[1] = v19;
  v29[2] = v20;
  v22 = *(__int64 **)v21;
  if ( v22 )
    v30 = *v22;
  else
    v30 = 0LL;
  p_iBitmapFormat = (__int64)&a1->iBitmapFormat;
  if ( !a1 )
    p_iBitmapFormat = 96LL;
  v29[0] = *(_DWORD *)p_iBitmapFormat;
  p_hsurf = (__int64)&a1[1].hsurf;
  if ( !a1 )
    p_hsurf = 112LL;
  v31 = *(_DWORD *)p_hsurf & 0x40000;
  SURFMEM::bCreateDIB(a2, (struct _DEVBITMAPINFO *)v29, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
  if ( *(_QWORD *)a2 )
  {
    v26 = Gre::Base::Globals(v25);
    if ( MulBitBlt(
           (struct _SURFOBJ *)((*(_QWORD *)a2 + 24LL) & -(__int64)(*(_QWORD *)a2 != 0LL)),
           a1,
           0LL,
           0LL,
           (XLATEOBJ *)((char *)v26 + 6896),
           &v33,
           &v28,
           0LL,
           0LL,
           0LL,
           0xCCCCu) )
    {
      a3->left -= v6;
      a3->right -= v6;
      a3->top -= top;
      a3->bottom -= top;
      return 1LL;
    }
  }
  return 0LL;
}
