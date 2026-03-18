/*
 * XREFs of ?Free@?$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C00D1E9C
 * Callers:
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C00D1708 (--$FreeIsolatedType@V-$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 * Callees:
 *     RIMLockShared @ 0x1C0096B30 (RIMLockShared.c)
 *     GreLeaveCriticalRegionAndReleasePushLockShared @ 0x1C0096F70 (GreLeaveCriticalRegionAndReleasePushLockShared.c)
 *     ?CheckAllocationStatus@?$CSectionBitmapAllocator@$0OAAAA@$0OAA@@NSInstrumentation@@QEAA?AW4AllocationStatus@2@PEBX@Z @ 0x1C00D1B34 (-CheckAllocationStatus@-$CSectionBitmapAllocator@$0OAAAA@$0OAA@@NSInstrumentation@@QEAA-AW4Alloc.c)
 *     ?Free@?$CSectionBitmapAllocator@$0OAAAA@$0OAA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00D1DE8 (-Free@-$CSectionBitmapAllocator@$0OAAAA@$0OAA@@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 *     ?PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z @ 0x1C016D770 (-PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z.c)
 */

void __fastcall NSInstrumentation::CTypeIsolation<917504,3584>::Free(__int64 a1, void *a2)
{
  __int64 v4; // rbx
  _QWORD *i; // r14
  _QWORD *v6; // rbp
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rcx

  if ( a2 )
  {
    if ( !*(_BYTE *)(a1 + 36) )
    {
      v4 = *(_QWORD *)(a1 + 16);
      RIMLockShared(v4);
      for ( i = *(_QWORD **)a1; ; i = (_QWORD *)*i )
      {
        if ( i == (_QWORD *)a1 )
        {
          GreLeaveCriticalRegionAndReleasePushLockShared(v4);
          NSInstrumentation::PlatformAbort(3LL, a2, 0LL);
          return;
        }
        v6 = (_QWORD *)i[4];
        v7 = NSInstrumentation::CSectionBitmapAllocator<917504,3584>::CheckAllocationStatus(v6, (unsigned __int64)a2);
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( !v8 )
          {
            NSInstrumentation::CSectionBitmapAllocator<917504,3584>::Free((__int64)v6, a2);
            GreLeaveCriticalRegionAndReleasePushLockShared(v4);
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
    memset(a2, 0, 0xE00uLL);
    ExFreeToPagedLookasideList(*(PPAGED_LOOKASIDE_LIST *)(a1 + 24), a2);
  }
}
