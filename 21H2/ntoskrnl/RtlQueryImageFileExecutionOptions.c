/*
 * XREFs of RtlQueryImageFileExecutionOptions @ 0x1407A8DA0
 * Callers:
 *     PsBootPhaseComplete @ 0x1407A8ACC (PsBootPhaseComplete.c)
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     RtlpOpenBaseImageFileOptionsKey @ 0x140604364 (RtlpOpenBaseImageFileOptionsKey.c)
 *     RtlQueryImageFileKeyOption @ 0x14060D7A0 (RtlQueryImageFileKeyOption.c)
 */

__int64 __fastcall RtlQueryImageFileExecutionOptions(__int64 a1, const WCHAR *a2, __int64 a3, ULONG *a4)
{
  int ImageFileKeyOption; // ebx
  HANDLE Handle; // [rsp+40h] [rbp+8h] BYREF

  Handle = 0LL;
  ImageFileKeyOption = RtlpOpenBaseImageFileOptionsKey(&Handle, (__int64)a2);
  if ( ImageFileKeyOption >= 0 )
  {
    ImageFileKeyOption = RtlQueryImageFileKeyOption(Handle, a2, 4, a4, 4u, 0LL);
    if ( RtlpDisableIFEOCaching )
      ZwClose(Handle);
  }
  return (unsigned int)ImageFileKeyOption;
}
