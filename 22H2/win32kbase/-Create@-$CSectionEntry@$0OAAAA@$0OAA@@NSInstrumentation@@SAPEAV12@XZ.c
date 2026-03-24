/*
 * XREFs of ?Create@?$CSectionEntry@$0OAAAA@$0OAA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C00C8DAC
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C00C8AFC (-Allocate@-$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@IEAA_NXZ @ 0x1C00CB740 (-Initialize@-$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@IEAA_NXZ.c)
 * Callees:
 *     ?Destroy@?$CSectionEntry@$0OAAAA@$0OAA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C00C8E88 (-Destroy@-$CSectionEntry@$0OAAAA@$0OAA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Initialize@?$CSectionEntry@$0OAAAA@$0OAA@@NSInstrumentation@@AEAA_NXZ @ 0x1C00C9190 (-Initialize@-$CSectionEntry@$0OAAAA@$0OAA@@NSInstrumentation@@AEAA_NXZ.c)
 */

void *NSInstrumentation::CSectionEntry<917504,3584>::Create()
{
  _QWORD *PoolWithTag; // rax
  void *v1; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 0x28uLL, 0x6F736955u);
  v1 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  PoolWithTag[2] = 0LL;
  PoolWithTag[3] = 0LL;
  PoolWithTag[4] = 0LL;
  if ( !(unsigned __int8)NSInstrumentation::CSectionEntry<917504,3584>::Initialize(PoolWithTag) )
  {
    NSInstrumentation::CSectionEntry<917504,3584>::Destroy(v1);
    return 0LL;
  }
  return v1;
}
