/*
 * XREFs of ?Initialize@?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAA_NXZ @ 0x1C00DB55C
 * Callers:
 *     ?Create@?$TypeIsolationFactory@V?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@V?$CTypeIsolation@$0HAAA@$0HA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SA_NPEAPEAE@Z @ 0x1C00DB490 (-Create@-$TypeIsolationFactory@V-$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@V-$CTypeIsola.c)
 * Callees:
 *     ?PlatformDebugModeEnabled@NSInstrumentation@@YA_NXZ @ 0x1C008DB3C (-PlatformDebugModeEnabled@NSInstrumentation@@YA_NXZ.c)
 *     ?Create@?$CSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C00D9CFC (-Create@-$CSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@XZ.c)
 */

char __fastcall NSInstrumentation::CTypeIsolation<909312,3552>::Initialize(__int64 a1)
{
  _QWORD *Pool2; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rcx
  struct _PAGED_LOOKASIDE_LIST *v5; // rax

  if ( !NSInstrumentation::PlatformDebugModeEnabled((NSInstrumentation *)a1) )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(262LL, 8LL);
    *(_QWORD *)(a1 + 16) = Pool2;
    if ( Pool2 )
    {
      *Pool2 = 0LL;
      v3 = NSInstrumentation::CSectionEntry<909312,3552>::Create();
      if ( v3 )
      {
        v4 = *(_QWORD **)(a1 + 8);
        *(_DWORD *)(a1 + 32) = 222;
        if ( *v4 != a1 )
          __fastfail(3u);
        *v3 = a1;
        v3[1] = v4;
        *v4 = v3;
        *(_QWORD *)(a1 + 8) = v3;
        return 1;
      }
    }
    return 0;
  }
  *(_BYTE *)(a1 + 36) = 1;
  v5 = (struct _PAGED_LOOKASIDE_LIST *)ExAllocatePool2(66LL, 128LL);
  *(_QWORD *)(a1 + 24) = v5;
  if ( !v5 )
    return 0;
  ExInitializePagedLookasideList(
    v5,
    (PALLOCATE_FUNCTION)_lambda_29ba820c7a8735764b0788aa326625cd_::_lambda_invoker_cdecl_<enum _POOL_TYPE,unsigned __int64,unsigned long>,
    (PFREE_FUNCTION)_lambda_63d17d6d41434870d2c55e28a74f5cc8_::_lambda_invoker_cdecl_<void *>,
    0x220u,
    0xDE0uLL,
    0x6F736955u,
    0x100u);
  return 1;
}
