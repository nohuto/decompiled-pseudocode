struct VIDMM_RECYCLE_RANGE *__fastcall VIDMM_RECYCLE_RANGE::GetPreviousRange(VIDMM_RECYCLE_RANGE *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 16);
  if ( v1 == *((_QWORD *)this + 9) + 72LL )
    return 0LL;
  else
    return (struct VIDMM_RECYCLE_RANGE *)(v1 - 120);
}
