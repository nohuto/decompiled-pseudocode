/*
 * XREFs of _PopInternalError @ 0x1405655B8
 * Callers:
 *     PopWriteHiberPages @ 0x140991EBC (PopWriteHiberPages.c)
 *     PopSaveHiberContext @ 0x1409947A0 (PopSaveHiberContext.c)
 *     PopCreateDumpMdl @ 0x140994BB4 (PopCreateDumpMdl.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn PopInternalError(ULONG_PTR BugCheckParameter2)
{
  KeBugCheckEx(0xA0u, 2uLL, (unsigned int)BugCheckParameter2, 0LL, 0LL);
}
