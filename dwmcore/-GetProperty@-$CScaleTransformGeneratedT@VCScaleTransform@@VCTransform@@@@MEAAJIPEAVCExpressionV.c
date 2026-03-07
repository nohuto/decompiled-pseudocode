__int64 __fastcall CScaleTransformGeneratedT<CScaleTransform,CTransform>::GetProperty(_DWORD *a1, int a2, __int64 a3)
{
  __int64 result; // rax
  int v4; // edx
  int v5; // edx
  int v6; // xmm0_4

  result = 0LL;
  if ( a2 )
  {
    v4 = a2 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        if ( v5 != 1 )
          return 2147942487LL;
        v6 = a1[43];
      }
      else
      {
        v6 = a1[42];
      }
    }
    else
    {
      v6 = a1[41];
    }
  }
  else
  {
    v6 = a1[40];
  }
  *(_DWORD *)a3 = v6;
  *(_BYTE *)(a3 + 76) = 1;
  *(_DWORD *)(a3 + 72) = 18;
  return result;
}
