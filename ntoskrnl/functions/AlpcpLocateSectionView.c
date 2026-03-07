__int64 __fastcall AlpcpLocateSectionView(__int64 a1, __int64 a2, __int64 a3, ULONG_PTR *a4)
{
  signed __int64 *v4; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // r14d
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+28h] [rbp-20h]

  v12 = a3;
  *a4 = 0LL;
  v4 = (signed __int64 *)(a2 + 352);
  BugCheckParameter2 = 0LL;
  do
  {
    ExAcquirePushLockSharedEx((ULONG_PTR)v4, 0LL);
    v10 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64 *))AlpcpEnumerateResourcesPort)(a2, v8, v9, &v12);
    if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v4);
    KeAbPostRelease((ULONG_PTR)v4);
  }
  while ( v10 == -1073741267 );
  if ( BugCheckParameter2 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16) + 16LL) == a1 )
    {
      *a4 = BugCheckParameter2;
      return 0LL;
    }
    AlpcpDereferenceBlobEx(BugCheckParameter2);
  }
  return 3221225793LL;
}
