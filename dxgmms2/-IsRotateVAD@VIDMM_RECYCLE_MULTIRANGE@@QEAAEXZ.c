unsigned __int8 __fastcall VIDMM_RECYCLE_MULTIRANGE::IsRotateVAD(struct VIDMM_RECYCLE_RANGE **this)
{
  VIDMM_RECYCLE_MULTIRANGE *v1; // r8
  struct VIDMM_RECYCLE_RANGE *i; // rcx

  v1 = (VIDMM_RECYCLE_MULTIRANGE *)this;
  for ( i = this[8]; (*(_BYTE *)(*((_QWORD *)i + 9) + 132LL) & 1) != 0; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    if ( i == *((struct VIDMM_RECYCLE_RANGE **)v1 + 9) )
      return 1;
  }
  return 0;
}
