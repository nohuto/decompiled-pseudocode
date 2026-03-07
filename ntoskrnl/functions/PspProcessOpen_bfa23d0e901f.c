__int64 __fastcall PspProcessOpen(__int64 a1, char a2, __int64 a3, __int64 a4, int *a5)
{
  bool IsParentProcess; // al
  unsigned int v9; // r10d
  __int64 v10; // rcx
  int v11; // edx

  IsParentProcess = PspIsParentProcess(a3, a4);
  v10 = v9 & 0xFFFFFFFE;
  if ( !IsParentProcess )
    v10 = v9;
  if ( ((unsigned int)v10 & *a5) != 0 )
  {
    LOBYTE(v10) = a2;
    if ( (unsigned __int8)PsTestProtectedProcessIncompatibility(v10, a3, a4) )
      return 3221225506LL;
  }
  if ( *(_QWORD *)(a4 + 2240) && !*(_QWORD *)(a3 + 2240) && a2 && (~DWORD2(xmmword_140C37D60) & *a5) != 0 )
    return 3221225506LL;
  v11 = *a5;
  if ( (*a5 & 1) != 0 && a2 == 1 && (*(_DWORD *)(a4 + 2172) & 0x8000000) != 0 )
    return 3221225506LL;
  if ( (*a5 & 0x28) == 40 || (*a5 & 0x400) != 0 )
  {
    v11 |= 0x1000u;
    *a5 = v11;
  }
  if ( (v11 & 0x200) != 0 )
    *a5 = v11 | 0x2000;
  return 0LL;
}
