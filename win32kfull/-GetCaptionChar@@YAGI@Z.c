/*
 * XREFs of ?GetCaptionChar@@YAGI@Z @ 0x1C01135C8
 * Callers:
 *     ?DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z @ 0x1C0112A24 (-DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z.c)
 *     DrawFrameControl @ 0x1C0116938 (DrawFrameControl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetCaptionChar(char a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx

  v1 = a1 & 0xF;
  if ( !v1 )
    return 114LL;
  v2 = v1 - 1;
  if ( !v2 )
    return 48LL;
  v3 = v2 - 1;
  if ( !v3 )
    return 49LL;
  if ( v3 == 1 )
    return 50LL;
  return 115LL;
}
