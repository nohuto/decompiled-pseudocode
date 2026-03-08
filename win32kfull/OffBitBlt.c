/*
 * XREFs of OffBitBlt @ 0x1C001CD04
 * Callers:
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0018CB0 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ?SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C001BE80 (-SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHO.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C012AFAC (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C014E3F0 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02803E0 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?vSpDrawCursor@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@1@Z @ 0x1C02838FC (-vSpDrawCursor@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@1@Z.c)
 *     ?bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02B447C (-bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PE.c)
 *     ?bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02B4900 (-bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 * Callees:
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x1C001CE94 (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall OffBitBlt(
        __int64 (__fastcall *a1)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, __int64 *, __int64, __int64, __int64 *, int),
        int *a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6,
        struct _CLIPOBJ *a7,
        __int64 a8,
        int *a9,
        __int64 *a10,
        __int64 a11,
        __int64 a12,
        __int64 *a13,
        int a14)
{
  int v14; // r15d
  int v16; // r14d
  __int64 *v17; // rsi
  __int64 *v18; // rdi
  int v19; // ecx
  unsigned int v20; // ebx
  __int64 v22; // [rsp+60h] [rbp-61h] BYREF
  __int64 v23; // [rsp+68h] [rbp-59h] BYREF
  __int64 v24; // [rsp+70h] [rbp-51h]
  __int64 v25; // [rsp+78h] [rbp-49h]
  __int64 v26; // [rsp+80h] [rbp-41h]
  __int64 v27; // [rsp+88h] [rbp-39h]
  __int64 v28; // [rsp+90h] [rbp-31h]
  __int64 v29; // [rsp+98h] [rbp-29h]
  __int64 (__fastcall *v30)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, __int64 *, __int64, __int64, __int64 *, int); // [rsp+A0h] [rbp-21h]
  _DWORD v31[4]; // [rsp+A8h] [rbp-19h] BYREF

  v14 = a2[1];
  v16 = *a2;
  v17 = a10;
  v18 = a13;
  v28 = a5;
  v27 = a6;
  v26 = a8;
  v25 = a11;
  v29 = a3;
  v30 = a1;
  v24 = a12;
  CLIPOBJ_vOffset(a7, v16, v14);
  v19 = *a9;
  v22 = 0LL;
  v31[0] = v16 + v19;
  v31[2] = v16 + a9[2];
  v31[1] = v14 + a9[1];
  v31[3] = v14 + a9[3];
  if ( a10 )
  {
    LODWORD(v22) = *(_DWORD *)a10 + *a4;
    v17 = &v22;
    HIDWORD(v22) = a4[1] + *((_DWORD *)a10 + 1);
  }
  v23 = 0LL;
  if ( a13 )
  {
    LODWORD(v23) = v16 + *(_DWORD *)a13;
    v18 = &v23;
    HIDWORD(v23) = v14 + *((_DWORD *)a13 + 1);
  }
  v20 = v30(v29, v28, v27, a7, v26, v31, v17, v25, v24, v18, a14);
  CLIPOBJ_vOffset(a7, -v16, -v14);
  return v20;
}
