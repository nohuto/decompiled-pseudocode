/*
 * XREFs of ?Create@?$CSectionBitmapAllocator@$0OAAAA@$0OAA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x1C00D1C64
 * Callers:
 *     ?Initialize@?$CSectionEntry@$0OAAAA@$0OAA@@NSInstrumentation@@AEAA_NXZ @ 0x1C00D205C (-Initialize@-$CSectionEntry@$0OAAAA@$0OAA@@NSInstrumentation@@AEAA_NXZ.c)
 * Callees:
 *     ?Destroy@?$CSectionBitmapAllocator@$0OAAAA@$0OAA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C00D1D48 (-Destroy@-$CSectionBitmapAllocator@$0OAAAA@$0OAA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Initialize@?$CSectionBitmapAllocator@$0OAAAA@$0OAA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x1C00D1F90 (-Initialize@-$CSectionBitmapAllocator@$0OAAAA@$0OAA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 */

void *__fastcall NSInstrumentation::CSectionBitmapAllocator<917504,3584>::Create(__int64 a1)
{
  __int64 Pool2; // rax
  void *v3; // rbx

  Pool2 = ExAllocatePool2(262LL, 40LL, 1869834581LL);
  v3 = (void *)Pool2;
  if ( !Pool2 )
    return 0LL;
  *(_QWORD *)Pool2 = 0LL;
  *(_QWORD *)(Pool2 + 8) = 0LL;
  *(_QWORD *)(Pool2 + 16) = 0LL;
  *(_QWORD *)(Pool2 + 24) = 0LL;
  *(_DWORD *)(Pool2 + 32) = 0;
  *(_DWORD *)(Pool2 + 36) = 0;
  if ( !(unsigned __int8)NSInstrumentation::CSectionBitmapAllocator<917504,3584>::Initialize(Pool2, a1) )
  {
    NSInstrumentation::CSectionBitmapAllocator<917504,3584>::Destroy(v3);
    return 0LL;
  }
  return v3;
}
