__int64 __fastcall PspThreadOpen(__int64 a1, char a2, __int64 a3, __int64 a4, int *a5)
{
  bool IsParentProcess; // al
  __int64 v9; // rdx
  unsigned int v10; // r10d
  __int64 v11; // rcx
  int v12; // eax

  IsParentProcess = PspIsParentProcess(a3, *(_QWORD *)(a4 + 544));
  v11 = v10 & 0xFFFFFFFE;
  if ( !IsParentProcess )
    v11 = v10;
  if ( ((unsigned int)v11 & *a5) != 0 )
  {
    LOBYTE(v11) = a2;
    if ( (unsigned __int8)PsTestProtectedProcessIncompatibility(v11, a3, v9) )
      return 3221225506LL;
  }
  if ( *(_QWORD *)(a4 + 1584) && !*(_QWORD *)(a3 + 2240) && a2 && (~HIDWORD(xmmword_140C37D60) & *a5) != 0 )
    return 3221225506LL;
  v12 = *a5;
  if ( (*a5 & 0x40) != 0 )
  {
    v12 |= 0x800u;
    *a5 = v12;
  }
  if ( (v12 & 0x20) != 0 )
  {
    v12 |= 0x400u;
    *a5 = v12;
  }
  if ( (v12 & 2) != 0 )
    *a5 = v12 | 0x1000;
  return 0LL;
}
