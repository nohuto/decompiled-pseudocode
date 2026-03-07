_QWORD *__fastcall CProjectedShadowRenderingEffect::CProjectedShadowRenderingEffect(
        _QWORD *a1,
        __int64 a2,
        __int16 *a3,
        _QWORD *a4,
        _WORD *a5)
{
  _WORD *v5; // r10
  __int16 v8; // [rsp+40h] [rbp+8h] BYREF
  char v9; // [rsp+42h] [rbp+Ah]

  v5 = a5;
  LOWORD(a5) = *a5;
  BYTE2(a5) = *((_BYTE *)v5 + 2);
  v8 = *a3;
  v9 = *((_BYTE *)a3 + 2);
  CCommonRenderingEffect::CCommonRenderingEffect((__int64)a1, a2, (__int64)&v8, a4, (__int64)&a5);
  *a1 = &CProjectedShadowRenderingEffect::`vftable';
  return a1;
}
