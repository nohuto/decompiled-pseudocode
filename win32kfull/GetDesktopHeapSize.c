/*
 * XREFs of GetDesktopHeapSize @ 0x1C00D4B20
 * Callers:
 *     ?xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX@Z @ 0x1C00D4724 (-xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDesktopHeapSize(__int16 a1)
{
  int *v1; // rax
  int v2; // eax

  if ( a1 == 1 )
  {
    v2 = 192;
  }
  else if ( a1 == 2 )
  {
    v2 = 96;
  }
  else
  {
    v1 = (int *)gdwDesktopSectionSize;
    if ( a1 == 3 )
      v1 = (int *)gdwNOIOSectionSize;
    v2 = *v1;
  }
  return (unsigned int)(v2 << 10);
}
