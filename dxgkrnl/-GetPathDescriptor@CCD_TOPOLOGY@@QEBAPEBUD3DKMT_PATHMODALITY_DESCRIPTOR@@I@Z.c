const struct D3DKMT_PATHMODALITY_DESCRIPTOR *__fastcall CCD_TOPOLOGY::GetPathDescriptor(
        CCD_TOPOLOGY *this,
        unsigned int a2)
{
  __int64 v3; // rbx
  __int64 v4; // r8

  v3 = a2;
  if ( !*((_QWORD *)this + 8) )
    WdLogSingleEntry0(1LL);
  v4 = *((_QWORD *)this + 8);
  if ( v4 && (unsigned int)v3 < *(unsigned __int16 *)(v4 + 22) )
    return (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(296 * v3 + v4 + 56);
  else
    return 0LL;
}
