/*
 * XREFs of ?Allocate@?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C00B37DC
 * Callers:
 *     ?pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z @ 0x1C00A7F48 (-pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z.c)
 * Callees:
 *     ?Create@?$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C008D094 (-Create@-$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C0091344 (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 *     ?Allocate@?$CSectionBitmapAllocator@$0MAAA@$0MA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C00B3870 (-Allocate@-$CSectionBitmapAllocator@$0MAAA@$0MA@@NSInstrumentation@@QEAAPEAXXZ.c)
 */

PVOID __fastcall NSInstrumentation::CTypeIsolation<49152,192>::Allocate(__int64 a1)
{
  __int64 v3; // r14
  _QWORD *i; // rsi
  __int64 v5; // rbx
  __int64 v6; // rbp
  _QWORD *v7; // rax
  _QWORD *v8; // rsi
  __int64 v9; // rbx
  _QWORD *v10; // rax

  if ( *(_BYTE *)(a1 + 36) )
    return ExAllocateFromPagedLookasideList(*(PPAGED_LOOKASIDE_LIST *)(a1 + 24));
  v5 = *(_QWORD *)(a1 + 16);
  v6 = 0LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v5, 0LL);
  for ( i = *(_QWORD **)a1; i != (_QWORD *)a1; i = (_QWORD *)*i )
  {
    v3 = NSInstrumentation::CSectionBitmapAllocator<49152,192>::Allocate(i[4]);
    if ( v3 )
    {
      ExReleasePushLockSharedEx(v5, 0LL);
      KeLeaveCriticalRegion();
      return (PVOID)v3;
    }
  }
  ExReleasePushLockSharedEx(v5, 0LL);
  KeLeaveCriticalRegion();
  v7 = NSInstrumentation::CSectionEntry<49152,192>::Create();
  v8 = v7;
  if ( v7 )
  {
    v6 = NSInstrumentation::CSectionBitmapAllocator<49152,192>::Allocate(v7[4]);
    if ( v6 )
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
  return (PVOID)v6;
}
