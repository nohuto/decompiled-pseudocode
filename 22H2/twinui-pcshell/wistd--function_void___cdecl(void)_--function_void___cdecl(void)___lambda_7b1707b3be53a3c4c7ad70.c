/*
 * XREFs of wistd::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_7b1707b3be53a3c4c7ad702f0f945c58__void_ @ 0x180221FEC
 * Callers:
 *     ?SubscribeToShellReadyWnf@CControlCenterExperienceManager@@AEAAJXZ @ 0x1802249F8 (-SubscribeToShellReadyWnf@CControlCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::function_void___cdecl_void__::function_void___cdecl_void____lambda_7b1707b3be53a3c4c7ad702f0f945c58__void_(
        __int64 a1,
        __int64 *a2)
{
  _QWORD *v3; // rcx
  __int64 v4; // rax
  _QWORD *v5; // rdx
  __int64 v6; // rcx

  *(_QWORD *)(a1 + 112) = 0LL;
  v3 = (_QWORD *)(a1 + 8);
  *v3 = &off_180501030;
  v4 = *a2;
  v5 = a2 + 1;
  v3[1] = v4;
  v3[2] = 0LL;
  if ( v3 + 2 != v5 )
  {
    v3[2] = *v5;
    *v5 = 0LL;
  }
  *(_QWORD *)(a1 + 112) = v3;
  v6 = *v5;
  if ( *v5 )
  {
    *v5 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return a1;
}
