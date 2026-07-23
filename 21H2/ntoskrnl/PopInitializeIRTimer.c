/*
 * XREFs of PopInitializeIRTimer @ 0x1403AE4E0
 * Callers:
 *     PopNetInitialize @ 0x140A407C8 (PopNetInitialize.c)
 * Callees:
 *     KeInitializeIRTimer @ 0x140380F30 (KeInitializeIRTimer.c)
 *     PopInitializeWorkItem @ 0x140796988 (PopInitializeWorkItem.c)
 */

__int64 __fastcall PopInitializeIRTimer(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int16 a6, int a7)
{
  LOWORD(a7) = 8;
  HIWORD(a7) = a6;
  KeInitializeIRTimer(a1, a2, 0LL, (unsigned __int8 *)&a7, 2);
  return PopInitializeWorkItem(a1 + 136, a4, 0LL);
}
