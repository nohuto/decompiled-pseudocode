void __fastcall VidSchResetFlipQueueTimeout(__int64 a1)
{
  unsigned int v1; // r10d
  __int64 v2; // r11
  int i; // r9d
  struct VIDSCH_FLIP_QUEUE *FlipQueue; // rax
  int v5; // r9d
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v7; // [rsp+28h] [rbp-10h]
  int v8; // [rsp+2Ch] [rbp-Ch]

  v1 = 0;
  v2 = a1;
  if ( *(_DWORD *)(a1 + 40) )
  {
    v6 = a1;
    do
    {
      v7 = v1;
      for ( i = -1; ; i = v5 + 1 )
      {
        v8 = i;
        if ( i == *(_DWORD *)(v2 + 152) )
          break;
        FlipQueue = VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueue((VIDSCH_FLIP_QUEUE_ITERATOR *)&v6);
        if ( FlipQueue )
        {
          *(_DWORD *)FlipQueue &= ~1u;
          *((_DWORD *)VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueue((VIDSCH_FLIP_QUEUE_ITERATOR *)&v6) + 10) = 0;
        }
      }
      ++v1;
    }
    while ( v1 < *(_DWORD *)(v2 + 40) );
  }
}
