/*
 * XREFs of ??$invoke@P6A_JPEAX@ZAEAPEAU_FILE_OBJECT@@@wistd@@YA_J$$QEAP6A_JPEAX@ZAEAPEAU_FILE_OBJECT@@@Z @ 0x1C00DB0A8
 * Callers:
 *     DrvEnumDisplayDevices @ 0x1C00721C0 (DrvEnumDisplayDevices.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::invoke<__int64 (*)(void *),_FILE_OBJECT * &>(__int64 (__fastcall **a1)(_QWORD), _QWORD *a2)
{
  return (*a1)(*a2);
}
