NTSTATUS __stdcall IoCheckEaBufferValidity(PFILE_FULL_EA_INFORMATION EaBuffer, ULONG EaLength, PULONG ErrorOffset)
{
  PFILE_FULL_EA_INFORMATION v3; // r9
  __int64 EaNameLength; // r10
  ULONG v5; // r11d
  __int64 NextEntryOffset; // r10

  v3 = EaBuffer;
  if ( EaLength > 0x7FFFFFFF )
  {
    *ErrorOffset = 0;
  }
  else
  {
    while ( EaLength >= 8 )
    {
      EaNameLength = v3->EaNameLength;
      v5 = v3->EaValueLength + EaNameLength + 9;
      if ( EaLength < v5 || v3->EaName[EaNameLength] )
        break;
      NextEntryOffset = v3->NextEntryOffset;
      if ( !(_DWORD)NextEntryOffset )
        return 0;
      if ( ((v5 + 3) & 0xFFFFFFFC) != (_DWORD)NextEntryOffset
        || (int)NextEntryOffset < 0
        || EaLength < (unsigned int)NextEntryOffset )
      {
        break;
      }
      EaLength -= NextEntryOffset;
      v3 = (PFILE_FULL_EA_INFORMATION)((char *)v3 + NextEntryOffset);
    }
    *ErrorOffset = (_DWORD)v3 - (_DWORD)EaBuffer;
  }
  return -2147483628;
}
