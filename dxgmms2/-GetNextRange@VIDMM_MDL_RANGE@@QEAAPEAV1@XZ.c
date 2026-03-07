struct VIDMM_MDL_RANGE *__fastcall VIDMM_MDL_RANGE::GetNextRange(VIDMM_MDL_RANGE *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 3);
  if ( v1 == *((_QWORD *)this + 5) + 8LL )
    return 0LL;
  else
    return (struct VIDMM_MDL_RANGE *)(v1 - 24);
}
