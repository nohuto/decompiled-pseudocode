char __fastcall NSInstrumentation::CLookAsideTypeIsolation<221184,864>::Initialize(__int64 a1)
{
  NSInstrumentation *v2; // rcx
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rcx
  struct _PAGED_LOOKASIDE_LIST *Pool2; // rax

  ExInitializeLookasideListEx(
    (PLOOKASIDE_LIST_EX)(a1 + 48),
    (PALLOCATE_FUNCTION_EX)_lambda_52ccb54780299a4e07ee11c360aca89b_::_lambda_invoker_cdecl_<enum _POOL_TYPE,unsigned __int64,unsigned long,_LOOKASIDE_LIST_EX *>,
    (PFREE_FUNCTION_EX)_lambda_e7a726a5677ec7d6a7448e8985ca7462_::_lambda_invoker_cdecl_<void *,_LOOKASIDE_LIST_EX *>,
    (POOL_TYPE)512,
    2u,
    0x360uLL,
    0x616C6947u,
    0x100u);
  if ( NSInstrumentation::PlatformDebugModeEnabled(v2) )
  {
    *(_BYTE *)(a1 + 36) = 1;
    Pool2 = (struct _PAGED_LOOKASIDE_LIST *)ExAllocatePool2(66LL, 128LL, 1869834581LL);
    *(_QWORD *)(a1 + 24) = Pool2;
    if ( Pool2 )
    {
      ExInitializePagedLookasideList(
        Pool2,
        _lambda_29ba820c7a8735764b0788aa326625cd_::_lambda_invoker_cdecl_<enum _POOL_TYPE,unsigned __int64,unsigned long>,
        (PFREE_FUNCTION)_lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>,
        0x220u,
        0x360uLL,
        0x6F736955u,
        0x100u);
      return 1;
    }
  }
  else
  {
    v3 = (_QWORD *)ExAllocatePool2(262LL, 8LL, 1869834581LL);
    *(_QWORD *)(a1 + 16) = v3;
    if ( v3 )
    {
      *v3 = 0LL;
      v4 = NSInstrumentation::CSectionEntry<221184,864>::Create();
      if ( v4 )
      {
        v5 = *(_QWORD **)(a1 + 8);
        *(_DWORD *)(a1 + 32) = 216;
        if ( *v5 != a1 )
          __fastfail(3u);
        *v4 = a1;
        v4[1] = v5;
        *v5 = v4;
        *(_QWORD *)(a1 + 8) = v4;
        return 1;
      }
    }
  }
  return 0;
}
