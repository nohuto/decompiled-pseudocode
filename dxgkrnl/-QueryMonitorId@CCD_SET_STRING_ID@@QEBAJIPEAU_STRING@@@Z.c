__int64 __fastcall CCD_SET_STRING_ID::QueryMonitorId(CCD_SET_STRING_ID *this, unsigned int a2, struct _STRING *a3)
{
  __int64 v4; // rdi
  USHORT DescriptorLength; // ax

  v4 = a2;
  if ( a2 >= *((unsigned __int16 *)this + 16) )
    WdLogSingleEntry0(1LL);
  if ( (unsigned int)v4 >= *((unsigned __int16 *)this + 16) )
    return 3221225485LL;
  a3->Buffer = (PCHAR)(*((_QWORD *)this + 2) + *(unsigned __int16 *)(*((_QWORD *)this + 3) + 8 * v4));
  DescriptorLength = CCD_SET_STRING_ID::_GetDescriptorLength(this, v4);
  a3->MaximumLength = DescriptorLength;
  a3->Length = DescriptorLength;
  return 0LL;
}
