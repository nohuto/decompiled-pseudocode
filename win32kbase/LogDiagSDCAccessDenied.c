/*
 * XREFs of LogDiagSDCAccessDenied @ 0x1C01955E4
 * Callers:
 *     xxxUserSetDisplayConfig @ 0x1C0011DE0 (xxxUserSetDisplayConfig.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ?RtlStringCchCopyUnicodeStringEx@@YAJPEAG_KPEBU_UNICODE_STRING@@PEAPEAGPEA_KK@Z @ 0x1C01915E4 (-RtlStringCchCopyUnicodeStringEx@@YAJPEAG_KPEBU_UNICODE_STRING@@PEAPEAGPEA_KK@Z.c)
 */

__int64 __fastcall LogDiagSDCAccessDenied(struct _UNICODE_STRING *a1, struct _UNICODE_STRING *a2)
{
  wchar_t *v4; // rdx
  unsigned __int16 **v5; // r9
  wchar_t *v6; // rdx
  unsigned __int16 **v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 DxgkWin32kInterface; // rax
  _QWORD v12[14]; // [rsp+30h] [rbp-88h] BYREF

  memset(v12, 0, sizeof(v12));
  v12[0] = 0x700000002BLL;
  memset(&v12[1], 0, 36);
  RtlStringCchCopyUnicodeStringEx((NTSTRSAFE_PWSTR)&v12[6], v4, a1, v5);
  RtlStringCchCopyUnicodeStringEx((NTSTRSAFE_PWSTR)&v12[10], v6, a2, v7);
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v9, v8);
  return (*(__int64 (__fastcall **)(_QWORD *))(DxgkWin32kInterface + 304))(v12);
}
