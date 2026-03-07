VIDMM_MDL_RANGE *__fastcall VIDMM_MDL_RANGE::`scalar deleting destructor'(VIDMM_MDL_RANGE *this)
{
  if ( this )
    ExFreePoolWithTag(this, 0);
  return this;
}
