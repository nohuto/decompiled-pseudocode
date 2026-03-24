/*
 * XREFs of ?Destroy@?$CSectionEntry@$0OAAAA@$0OAA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C00C8B98
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C00C880C (-Allocate@-$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Create@?$CSectionEntry@$0OAAAA@$0OAA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C00C8ABC (-Create@-$CSectionEntry@$0OAAAA@$0OAA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Destroy@?$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C00CB158 (-Destroy@-$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 * Callees:
 *     ?Destroy@?$CSectionBitmapAllocator@$0OAAAA@$0OAA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C00C8B20 (-Destroy@-$CSectionBitmapAllocator@$0OAAAA@$0OAA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 */

void __fastcall NSInstrumentation::CSectionEntry<917504,3584>::Destroy(_QWORD *P)
{
  PVOID *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = (PVOID *)P[4];
  if ( v2 )
  {
    NSInstrumentation::CSectionBitmapAllocator<917504,3584>::Destroy(v2);
    P[4] = 0LL;
  }
  v3 = (void *)P[3];
  if ( v3 )
  {
    MmUnmapViewInSessionSpace(v3);
    P[3] = 0LL;
  }
  v4 = (void *)P[2];
  if ( v4 )
  {
    ObfDereferenceObject(v4);
    P[2] = 0LL;
  }
  ExFreePoolWithTag(P, 0);
}
