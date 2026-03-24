/*
 * XREFs of ?VidSchiIsExpectedVSyncCookie2@@YAHPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1C002B134
 * Callers:
 *     ?VidSchiIsExpectedVSyncCookie@@YAHPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1C0003E2C (-VidSchiIsExpectedVSyncCookie@@YAHPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_V.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiIsExpectedVSyncCookie2(
        struct _VIDSCH_GLOBAL *a1,
        struct VIDSCH_FLIP_QUEUE_ENTRY *a2,
        struct _VIDSCH_VSYNC_COOKIE *a3)
{
  _DWORD *v3; // r9
  unsigned int v4; // edx
  char v5; // cl
  bool v6; // zf
  int v7; // eax
  char v8; // r11
  __int64 v9; // r10
  int v10; // eax

  v3 = (_DWORD *)*((_QWORD *)a2 + 147);
  if ( (*((_DWORD *)a2 + 284) & 0x10) != 0 )
    v4 = ((unsigned __int16)*v3 | (unsigned __int16)(*v3 >> 10)) & 0x3FF;
  else
    v4 = (1 << *((_DWORD *)a1 + 36)) - 1;
  v5 = -1;
  v6 = !_BitScanForward((unsigned int *)&v7, v4);
  if ( !v6 )
    v5 = v7;
  v8 = 0;
  if ( !v4 )
    return 1LL;
  while ( 1 )
  {
    v9 = *(_QWORD *)((char *)v3 + ((8 * v3[2] + 199) & 0xFFFFFFF8) * v8 + 24);
    if ( v9 )
    {
      if ( v9 != *((_QWORD *)a3 + 2 * v5 + 14) )
        break;
    }
    v10 = 1 << v5;
    v5 = -1;
    v4 &= ~v10;
    v6 = !_BitScanForward((unsigned int *)&v10, v4);
    if ( !v6 )
      v5 = v10;
    ++v8;
    if ( !v4 )
      return 1LL;
  }
  return 0LL;
}
