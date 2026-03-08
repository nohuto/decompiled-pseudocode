/*
 * XREFs of ??$DeducingValueGetter@VCMesh2DEffect@@UD2D_MATRIX_4X4_F@@UID2D1EffectImpl@@@@YAJP8CMesh2DEffect@@EBA?AUD2D_MATRIX_4X4_F@@XZPEBUID2D1EffectImpl@@PEAEIPEAI@Z @ 0x1802BB0C0
 * Callers:
 *     ??$ValueGetter@P8CMesh2DEffect@@EBA?AUD2D_MATRIX_4X4_F@@XZ$H?GetWorldToProjection@1@QEBA?AU2@XZA@UID2D1EffectImpl@@@@YAJPEBUIUnknown@@PEAEIPEAI@Z @ 0x1802BB1F0 (--$ValueGetter@P8CMesh2DEffect@@EBA-AUD2D_MATRIX_4X4_F@@XZ$H-GetWorldToProjection@1@QEBA-AU2@XZA.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DeducingValueGetter<CMesh2DEffect,D2D_MATRIX_4X4_F,ID2D1EffectImpl>(
        __int64 a1,
        __int64 a2,
        _OWORD *a3,
        unsigned int a4,
        _DWORD *a5)
{
  _OWORD *v7; // rax
  _BYTE v8[64]; // [rsp+20h] [rbp-58h] BYREF

  if ( a5 )
    *a5 = 64;
  if ( a4 && a3 )
  {
    if ( a4 < 0x40 )
      return 2147942522LL;
    v7 = (_OWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))a1)(a2 + *(int *)(a1 + 8), v8);
    *a3 = *v7;
    a3[1] = v7[1];
    a3[2] = v7[2];
    a3[3] = v7[3];
  }
  return 0LL;
}
