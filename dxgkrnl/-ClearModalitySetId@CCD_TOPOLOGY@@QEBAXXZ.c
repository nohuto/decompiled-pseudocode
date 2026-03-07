void __fastcall CCD_TOPOLOGY::ClearModalitySetId(void **this)
{
  operator delete(this[7]);
  this[7] = 0LL;
  CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)this);
}
