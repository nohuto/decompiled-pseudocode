void __fastcall NSInstrumentation::CTypeIsolation<24576,96>::Free(__int64 a1, void *a2)
{
  __int64 v4; // rbx
  __int64 v5; // r8
  _QWORD *i; // r14
  __int64 *v7; // rbp
  int v8; // eax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r8

  if ( a2 )
  {
    if ( !*(_BYTE *)(a1 + 36) )
    {
      v4 = *(_QWORD *)(a1 + 16);
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v4, 0LL);
      for ( i = *(_QWORD **)a1; ; i = (_QWORD *)*i )
      {
        if ( i == (_QWORD *)a1 )
        {
          ExReleasePushLockSharedEx(v4, 0LL, v5);
          KeLeaveCriticalRegion();
          NSInstrumentation::PlatformAbort(3LL, a2);
          return;
        }
        v7 = (__int64 *)i[4];
        v8 = NSInstrumentation::CSectionBitmapAllocator<24576,96>::CheckAllocationStatus(v7, (unsigned __int64)a2);
        if ( v8 )
        {
          v9 = v8 - 1;
          if ( !v9 )
          {
            NSInstrumentation::CSectionBitmapAllocator<24576,96>::Free(v7, a2);
            ExReleasePushLockSharedEx(v4, 0LL, v12);
            KeLeaveCriticalRegion();
            return;
          }
          v10 = v9 - 1;
          if ( v10 )
          {
            if ( v10 != 1 )
              continue;
            v11 = 2LL;
          }
          else
          {
            v11 = 1LL;
          }
          NSInstrumentation::PlatformAbort(v11, a2);
        }
      }
    }
    memset_0(a2, 0, 0x60uLL);
    ExFreeToPagedLookasideList(*(PPAGED_LOOKASIDE_LIST *)(a1 + 24), a2);
  }
}
