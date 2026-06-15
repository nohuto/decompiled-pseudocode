/*
 * XREFs of sub_1800BEA04 @ 0x1800BEA04
 * Callers:
 *     sub_180004B00 @ 0x180004B00 (sub_180004B00.c)
 *     sub_18002E7C0 @ 0x18002E7C0 (sub_18002E7C0.c)
 *     sub_180032C50 @ 0x180032C50 (sub_180032C50.c)
 *     sub_1800468B0 @ 0x1800468B0 (sub_1800468B0.c)
 *     sub_1800857E2 @ 0x1800857E2 (sub_1800857E2.c)
 *     sub_1800BDEB0 @ 0x1800BDEB0 (sub_1800BDEB0.c)
 *     sub_1800C7330 @ 0x1800C7330 (sub_1800C7330.c)
 *     sub_1800C7730 @ 0x1800C7730 (sub_1800C7730.c)
 *     sub_1800CB750 @ 0x1800CB750 (sub_1800CB750.c)
 *     sub_1800F7938 @ 0x1800F7938 (sub_1800F7938.c)
 *     sub_1800FDCA0 @ 0x1800FDCA0 (sub_1800FDCA0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800BEA04(__int64 a1, unsigned __int16 a2, __int64 a3, const wchar_t *a4)
{
  __int64 v4; // rax

  if ( a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a4[v4] );
  }
  if ( !a4 )
    a4 = L"NULL";
  return EtwTraceMessage(a1, 43LL, a3, a2, a4);
}
