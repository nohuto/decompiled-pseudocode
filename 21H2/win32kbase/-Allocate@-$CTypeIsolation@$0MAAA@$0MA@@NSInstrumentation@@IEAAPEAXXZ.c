/*
 * XREFs of ?Allocate@?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C009BB2C
 * Callers:
 *     ?pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z @ 0x1C008B6B4 (-pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z.c)
 * Callees:
 *     ?Create@?$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C008C654 (-Create@-$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Allocate@?$CSectionBitmapAllocator@$0MAAA@$0MA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C009BBE4 (-Allocate@-$CSectionBitmapAllocator@$0MAAA@$0MA@@NSInstrumentation@@QEAAPEAXXZ.c)
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C00BB54C (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

PSLIST_ENTRY __fastcall NSInstrumentation::CTypeIsolation<49152,192>::Allocate(__int64 a1)
{
  __int64 v2; // rbx
  PSLIST_ENTRY result; // rax
  __int64 v4; // r14
  _QWORD *i; // rsi
  __int64 v6; // rbx
  __int64 v7; // rbp
  _QWORD *v8; // rax
  _QWORD *v9; // rsi
  __int64 v10; // rbx
  _QWORD *v11; // rcx

  if ( *(_BYTE *)(a1 + 36) )
  {
    v2 = *(_QWORD *)(a1 + 24);
    ++*(_DWORD *)(v2 + 20);
    result = ExpInterlockedPopEntrySList((PSLIST_HEADER)v2);
    if ( !result )
    {
      ++*(_DWORD *)(v2 + 24);
      return (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v2 + 48))(
                             *(unsigned int *)(v2 + 36),
                             *(unsigned int *)(v2 + 44),
                             *(unsigned int *)(v2 + 40));
    }
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 16);
    v7 = 0LL;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v6, 0LL);
    for ( i = *(_QWORD **)a1; i != (_QWORD *)a1; i = (_QWORD *)*i )
    {
      v4 = NSInstrumentation::CSectionBitmapAllocator<49152,192>::Allocate(i[4]);
      if ( v4 )
      {
        ExReleasePushLockSharedEx(v6, 0LL);
        KeLeaveCriticalRegion();
        return (PSLIST_ENTRY)v4;
      }
    }
    ExReleasePushLockSharedEx(v6, 0LL);
    KeLeaveCriticalRegion();
    v8 = NSInstrumentation::CSectionEntry<49152,192>::Create();
    v9 = v8;
    if ( v8 )
    {
      v7 = NSInstrumentation::CSectionBitmapAllocator<49152,192>::Allocate(v8[4]);
      if ( v7 )
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
        *(_DWORD *)(a1 + 32) += 252;
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
    return (PSLIST_ENTRY)v7;
  }
  return result;
}
