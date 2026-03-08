/*
 * XREFs of ?Destroy@?$TypeIsolationFactory@V?$CTypeIsolation@$0BFAAA@$0BFA@@NSInstrumentation@@V?$CTypeIsolation@$0BEAAA@$0KA@@2@V?$CTypeIsolation@$0GAAA@$0GA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@@@SAXPEAPEAE@Z @ 0x1C00A051C
 * Callers:
 *     ?Destroy@?$TypeIsolationFactory@V?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0BFAAA@$0BFA@@2@V?$CTypeIsolation@$0BEAAA@$0KA@@2@V?$CTypeIsolation@$0GAAA@$0GA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@@@SAXPEAPEAE@Z @ 0x1C00A04C0 (-Destroy@-$TypeIsolationFactory@V-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V-$CTypeIsolat.c)
 * Callees:
 *     ??1?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAA@XZ @ 0x1C00A06A0 (--1-$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAA@XZ.c)
 *     ??1?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAA@XZ @ 0x1C00A06F0 (--1-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAA@XZ.c)
 *     ??1?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAA@XZ @ 0x1C00A0740 (--1-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAA@XZ.c)
 *     ??1?$CTypeIsolation@$0BFAAA@$0BFA@@NSInstrumentation@@IEAA@XZ @ 0x1C00A0790 (--1-$CTypeIsolation@$0BFAAA@$0BFA@@NSInstrumentation@@IEAA@XZ.c)
 */

void __fastcall TypeIsolationFactory<NSInstrumentation::CTypeIsolation<86016,336>,NSInstrumentation::CTypeIsolation<81920,160>,NSInstrumentation::CTypeIsolation<24576,96>,NSInstrumentation::CTypeIsolation<28672,112>>::Destroy(
        _QWORD *a1)
{
  void *v1; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rbx

  v1 = (void *)a1[2];
  if ( v1 )
  {
    NSInstrumentation::CTypeIsolation<86016,336>::~CTypeIsolation<86016,336>(a1[2]);
    ExFreePoolWithTag(v1, 0);
  }
  v3 = (void *)a1[3];
  if ( v3 )
  {
    NSInstrumentation::CTypeIsolation<81920,160>::~CTypeIsolation<81920,160>(a1[3]);
    ExFreePoolWithTag(v3, 0);
  }
  v4 = (void *)a1[4];
  if ( v4 )
  {
    NSInstrumentation::CTypeIsolation<24576,96>::~CTypeIsolation<24576,96>(a1[4]);
    ExFreePoolWithTag(v4, 0);
  }
  v5 = (void *)a1[5];
  if ( v5 )
  {
    NSInstrumentation::CTypeIsolation<28672,112>::~CTypeIsolation<28672,112>(v5);
    ExFreePoolWithTag(v5, 0);
  }
}
