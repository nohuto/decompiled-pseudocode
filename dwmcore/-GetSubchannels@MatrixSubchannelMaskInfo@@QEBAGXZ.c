__int64 __fastcall MatrixSubchannelMaskInfo::GetSubchannels(MatrixSubchannelMaskInfo *this)
{
  int v1; // edx
  int v2; // r8d
  int v3; // r9d
  unsigned __int64 v4; // r10
  char v5; // cl

  LOWORD(v1) = 0;
  if ( *((_BYTE *)this + 4) )
  {
    v2 = *((unsigned __int8 *)this + 4);
    v3 = 0;
    v4 = *((_QWORD *)this + 1);
    do
    {
      v5 = v2 - v3++;
      v1 = (unsigned __int16)v1 | (1 << ((v4 >> (4 * v5 - 4)) & 0xF));
    }
    while ( v3 < v2 );
  }
  else
  {
    LOWORD(v1) = -1;
  }
  return (unsigned __int16)v1;
}
