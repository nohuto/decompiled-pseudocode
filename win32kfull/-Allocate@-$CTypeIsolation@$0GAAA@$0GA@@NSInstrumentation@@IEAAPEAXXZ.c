PVOID __fastcall NSInstrumentation::CTypeIsolation<24576,96>::Allocate(__int64 **a1)
{
  __int64 *v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // r8
  __int64 **i; // rsi
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 *v8; // rsi
  __int64 *v9; // rbx
  __int64 ***v10; // rax

  if ( *((_BYTE *)a1 + 36) )
    return ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)a1[3]);
  v2 = a1[2];
  v3 = 0LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v2, 0LL);
  for ( i = (__int64 **)*a1; i != a1; i = (__int64 **)*i )
  {
    v6 = NSInstrumentation::CSectionBitmapAllocator<24576,96>::Allocate(i[4]);
    if ( v6 )
    {
      ExReleasePushLockSharedEx(v2, 0LL, v4);
      KeLeaveCriticalRegion();
      return (PVOID)v6;
    }
  }
  ExReleasePushLockSharedEx(v2, 0LL, v4);
  KeLeaveCriticalRegion();
  v7 = NSInstrumentation::CSectionEntry<24576,96>::Create();
  v8 = (__int64 *)v7;
  if ( v7 )
  {
    v3 = NSInstrumentation::CSectionBitmapAllocator<24576,96>::Allocate(*(__int64 **)(v7 + 32));
    if ( v3 )
    {
      v9 = a1[2];
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v9, 0LL);
      v10 = (__int64 ***)a1[1];
      if ( *v10 != a1 )
        __fastfail(3u);
      *v8 = (__int64)a1;
      v8[1] = (__int64)v10;
      *v10 = (__int64 **)v8;
      *((_DWORD *)a1 + 8) += 252;
      a1[1] = v8;
      ExReleasePushLockExclusiveEx(v9, 0LL);
      KeLeaveCriticalRegion();
    }
    else
    {
      NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(v8);
      ExFreePoolWithTag(v8, 0);
    }
  }
  return (PVOID)v3;
}
