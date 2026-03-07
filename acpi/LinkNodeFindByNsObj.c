__int64 __fastcall LinkNodeFindByNsObj(__int64 a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 *i; // rax

  v2 = LinkNodeListHead - 56;
  for ( i = (__int64 *)LinkNodeListHead; ; v2 = (__int64)(i - 7) )
  {
    if ( &LinkNodeListHead == i )
      return 3221226021LL;
    if ( *(_QWORD *)(v2 + 600) == a1 )
      break;
    i = *(__int64 **)(v2 + 56);
  }
  *a2 = v2;
  return 0LL;
}
