/*
 * XREFs of VfDriverLoadSucceeded @ 0x140A7C224
 * Callers:
 *     MiDriverLoadSucceeded @ 0x140761234 (MiDriverLoadSucceeded.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     VfNotifyVerifierExtensions @ 0x140A89F08 (VfNotifyVerifierExtensions.c)
 *     ViXdvDriverLoadImage @ 0x140A8A0C8 (ViXdvDriverLoadImage.c)
 */

void __fastcall VfDriverLoadSucceeded(__int64 a1)
{
  unsigned __int8 Image; // al

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
    Image = ViXdvDriverLoadImage(a1);
    VfXdvEnabled = Image;
    if ( Image )
      VfNotifyVerifierExtensions(0LL, 0LL);
  }
}
