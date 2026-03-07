__int64 __fastcall CTranslateTransformGeneratedT<CTranslateTransform,CTransform>::GetProperty(
        __int64 a1,
        int a2,
        __int64 a3)
{
  __int64 result; // rax
  int v4; // xmm0_4

  result = 0LL;
  if ( a2 )
  {
    if ( a2 != 1 )
      return 2147942487LL;
    v4 = *(_DWORD *)(a1 + 164);
  }
  else
  {
    v4 = *(_DWORD *)(a1 + 160);
  }
  *(_DWORD *)a3 = v4;
  *(_BYTE *)(a3 + 76) = 1;
  *(_DWORD *)(a3 + 72) = 18;
  return result;
}
