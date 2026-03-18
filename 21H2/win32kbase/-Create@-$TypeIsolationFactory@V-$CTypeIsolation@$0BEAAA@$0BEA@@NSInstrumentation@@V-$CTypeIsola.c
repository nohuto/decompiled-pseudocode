/*
 * XREFs of ?Create@?$TypeIsolationFactory@V?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@V?$CTypeIsolation@$0NOAAA@$0NOA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SA_NPEAPEAE@Z @ 0x1C00DB390
 * Callers:
 *     ?Create@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0NOAAA@$0NOA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SA_NPEAPEAE@Z @ 0x1C00DB300 (-Create@-$TypeIsolationFactory@V-$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V-$CTy.c)
 * Callees:
 *     ?Initialize@?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAA_NXZ @ 0x1C008BED0 (-Initialize@-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Destroy@?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C00BB4D0 (-Destroy@-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Create@?$TypeIsolationFactory@V?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@V?$CTypeIsolation@$0HAAA@$0HA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SA_NPEAPEAE@Z @ 0x1C00DB490 (-Create@-$TypeIsolationFactory@V-$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@V-$CTypeIsola.c)
 */

char __fastcall TypeIsolationFactory<NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<909312,3552>,NSInstrumentation::CTypeIsolation<28672,112>,NSInstrumentation::CTypeIsolation<233472,912>>::Create(
        __int64 a1)
{
  __int64 Pool2; // rax
  void *v3; // rbx

  Pool2 = ExAllocatePool2(262LL, 40LL);
  v3 = (void *)Pool2;
  if ( !Pool2 )
    return 0;
  *(_QWORD *)(Pool2 + 16) = 0LL;
  *(_QWORD *)(Pool2 + 24) = 0LL;
  *(_DWORD *)(Pool2 + 32) = 0;
  *(_BYTE *)(Pool2 + 36) = 0;
  *(_QWORD *)(Pool2 + 8) = Pool2;
  *(_QWORD *)Pool2 = Pool2;
  if ( !NSInstrumentation::CTypeIsolation<81920,320>::Initialize(Pool2) )
  {
    NSInstrumentation::CTypeIsolation<233472,912>::Destroy(v3);
    return 0;
  }
  *(_QWORD *)(a1 + 32) = v3;
  return TypeIsolationFactory<NSInstrumentation::CTypeIsolation<909312,3552>,NSInstrumentation::CTypeIsolation<28672,112>,NSInstrumentation::CTypeIsolation<233472,912>>::Create(a1);
}
