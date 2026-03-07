unsigned __int16 __fastcall CCD_SET_STRING_ID::_GetDescriptorLength(CCD_SET_STRING_ID *this, unsigned int a2)
{
  __int64 v2; // r8
  __int16 v3; // ax

  v2 = a2 + 1;
  if ( (unsigned int)v2 < *((unsigned __int16 *)this + 16) )
    v3 = *(_WORD *)(*((_QWORD *)this + 3) + 8 * v2) - 1;
  else
    v3 = *((_WORD *)this + 4);
  return v3 - *(_WORD *)(*((_QWORD *)this + 3) + 8LL * a2);
}
