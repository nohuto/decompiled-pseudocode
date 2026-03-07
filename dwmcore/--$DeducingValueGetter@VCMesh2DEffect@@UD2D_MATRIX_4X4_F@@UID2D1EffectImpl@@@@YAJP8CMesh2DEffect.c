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
