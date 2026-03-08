/*
 * XREFs of ?Free@?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C00C4014
 * Callers:
 *     ?FreeBrushMemory@@YAXPEAVBRUSH@@@Z @ 0x1C00C1C1C (-FreeBrushMemory@@YAXPEAVBRUSH@@@Z.c)
 * Callees:
 *     ?CheckAllocationStatus@?$CSectionBitmapAllocator@$0MAAA@$0MA@@NSInstrumentation@@QEAA?AW4AllocationStatus@2@PEBX@Z @ 0x1C00C40DC (-CheckAllocationStatus@-$CSectionBitmapAllocator@$0MAAA@$0MA@@NSInstrumentation@@QEAA-AW4Allocat.c)
 *     ?Free@?$CSectionBitmapAllocator@$0MAAA@$0MA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00C4188 (-Free@-$CSectionBitmapAllocator@$0MAAA@$0MA@@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ?PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z @ 0x1C019A620 (-PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z.c)
 */

void __fastcall NSInstrumentation::CTypeIsolation<49152,192>::Free(__int64 a1, void *a2)
{
  __int64 v4; // rbx
  _QWORD *i; // r14
  __int64 v6; // rbp
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rcx

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
          ExReleasePushLockSharedEx(v4, 0LL);
          KeLeaveCriticalRegion();
          NSInstrumentation::PlatformAbort(3LL, a2, 0LL);
          return;
        }
        v6 = i[4];
        v7 = NSInstrumentation::CSectionBitmapAllocator<49152,192>::CheckAllocationStatus(v6, a2);
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( !v8 )
          {
            NSInstrumentation::CSectionBitmapAllocator<49152,192>::Free(v6, a2);
            ExReleasePushLockSharedEx(v4, 0LL);
            KeLeaveCriticalRegion();
            return;
          }
          v9 = v8 - 1;
          if ( v9 )
          {
            if ( v9 != 1 )
              continue;
            v10 = 2LL;
          }
          else
          {
            v10 = 1LL;
          }
          NSInstrumentation::PlatformAbort(v10, a2, 0LL);
        }
      }
    }
    memset(a2, 0, 0xC0uLL);
    ExFreeToPagedLookasideList(*(PPAGED_LOOKASIDE_LIST *)(a1 + 24), a2);
  }
}
