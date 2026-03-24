/*
 * XREFs of Win32UAFMAllocPoolNonPaged @ 0x1C0139F40
 * Callers:
 *     <none>
 * Callees:
 *     IsWin32AllocPoolImplSupported @ 0x1C002C344 (IsWin32AllocPoolImplSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Win32UAFMAllocPoolNonPaged(__int64 a1, unsigned int a2, __int64 a3)
{
  int v6; // eax
  __int64 v7; // r9

  v6 = IsWin32AllocPoolImplSupported();
  v7 = 0LL;
  if ( v6 < 0 )
    return 0LL;
  if ( qword_1C0256D98 )
    return qword_1C0256D98(544LL, a1, a2, a3);
  return v7;
}
