/*
 * XREFs of Controller_InitiateBootRecovery @ 0x1C0033900
 * Callers:
 *     Controller_ReportFatalErrorEx @ 0x1C001EB8C (Controller_ReportFatalErrorEx.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     Controller_InternalReset @ 0x1C0033D04 (Controller_InternalReset.c)
 */

void __fastcall Controller_InitiateBootRecovery(_QWORD *a1, char a2)
{
  ULONG_PTR v2; // rax

  if ( (a2 & 0x1C) != 0 )
  {
    v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 264))(WdfDriverGlobals, *a1);
    KeBugCheckEx(0x144u, 2uLL, v2, 3uLL, 0LL);
  }
  if ( (a2 & 1) != 0 )
  {
    _InterlockedIncrement(&dword_1C0064E10);
    Controller_InternalReset();
    _InterlockedDecrement(&dword_1C0064E10);
  }
  else if ( (a2 & 2) != 0 )
  {
    ((void (__fastcall *)(__int64, _QWORD))qword_1C00647F0)(UcxDriverGlobals, a1[1]);
  }
}
