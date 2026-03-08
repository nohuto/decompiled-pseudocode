/*
 * XREFs of ?Free@?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C00E7AEC
 * Callers:
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C0123B9C (--$FreeIsolatedType@V-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 * Callees:
 *     ?CheckAllocationStatus@?$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@QEAA?AW4AllocationStatus@2@PEBX@Z @ 0x1C00E7BB8 (-CheckAllocationStatus@-$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@QEAA-AW4Alloc.c)
 *     ?Free@?$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00E7C6C (-Free@-$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z @ 0x1C0307D00 (-PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z.c)
 */

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
