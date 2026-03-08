/*
 * XREFs of ?xxxDestroyWindowIfSupported@@YAHPEAUtagWND@@@Z @ 0x1C00BB230
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxDestroyWindowIfSupported(struct tagWND *a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( qword_1C02D6CC0 && (int)qword_1C02D6CC0() >= 0 && qword_1C02D6CC8 )
    return (unsigned int)qword_1C02D6CC8(a1);
  return v1;
}
