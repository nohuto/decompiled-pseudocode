/*
 * XREFs of ?Allocate@?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C00C1730
 * Callers:
 *     ?pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z @ 0x1C001CAAC (-pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z.c)
 * Callees:
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C009FFD0 (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 *     ?Allocate@?$CSectionBitmapAllocator@$0MAAA@$0MA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C00C17E0 (-Allocate@-$CSectionBitmapAllocator@$0MAAA@$0MA@@NSInstrumentation@@QEAAPEAXXZ.c)
 *     ?Create@?$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C00C4ED0 (-Create@-$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAPEAV12@XZ.c)
 */

PVOID __fastcall NSInstrumentation::CTypeIsolation<49152,192>::Allocate(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  _QWORD *i; // rsi
  __int64 v5; // r14
  __int64 v7; // rax
  _QWORD *v8; // rsi
  __int64 v9; // rbx
  _QWORD *v10; // rax

  if ( *(_BYTE *)(a1 + 36) )
    return ExAllocateFromPagedLookasideList(*(PPAGED_LOOKASIDE_LIST *)(a1 + 24));
  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v2, 0LL);
  for ( i = *(_QWORD **)a1; i != (_QWORD *)a1; i = (_QWORD *)*i )
  {
    v5 = NSInstrumentation::CSectionBitmapAllocator<49152,192>::Allocate(i[4]);
    if ( v5 )
    {
      ExReleasePushLockSharedEx(v2, 0LL);
      KeLeaveCriticalRegion();
      return (PVOID)v5;
    }
  }
  ExReleasePushLockSharedEx(v2, 0LL);
  KeLeaveCriticalRegion();
  v7 = NSInstrumentation::CSectionEntry<49152,192>::Create();
  v8 = (_QWORD *)v7;
  if ( v7 )
  {
    v3 = NSInstrumentation::CSectionBitmapAllocator<49152,192>::Allocate(*(_QWORD *)(v7 + 32));
    if ( v3 )
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
  return (PVOID)v3;
}
