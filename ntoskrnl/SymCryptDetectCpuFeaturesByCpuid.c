__int64 __fastcall SymCryptDetectCpuFeaturesByCpuid(char a1)
{
  int v2; // r14d
  int v3; // ebx
  int v4; // r12d
  __int64 *v5; // rdi
  unsigned int i; // esi
  int v7; // ecx
  char v8; // al
  __int64 result; // rax
  _DWORD v10[2]; // [rsp+20h] [rbp-20h]
  int v11; // [rsp+28h] [rbp-18h]
  int v12; // [rsp+2Ch] [rbp-14h]

  v2 = 0;
  v3 = -4064;
  SymCryptCpuidExFunc();
  v4 = v10[0];
  v5 = cpuidBitInfo;
  for ( i = 0; i < 0x13; ++i )
  {
    if ( *(unsigned __int8 *)v5 != v2 )
    {
      v2 = *(unsigned __int8 *)v5;
      SymCryptCpuidExFunc();
    }
    if ( *(unsigned __int8 *)v5 > v4
      || (v7 = v10[*((unsigned __int8 *)v5 + 1)], !_bittest(&v7, *((unsigned __int8 *)v5 + 2))) )
    {
      v3 |= *((_DWORD *)v5 + 1);
    }
    ++v5;
  }
  if ( (a1 & 1) != 0 )
  {
    v8 = SymCryptCpuidExFunc();
    if ( (v11 & 0x8000000) == 0 )
      goto LABEL_11;
    __asm { xgetbv }
    if ( (v8 & 6) != 6 )
LABEL_11:
      v3 |= 0x1810u;
  }
  if ( (v3 & 4) == 0 )
  {
    SymCryptCpuidExFunc();
    if ( v10[1] == 1752462657 && v11 == 1145913699 && v12 == 1769238117 )
    {
      SymCryptCpuidExFunc();
      if ( ((v10[0] >> 8) & 0xF) != 0xF || (unsigned int)(unsigned __int8)(v10[0] >> 20) + 15 < 0x15 )
        v3 |= 4u;
    }
  }
  result = SymCryptCpuidExFunc();
  g_SymCryptCpuFeaturesNotPresent = v3;
  return result;
}
