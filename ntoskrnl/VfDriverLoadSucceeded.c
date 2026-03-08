/*
 * XREFs of VfDriverLoadSucceeded @ 0x140ABA300
 * Callers:
 *     MiDriverLoadSucceeded @ 0x1407F6FFC (MiDriverLoadSucceeded.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1406EA560 (RtlEqualUnicodeString.c)
 *     ViXdvDriverLoadImage @ 0x140AC7A1C (ViXdvDriverLoadImage.c)
 */

void __fastcall VfDriverLoadSucceeded(__int64 a1)
{
  if ( VfDifRunningWithoutReboot
    && a1
    && !VfXdvEnabled
    && RtlEqualUnicodeString((PCUNICODE_STRING)(a1 + 88), &XdvName, 1u) == 1 )
  {
    if ( !ViDriverXDVBase )
    {
      ViDriverXDVBase = *(_QWORD *)(a1 + 48);
      ViDriverXDVImageSize = *(_DWORD *)(a1 + 64);
    }
    VfXdvEnabled = (unsigned __int8)ViXdvDriverLoadImage(a1);
  }
}
