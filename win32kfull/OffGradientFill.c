/*
 * XREFs of OffGradientFill @ 0x1C02EA468
 * Callers:
 *     ?SpGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C027DEE0 (-SpGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@.c)
 *     ?MulGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C02B23D0 (-MulGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL.c)
 * Callees:
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x1C001CE94 (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall OffGradientFill(
        __int64 (__fastcall *a1)(__int64, struct _CLIPOBJ *, __int64, _DWORD *, unsigned int, __int64, int, __int128 *, __int64 *, int),
        LONG *a2,
        __int64 a3,
        struct _CLIPOBJ *a4,
        __int64 a5,
        _DWORD *a6,
        unsigned int a7,
        __int64 a8,
        int a9,
        __int128 *a10,
        __int64 *a11,
        int a12)
{
  LONG v12; // esi
  LONG v13; // edi
  LONG v14; // edx
  _DWORD *v15; // rbx
  __int128 *v16; // r12
  __int64 *v17; // r15
  _DWORD *v18; // rax
  __int64 v19; // r14
  __int64 v20; // rcx
  unsigned int v21; // r15d
  __int64 v23; // [rsp+60h] [rbp-51h] BYREF
  __int64 v24; // [rsp+68h] [rbp-49h]
  __int64 v25; // [rsp+70h] [rbp-41h]
  struct _CLIPOBJ *v26; // [rsp+78h] [rbp-39h]
  __int64 v27; // [rsp+80h] [rbp-31h]
  __int64 (__fastcall *v28)(__int64, struct _CLIPOBJ *, __int64, _DWORD *, unsigned int, __int64, int, __int128 *, __int64 *, int); // [rsp+88h] [rbp-29h]
  __int128 v29; // [rsp+90h] [rbp-21h] BYREF

  v12 = a2[1];
  v13 = *a2;
  v14 = *a2;
  v15 = a6;
  v16 = a10;
  v17 = a11;
  v28 = a1;
  v25 = a5;
  v24 = a8;
  v27 = a3;
  v26 = a4;
  CLIPOBJ_vOffset(a4, v14, v12);
  v29 = 0LL;
  if ( a10 )
  {
    LODWORD(v29) = v13 + *(_DWORD *)a10;
    DWORD2(v29) = v13 + *((_DWORD *)a10 + 2);
    DWORD1(v29) = v12 + *((_DWORD *)a10 + 1);
    v16 = &v29;
    HIDWORD(v29) = v12 + *((_DWORD *)a10 + 3);
  }
  v23 = 0LL;
  if ( a11 )
  {
    LODWORD(v23) = *(_DWORD *)a11 - v13;
    v17 = &v23;
    HIDWORD(v23) = *((_DWORD *)a11 + 1) - v12;
  }
  v18 = a6;
  v19 = a7;
  if ( a7 )
  {
    v20 = a7;
    do
    {
      *v18 += v13;
      v18[1] += v12;
      v18 += 4;
      --v20;
    }
    while ( v20 );
  }
  v21 = v28(v27, v26, v25, a6, a7, v24, a9, v16, v17, a12);
  CLIPOBJ_vOffset(v26, -v13, -v12);
  if ( a7 )
  {
    do
    {
      *v15 -= v13;
      v15[1] -= v12;
      v15 += 4;
      --v19;
    }
    while ( v19 );
  }
  return v21;
}
