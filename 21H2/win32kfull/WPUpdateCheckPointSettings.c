/*
 * XREFs of WPUpdateCheckPointSettings @ 0x1C0104AE0
 * Callers:
 *     xxxProcessEventMessage @ 0x1C005C220 (xxxProcessEventMessage.c)
 *     xxxSetWindowPlacement @ 0x1C01045D8 (xxxSetWindowPlacement.c)
 * Callees:
 *     UpdateCheckpoint @ 0x1C007C924 (UpdateCheckpoint.c)
 */

__int64 __fastcall WPUpdateCheckPointSettings(struct tagWND *a1, char a2)
{
  __int64 result; // rax
  int v4; // ecx
  unsigned int v5; // ecx

  result = UpdateCheckpoint(a1);
  if ( result )
  {
    v4 = *(_DWORD *)(result + 48);
    if ( (a2 & 1) != 0 )
      v4 |= 1u;
    if ( (a2 & 2) != 0 )
      v5 = v4 | 2;
    else
      v5 = v4 & 0xFFFFFFFD;
    *(_DWORD *)(result + 48) = v5;
  }
  return result;
}
