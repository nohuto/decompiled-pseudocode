/*
 * XREFs of ?IsTargetForRoutingInfoAndHwnd@InputRedirectionTarget@@QEAA_NUtagMsgRoutingInfo@@_K@Z @ 0x18017FCBC
 * Callers:
 *     ?DisableInputRedirection@InputRedirectionProcessor@@UEAAJ_KUtagMsgRoutingInfo@@1H@Z @ 0x18017F290 (-DisableInputRedirection@InputRedirectionProcessor@@UEAAJ_KUtagMsgRoutingInfo@@1H@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall InputRedirectionTarget::IsTargetForRoutingInfoAndHwnd(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  _DWORD v8[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+28h] [rbp-30h]
  __int64 v10; // [rsp+30h] [rbp-28h]
  __int64 v11; // [rsp+38h] [rbp-20h]
  __int64 v12; // [rsp+40h] [rbp-18h]

  if ( (*(int (__fastcall **)(_QWORD, _QWORD, _DWORD *))(**(_QWORD **)(a1 + 32) + 128LL))(
         *(_QWORD *)(a1 + 32),
         *(_QWORD *)(a1 + 40),
         v8) < 0
    || *(_DWORD *)a2 != v8[0]
    || *(_DWORD *)(a2 + 4) != v8[1]
    || *(_QWORD *)(a2 + 8) != v9
    || *(_QWORD *)(a2 + 16) != v10 )
  {
    return 0;
  }
  v6 = *(_QWORD *)(a2 + 24) - v11;
  if ( !v6 )
    v6 = *(_QWORD *)(a2 + 32) - v12;
  return !v6 && *(_QWORD *)(a1 + 56) == a3;
}
