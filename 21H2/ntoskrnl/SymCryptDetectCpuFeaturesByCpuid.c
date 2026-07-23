/*
 * XREFs of SymCryptDetectCpuFeaturesByCpuid @ 0x1403EF5D8
 * Callers:
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x1403EC19C (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 * Callees:
 *     SymCryptCpuidExFunc @ 0x1403D01AC (SymCryptCpuidExFunc.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

__int64 __fastcall SymCryptDetectCpuFeaturesByCpuid(char a1)
{
  int v2; // r14d
  int v3; // ebx
  int v4; // r12d
  __int64 *v5; // rdi
  unsigned int i; // esi
  int v7; // eax
  int v8; // ecx
  char v9; // al
  unsigned int v10; // ecx
  __int64 result; // rax
  _DWORD v12[2]; // [rsp+20h] [rbp-20h]
  int v13; // [rsp+28h] [rbp-18h]
  int v14; // [rsp+2Ch] [rbp-14h]

  v2 = 0;
  v3 = -2016;
  SymCryptCpuidExFunc();
  v4 = v12[0];
  v5 = cpuidBitInfo;
  for ( i = 0; i < 0xD; ++i )
  {
    v7 = *(unsigned __int8 *)v5;
    if ( v7 != v2 )
    {
      v2 = *(unsigned __int8 *)v5;
      SymCryptCpuidExFunc();
      LOBYTE(v7) = *(_BYTE *)v5;
    }
    if ( (unsigned __int8)v7 > v4
      || (v8 = v12[*((unsigned __int8 *)v5 + 1)], !_bittest(&v8, *((unsigned __int8 *)v5 + 2))) )
    {
      v3 |= *((_DWORD *)v5 + 1);
    }
    ++v5;
  }
  if ( (a1 & 1) != 0 )
  {
    v9 = SymCryptCpuidExFunc();
    if ( (v13 & 0x8000000) == 0 )
      goto LABEL_11;
    __asm { xgetbv }
    if ( (v9 & 6) != 6 )
LABEL_11:
      v3 |= 0x10u;
  }
  if ( (v3 & 4) == 0 )
  {
    SymCryptCpuidExFunc();
    if ( v12[1] == 1752462657 && v13 == 1145913699 && v14 == 1769238117 )
    {
      SymCryptCpuidExFunc();
      v10 = (v12[0] >> 8) & 0xF;
      if ( v10 == 15 )
        v10 = (unsigned __int8)(v12[0] >> 20) + 15;
      if ( v10 < 0x15 )
        v3 |= 4u;
    }
  }
  result = SymCryptCpuidExFunc();
  g_SymCryptCpuFeaturesNotPresent = v3;
  return result;
}
