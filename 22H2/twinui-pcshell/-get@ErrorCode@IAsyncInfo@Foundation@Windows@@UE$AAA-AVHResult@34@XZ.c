/*
 * XREFs of ?get@ErrorCode@IAsyncInfo@Foundation@Windows@@UE$AAA?AVHResult@34@XZ @ 0x1803986DC
 * Callers:
 *     ??R_lambda_9c267cdafd8e064f323ec4e1c7ae30d4_@@QEAAXPE$AAU?$IAsyncOperation@_N@Foundation@Windows@@W4AsyncStatus@23@@Z @ 0x180394F40 (--R_lambda_9c267cdafd8e064f323ec4e1c7ae30d4_@@QEAAXPE$AAU-$IAsyncOperation@_N@Foundation@Windows.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18035BCB0 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

_DWORD *__fastcall Windows::Foundation::IAsyncInfo::ErrorCode::get(__int64 a1, _DWORD *a2)
{
  int v3; // eax

  *a2 = 0;
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL))(a1);
  if ( v3 < 0 )
  {
    __abi_WinRTraiseException(v3);
    __debugbreak();
  }
  return a2;
}
