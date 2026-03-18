/*
 * XREFs of _PopInternalError @ 0x140583758
 * Callers:
 *     PopCreateDumpMdl @ 0x140AA22E4 (PopCreateDumpMdl.c)
 *     PopSaveHiberContext @ 0x140AA4A40 (PopSaveHiberContext.c)
 *     PopWriteHiberPages @ 0x140AA5AA4 (PopWriteHiberPages.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 */

void __fastcall __noreturn PopInternalError(ULONG_PTR BugCheckParameter2)
{
  KeBugCheckEx(0xA0u, 2uLL, (unsigned int)BugCheckParameter2, 0LL, 0LL);
}
