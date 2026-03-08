/*
 * XREFs of DpiIndirectDdiIoControl @ 0x1C03A01A8
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C01D7C80 (DpiFdoDispatchIoctl.c)
 *     DxgkHandleIndirectEscape @ 0x1C03A0354 (DxgkHandleIndirectEscape.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpiIndirectDdiIoControl(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // ebx

  v1 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 1056))(*(_QWORD *)(a1 + 1008));
  v2 = v1;
  if ( v1 < 0 )
    WdLogSingleEntry1(2LL, v1);
  return v2;
}
