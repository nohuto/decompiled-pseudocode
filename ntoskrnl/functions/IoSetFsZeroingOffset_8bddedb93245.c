__int64 __fastcall IoSetFsZeroingOffset(__int64 a1)
{
  __int64 v1; // rcx
  unsigned int v2; // r9d
  int v3; // r10d

  if ( IopIrpHasExtensionType(a1, 4u) )
    *(_DWORD *)(*(_QWORD *)(v1 + 200) + 40LL) = v3;
  else
    return (unsigned int)-1073741275;
  return v2;
}
