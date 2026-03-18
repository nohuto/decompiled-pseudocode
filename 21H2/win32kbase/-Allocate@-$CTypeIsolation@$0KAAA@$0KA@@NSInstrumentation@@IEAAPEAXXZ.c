/*
 * XREFs of ?Allocate@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C009A610
 * Callers:
 *     ?HMAllocateIsolatedType@@YAPEAXE@Z @ 0x1C0030E00 (-HMAllocateIsolatedType@@YAPEAXE@Z.c)
 *     ?pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z @ 0x1C008B6B4 (-pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z.c)
 * Callees:
 *     ?Create@?$CSectionEntry@$0KAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C008CE44 (-Create@-$CSectionEntry@$0KAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Allocate@?$CSectionBitmapAllocator@$0KAAA@$0KA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C009A6F0 (-Allocate@-$CSectionBitmapAllocator@$0KAAA@$0KA@@NSInstrumentation@@QEAAPEAXXZ.c)
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C00BB54C (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

PSLIST_ENTRY __fastcall NSInstrumentation::CTypeIsolation<40960,160>::Allocate(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  _QWORD *i; // rsi
  __int64 v5; // r14
  PSLIST_ENTRY result; // rax
  __int64 v7; // rbx
  _QWORD *v8; // rax
  _QWORD *v9; // rsi
  __int64 v10; // rbx
  _QWORD *v11; // rcx

  if ( *(_BYTE *)(a1 + 36) )
  {
    v7 = *(_QWORD *)(a1 + 24);
    ++*(_DWORD *)(v7 + 20);
    result = ExpInterlockedPopEntrySList((PSLIST_HEADER)v7);
    if ( !result )
    {
      ++*(_DWORD *)(v7 + 24);
      return (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v7 + 48))(
                             *(unsigned int *)(v7 + 36),
                             *(unsigned int *)(v7 + 44),
                             *(unsigned int *)(v7 + 40));
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
      v5 = NSInstrumentation::CSectionBitmapAllocator<40960,160>::Allocate(i[4]);
      if ( v5 )
      {
        ExReleasePushLockSharedEx(v2, 0LL);
        KeLeaveCriticalRegion();
        return (PSLIST_ENTRY)v5;
      }
    }
    ExReleasePushLockSharedEx(v2, 0LL);
    KeLeaveCriticalRegion();
    v8 = NSInstrumentation::CSectionEntry<40960,160>::Create();
    v9 = v8;
    if ( v8 )
    {
      v3 = NSInstrumentation::CSectionBitmapAllocator<40960,160>::Allocate(v8[4]);
      if ( v3 )
      {
        v10 = *(_QWORD *)(a1 + 16);
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v10, 0LL);
        v11 = *(_QWORD **)(a1 + 8);
        if ( *v11 != a1 )
          __fastfail(3u);
        v9[1] = v11;
        *v9 = a1;
        *v11 = v9;
        *(_DWORD *)(a1 + 32) += 250;
        *(_QWORD *)(a1 + 8) = v9;
        ExReleasePushLockExclusiveEx(v10, 0LL);
        KeLeaveCriticalRegion();
      }
      else
      {
        NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(v9);
        ExFreePoolWithTag(v9, 0);
      }
    }
    return (PSLIST_ENTRY)v3;
  }
  return result;
}
