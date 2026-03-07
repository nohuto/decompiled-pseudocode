void __fastcall VidSchiIncrementHwContextReference(struct VIDSCH_HW_CONTEXT *a1)
{
  if ( _InterlockedIncrement((volatile signed __int32 *)a1 + 10) == 1 )
    _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)a1 + 1) + 24LL));
}
