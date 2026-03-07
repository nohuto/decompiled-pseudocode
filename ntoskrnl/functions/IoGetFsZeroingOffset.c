__int64 __fastcall IoGetFsZeroingOffset(__int64 a1)
{
  __int64 v1; // rcx
  _DWORD *v2; // r9
  __int64 result; // rax

  if ( !IopIrpHasExtensionType(a1, 4u) )
    return 3221226021LL;
  result = 0LL;
  *v2 = *(_DWORD *)(*(_QWORD *)(v1 + 200) + 40LL);
  return result;
}
