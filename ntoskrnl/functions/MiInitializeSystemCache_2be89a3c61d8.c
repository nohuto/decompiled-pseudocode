__int64 __fastcall MiInitializeSystemCache(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 SystemBase; // rax

  v2 = (_QWORD *)(a1 + 1848);
  v3 = 4LL;
  do
  {
    v2[1] = v2;
    *v2 = v2;
    v2 += 4;
    --v3;
  }
  while ( v3 );
  v4 = 0LL;
  *(_QWORD *)(a1 + 1984) = a1 + 1976;
  *(_QWORD *)(a1 + 1976) = a1 + 1976;
  *(_QWORD *)(a1 + 2016) = a1 + 2008;
  *(_QWORD *)(a1 + 2008) = a1 + 2008;
  if ( (unsigned __int16 *)a1 != MiSystemPartition )
    return MiInitializeSystemWorkingSetList(a1, a1 + 17344, 2, v4);
  qword_140C66D30[0] = 0LL;
  byte_140C69738 = byte_140C69738 & 0xF8 | 2;
  SystemBase = MiQuerySystemBase(3);
  if ( (unsigned int)MiInitializeDynamicRegion(8LL, SystemBase, 0x100000000000LL) )
  {
    v4 = 0x100000000LL;
    return MiInitializeSystemWorkingSetList(a1, a1 + 17344, 2, v4);
  }
  return 0LL;
}
