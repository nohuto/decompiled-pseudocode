/*
 * XREFs of ?Allocate@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C00ACBC4
 * Callers:
 *     ?pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z @ 0x1C001CAAC (-pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z.c)
 *     ?HMAllocateIsolatedType@@YAPEAXE@Z @ 0x1C0078690 (-HMAllocateIsolatedType@@YAPEAXE@Z.c)
 * Callees:
 *     ?Create@?$CSectionEntry@$0KAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C002B420 (-Create@-$CSectionEntry@$0KAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C009FFD0 (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 *     ?Allocate@?$CSectionBitmapAllocator@$0KAAA@$0KA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C00ACC80 (-Allocate@-$CSectionBitmapAllocator@$0KAAA@$0KA@@NSInstrumentation@@QEAAPEAXXZ.c)
 */

PVOID __fastcall NSInstrumentation::CTypeIsolation<40960,160>::Allocate(__int64 a1)
{
  __int64 v3; // rbx
  __int64 v4; // rbp
  _QWORD *i; // rsi
  __int64 v6; // r14
  _QWORD *v7; // rax
  _QWORD *v8; // rsi
  __int64 v9; // rbx
  _QWORD *v10; // rax

  if ( *(_BYTE *)(a1 + 36) )
    return ExAllocateFromPagedLookasideList(*(PPAGED_LOOKASIDE_LIST *)(a1 + 24));
  v3 = *(_QWORD *)(a1 + 16);
  v4 = 0LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v3, 0LL);
  for ( i = *(_QWORD **)a1; i != (_QWORD *)a1; i = (_QWORD *)*i )
  {
    v6 = NSInstrumentation::CSectionBitmapAllocator<40960,160>::Allocate(i[4]);
    if ( v6 )
    {
      ExReleasePushLockSharedEx(v3, 0LL);
      KeLeaveCriticalRegion();
      return (PVOID)v6;
    }
  }
  ExReleasePushLockSharedEx(v3, 0LL);
  KeLeaveCriticalRegion();
  v7 = NSInstrumentation::CSectionEntry<40960,160>::Create();
  v8 = v7;
  if ( v7 )
  {
    v4 = NSInstrumentation::CSectionBitmapAllocator<40960,160>::Allocate(v7[4]);
    if ( v4 )
    {
      v9 = *(_QWORD *)(a1 + 16);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v9, 0LL);
      v10 = *(_QWORD **)(a1 + 8);
      if ( *v10 != a1 )
        __fastfail(3u);
      *v8 = a1;
      v8[1] = v10;
      *v10 = v8;
      *(_DWORD *)(a1 + 32) += 250;
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
  return (PVOID)v4;
}
