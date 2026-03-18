/*
 * XREFs of ?Create@?$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x1C008C098
 * Callers:
 *     ?Initialize@?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA_NXZ @ 0x1C008C038 (-Initialize@-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Initialize@?$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@AEAA_NXZ @ 0x1C008C6B4 (-Initialize@-$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Initialize@?$CSectionEntry@$0BFAAA@$0BFA@@NSInstrumentation@@AEAA_NXZ @ 0x1C008D0A0 (-Initialize@-$CSectionEntry@$0BFAAA@$0BFA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Initialize@?$CSectionEntry@$0HAAA@$0HA@@NSInstrumentation@@AEAA_NXZ @ 0x1C008D474 (-Initialize@-$CSectionEntry@$0HAAA@$0HA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Initialize@?$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@AEAA_NXZ @ 0x1C008D818 (-Initialize@-$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@AEAA_NXZ.c)
 * Callees:
 *     ?Initialize@?$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x1C008C110 (-Initialize@-$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 */

__int64 __fastcall NSInstrumentation::CSectionBitmapAllocator<24576,96>::Create(__int64 a1)
{
  __int64 Pool2; // rax
  __int64 v3; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx

  Pool2 = ExAllocatePool2(262LL, 40LL);
  v3 = Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)Pool2 = 0LL;
    *(_QWORD *)(Pool2 + 8) = 0LL;
    *(_QWORD *)(Pool2 + 16) = 0LL;
    *(_QWORD *)(Pool2 + 24) = 0LL;
    *(_DWORD *)(Pool2 + 32) = 0;
    *(_DWORD *)(Pool2 + 36) = 0;
    if ( (unsigned __int8)NSInstrumentation::CSectionBitmapAllocator<28672,112>::Initialize(Pool2, a1) )
      return v3;
    v5 = *(_QWORD *)(v3 + 24);
    v6 = *(_QWORD *)(v3 + 16);
    if ( v5 != v6 )
      RtlFindSetBits((PRTL_BITMAP)(v5 ^ v6), 1u, 0);
    if ( *(_QWORD *)v3 )
      ExFreePoolWithTag(*(PVOID *)v3, 0);
    if ( *(_QWORD *)(v3 + 16) != *(_QWORD *)(v3 + 24) )
      ExFreePoolWithTag((PVOID)(*(_QWORD *)(v3 + 16) ^ *(_QWORD *)(v3 + 24)), 0);
    ExFreePoolWithTag((PVOID)v3, 0);
  }
  return 0LL;
}
