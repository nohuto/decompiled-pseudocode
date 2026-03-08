/*
 * XREFs of ?Free@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C00A77D0
 * Callers:
 *     ??$_lambda_invoker_cdecl_@PEAXPEAU_LOOKASIDE_LIST_EX@@@_lambda_4244bae6fa0a501e9e28a4e0afb3a818_@@CA?A_PPEAXPEAU_LOOKASIDE_LIST_EX@@@Z @ 0x1C00BD1E0 (--$_lambda_invoker_cdecl_@PEAXPEAU_LOOKASIDE_LIST_EX@@@_lambda_4244bae6fa0a501e9e28a4e0afb3a818_.c)
 * Callees:
 *     ?CheckAllocationStatus@?$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@QEAA?AW4AllocationStatus@2@PEBX@Z @ 0x1C00A789C (-CheckAllocationStatus@-$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@QEAA-AW4Allocat.c)
 *     ?Free@?$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00A7944 (-Free@-$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ?PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z @ 0x1C019A620 (-PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z.c)
 */

void __fastcall NSInstrumentation::CTypeIsolation<36864,144>::Free(__int64 a1, void *a2)
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
    if ( *(_BYTE *)(a1 + 36) )
    {
      memset(a2, 0, 0x90uLL);
      ExFreeToPagedLookasideList(*(PPAGED_LOOKASIDE_LIST *)(a1 + 24), a2);
      return;
    }
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
      v7 = NSInstrumentation::CSectionBitmapAllocator<36864,144>::CheckAllocationStatus(v6, a2);
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( !v8 )
        {
          NSInstrumentation::CSectionBitmapAllocator<36864,144>::Free(v6, a2);
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
}
