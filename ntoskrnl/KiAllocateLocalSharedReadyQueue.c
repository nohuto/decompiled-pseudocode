__int64 __fastcall KiAllocateLocalSharedReadyQueue(__int64 a1)
{
  __int64 v1; // rax
  int v3; // edx
  __int64 Pool3; // rcx
  __int64 result; // rax
  __int128 v6; // [rsp+30h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(a1 + 192);
  v6 = 0LL;
  LOBYTE(v6) = 3;
  v3 = *(unsigned __int16 *)(v1 + 138);
  *(_QWORD *)&v6 = v6 | 0x100;
  DWORD2(v6) = v3 | 0x80000000;
  Pool3 = ExAllocatePool3(72, 1688, 1364420939, (unsigned int)&v6, 1);
  result = 0LL;
  if ( !Pool3 )
    return 3221225626LL;
  *(_QWORD *)(a1 + 35968) = Pool3;
  return result;
}
