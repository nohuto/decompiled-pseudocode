__int64 __fastcall PopDirectedDripsDiagInsertErrorRecord(__int64 a1, __int64 a2, int a3)
{
  __int64 *v3; // rbx
  __int64 v5; // rcx
  __int64 result; // rax

  v3 = (__int64 *)(a1 + 24);
  v5 = *(_QWORD *)(a1 + 24);
  if ( !v5 )
    goto LABEL_6;
  do
  {
    if ( *(_QWORD *)(v5 + 8) == a2 && *(_DWORD *)(v5 + 16) == a3 )
      break;
    v3 = (__int64 *)v5;
    v5 = *(_QWORD *)v5;
  }
  while ( v5 );
  result = *v3;
  if ( !*v3 )
  {
LABEL_6:
    result = ExAllocatePool2(256LL, 24LL, 1734960208LL);
    *v3 = result;
    if ( !result )
      return result;
    *(_QWORD *)(result + 8) = a2;
    *(_DWORD *)(*v3 + 16) = a3;
    result = *v3;
  }
  ++*(_DWORD *)(result + 20);
  return result;
}
