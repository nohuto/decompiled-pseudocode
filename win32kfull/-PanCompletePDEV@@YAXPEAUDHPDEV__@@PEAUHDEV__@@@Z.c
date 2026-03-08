/*
 * XREFs of ?PanCompletePDEV@@YAXPEAUDHPDEV__@@PEAUHDEV__@@@Z @ 0x1C029E180
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ?vUnLock@PANDEVLOCK@@QEAAXXZ @ 0x1C02A0750 (-vUnLock@PANDEVLOCK@@QEAAXXZ.c)
 */

void __fastcall PanCompletePDEV(struct DHPDEV__ *a1, HDEV a2)
{
  HSEMAPHORE v4; // [rsp+30h] [rbp+8h] BYREF

  *((_QWORD *)a1 + 6) = a2;
  v4 = (HSEMAPHORE)*((_QWORD *)a1 + 14);
  EngAcquireSemaphore(v4);
  (*((void (__fastcall **)(_QWORD, HDEV))a1 + 100))(*((_QWORD *)a1 + 4), a2);
  PANDEVLOCK::vUnLock((PANDEVLOCK *)&v4);
}
