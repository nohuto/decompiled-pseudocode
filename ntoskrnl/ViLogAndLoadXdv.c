/*
 * XREFs of ViLogAndLoadXdv @ 0x140B93AE4
 * Callers:
 *     VfInitBootDriversLoaded @ 0x140B4EE44 (VfInitBootDriversLoaded.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1406EA560 (RtlEqualUnicodeString.c)
 *     ViXdvDriverLoadImage @ 0x140AC7A1C (ViXdvDriverLoadImage.c)
 */

void __fastcall ViLogAndLoadXdv(__int64 a1)
{
  __int64 v1; // rdi
  __int64 i; // rbx

  v1 = a1 + 16;
  for ( i = *(_QWORD *)(a1 + 16); i != v1; i = *(_QWORD *)i )
  {
    if ( RtlEqualUnicodeString((PCUNICODE_STRING)(i + 88), &XdvName, 1u) == 1 )
    {
      if ( i )
      {
        ViDriverXDVBase = *(_QWORD *)(i + 48);
        ViDriverXDVImageSize = *(_DWORD *)(i + 64);
        VfXdvEnabled = (unsigned __int8)ViXdvDriverLoadImage(i);
      }
      return;
    }
  }
}
