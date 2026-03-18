/*
 * XREFs of _PopInternalError @ 0x1405C6A8C
 * Callers:
 *     PopSaveHiberContext @ 0x140A4B9E0 (PopSaveHiberContext.c)
 *     PopCreateDumpMdl @ 0x140A4BE04 (PopCreateDumpMdl.c)
 *     PopWriteHiberPages @ 0x140A4DC74 (PopWriteHiberPages.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn PopInternalError(ULONG_PTR BugCheckParameter2)
{
  KeBugCheckEx(0xA0u, 2uLL, (unsigned int)BugCheckParameter2, 0LL, 0LL);
}
