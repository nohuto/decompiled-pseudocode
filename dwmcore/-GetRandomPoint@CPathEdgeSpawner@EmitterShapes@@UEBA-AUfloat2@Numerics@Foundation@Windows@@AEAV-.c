/*
 * XREFs of ?GetRandomPoint@CPathEdgeSpawner@EmitterShapes@@UEBA?AUfloat2@Numerics@Foundation@Windows@@AEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@M@Z @ 0x180242690
 * Callers:
 *     <none>
 * Callees:
 *     ??$generate_canonical@M$0?0V?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@@std@@YAMAEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@0@@Z @ 0x18023F9D0 (--$generate_canonical@M$0-0V-$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PP.c)
 *     ?GetPointOnEdge@CPathEmitterEdge@EmitterShapes@@QEBA?AUfloat2@Numerics@Foundation@Windows@@MM@Z @ 0x18026685C (-GetPointOnEdge@CPathEmitterEdge@EmitterShapes@@QEBA-AUfloat2@Numerics@Foundation@Windows@@MM@Z.c)
 */

__int64 __fastcall EmitterShapes::CPathEdgeSpawner::GetRandomPoint(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi

  v3 = *(_QWORD *)(a1 + 8);
  std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>(a3);
  std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>(a3);
  EmitterShapes::CPathEmitterEdge::GetPointOnEdge(v3, a2);
  return a2;
}
