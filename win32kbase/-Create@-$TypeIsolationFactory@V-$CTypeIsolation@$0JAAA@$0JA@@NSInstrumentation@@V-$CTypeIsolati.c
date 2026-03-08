/*
 * XREFs of ?Create@?$TypeIsolationFactory@V?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0BFAAA@$0BFA@@2@V?$CTypeIsolation@$0BEAAA@$0KA@@2@V?$CTypeIsolation@$0GAAA@$0GA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@@@SA_NPEAPEAE@Z @ 0x1C00C833C
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C0320F10 (Win32kBaseDriverEntry.c)
 * Callees:
 *     ?Create@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C002918C (-Create@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Initialize@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAA_NXZ @ 0x1C0029254 (-Initialize@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ??1?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAA@XZ @ 0x1C00A05B0 (--1-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAA@XZ.c)
 *     ?Create@?$TypeIsolationFactory@V?$CTypeIsolation@$0BFAAA@$0BFA@@NSInstrumentation@@V?$CTypeIsolation@$0BEAAA@$0KA@@2@V?$CTypeIsolation@$0GAAA@$0GA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@@@SA_NPEAPEAE@Z @ 0x1C00C83D8 (-Create@-$TypeIsolationFactory@V-$CTypeIsolation@$0BFAAA@$0BFA@@NSInstrumentation@@V-$CTypeIsola.c)
 */

char TypeIsolationFactory<NSInstrumentation::CTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<86016,336>,NSInstrumentation::CTypeIsolation<81920,160>,NSInstrumentation::CTypeIsolation<24576,96>,NSInstrumentation::CTypeIsolation<28672,112>>::Create()
{
  _QWORD *ProcessorHistory; // rsi
  __int64 Pool2; // rax
  char v2; // di
  void *v3; // rbx
  void *v4; // rax

  ProcessorHistory = (_QWORD *)WPP_MAIN_CB.Dpc.ProcessorHistory;
  Pool2 = ExAllocatePool2(262LL, 40LL, 1869834581LL);
  v2 = 0;
  v3 = (void *)Pool2;
  if ( !Pool2 )
    return 0;
  *(_QWORD *)(Pool2 + 16) = 0LL;
  *(_QWORD *)(Pool2 + 24) = 0LL;
  *(_DWORD *)(Pool2 + 32) = 0;
  *(_BYTE *)(Pool2 + 36) = 0;
  *(_QWORD *)(Pool2 + 8) = Pool2;
  *(_QWORD *)Pool2 = Pool2;
  if ( !NSInstrumentation::CTypeIsolation<36864,144>::Initialize(Pool2) )
  {
    NSInstrumentation::CTypeIsolation<36864,144>::~CTypeIsolation<36864,144>((__int64)v3);
    ExFreePoolWithTag(v3, 0);
    return 0;
  }
  *ProcessorHistory = v3;
  v4 = NSInstrumentation::CTypeIsolation<40960,160>::Create();
  if ( v4 )
  {
    ProcessorHistory[1] = v4;
    return TypeIsolationFactory<NSInstrumentation::CTypeIsolation<86016,336>,NSInstrumentation::CTypeIsolation<81920,160>,NSInstrumentation::CTypeIsolation<24576,96>,NSInstrumentation::CTypeIsolation<28672,112>>::Create(ProcessorHistory);
  }
  return v2;
}
