/*
 * XREFs of ?Create@?$TypeIsolationFactory@V?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@V?$CTypeIsolation@$0HAAA@$0HA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SA_NPEAPEAE@Z @ 0x1C00DB490
 * Callers:
 *     ?Create@?$TypeIsolationFactory@V?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@V?$CTypeIsolation@$0NOAAA@$0NOA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SA_NPEAPEAE@Z @ 0x1C00DB390 (-Create@-$TypeIsolationFactory@V-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@V-$CTypeIsola.c)
 * Callees:
 *     ?Create@?$TypeIsolationFactory@V?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@SA_NPEAPEAE@Z @ 0x1C008BB84 (-Create@-$TypeIsolationFactory@V-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@SA_NPEAPEAE.c)
 *     ?Create@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C008CC5C (-Create@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Destroy@?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C00DB530 (-Destroy@-$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Initialize@?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAA_NXZ @ 0x1C00DB55C (-Initialize@-$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAA_NXZ.c)
 */

char __fastcall TypeIsolationFactory<NSInstrumentation::CTypeIsolation<909312,3552>,NSInstrumentation::CTypeIsolation<28672,112>,NSInstrumentation::CTypeIsolation<233472,912>>::Create(
        __int64 a1)
{
  __int64 Pool2; // rax
  char v3; // di
  void *v4; // rbx
  void *v6; // rax

  Pool2 = ExAllocatePool2(262LL, 40LL);
  v3 = 0;
  v4 = (void *)Pool2;
  if ( !Pool2 )
    return 0;
  *(_QWORD *)(Pool2 + 16) = 0LL;
  *(_QWORD *)(Pool2 + 24) = 0LL;
  *(_DWORD *)(Pool2 + 32) = 0;
  *(_BYTE *)(Pool2 + 36) = 0;
  *(_QWORD *)(Pool2 + 8) = Pool2;
  *(_QWORD *)Pool2 = Pool2;
  if ( !(unsigned __int8)NSInstrumentation::CTypeIsolation<909312,3552>::Initialize(Pool2) )
  {
    NSInstrumentation::CTypeIsolation<909312,3552>::Destroy(v4);
    return 0;
  }
  *(_QWORD *)(a1 + 48) = v4;
  v6 = NSInstrumentation::CTypeIsolation<28672,112>::Create();
  if ( v6 )
  {
    *(_QWORD *)(a1 + 56) = v6;
    return TypeIsolationFactory<NSInstrumentation::CTypeIsolation<233472,912>>::Create(a1);
  }
  return v3;
}
