__int64 __fastcall CFilterEffect::InvertTransformToCalc2DBounds(__int64 a1, __int128 *a2, _OWORD *a3)
{
  __int128 v3; // xmm1
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-40h] BYREF
  int v7; // [rsp+30h] [rbp-30h]
  int v8; // [rsp+34h] [rbp-2Ch]
  __int128 v9; // [rsp+38h] [rbp-28h] BYREF
  int v10; // [rsp+48h] [rbp-18h]
  int v11; // [rsp+4Ch] [rbp-14h]

  v3 = *a2;
  v10 = 0;
  v11 = 0;
  v7 = 0;
  v8 = 0;
  v6 = v3;
  v9 = 0LL;
  result = CFilterEffect::InvertTransformToCalc3DBounds(a1, &v6, &v9);
  if ( (_BYTE)result )
    *a3 = v9;
  return result;
}
