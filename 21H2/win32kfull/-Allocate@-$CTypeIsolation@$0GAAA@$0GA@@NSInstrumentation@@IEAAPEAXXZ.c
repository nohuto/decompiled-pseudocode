/*
 * XREFs of ?Allocate@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C021B110
 * Callers:
 *     MNAllocPopup @ 0x1C021BAC0 (MNAllocPopup.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C01E33D4 (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 *     ?Allocate@?$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C021AFDC (-Allocate@-$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@QEAAPEAXXZ.c)
 *     ?Create@?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C021B4BC (-Create@-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@SAPEAV12@XZ.c)
 */

PSLIST_ENTRY __fastcall NSInstrumentation::CTypeIsolation<24576,96>::Allocate(__int64 **a1)
{
  __int64 *v2; // rbx
  __int64 v3; // rbp
  __int64 **i; // rsi
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 *v7; // rsi
  __int64 *v8; // rbx
  __int64 ***v9; // rcx
  PSLIST_ENTRY result; // rax
  __int64 *v11; // rbx

  if ( *((_BYTE *)a1 + 36) )
  {
    v11 = a1[3];
    ++*((_DWORD *)v11 + 5);
    result = ExpInterlockedPopEntrySList((PSLIST_HEADER)v11);
    if ( !result )
    {
      ++*((_DWORD *)v11 + 6);
      return (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v11[6])(
                             *((unsigned int *)v11 + 9),
                             *((unsigned int *)v11 + 11),
                             *((unsigned int *)v11 + 10));
    }
  }
  else
  {
    v2 = a1[2];
    v3 = 0LL;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v2, 0LL);
    for ( i = (__int64 **)*a1; i != a1; i = (__int64 **)*i )
    {
      v5 = NSInstrumentation::CSectionBitmapAllocator<24576,96>::Allocate(i[4]);
      if ( v5 )
      {
        ExReleasePushLockSharedEx(v2, 0LL);
        KeLeaveCriticalRegion();
        return (PSLIST_ENTRY)v5;
      }
    }
    ExReleasePushLockSharedEx(v2, 0LL);
    KeLeaveCriticalRegion();
    v6 = NSInstrumentation::CSectionEntry<24576,96>::Create();
    v7 = (__int64 *)v6;
    if ( v6 )
    {
      v3 = NSInstrumentation::CSectionBitmapAllocator<24576,96>::Allocate(*(__int64 **)(v6 + 32));
      if ( v3 )
      {
        v8 = a1[2];
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v8, 0LL);
        v9 = (__int64 ***)a1[1];
        if ( *v9 != a1 )
          __fastfail(3u);
        v7[1] = (__int64)v9;
        *v7 = (__int64)a1;
        *v9 = (__int64 **)v7;
        *((_DWORD *)a1 + 8) += 252;
        a1[1] = v7;
        ExReleasePushLockExclusiveEx(v8, 0LL);
        KeLeaveCriticalRegion();
      }
      else
      {
        NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(v7);
        ExFreePoolWithTag(v7, 0);
      }
    }
    return (PSLIST_ENTRY)v3;
  }
  return result;
}
