/*
 * XREFs of _lambda_e77970cd92140e07acf370381d6037d8_::operator() @ 0x18000D0D8
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_e77970cd92140e07acf370381d6037d8___::Run @ 0x18000D0B0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_e77970cd92140e07acf370381d6037d8___--.c)
 * Callees:
 *     ?SetDesiredPosition@WindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x18000D1C0 (-SetDesiredPosition@WindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@PE.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_e77970cd92140e07acf370381d6037d8_::operator()(int **a1)
{
  int *v2; // rdx
  int *v3; // rcx
  __int64 v4; // rcx
  const char *v5; // r9
  __int64 result; // rax
  float v7[4]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v8; // [rsp+30h] [rbp-38h]
  __int128 v9; // [rsp+40h] [rbp-28h]
  __int64 v10; // [rsp+50h] [rbp-18h]
  int v11; // [rsp+58h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  RTL_SRWLOCK *SRWLock; // [rsp+70h] [rbp+8h]

  v2 = *a1;
  v7[0] = (float)(*a1)[4];
  v7[1] = (float)v2[5];
  v7[2] = (float)*v2;
  v7[3] = (float)v2[1];
  v3 = a1[1];
  v8 = *(_OWORD *)(v3 + 130);
  v9 = *(_OWORD *)(v3 + 134);
  v10 = *((_QWORD *)v3 + 69);
  v11 = v3[140];
  DWORD2(v9) = v2[8];
  v4 = *((_QWORD *)v3 + 36);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 200LL))(v4);
    WindowWrapperBase::SetDesiredPosition(a1[1], v7, 3LL);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x284,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v5);
  }
  return result;
}
