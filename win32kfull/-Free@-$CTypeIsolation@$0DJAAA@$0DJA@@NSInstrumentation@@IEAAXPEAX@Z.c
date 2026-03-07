void __fastcall NSInstrumentation::CTypeIsolation<233472,912>::Free(__int64 a1, void *a2)
{
  __int64 v4; // rbx
  __int64 v5; // r8
  _QWORD *i; // r14
  __int64 v7; // rbp
  int v8; // eax
  int v9; // eax
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rcx

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
        v7 = i[4];
        v8 = NSInstrumentation::CSectionBitmapAllocator<233472,912>::CheckAllocationStatus(v7, a2);
        if ( v8 )
        {
          v9 = v8 - 1;
          if ( !v9 )
          {
            NSInstrumentation::CSectionBitmapAllocator<233472,912>::Free(v7, a2);
            ExReleasePushLockSharedEx(v4, 0LL, v10);
            KeLeaveCriticalRegion();
            return;
          }
          v11 = v9 - 1;
          if ( v11 )
          {
            if ( v11 != 1 )
              continue;
            v12 = 2LL;
          }
          else
          {
            v12 = 1LL;
          }
          NSInstrumentation::PlatformAbort(v12, a2);
        }
      }
    }
    memset_0(a2, 0, 0x390uLL);
    ExFreeToPagedLookasideList(*(PPAGED_LOOKASIDE_LIST *)(a1 + 24), a2);
  }
}
