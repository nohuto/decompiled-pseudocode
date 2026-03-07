__int64 __fastcall ExpWnfValidatePubSubPreconditions(
        ACCESS_MASK DesiredAccess,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4,
        int a5)
{
  int v8; // ecx
  _QWORD *v9; // rdx
  __int64 v11; // rcx

  if ( a5 || (v8 = ExpWnfCheckCallerAccess(*(PSECURITY_DESCRIPTOR *)(a2 + 16), DesiredAccess), v8 >= 0) )
  {
    v9 = *(_QWORD **)(a2 + 8);
    if ( !v9 )
      return *(_DWORD *)a2 < a3 ? 0xC000000D : 0;
    if ( !a4 )
      return (unsigned int)-1073741811;
    v11 = *v9 - *a4;
    if ( *v9 == *a4 )
      v11 = v9[1] - a4[1];
    if ( v11 )
      return (unsigned int)-1073741811;
    else
      return *(_DWORD *)a2 < a3 ? 0xC000000D : 0;
  }
  return (unsigned int)v8;
}
