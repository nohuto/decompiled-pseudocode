/*
 * XREFs of PopInitializeIRTimer @ 0x140380C04
 * Callers:
 *     PopNetInitialize @ 0x140B46E8C (PopNetInitialize.c)
 * Callees:
 *     KeInitializeIRTimer @ 0x14036D61C (KeInitializeIRTimer.c)
 *     PopInitializeWorkItem @ 0x14080FA3C (PopInitializeWorkItem.c)
 */

__int64 __fastcall PopInitializeIRTimer(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int16 a6,
        int a7)
{
  LOWORD(a7) = 8;
  HIWORD(a7) = a6;
  KeInitializeIRTimer(a1, a2, 0LL, (unsigned __int8 *)&a7, 2);
  return PopInitializeWorkItem(a1 + 136, a4, 0LL);
}
