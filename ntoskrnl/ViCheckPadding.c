/*
 * XREFs of ViCheckPadding @ 0x140AC5364
 * Callers:
 *     ViFreeMapRegisterFile @ 0x140AC5A90 (ViFreeMapRegisterFile.c)
 *     ViSpecialFreeCommonBuffer @ 0x140AC6FA8 (ViSpecialFreeCommonBuffer.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405CD8E0 (VfReportIssueWithOptions.c)
 *     ViCheckTag @ 0x140AC5514 (ViCheckTag.c)
 *     ViHalPreprocessOptions @ 0x140AC62F4 (ViHalPreprocessOptions.c)
 *     ViHasBufferBeenTouched @ 0x140AC64A8 (ViHasBufferBeenTouched.c)
 */

void __fastcall ViCheckPadding(__int64 a1, unsigned int a2, ULONG_PTR a3, unsigned int a4)
{
  ULONG_PTR v6; // rbx
  ULONG_PTR v7; // rsi
  unsigned __int64 v8; // rbx
  __int64 v9; // r14
  ULONG_PTR HasBufferBeenTouched; // r14
  ULONG_PTR v11; // rbx

  if ( a4 != a2 )
  {
    if ( a4 )
    {
      v7 = a3 + a4;
      v8 = a1 + a2 - v7;
      v9 = a3 - a1 - 8;
      if ( a3 - a1 < 8 )
        v9 = a3 - a1;
      if ( v8 >= 8 )
      {
        v8 -= 8LL;
        v7 += 8LL;
      }
      ViCheckTag(a3, a4);
      HasBufferBeenTouched = ViHasBufferBeenTouched(a1, v9);
      if ( HasBufferBeenTouched )
      {
        ViHalPreprocessOptions(
          byte_140C0DCF4,
          "Padding before allocation at %p has been illegally modified at %p.",
          (const void *)0x1000000F,
          (const void *)4);
        VfReportIssueWithOptions(0xE6u, 0xFuLL, 4uLL, a3, HasBufferBeenTouched, byte_140C0DCF4);
      }
      v11 = ViHasBufferBeenTouched(v7, v8);
      if ( v11 )
      {
        ViHalPreprocessOptions(
          byte_140C0DCEC,
          "Padding after allocation at %p has been illegally modified at %p.",
          (const void *)0x1000000F,
          (const void *)5);
        VfReportIssueWithOptions(0xE6u, 0xFuLL, 5uLL, a3, v11, byte_140C0DCEC);
      }
    }
    else
    {
      v6 = ViHasBufferBeenTouched(a1, a2);
      if ( v6 )
      {
        ViHalPreprocessOptions(
          &dword_140C0DCF0,
          "Verified driver or hardware has corrupted memory at %p.",
          (const void *)0x1000000F);
        VfReportIssueWithOptions(0xE6u, 0xFuLL, 3uLL, v6, 0LL, &dword_140C0DCF0);
      }
    }
  }
}
