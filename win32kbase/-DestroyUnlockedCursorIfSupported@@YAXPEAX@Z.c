/*
 * XREFs of ?DestroyUnlockedCursorIfSupported@@YAXPEAX@Z @ 0x1C00C2120
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DestroyUnlockedCursorIfSupported(void *a1)
{
  if ( qword_1C02D6CE0 && (int)qword_1C02D6CE0() >= 0 )
  {
    if ( qword_1C02D6CE8 )
      qword_1C02D6CE8(a1);
  }
}
