/*
 * XREFs of RtlQueryImageFileExecutionOptions @ 0x18007B400
 * Callers:
 *     LdrQueryImageFileExecutionOptions @ 0x18007B3C0 (LdrQueryImageFileExecutionOptions.c)
 *     LdrpInitializeProcess @ 0x1800D1D50 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800762DC (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlpOpenBaseImageFileOptionsKey @ 0x180076438 (RtlpOpenBaseImageFileOptionsKey.c)
 *     RtlQueryImageFileKeyOption @ 0x18007B4A0 (RtlQueryImageFileKeyOption.c)
 *     NtClose @ 0x18009D6C0 (NtClose.c)
 */

__int64 __fastcall RtlQueryImageFileExecutionOptions(
        unsigned __int16 *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  int v10; // eax
  unsigned int ImageFileKeyOption; // ebx
  HANDLE Handle; // [rsp+50h] [rbp+8h] BYREF

  if ( a1 )
    v10 = RtlpOpenImageFileOptionsKeyEx(a1, 9LL, 0, &Handle);
  else
    v10 = RtlpOpenBaseImageFileOptionsKey(&Handle);
  ImageFileKeyOption = v10;
  if ( v10 >= 0 )
  {
    ImageFileKeyOption = RtlQueryImageFileKeyOption(Handle, a2, a3, a4, a5, a6);
    if ( a1 )
      NtClose(Handle);
  }
  return ImageFileKeyOption;
}
