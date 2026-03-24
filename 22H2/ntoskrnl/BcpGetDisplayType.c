/*
 * XREFs of BcpGetDisplayType @ 0x1405C5218
 * Callers:
 *     BgpDisplaySafeToPowerOffScreen @ 0x1405C53BC (BgpDisplaySafeToPowerOffScreen.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x1405C5480 (BgpFwDisplayBugCheckProgressUpdate.c)
 *     BgpFwDisplayBugCheckScreen @ 0x1405C5644 (BgpFwDisplayBugCheckScreen.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BcpGetDisplayType(_DWORD *a1)
{
  __int64 result; // rax
  __int64 i; // rdx

  result = 0LL;
  for ( i = 18LL; i < 90; i += 18LL )
  {
    if ( *a1 < dword_140C10F00[i + 16] )
      break;
    if ( a1[1] < dword_140C10F00[i + 17] )
      break;
    result = (unsigned int)(result + 1);
  }
  return result;
}
