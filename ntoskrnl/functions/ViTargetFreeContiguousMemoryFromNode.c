__int64 __fastcall ViTargetFreeContiguousMemoryFromNode(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 *v4; // rcx
  __int64 *v5; // rdx
  __int64 **v7; // rax

  v2 = *(_QWORD *)(a2 + 56);
  if ( !v2 )
    return 0LL;
  v4 = *(__int64 **)(v2 + 264);
  if ( v4 == (__int64 *)(v2 + 264) )
    return 0LL;
  while ( 1 )
  {
    v5 = (__int64 *)*v4;
    if ( v4[2] == a1 )
      break;
    v4 = (__int64 *)*v4;
    if ( v5 == (__int64 *)(v2 + 264) )
      return 0LL;
  }
  if ( (__int64 *)v5[1] != v4 || (v7 = (__int64 **)v4[1], *v7 != v4) )
    __fastfail(3u);
  *v7 = v5;
  v5[1] = (__int64)v7;
  *(_QWORD *)(v2 + 248) -= v4[3];
  VfUtilFreePoolDispatchLevel((struct _SLIST_ENTRY *)v4);
  return 1LL;
}
