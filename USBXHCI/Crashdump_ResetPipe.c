/*
 * XREFs of Crashdump_ResetPipe @ 0x1C004CE40
 * Callers:
 *     Crashdump_SendUrb @ 0x1C004CEC0 (Crashdump_SendUrb.c)
 *     Crashdump_SendUrbAsync @ 0x1C004CFB0 (Crashdump_SendUrbAsync.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Crashdump_ResetPipe(__int64 a1, __int64 a2)
{
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_ResetPipe: Begin\n");
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Endpoint address is %u\n", *(unsigned __int8 *)(*(_QWORD *)(a2 + 24) + 2LL));
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_ResetPipe: end 0x%X\n", 0);
  return 0LL;
}
