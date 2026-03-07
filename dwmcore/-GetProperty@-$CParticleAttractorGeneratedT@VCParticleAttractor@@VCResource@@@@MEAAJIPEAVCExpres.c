__int64 __fastcall CParticleAttractorGeneratedT<CParticleAttractor,CResource>::GetProperty(
        __int64 a1,
        int a2,
        __int64 a3)
{
  __int64 result; // rax
  int v4; // edx
  int v5; // xmm0_4
  __int64 v6; // xmm0_8
  int v7; // ecx

  result = 0LL;
  if ( a2 )
  {
    v4 = a2 - 1;
    if ( v4 )
    {
      if ( v4 != 1 )
        return 2147942487LL;
      v5 = *(_DWORD *)(a1 + 80);
    }
    else
    {
      v5 = *(_DWORD *)(a1 + 76);
    }
    *(_DWORD *)a3 = v5;
    *(_DWORD *)(a3 + 72) = 18;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 64);
    v7 = *(_DWORD *)(a1 + 72);
    *(_QWORD *)a3 = v6;
    *(_DWORD *)(a3 + 8) = v7;
    *(_DWORD *)(a3 + 72) = 52;
  }
  *(_BYTE *)(a3 + 76) = 1;
  return result;
}
