/*
 * XREFs of ?Destroy@?$CSectionBitmapAllocator@$0OAAAA@$0OAA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C00C8E10
 * Callers:
 *     ?Create@?$CSectionBitmapAllocator@$0OAAAA@$0OAA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x1C00C8D30 (-Create@-$CSectionBitmapAllocator@$0OAAAA@$0OAA@@NSInstrumentation@@SAPEAV12@QEAE@Z.c)
 *     ?Destroy@?$CSectionEntry@$0OAAAA@$0OAA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C00C8E88 (-Destroy@-$CSectionEntry@$0OAAAA@$0OAA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NSInstrumentation::CSectionBitmapAllocator<917504,3584>::Destroy(PVOID *P)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v3; // rcx

  v1 = (unsigned __int64)P[3];
  v3 = (unsigned __int64)P[2];
  if ( v1 != v3 )
    RtlFindSetBits((PRTL_BITMAP)(v1 ^ v3), 1u, 0);
  if ( *P )
    ExFreePoolWithTag(*P, 0);
  if ( P[3] != P[2] )
    ExFreePoolWithTag((PVOID)((unsigned __int64)P[3] ^ (unsigned __int64)P[2]), 0);
  ExFreePoolWithTag(P, 0);
}
