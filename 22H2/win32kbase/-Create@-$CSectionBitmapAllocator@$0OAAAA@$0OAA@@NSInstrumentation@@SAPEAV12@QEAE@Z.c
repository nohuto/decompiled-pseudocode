/*
 * XREFs of ?Create@?$CSectionBitmapAllocator@$0OAAAA@$0OAA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x1C00C8D30
 * Callers:
 *     ?Initialize@?$CSectionEntry@$0OAAAA@$0OAA@@NSInstrumentation@@AEAA_NXZ @ 0x1C00C9190 (-Initialize@-$CSectionEntry@$0OAAAA@$0OAA@@NSInstrumentation@@AEAA_NXZ.c)
 * Callees:
 *     ?Destroy@?$CSectionBitmapAllocator@$0OAAAA@$0OAA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C00C8E10 (-Destroy@-$CSectionBitmapAllocator@$0OAAAA@$0OAA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Initialize@?$CSectionBitmapAllocator@$0OAAAA@$0OAA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x1C00C90C8 (-Initialize@-$CSectionBitmapAllocator@$0OAAAA@$0OAA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 */

void *__fastcall NSInstrumentation::CSectionBitmapAllocator<917504,3584>::Create(__int64 a1)
{
  _QWORD *PoolWithTag; // rax
  void *v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 0x28uLL, 0x6F736955u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  *PoolWithTag = 0LL;
  PoolWithTag[1] = 0LL;
  PoolWithTag[2] = 0LL;
  PoolWithTag[3] = 0LL;
  *((_DWORD *)PoolWithTag + 8) = 0;
  *((_DWORD *)PoolWithTag + 9) = 0;
  if ( !(unsigned __int8)NSInstrumentation::CSectionBitmapAllocator<917504,3584>::Initialize(PoolWithTag, a1) )
  {
    NSInstrumentation::CSectionBitmapAllocator<917504,3584>::Destroy(v3);
    return 0LL;
  }
  return v3;
}
