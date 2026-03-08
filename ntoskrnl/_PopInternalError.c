/*
 * XREFs of _PopInternalError @ 0x140581228
 * Callers:
 *     PopCreateDumpMdl @ 0x140A9F0B4 (PopCreateDumpMdl.c)
 *     PopSaveHiberContext @ 0x140AA1810 (PopSaveHiberContext.c)
 *     PopWriteHiberPages @ 0x140AA2874 (PopWriteHiberPages.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

void __fastcall __noreturn PopInternalError(ULONG_PTR BugCheckParameter2)
{
  KeBugCheckEx(0xA0u, 2uLL, (unsigned int)BugCheckParameter2, 0LL, 0LL);
}
