void __fastcall GetFirstHardwareId(_UNICODE_STRING *HardwareIds)
{
  wchar_t *Buffer; // rdx
  unsigned __int16 v2; // r8
  int v3; // eax
  unsigned __int16 v4; // ax

  Buffer = HardwareIds->Buffer;
  v2 = HardwareIds->Length >> 1;
  if ( Buffer )
  {
    if ( *Buffer )
    {
      v3 = 0;
      if ( v2 )
      {
        while ( *Buffer )
        {
          ++v3;
          ++Buffer;
          if ( v3 >= v2 )
            return;
        }
        v4 = 2 * v3;
        HardwareIds->Length = v4;
        HardwareIds->MaximumLength = v4 + 2;
      }
    }
    else
    {
      *(_DWORD *)&HardwareIds->Length = 0x20000;
    }
  }
  else
  {
    RtlInitUnicodeString(HardwareIds, 0LL);
  }
}
