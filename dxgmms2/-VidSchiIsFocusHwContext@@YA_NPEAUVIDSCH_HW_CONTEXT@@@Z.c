bool __fastcall VidSchiIsFocusHwContext(struct VIDSCH_HW_CONTEXT *a1)
{
  if ( *((_BYTE *)a1 + 88) )
    return gulPublicPriorityToSchedulingPriority[*((unsigned int *)a1 + 21)] == 16;
  else
    return *((_BYTE *)a1 + 76) & 1;
}
