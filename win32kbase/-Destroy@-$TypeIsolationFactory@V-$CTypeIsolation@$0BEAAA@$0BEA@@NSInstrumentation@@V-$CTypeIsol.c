/*
 * XREFs of ?Destroy@?$TypeIsolationFactory@V?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@V?$CTypeIsolation@$0NPAAA@$0NPA@@2@V?$CTypeIsolation@$0IAAA@$0IA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SAXPEAPEAE@Z @ 0x1C00A0878
 * Callers:
 *     ?Destroy@?$TypeIsolationFactory@V?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@V?$CTypeIsolation@$0MAAA@$0MA@@2@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0NPAAA@$0NPA@@2@V?$CTypeIsolation@$0IAAA@$0IA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SAXPEAPEAE@Z @ 0x1C00A0420 (-Destroy@-$TypeIsolationFactory@V-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@V-$CTypeIsolat.c)
 * Callees:
 *     ??1?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAA@XZ @ 0x1C00A0920 (--1-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAA@XZ.c)
 *     ??1?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@IEAA@XZ @ 0x1C00A0998 (--1-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@IEAA@XZ.c)
 *     ??1?$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@IEAA@XZ @ 0x1C00A0A10 (--1-$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@IEAA@XZ.c)
 *     ??1?$CTypeIsolation@$0NPAAA@$0NPA@@NSInstrumentation@@IEAA@XZ @ 0x1C00A0A88 (--1-$CTypeIsolation@$0NPAAA@$0NPA@@NSInstrumentation@@IEAA@XZ.c)
 */

void __fastcall TypeIsolationFactory<NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<913408,3568>,NSInstrumentation::CTypeIsolation<32768,128>,NSInstrumentation::CTypeIsolation<233472,912>>::Destroy(
        _QWORD *a1)
{
  void *v1; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rbx

  v1 = (void *)a1[4];
  if ( v1 )
  {
    NSInstrumentation::CTypeIsolation<81920,320>::~CTypeIsolation<81920,320>(a1[4]);
    ExFreePoolWithTag(v1, 0);
  }
  v3 = (void *)a1[6];
  if ( v3 )
  {
    NSInstrumentation::CTypeIsolation<913408,3568>::~CTypeIsolation<913408,3568>(a1[6]);
    ExFreePoolWithTag(v3, 0);
  }
  v4 = (void *)a1[7];
  if ( v4 )
  {
    NSInstrumentation::CTypeIsolation<32768,128>::~CTypeIsolation<32768,128>(a1[7]);
    ExFreePoolWithTag(v4, 0);
  }
  v5 = (void *)a1[5];
  if ( v5 )
  {
    NSInstrumentation::CTypeIsolation<233472,912>::~CTypeIsolation<233472,912>(v5);
    ExFreePoolWithTag(v5, 0);
  }
}
