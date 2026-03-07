void __fastcall VIDMM_RECYCLE_MULTIRANGE::ZeroIfNeeded(VIDMM_RECYCLE_MULTIRANGE *this)
{
  struct VIDMM_RECYCLE_RANGE *i; // rax
  VIDMM_RECYCLE_RANGE *j; // rdi

  if ( dword_1C0076490 )
  {
    for ( i = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8);
          *((_DWORD *)i + 20) != 3;
          i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
    {
      if ( i == *((struct VIDMM_RECYCLE_RANGE **)this + 9) )
        goto LABEL_7;
    }
    VIDMM_RECYCLE_MULTIRANGE::ZeroMultirangeMemory(this);
LABEL_7:
    for ( j = (VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8); ; j = VIDMM_RECYCLE_RANGE::GetNextRange(j) )
    {
      VIDMM_RECYCLE_RANGE::AccessZeroTransition(j);
      if ( j == *((VIDMM_RECYCLE_RANGE **)this + 9) )
        break;
    }
  }
}
