/*
 * XREFs of ?Allocate@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C008D100
 * Callers:
 *     ??$_lambda_invoker_cdecl_@W4_POOL_TYPE@@_KKPEAU_LOOKASIDE_LIST_EX@@@_lambda_f819cb6c8dd8c05e62b85cfa98ab46a8_@@CAPEAXW4_POOL_TYPE@@_KKPEAU_LOOKASIDE_LIST_EX@@@Z @ 0x1C00B1910 (--$_lambda_invoker_cdecl_@W4_POOL_TYPE@@_KKPEAU_LOOKASIDE_LIST_EX@@@_lambda_f819cb6c8dd8c05e62b8.c)
 * Callees:
 *     ?Allocate@?$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C008D250 (-Allocate@-$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@QEAAPEAXXZ.c)
 *     ?Create@?$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C008D7B8 (-Create@-$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C00BB54C (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

PSLIST_ENTRY __fastcall NSInstrumentation::CTypeIsolation<36864,144>::Allocate(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  _QWORD *i; // rsi
  __int64 v5; // r14
  PSLIST_ENTRY result; // rax
  __int64 v7; // rax
  _QWORD *v8; // rsi
  __int64 v9; // rbx
  _QWORD *v10; // rcx
  __int64 v11; // rbx

  if ( *(_BYTE *)(a1 + 36) )
  {
    v11 = *(_QWORD *)(a1 + 24);
    ++*(_DWORD *)(v11 + 20);
    result = ExpInterlockedPopEntrySList((PSLIST_HEADER)v11);
    if ( !result )
    {
      ++*(_DWORD *)(v11 + 24);
      return (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v11 + 48))(
                             *(unsigned int *)(v11 + 36),
                             *(unsigned int *)(v11 + 44),
                             *(unsigned int *)(v11 + 40));
    }
  }
  else
  {
    v2 = *(_QWORD *)(a1 + 16);
    v3 = 0LL;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v2, 0LL);
    for ( i = *(_QWORD **)a1; i != (_QWORD *)a1; i = (_QWORD *)*i )
    {
      v5 = NSInstrumentation::CSectionBitmapAllocator<36864,144>::Allocate(i[4]);
      if ( v5 )
      {
        ExReleasePushLockSharedEx(v2, 0LL);
        KeLeaveCriticalRegion();
        return (PSLIST_ENTRY)v5;
      }
    }
    ExReleasePushLockSharedEx(v2, 0LL);
    KeLeaveCriticalRegion();
    v7 = NSInstrumentation::CSectionEntry<36864,144>::Create();
    v8 = (_QWORD *)v7;
    if ( v7 )
    {
      v3 = NSInstrumentation::CSectionBitmapAllocator<36864,144>::Allocate(*(_QWORD *)(v7 + 32));
      if ( v3 )
      {
        v9 = *(_QWORD *)(a1 + 16);
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v9, 0LL);
        v10 = *(_QWORD **)(a1 + 8);
        if ( *v10 != a1 )
          __fastfail(3u);
        v8[1] = v10;
        *v8 = a1;
        *v10 = v8;
        *(_DWORD *)(a1 + 32) += 252;
        *(_QWORD *)(a1 + 8) = v8;
        ExReleasePushLockExclusiveEx(v9, 0LL);
        KeLeaveCriticalRegion();
      }
      else
      {
        NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(v8);
        ExFreePoolWithTag(v8, 0);
      }
    }
    return (PSLIST_ENTRY)v3;
  }
  return result;
}
