/*
 * XREFs of DrvDxgkPollDisplayChildren @ 0x1C0193CD0
 * Callers:
 *     xxxDisplayDiagBlackScreenDetected @ 0x1C015E940 (xxxDisplayDiagBlackScreenDetected.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvDxgkPollDisplayChildren(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 DxgkWin32kInterface; // rax

  if ( !*(_QWORD *)(DxDdGetDxgkWin32kInterface(a1, a2) + 128) )
    return 3221225659LL;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v4, v3);
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(DxgkWin32kInterface + 128))(a1, 0LL);
}
