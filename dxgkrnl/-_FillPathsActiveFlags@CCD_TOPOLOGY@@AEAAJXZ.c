__int64 __fastcall CCD_TOPOLOGY::_FillPathsActiveFlags(CCD_TOPOLOGY *this)
{
  unsigned __int16 v2; // bx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // eax
  unsigned int v6; // ebx
  _BYTE v8[120]; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int16 i; // [rsp+B8h] [rbp+10h] BYREF

  v2 = 8;
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v8, 8u, 0);
  for ( i = 8; ; v2 = i )
  {
    if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v8, v2, v3, v4) < v2 )
    {
      WdLogSingleEntry3(6LL, v2, this, *((_QWORD *)this + 8));
      v6 = -1073741801;
      goto LABEL_6;
    }
    v5 = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v8, 0, 1, 1, &i);
    v6 = v5;
    if ( v5 != -1073741789 )
      break;
  }
  if ( v5 < 0 )
    WdLogSingleEntry3(2LL, v5, this, *((_QWORD *)this + 8));
  else
    CCD_TOPOLOGY::_FillPathsActiveFlagsFromTopology(this, (const struct CCD_TOPOLOGY *)v8);
LABEL_6:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v8);
  return v6;
}
