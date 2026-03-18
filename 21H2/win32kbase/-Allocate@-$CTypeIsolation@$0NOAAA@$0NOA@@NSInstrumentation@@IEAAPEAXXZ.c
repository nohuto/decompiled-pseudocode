/*
 * XREFs of ?Allocate@?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C00D9A48
 * Callers:
 *     ?Allocate@PDEV@@SAPEAV1@H@Z @ 0x1C008B640 (-Allocate@PDEV@@SAPEAV1@H@Z.c)
 * Callees:
 *     GreLeaveCriticalRegionAndReleasePushLockExclusive @ 0x1C0022230 (GreLeaveCriticalRegionAndReleasePushLockExclusive.c)
 *     GreEnterCriticalRegionAndAcquirePushLockExclusive @ 0x1C0022C80 (GreEnterCriticalRegionAndAcquirePushLockExclusive.c)
 *     ?AcquireShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C0089AF0 (-AcquireShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     GreLeaveCriticalRegionAndReleasePushLockShared @ 0x1C008B120 (GreLeaveCriticalRegionAndReleasePushLockShared.c)
 *     ?Allocate@?$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C00D9974 (-Allocate@-$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@QEAAPEAXXZ.c)
 *     ?Create@?$CSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C00D9CFC (-Create@-$CSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Destroy@?$CSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C00D9DD8 (-Destroy@-$CSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

PSLIST_ENTRY __fastcall NSInstrumentation::CTypeIsolation<909312,3552>::Allocate(__int64 a1)
{
  NSInstrumentation::CPlatformReaderWriterLock *v2; // rbx
  __int64 v3; // rbp
  _QWORD *i; // rsi
  __int64 v5; // r14
  __int64 v6; // rax
  _QWORD *v7; // rsi
  __int64 v8; // rbx
  _QWORD *v9; // rcx
  PSLIST_ENTRY result; // rax
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
    v2 = *(NSInstrumentation::CPlatformReaderWriterLock **)(a1 + 16);
    v3 = 0LL;
    NSInstrumentation::CPlatformReaderWriterLock::AcquireShared(v2);
    for ( i = *(_QWORD **)a1; i != (_QWORD *)a1; i = (_QWORD *)*i )
    {
      v5 = NSInstrumentation::CSectionBitmapAllocator<909312,3552>::Allocate(i[4]);
      if ( v5 )
      {
        GreLeaveCriticalRegionAndReleasePushLockShared((__int64)v2);
        return (PSLIST_ENTRY)v5;
      }
    }
    GreLeaveCriticalRegionAndReleasePushLockShared((__int64)v2);
    v6 = NSInstrumentation::CSectionEntry<909312,3552>::Create();
    v7 = (_QWORD *)v6;
    if ( v6 )
    {
      v3 = NSInstrumentation::CSectionBitmapAllocator<909312,3552>::Allocate(*(_QWORD *)(v6 + 32));
      if ( v3 )
      {
        v8 = *(_QWORD *)(a1 + 16);
        GreEnterCriticalRegionAndAcquirePushLockExclusive(v8);
        v9 = *(_QWORD **)(a1 + 8);
        if ( *v9 != a1 )
          __fastfail(3u);
        v7[1] = v9;
        *v7 = a1;
        *v9 = v7;
        *(_DWORD *)(a1 + 32) += 222;
        *(_QWORD *)(a1 + 8) = v7;
        GreLeaveCriticalRegionAndReleasePushLockExclusive(v8);
      }
      else
      {
        NSInstrumentation::CSectionEntry<909312,3552>::Destroy(v7);
      }
    }
    return (PSLIST_ENTRY)v3;
  }
  return result;
}
