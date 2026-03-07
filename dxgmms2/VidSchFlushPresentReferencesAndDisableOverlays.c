void __fastcall VidSchFlushPresentReferencesAndDisableOverlays(
        struct _VIDSCH_GLOBAL *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  unsigned int v5; // edi
  int v6; // ebp
  unsigned int i; // ebx

  v5 = 0;
  v6 = a4;
  for ( i = a2; i; i >>= 1 )
  {
    if ( (i & 1) != 0 )
      VidSchFlushQueuePacketsInternal((__int64)a1, 1u, v5, a4, _bittest(&v6, v5));
    ++v5;
  }
  if ( a5 )
    VidSchiSuspendFlipQueues(a1);
}
