/*
 * XREFs of ViLogAndLoadXdv @ 0x140A948F4
 * Callers:
 *     VfInitBootDriversLoaded @ 0x140A4FD74 (VfInitBootDriversLoaded.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1406F0B70 (RtlEqualUnicodeString.c)
 *     VfNotifyVerifierExtensions @ 0x1409C9A88 (VfNotifyVerifierExtensions.c)
 *     ViXdvDriverLoadImage @ 0x1409C9E2C (ViXdvDriverLoadImage.c)
 */

void __fastcall ViLogAndLoadXdv(__int64 a1)
{
  __int64 v1; // rdi
  __int64 i; // rbx
  unsigned __int8 Image; // al

  v1 = a1 + 16;
  for ( i = *(_QWORD *)(a1 + 16); i != v1; i = *(_QWORD *)i )
  {
    if ( RtlEqualUnicodeString((PCUNICODE_STRING)(i + 88), &XdvName, 1u) == 1 )
      goto LABEL_6;
  }
  i = 0LL;
LABEL_6:
  if ( i )
  {
    ViDriverXDVBase = *(_QWORD *)(i + 48);
    ViDriverXDVImageSize = *(_DWORD *)(i + 64);
    Image = ViXdvDriverLoadImage(i);
    XdvEnabled = Image;
    if ( Image )
      VfNotifyVerifierExtensions(0, 0LL);
  }
}
