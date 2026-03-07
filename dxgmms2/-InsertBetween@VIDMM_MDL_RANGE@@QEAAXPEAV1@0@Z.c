void __fastcall VIDMM_MDL_RANGE::InsertBetween(
        VIDMM_MDL_RANGE *this,
        struct VIDMM_MDL_RANGE *a2,
        struct VIDMM_MDL_RANGE *a3)
{
  _QWORD *v4; // rdx
  char *v5; // rcx

  if ( a2 )
    v4 = (_QWORD *)((char *)a2 + 24);
  else
    v4 = (_QWORD *)(*((_QWORD *)this + 5) + 8LL);
  if ( a3 )
    v5 = (char *)a3 + 24;
  else
    v5 = (char *)(*((_QWORD *)this + 5) + 8LL);
  *v4 = (char *)this + 24;
  *((_QWORD *)v5 + 1) = (char *)this + 24;
  *((_QWORD *)this + 4) = v4;
  *((_QWORD *)this + 3) = v5;
}
