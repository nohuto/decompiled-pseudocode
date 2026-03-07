PVOID __fastcall NSInstrumentation::CTypeIsolation<86016,336>::Allocate(__int64 a1)
{
  _QWORD *i; // rsi
  __int64 v4; // r14
  __int64 v5; // rax
  _QWORD *v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // rbx
  _QWORD *v10; // rax

  if ( *(_BYTE *)(a1 + 36) )
    return ExAllocateFromPagedLookasideList(*(PPAGED_LOOKASIDE_LIST *)(a1 + 24));
  v7 = *(_QWORD *)(a1 + 16);
  v8 = 0LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v7, 0LL);
  for ( i = *(_QWORD **)a1; i != (_QWORD *)a1; i = (_QWORD *)*i )
  {
    v4 = NSInstrumentation::CSectionBitmapAllocator<86016,336>::Allocate(i[4]);
    if ( v4 )
    {
      ExReleasePushLockSharedEx(v7, 0LL);
      KeLeaveCriticalRegion();
      return (PVOID)v4;
    }
  }
  ExReleasePushLockSharedEx(v7, 0LL);
  KeLeaveCriticalRegion();
  v5 = NSInstrumentation::CSectionEntry<86016,336>::Create();
  v6 = (_QWORD *)v5;
  if ( v5 )
  {
    v8 = NSInstrumentation::CSectionBitmapAllocator<86016,336>::Allocate(*(_QWORD *)(v5 + 32));
    if ( v8 )
    {
      v9 = *(_QWORD *)(a1 + 16);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v9, 0LL);
      v10 = *(_QWORD **)(a1 + 8);
      if ( *v10 != a1 )
        __fastfail(3u);
      *v6 = a1;
      v6[1] = v10;
      *v10 = v6;
      *(_DWORD *)(a1 + 32) += 252;
      *(_QWORD *)(a1 + 8) = v6;
      ExReleasePushLockExclusiveEx(v9, 0LL);
      KeLeaveCriticalRegion();
    }
    else
    {
      NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(v6);
      ExFreePoolWithTag(v6, 0);
    }
  }
  return (PVOID)v8;
}
