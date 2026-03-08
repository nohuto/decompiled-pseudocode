/*
 * XREFs of ?Allocate@?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C0180690
 * Callers:
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C0180450 (--0PATHMEMOBJ@@QEAA@XZ.c)
 * Callees:
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C009FFD0 (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 *     ?Create@?$CSectionEntry@$0BEAAA@$0BEA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C00C5124 (-Create@-$CSectionEntry@$0BEAAA@$0BEA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Allocate@?$CSectionBitmapAllocator@$0BEAAA@$0BEA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C0180570 (-Allocate@-$CSectionBitmapAllocator@$0BEAAA@$0BEA@@NSInstrumentation@@QEAAPEAXXZ.c)
 */

PVOID __fastcall NSInstrumentation::CTypeIsolation<81920,320>::Allocate(__int64 **a1)
{
  __int64 *v2; // rbx
  __int64 v3; // rbp
  __int64 **i; // rsi
  __int64 v5; // r14
  __int64 *v6; // rax
  __int64 *v7; // rsi
  __int64 *v8; // rbx
  __int64 ***v9; // rax

  if ( *((_BYTE *)a1 + 36) )
    return ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)a1[3]);
  v2 = a1[2];
  v3 = 0LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v2, 0LL);
  for ( i = (__int64 **)*a1; i != a1; i = (__int64 **)*i )
  {
    v5 = NSInstrumentation::CSectionBitmapAllocator<81920,320>::Allocate(i[4]);
    if ( v5 )
    {
      ExReleasePushLockSharedEx(v2, 0LL);
      KeLeaveCriticalRegion();
      return (PVOID)v5;
    }
  }
  ExReleasePushLockSharedEx(v2, 0LL);
  KeLeaveCriticalRegion();
  v6 = NSInstrumentation::CSectionEntry<81920,320>::Create();
  v7 = v6;
  if ( v6 )
  {
    v3 = NSInstrumentation::CSectionBitmapAllocator<81920,320>::Allocate((__int64 *)v6[4]);
    if ( v3 )
    {
      v8 = a1[2];
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v8, 0LL);
      v9 = (__int64 ***)a1[1];
      if ( *v9 != a1 )
        __fastfail(3u);
      *v7 = (__int64)a1;
      v7[1] = (__int64)v9;
      *v9 = (__int64 **)v7;
      *((_DWORD *)a1 + 8) += 240;
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
  return (PVOID)v3;
}
