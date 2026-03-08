/*
 * XREFs of ?Create@?$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x1C000D9EC
 * Callers:
 *     ?Initialize@?$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@AEAA_NXZ @ 0x1C000D90C (-Initialize@-$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@AEAA_NXZ.c)
 * Callees:
 *     ?Initialize@?$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x1C000DAAC (-Initialize@-$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 */

__int64 __fastcall NSInstrumentation::CSectionBitmapAllocator<36864,144>::Create(__int64 a1)
{
  __int64 Pool2; // rax
  __int64 v3; // rbx

  Pool2 = ExAllocatePool2(262LL, 40LL, 1869834581LL);
  v3 = Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)Pool2 = 0LL;
    *(_QWORD *)(Pool2 + 8) = 0LL;
    *(_QWORD *)(Pool2 + 16) = 0LL;
    *(_QWORD *)(Pool2 + 24) = 0LL;
    *(_DWORD *)(Pool2 + 32) = 0;
    *(_DWORD *)(Pool2 + 36) = 0;
    if ( (unsigned __int8)NSInstrumentation::CSectionBitmapAllocator<36864,144>::Initialize(Pool2, a1) )
      return v3;
    if ( *(_QWORD *)(v3 + 16) != *(_QWORD *)(v3 + 24) )
      RtlFindSetBits((PRTL_BITMAP)(*(_QWORD *)(v3 + 16) ^ *(_QWORD *)(v3 + 24)), 1u, 0);
    if ( *(_QWORD *)v3 )
      ExFreePoolWithTag(*(PVOID *)v3, 0);
    if ( *(_QWORD *)(v3 + 16) != *(_QWORD *)(v3 + 24) )
      ExFreePoolWithTag((PVOID)(*(_QWORD *)(v3 + 16) ^ *(_QWORD *)(v3 + 24)), 0);
    ExFreePoolWithTag((PVOID)v3, 0);
  }
  return 0LL;
}
