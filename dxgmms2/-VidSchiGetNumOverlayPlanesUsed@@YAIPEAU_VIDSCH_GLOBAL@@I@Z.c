/*
 * XREFs of ?VidSchiGetNumOverlayPlanesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C004B864
 * Callers:
 *     VidSchCollectDbgInfo @ 0x1C0109A80 (VidSchCollectDbgInfo.c)
 * Callees:
 *     ?GetFlipQueue@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAUVIDSCH_FLIP_QUEUE@@XZ @ 0x1C00183C8 (-GetFlipQueue@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAUVIDSCH_FLIP_QUEUE@@XZ.c)
 */

__int64 __fastcall VidSchiGetNumOverlayPlanesUsed(struct _VIDSCH_GLOBAL *a1, int a2)
{
  int v2; // r11d
  unsigned int v3; // r8d
  int v4; // r9d
  struct VIDSCH_FLIP_QUEUE *FlipQueue; // rax
  unsigned int v6; // r10d
  int v7; // r9d
  struct _VIDSCH_GLOBAL *v9; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+28h] [rbp-10h]
  int v11; // [rsp+2Ch] [rbp-Ch]

  v2 = *((_DWORD *)a1 + 38);
  v3 = 0;
  v4 = -1;
  v9 = a1;
  v10 = a2;
  while ( 1 )
  {
    v11 = v4;
    if ( v4 == v2 )
      break;
    FlipQueue = VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueue((VIDSCH_FLIP_QUEUE_ITERATOR *)&v9);
    v4 = v7 + 1;
    v3 = v6 + 1;
    if ( !FlipQueue )
      v3 = v6;
  }
  return v3;
}
