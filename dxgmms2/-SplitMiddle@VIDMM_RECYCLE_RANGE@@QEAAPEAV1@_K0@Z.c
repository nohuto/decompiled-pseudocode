struct VIDMM_RECYCLE_RANGE *__fastcall VIDMM_RECYCLE_RANGE::SplitMiddle(
        VIDMM_RECYCLE_RANGE *this,
        __int64 a2,
        __int64 a3)
{
  bool v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 1;
  VIDMM_RECYCLE_RANGE::SplitAt(this, a3, &v6);
  if ( v6 && (VIDMM_RECYCLE_RANGE::SplitAt(this, a2, &v6), v6) )
    return VIDMM_RECYCLE_RANGE::GetNextRange(this);
  else
    return this;
}
