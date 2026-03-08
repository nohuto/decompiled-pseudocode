/*
 * XREFs of ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C01BF170
 * Callers:
 *     ?Create@?$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C000D8AC (-Create@-$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Allocate@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C00DC9D0 (-Allocate@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C00DF2A8 (-Allocate@-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C020143C (-Allocate@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Create@?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C02017C8 (-Create@-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Allocate@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C022B5FC (-Allocate@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Create@?$CSectionEntry@$0HAAA@$0HA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C022B96C (-Create@-$CSectionEntry@$0HAAA@$0HA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Create@?$CSectionEntry@$0DJAAA@$0DJA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C02B86AC (-Create@-$CSectionEntry@$0DJAAA@$0DJA@@NSInstrumentation@@SAPEAV12@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(_QWORD *a1)
{
  __int64 v1; // rdi
  void *v3; // rcx
  void *v4; // rcx

  v1 = a1[4];
  if ( v1 )
  {
    if ( *(_QWORD *)(v1 + 24) != *(_QWORD *)(v1 + 16) )
      RtlFindSetBits((PRTL_BITMAP)(*(_QWORD *)(v1 + 24) ^ *(_QWORD *)(v1 + 16)), 1u, 0);
    if ( *(_QWORD *)v1 )
      ExFreePoolWithTag(*(PVOID *)v1, 0);
    if ( *(_QWORD *)(v1 + 16) != *(_QWORD *)(v1 + 24) )
      ExFreePoolWithTag((PVOID)(*(_QWORD *)(v1 + 16) ^ *(_QWORD *)(v1 + 24)), 0);
    ExFreePoolWithTag((PVOID)v1, 0);
    a1[4] = 0LL;
  }
  v3 = (void *)a1[3];
  if ( v3 )
  {
    MmUnmapViewInSessionSpace(v3);
    a1[3] = 0LL;
  }
  v4 = (void *)a1[2];
  if ( v4 )
  {
    ObfDereferenceObject(v4);
    a1[2] = 0LL;
  }
}
