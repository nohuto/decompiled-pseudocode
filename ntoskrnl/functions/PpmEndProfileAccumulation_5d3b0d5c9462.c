void __fastcall PpmEndProfileAccumulation(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // rdx

  v2 = a2 - a1[115];
  a1[119] += v2;
  if ( a1[117] < v2 )
    a1[117] = v2;
  if ( a1[118] > v2 )
    a1[118] = v2;
  ++a1[116];
  a1[115] = 0LL;
}
