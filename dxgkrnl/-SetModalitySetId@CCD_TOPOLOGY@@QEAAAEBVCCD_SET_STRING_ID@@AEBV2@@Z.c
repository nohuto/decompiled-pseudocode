void **__fastcall CCD_TOPOLOGY::SetModalitySetId(void **this, const struct CCD_SET_STRING_ID *a2)
{
  operator delete(this[7]);
  this[7] = 0LL;
  CCD_SET_STRING_ID::operator=((CCD_SET_STRING_ID *)this, (__int64)a2);
  return this;
}
