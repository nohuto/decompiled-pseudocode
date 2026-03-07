bool __fastcall VIDMM_PROCESS_BUDGET_STATE::CanBePromoted(VIDMM_PROCESS_BUDGET_STATE *this)
{
  if ( *((_QWORD *)this + 36) || *((_QWORD *)this + 35) )
    return 1;
  if ( *((_QWORD *)this + 32) || *((_QWORD *)this + 33) || *((_QWORD *)this + 34) )
    return *((_QWORD *)this + 25) < *((_QWORD *)this + 3);
  return 0;
}
