/*
 * XREFs of RootHub_WdfEvtTimer20PortResumeCompleteDpc @ 0x1C0040900
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C0040618 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 */

char __fastcall RootHub_WdfEvtTimer20PortResumeCompleteDpc(__int64 a1)
{
  _QWORD ***v1; // rax

  v1 = (_QWORD ***)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C0063400);
  return RootHub_WdfEvtTimer20PortResumeComplete(**v1, *((_DWORD *)*v1 + 2));
}
