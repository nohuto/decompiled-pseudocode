/*
 * XREFs of ?Initialize@?$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@IEAA_NXZ @ 0x1C002C6E4
 * Callers:
 *     ?Create@?$TypeIsolationFactory@V?$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SA_NPEAPEAE@Z @ 0x1C00C52E0 (-Create@-$TypeIsolationFactory@V-$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@V-$CTypeIsolati.c)
 * Callees:
 *     ?Create@?$CSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C0029CB8 (-Create@-$CSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?PlatformDebugModeEnabled@NSInstrumentation@@YA_NXZ @ 0x1C002B480 (-PlatformDebugModeEnabled@NSInstrumentation@@YA_NXZ.c)
 */

char __fastcall NSInstrumentation::CTypeIsolation<32768,128>::Initialize(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rcx
  struct _PAGED_LOOKASIDE_LIST *Pool2; // rax

  if ( NSInstrumentation::PlatformDebugModeEnabled((NSInstrumentation *)a1) )
  {
    *(_BYTE *)(a1 + 36) = 1;
    Pool2 = (struct _PAGED_LOOKASIDE_LIST *)ExAllocatePool2(66LL, 128LL, 1869834581LL);
    *(_QWORD *)(a1 + 24) = Pool2;
    if ( Pool2 )
    {
      ExInitializePagedLookasideList(
        Pool2,
        _lambda_29ba820c7a8735764b0788aa326625cd_::_lambda_invoker_cdecl_<enum _POOL_TYPE,unsigned __int64,unsigned long>,
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>,
        0x220u,
        0x80uLL,
        0x6F736955u,
        0x100u);
      return 1;
    }
  }
  else
  {
    v2 = (_QWORD *)ExAllocatePool2(262LL, 8LL, 1869834581LL);
    *(_QWORD *)(a1 + 16) = v2;
    if ( v2 )
    {
      *v2 = 0LL;
      v3 = NSInstrumentation::CSectionEntry<32768,128>::Create();
      if ( v3 )
      {
        *(_DWORD *)(a1 + 32) = 256;
        v4 = *(_QWORD **)(a1 + 8);
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
