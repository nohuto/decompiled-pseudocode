/*
 * XREFs of ?GetRandomDirection@CParticleGenerator@@QEBA?AUfloat3@Numerics@Foundation@Windows@@AEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@@Z @ 0x180243D04
 * Callers:
 *     ?SpawnParticles@CParticleEmitterVisual@@IEAAJHAEBUD2D_SIZE_F@@@Z @ 0x180242DF8 (-SpawnParticles@CParticleEmitterVisual@@IEAAJHAEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?GetRandomUnitDir@@YA?AUfloat3@Numerics@Foundation@Windows@@AEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@AEBU1234@1_N@Z @ 0x180244038 (-GetRandomUnitDir@@YA-AUfloat3@Numerics@Foundation@Windows@@AEAV-$mersenne_twister_engine@I$0CA@.c)
 */

__int64 __fastcall CParticleGenerator::GetRandomDirection(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // xmm0_8
  char v5; // al
  __int64 v7; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+38h] [rbp-20h]
  __int64 v9; // [rsp+3Ch] [rbp-1Ch] BYREF
  int v10; // [rsp+44h] [rbp-14h]

  v3 = *(_QWORD *)(a1 + 92);
  v8 = *(_DWORD *)(a1 + 100);
  v10 = *(_DWORD *)(a1 + 88);
  v5 = *(_BYTE *)(a1 + 104);
  v7 = v3;
  v9 = *(_QWORD *)(a1 + 80);
  GetRandomUnitDir(a2, a3, (unsigned int)&v9, (unsigned int)&v7, v5);
  return a2;
}
