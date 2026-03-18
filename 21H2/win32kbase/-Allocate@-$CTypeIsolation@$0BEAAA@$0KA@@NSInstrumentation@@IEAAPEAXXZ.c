/*
 * XREFs of ?Allocate@?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C0097740
 * Callers:
 *     ?HMAllocateIsolatedType@@YAPEAXE@Z @ 0x1C0030E00 (-HMAllocateIsolatedType@@YAPEAXE@Z.c)
 * Callees:
 *     ?Create@?$CSectionEntry@$0BEAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C008C458 (-Create@-$CSectionEntry@$0BEAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Allocate@?$CSectionBitmapAllocator@$0BEAAA@$0KA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C00977F0 (-Allocate@-$CSectionBitmapAllocator@$0BEAAA@$0KA@@NSInstrumentation@@QEAAPEAXXZ.c)
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C00BB54C (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

PSLIST_ENTRY __fastcall NSInstrumentation::CTypeIsolation<81920,160>::Allocate(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  _QWORD *i; // rsi
  __int64 v5; // r14
  PSLIST_ENTRY result; // rax
  _QWORD *v7; // rax
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
      v5 = NSInstrumentation::CSectionBitmapAllocator<81920,160>::Allocate(i[4]);
      if ( v5 )
      {
        ExReleasePushLockSharedEx(v2, 0LL);
        KeLeaveCriticalRegion();
        return (PSLIST_ENTRY)v5;
      }
    }
    ExReleasePushLockSharedEx(v2, 0LL);
    KeLeaveCriticalRegion();
    v7 = NSInstrumentation::CSectionEntry<81920,160>::Create();
    v8 = v7;
    if ( v7 )
    {
      v3 = NSInstrumentation::CSectionBitmapAllocator<81920,160>::Allocate(v7[4]);
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
        *(_DWORD *)(a1 + 32) += 500;
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
