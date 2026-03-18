/*
 * XREFs of ApiSetEditionParseDesktop @ 0x1C00A0F70
 * Callers:
 *     ParseWindowStation @ 0x1C00A0E80 (ParseWindowStation.c)
 * Callees:
 *     EditionParseDesktop @ 0x1C00A76BC (EditionParseDesktop.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionParseDesktop(
        int a1,
        int a2,
        int a3,
        char a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  unsigned int v10; // ebx
  int v15; // r9d

  v10 = 0;
  if ( qword_1C02958D0 && (int)qword_1C02958D0() >= 0 )
  {
    LOBYTE(v15) = a4;
    return (unsigned int)EditionParseDesktop(a1, a2, a3, v15, a5, a6, a7, a8, a9, a10);
  }
  return v10;
}
