__int64 __fastcall EmitterShapes::CPathEdgeSpawner::GetRandomPoint(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi

  v3 = *(_QWORD *)(a1 + 8);
  std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>(a3);
  std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>(a3);
  EmitterShapes::CPathEmitterEdge::GetPointOnEdge(v3, a2);
  return a2;
}
