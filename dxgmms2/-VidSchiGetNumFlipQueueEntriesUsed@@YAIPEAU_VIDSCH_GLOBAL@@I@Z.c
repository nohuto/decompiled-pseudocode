/*
 * XREFs of ?VidSchiGetNumFlipQueueEntriesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C004B73C
 * Callers:
 *     VidSchCollectDbgInfo @ 0x1C0109A80 (VidSchCollectDbgInfo.c)
 * Callees:
 *     ?GetFlipQueue@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAUVIDSCH_FLIP_QUEUE@@XZ @ 0x1C00183C8 (-GetFlipQueue@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAUVIDSCH_FLIP_QUEUE@@XZ.c)
 */

__int64 __fastcall VidSchiGetNumFlipQueueEntriesUsed(struct _VIDSCH_GLOBAL *a1, int a2)
{
  int v2; // r11d
  unsigned int v3; // r10d
  int v4; // r9d
  struct VIDSCH_FLIP_QUEUE *FlipQueue; // rax
  int v6; // r9d
  unsigned int *v7; // rax
  __int64 v8; // rdx
  int v9; // r8d
  struct _VIDSCH_GLOBAL *v11; // [rsp+20h] [rbp-18h] BYREF
  int v12; // [rsp+28h] [rbp-10h]
  int v13; // [rsp+2Ch] [rbp-Ch]

  v2 = *((_DWORD *)a1 + 38);
  v3 = 0;
  v4 = -1;
  v11 = a1;
  v12 = a2;
  while ( 1 )
  {
    v13 = v4;
    if ( v4 == v2 )
      break;
    FlipQueue = VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueue((VIDSCH_FLIP_QUEUE_ITERATOR *)&v11);
    if ( FlipQueue )
    {
      v7 = (unsigned int *)((char *)FlipQueue + 1172);
      v8 = 64LL;
      do
      {
        if ( *v7 > 0xC || (v9 = 4673, !_bittest(&v9, *v7)) )
          ++v3;
        v7 += 346;
        --v8;
      }
      while ( v8 );
    }
    v4 = v6 + 1;
  }
  return v3;
}
