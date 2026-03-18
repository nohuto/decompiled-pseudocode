/*
 * XREFs of ApiSetEditionImmActivateThreadsLayout @ 0x1C02067D8
 * Callers:
 *     xxxInternalActivateKeyboardLayout @ 0x1C006C200 (xxxInternalActivateKeyboardLayout.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionImmActivateThreadsLayout(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( qword_1C02966C0 && (int)qword_1C02966C0() >= 0 && qword_1C02966C8 )
    return (unsigned int)qword_1C02966C8(a1, 0LL, a3);
  return v3;
}
