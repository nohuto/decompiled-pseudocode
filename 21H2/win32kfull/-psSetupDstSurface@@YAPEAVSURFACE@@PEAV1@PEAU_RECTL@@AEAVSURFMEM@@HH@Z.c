/*
 * XREFs of ?psSetupDstSurface@@YAPEAVSURFACE@@PEAV1@PEAU_RECTL@@AEAVSURFMEM@@HH@Z @ 0x1C0009C88
 * Callers:
 *     EngGradientFill @ 0x1C00093E0 (EngGradientFill.c)
 *     EngTransparentBlt @ 0x1C0111310 (EngTransparentBlt.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

struct SURFACE *__fastcall psSetupDstSurface(__int64 **a1, struct _RECTL *a2, struct SURFMEM *a3, int a4, int a5)
{
  int v6; // r15d
  int v8; // r12d
  struct SURFACE *v9; // rdi
  __int64 *v11; // rax
  __int64 *v12; // rbx
  int v13; // ecx
  bool v14; // zf
  int v15; // eax
  _DWORD v16[2]; // [rsp+60h] [rbp-21h] BYREF
  _DWORD v17[4]; // [rsp+68h] [rbp-19h] BYREF
  __int64 v18; // [rsp+78h] [rbp-9h]
  int v19; // [rsp+80h] [rbp-1h]
  int v20; // [rsp+84h] [rbp+3h]
  struct _RECTL v21; // [rsp+88h] [rbp+7h] BYREF

  v6 = a2->right - a2->left;
  v8 = a2->bottom - a2->top;
  v9 = (struct SURFACE *)a1;
  if ( !a1 )
    return 0LL;
  if ( a4 || *((_WORD *)a1 + 50) )
  {
    v11 = a1[16];
    v12 = a1[6];
    v17[0] = *((_DWORD *)a1 + 24);
    v13 = (_DWORD)a1[14] & 0x40000;
    v17[3] = 0;
    v20 = 0;
    v17[1] = v6;
    v17[2] = v8;
    v19 = v13;
    v18 = 0LL;
    if ( v11 )
      v18 = *v11;
    if ( SURFMEM::bCreateDIB(a3, (struct _DEVBITMAPINFO *)v17, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0)
      && ((*(_QWORD *)(*(_QWORD *)a3 + 48LL) = *((_QWORD *)v9 + 6),
           *(_QWORD *)&v21.left = 0LL,
           *(_QWORD *)&v21.right = __PAIR64__(v8, v6),
           !a5)
       || ((v14 = (*((_DWORD *)v9 + 28) & 0x400) == 0, v16[0] = a2->left, v16[1] = a2->top, v14)
         ? (v15 = ((__int64 (__fastcall *)(__int64, char *, _QWORD, XLATEOBJ *const, struct _RECTL *, _DWORD *))EngCopyBits)(
                    (*(_QWORD *)a3 + 24LL) & -(__int64)(*(_QWORD *)a3 != 0LL),
                    (char *)v9 + 24,
                    0LL,
                    xloIdent,
                    &v21,
                    v16))
         : (v15 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, XLATEOBJ *const, struct _RECTL *, _DWORD *))v12[352])(
                    (*(_QWORD *)a3 + 24LL) & -(__int64)(*(_QWORD *)a3 != 0LL),
                    (__int64)v9 + 24,
                    0LL,
                    xloIdent,
                    &v21,
                    v16)),
           v15)) )
    {
      *a2 = v21;
      return *(struct SURFACE **)a3;
    }
    else
    {
      return 0LL;
    }
  }
  return v9;
}
