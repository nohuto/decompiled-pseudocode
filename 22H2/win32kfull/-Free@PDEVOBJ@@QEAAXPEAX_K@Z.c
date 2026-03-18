/*
 * XREFs of ?Free@PDEVOBJ@@QEAAXPEAX_K@Z @ 0x1C02E12B8
 * Callers:
 *     ?bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@I@Z @ 0x1C0140778 (-bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@I@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PDEVOBJ::Free(PDEVOBJ *this, void *a2, __int64 a3)
{
  (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)this + 3000LL))(a2, a3);
}
