/*
 * XREFs of _PopInternalError @ 0x1405652B8
 * Callers:
 *     PopWriteHiberPages @ 0x1409916A0 (PopWriteHiberPages.c)
 *     PopSaveHiberContext @ 0x140993F80 (PopSaveHiberContext.c)
 *     PopCreateDumpMdl @ 0x140994394 (PopCreateDumpMdl.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

void __fastcall __noreturn PopInternalError(ULONG_PTR BugCheckParameter2)
{
  KeBugCheckEx(0xA0u, 2uLL, (unsigned int)BugCheckParameter2, 0LL, 0LL);
}
