/*
 * XREFs of ?PanDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C029E230
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PanDisablePDEV(struct DHPDEV__ *a1)
{
  (*((void (__fastcall **)(_QWORD))a1 + 101))(*((_QWORD *)a1 + 4));
  EngDeleteSemaphore(*((HSEMAPHORE *)a1 + 14));
  Win32FreePool(a1);
}
