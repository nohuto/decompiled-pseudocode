/*
 * XREFs of ?DxgkEngUnlockVisRgnApiExt@@YAXPEAUHDEV__@@@Z @ 0x1C00EF1C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxgkEngUnlockVisRgnApiExt(HDEV a1)
{
  if ( qword_1C02D5600 && (int)qword_1C02D5600() >= 0 )
  {
    if ( qword_1C02D5608 )
      qword_1C02D5608(a1);
  }
}
