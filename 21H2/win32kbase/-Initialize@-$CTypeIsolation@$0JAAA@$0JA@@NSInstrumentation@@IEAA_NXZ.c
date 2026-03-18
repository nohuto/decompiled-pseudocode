/*
 * XREFs of ?Initialize@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAA_NXZ @ 0x1C008CCC4
 * Callers:
 *     ?Create@?$TypeIsolationFactory@V?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0BFAAA@$0BFA@@2@V?$CTypeIsolation@$0BEAAA@$0KA@@2@V?$CTypeIsolation@$0GAAA@$0GA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@@@SA_NPEAPEAE@Z @ 0x1C008B8F0 (-Create@-$TypeIsolationFactory@V-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V-$CTypeIsolati.c)
 *     ?Initialize@?$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@QEAA_NXZ @ 0x1C008BB18 (-Initialize@-$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@QEAA_NXZ.c)
 * Callees:
 *     ?Create@?$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C008D7B8 (-Create@-$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?PlatformDebugModeEnabled@NSInstrumentation@@YA_NXZ @ 0x1C008DB3C (-PlatformDebugModeEnabled@NSInstrumentation@@YA_NXZ.c)
 */

char __fastcall NSInstrumentation::CTypeIsolation<36864,144>::Initialize(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rcx
  struct _PAGED_LOOKASIDE_LIST *Pool2; // rax

  if ( NSInstrumentation::PlatformDebugModeEnabled((NSInstrumentation *)a1) )
  {
    *(_BYTE *)(a1 + 36) = 1;
    Pool2 = (struct _PAGED_LOOKASIDE_LIST *)ExAllocatePool2(66LL, 128LL);
    *(_QWORD *)(a1 + 24) = Pool2;
    if ( Pool2 )
    {
      ExInitializePagedLookasideList(
        Pool2,
        _lambda_29ba820c7a8735764b0788aa326625cd_::_lambda_invoker_cdecl_<enum _POOL_TYPE,unsigned __int64,unsigned long>,
        _lambda_63d17d6d41434870d2c55e28a74f5cc8_::_lambda_invoker_cdecl_<void *>,
        0x220u,
        0x90uLL,
        0x6F736955u,
        0x100u);
      return 1;
    }
  }
  else
  {
    v2 = (_QWORD *)ExAllocatePool2(262LL, 8LL);
    *(_QWORD *)(a1 + 16) = v2;
    if ( v2 )
    {
      *v2 = 0LL;
      v3 = (_QWORD *)NSInstrumentation::CSectionEntry<36864,144>::Create();
      if ( v3 )
      {
        v4 = *(_QWORD **)(a1 + 8);
        *(_DWORD *)(a1 + 32) = 252;
        if ( *v4 != a1 )
          __fastfail(3u);
        *v3 = a1;
        v3[1] = v4;
        *v4 = v3;
        *(_QWORD *)(a1 + 8) = v3;
        return 1;
      }
    }
  }
  return 0;
}
