/*
 * XREFs of FsRtlPTeardownPerFileObjectContexts @ 0x14066C394
 * Callers:
 *     IopDeleteFile @ 0x140650DF0 (IopDeleteFile.c)
 * Callees:
 *     IoChangeFileObjectFilterContext @ 0x1402D736C (IoChangeFileObjectFilterContext.c)
 *     IoGetFileObjectFilterContext @ 0x1402FB2DC (IoGetFileObjectFilterContext.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlPTeardownPerFileObjectContexts(__int64 a1)
{
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  P = 0LL;
  IoGetFileObjectFilterContext(a1, &P, 0);
  if ( P )
  {
    IoChangeFileObjectFilterContext(a1);
    ExFreePoolWithTag(P, 0);
  }
}
