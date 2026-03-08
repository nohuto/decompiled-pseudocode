/*
 * XREFs of ?Allocate@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C00DC9D0
 * Callers:
 *     InternalRegisterClassEx @ 0x1C0030830 (InternalRegisterClassEx.c)
 *     ??$UserAllocateIsolatedType@V?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1C0109744 (--$UserAllocateIsolatedType@V-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@@@YAPEAXXZ.c)
 * Callees:
 *     ?Create@?$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C000D8AC (-Create@-$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Allocate@?$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C00DCA80 (-Allocate@-$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@QEAAPEAXXZ.c)
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C01BF170 (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 */

PVOID __fastcall NSInstrumentation::CTypeIsolation<36864,144>::Allocate(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // r8
  _QWORD *i; // rsi
  __int64 v6; // r14
  _QWORD *v8; // rax
  _QWORD *v9; // rsi
  __int64 v10; // rbx
  _QWORD *v11; // rax

  if ( *(_BYTE *)(a1 + 36) )
    return ExAllocateFromPagedLookasideList(*(PPAGED_LOOKASIDE_LIST *)(a1 + 24));
  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v2, 0LL);
  for ( i = *(_QWORD **)a1; i != (_QWORD *)a1; i = (_QWORD *)*i )
  {
    v6 = NSInstrumentation::CSectionBitmapAllocator<36864,144>::Allocate(i[4]);
    if ( v6 )
    {
      ExReleasePushLockSharedEx(v2, 0LL, v4);
      KeLeaveCriticalRegion();
      return (PVOID)v6;
    }
  }
  ExReleasePushLockSharedEx(v2, 0LL, v4);
  KeLeaveCriticalRegion();
  v8 = NSInstrumentation::CSectionEntry<36864,144>::Create();
  v9 = v8;
  if ( v8 )
  {
    v3 = NSInstrumentation::CSectionBitmapAllocator<36864,144>::Allocate(v8[4]);
    if ( v3 )
    {
      v10 = *(_QWORD *)(a1 + 16);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v10, 0LL);
      v11 = *(_QWORD **)(a1 + 8);
      if ( *v11 != a1 )
        __fastfail(3u);
      *v9 = a1;
      v9[1] = v11;
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
  return (PVOID)v3;
}
