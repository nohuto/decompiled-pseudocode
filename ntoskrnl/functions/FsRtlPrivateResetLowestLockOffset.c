__int64 __fastcall FsRtlPrivateResetLowestLockOffset(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 i; // rcx
  __int64 v5; // rax
  __int64 *v6; // rcx
  __int64 *v7; // rdx
  __int64 result; // rax
  __int64 j; // rdx

  v2 = 0LL;
  v3 = a1[4];
  if ( v3 )
  {
    for ( i = *(_QWORD *)(v3 + 8); i; i = *(_QWORD *)(i + 8) )
      v3 = i;
    v2 = *(_QWORD *)(v3 - 24);
  }
  else if ( !a1[5] )
  {
    result = -1LL;
    goto LABEL_9;
  }
  v5 = a1[5];
  if ( v5 )
  {
    for ( j = *(_QWORD *)(v5 + 8); j; j = *(_QWORD *)(j + 8) )
      v5 = j;
    v7 = (__int64 *)(v5 + 24);
    if ( !v2 )
      goto LABEL_8;
    v6 = (__int64 *)(v2 + 8);
    if ( *v7 < (unsigned __int64)*v6 )
      goto LABEL_8;
  }
  else
  {
    v6 = (__int64 *)(v2 + 8);
  }
  v7 = v6;
LABEL_8:
  result = *v7;
LABEL_9:
  *a1 = result;
  return result;
}
