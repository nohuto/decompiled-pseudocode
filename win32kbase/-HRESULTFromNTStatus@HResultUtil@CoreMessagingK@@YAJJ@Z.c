__int64 __fastcall CoreMessagingK::HResultUtil::HRESULTFromNTStatus(CoreMessagingK::HResultUtil *this)
{
  unsigned int v1; // ebx
  int v2; // edi
  signed int v4; // eax

  v1 = 0;
  v2 = (int)this;
  if ( (int)this < 0 )
  {
    if ( (_DWORD)this == -1073741559 )
    {
      return (unsigned int)-2147024579;
    }
    else
    {
      v4 = RtlNtStatusToDosError((NTSTATUS)this);
      if ( !v4 || v4 == 317 )
      {
        return v2 | 0x10000000u;
      }
      else if ( v4 > 0 )
      {
        return (unsigned __int16)v4 | 0x80070000;
      }
      else
      {
        return (unsigned int)v4;
      }
    }
  }
  return v1;
}
