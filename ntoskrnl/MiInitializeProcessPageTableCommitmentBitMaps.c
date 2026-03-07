__int64 __fastcall MiInitializeProcessPageTableCommitmentBitMaps(__int64 a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 *v4; // r10
  __int64 v5; // rdx
  __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 1680);
  v2 = 256LL;
  v3 = 0LL;
  v1[69] = 256LL;
  v1[70] = v1 + 61;
  v4 = v1 + 71;
  do
  {
    v5 = qword_140C66D00[v3] + qword_140C66CE8;
    v3 = (unsigned int)(v3 + 1);
    v2 <<= 9;
    *v4 = v2;
    v4[1] = v5;
    v4 += 2;
    result = (unsigned int)(v3 + 1);
  }
  while ( (unsigned int)result < 3 );
  return result;
}
