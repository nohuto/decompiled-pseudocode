/*
 * XREFs of ?PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z @ 0x1C008DABC
 * Callers:
 *     ?Initialize@?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA_NXZ @ 0x1C008C038 (-Initialize@-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Initialize@?$CSectionEntry@$0DJAAA@$0DJA@@NSInstrumentation@@AEAA_NXZ @ 0x1C008C2BC (-Initialize@-$CSectionEntry@$0DJAAA@$0DJA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Initialize@?$CSectionEntry@$0BEAAA@$0KA@@NSInstrumentation@@AEAA_NXZ @ 0x1C008C4B8 (-Initialize@-$CSectionEntry@$0BEAAA@$0KA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Initialize@?$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@AEAA_NXZ @ 0x1C008C6B4 (-Initialize@-$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Initialize@?$CSectionEntry@$0BEAAA@$0BEA@@NSInstrumentation@@AEAA_NXZ @ 0x1C008C774 (-Initialize@-$CSectionEntry@$0BEAAA@$0BEA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Initialize@?$CSectionEntry@$0KAAA@$0KA@@NSInstrumentation@@AEAA_NXZ @ 0x1C008CEA4 (-Initialize@-$CSectionEntry@$0KAAA@$0KA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Initialize@?$CSectionEntry@$0BFAAA@$0BFA@@NSInstrumentation@@AEAA_NXZ @ 0x1C008D0A0 (-Initialize@-$CSectionEntry@$0BFAAA@$0BFA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Initialize@?$CSectionEntry@$0HAAA@$0HA@@NSInstrumentation@@AEAA_NXZ @ 0x1C008D474 (-Initialize@-$CSectionEntry@$0HAAA@$0HA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Initialize@?$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@AEAA_NXZ @ 0x1C008D818 (-Initialize@-$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Initialize@?$CSectionEntry@$0CMAAA@$0CMA@@NSInstrumentation@@AEAA_NXZ @ 0x1C008D8D8 (-Initialize@-$CSectionEntry@$0CMAAA@$0CMA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Initialize@?$CSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@AEAA_NXZ @ 0x1C00DA0A4 (-Initialize@-$CSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall NSInstrumentation::PlatformCreateSection(NSInstrumentation *this)
{
  __int64 v1; // rbx
  int v2; // edi
  int v4; // [rsp+58h] [rbp+10h] BYREF
  int v5; // [rsp+5Ch] [rbp+14h]
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  v1 = 0LL;
  v2 = (int)this;
  v5 = 0;
  v4 = (int)this;
  Object = 0LL;
  if ( (unsigned int)MmCreateSection(&Object, 983071LL, 0LL, &v4, 4, 0x4000000, 0LL, 0LL) || v4 == v2 && !v5 )
    return Object;
  ObfDereferenceObject(Object);
  return (PVOID)v1;
}
