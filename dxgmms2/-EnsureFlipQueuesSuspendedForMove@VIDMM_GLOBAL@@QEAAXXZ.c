void __fastcall VIDMM_GLOBAL::EnsureFlipQueuesSuspendedForMove(VIDMM_GLOBAL *this)
{
  if ( !*((_BYTE *)this + 44728) )
  {
    *((_BYTE *)this + 44728) = 1;
    VidSchiSuspendFlipQueues(*(struct _VIDSCH_GLOBAL **)(*((_QWORD *)this + 2) + 744LL), -1);
  }
}
