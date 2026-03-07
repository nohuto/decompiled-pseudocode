void __fastcall VidSchRemoveContextAllocation(_QWORD *a1)
{
  __int64 v1; // rbx
  _QWORD *v3; // rcx
  void **v4; // rax
  __int64 v5; // rcx

  if ( a1 )
  {
    v1 = a1[2];
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v1, 0LL);
    *(_QWORD *)(v1 + 8) = KeGetCurrentThread();
    v3 = (_QWORD *)*a1;
    if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v4 = (void **)a1[1], *v4 != a1) )
      __fastfail(3u);
    *v4 = v3;
    v3[1] = v4;
    v5 = a1[2];
    *(_QWORD *)(v5 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v5, 0LL);
    KeLeaveCriticalRegion();
    operator delete(a1);
  }
}
