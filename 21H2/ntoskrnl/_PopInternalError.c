/*
 * XREFs of _PopInternalError @ 0x140565378
 * Callers:
 *     PopWriteHiberPages @ 0x140990EBC (PopWriteHiberPages.c)
 *     PopSaveHiberContext @ 0x1409937A0 (PopSaveHiberContext.c)
 *     PopCreateDumpMdl @ 0x140993BB4 (PopCreateDumpMdl.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn PopInternalError(ULONG_PTR BugCheckParameter2)
{
  KeBugCheckEx(0xA0u, 2uLL, (unsigned int)BugCheckParameter2, 0LL, 0LL);
}
