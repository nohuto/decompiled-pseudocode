/*
 * XREFs of ?Destroy@?$TypeIsolationFactory@V?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0BFAAA@$0BFA@@2@V?$CTypeIsolation@$0BEAAA@$0KA@@2@V?$CTypeIsolation@$0GAAA@$0GA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@@@SAXPEAPEAE@Z @ 0x1C00A04C0
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C015C290 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     ?Destroy@?$TypeIsolationFactory@V?$CTypeIsolation@$0BFAAA@$0BFA@@NSInstrumentation@@V?$CTypeIsolation@$0BEAAA@$0KA@@2@V?$CTypeIsolation@$0GAAA@$0GA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@@@SAXPEAPEAE@Z @ 0x1C00A051C (-Destroy@-$TypeIsolationFactory@V-$CTypeIsolation@$0BFAAA@$0BFA@@NSInstrumentation@@V-$CTypeIsol.c)
 *     ??1?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAA@XZ @ 0x1C00A05B0 (--1-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAA@XZ.c)
 *     ??1?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAA@XZ @ 0x1C00A0628 (--1-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAA@XZ.c)
 */

__int64 TypeIsolationFactory<NSInstrumentation::CTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<86016,336>,NSInstrumentation::CTypeIsolation<81920,160>,NSInstrumentation::CTypeIsolation<24576,96>,NSInstrumentation::CTypeIsolation<28672,112>>::Destroy()
{
  KAFFINITY ProcessorHistory; // rbx
  void *v1; // rdi
  void *v2; // rdi

  ProcessorHistory = WPP_MAIN_CB.Dpc.ProcessorHistory;
  v1 = *(void **)WPP_MAIN_CB.Dpc.ProcessorHistory;
  if ( *(_QWORD *)WPP_MAIN_CB.Dpc.ProcessorHistory )
  {
    NSInstrumentation::CTypeIsolation<36864,144>::~CTypeIsolation<36864,144>(*(_QWORD *)WPP_MAIN_CB.Dpc.ProcessorHistory);
    ExFreePoolWithTag(v1, 0);
  }
  v2 = *(void **)(ProcessorHistory + 8);
  if ( v2 )
  {
    NSInstrumentation::CTypeIsolation<40960,160>::~CTypeIsolation<40960,160>(*(_QWORD *)(ProcessorHistory + 8));
    ExFreePoolWithTag(v2, 0);
  }
  return TypeIsolationFactory<NSInstrumentation::CTypeIsolation<86016,336>,NSInstrumentation::CTypeIsolation<81920,160>,NSInstrumentation::CTypeIsolation<24576,96>,NSInstrumentation::CTypeIsolation<28672,112>>::Destroy(ProcessorHistory);
}
