__int64 __fastcall WmipReadSMBiosSysInfo(__int64 a1)
{
  int SMBiosString; // ebx
  int SMBiosStructure; // eax
  SIZE_T v3; // r14
  __int64 v4; // rdi
  char *v5; // rbp
  SIZE_T NumberOfBytes; // [rsp+40h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp+10h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = 0LL;
  BaseAddress = 0LL;
  LODWORD(NumberOfBytes) = 0;
  if ( WmipSysInfoStringCached == 1 )
  {
    return 0;
  }
  else
  {
    LOBYTE(a1) = 1;
    SMBiosStructure = WmipFindSMBiosStructure(a1, &v9, &BaseAddress, &NumberOfBytes);
    v3 = (unsigned int)NumberOfBytes;
    SMBiosString = SMBiosStructure;
    if ( SMBiosStructure >= 0 )
    {
      v4 = v9;
      v5 = (char *)BaseAddress + (unsigned int)(NumberOfBytes - 1);
      if ( *(_BYTE *)(v9 + 4) )
      {
        if ( *(_BYTE *)(v9 + 5) )
        {
          SMBiosString = WmipGetSMBiosString(
                           v9,
                           *(unsigned __int8 *)(v9 + 4),
                           (char *)BaseAddress + (unsigned int)(NumberOfBytes - 1),
                           &WmipSysInfoManufacturerStr);
          if ( SMBiosString >= 0 )
          {
            SMBiosString = WmipGetSMBiosString(v4, *(unsigned __int8 *)(v4 + 5), v5, &WmipSysInfoProductNameStr);
            if ( SMBiosString >= 0 )
              WmipSysInfoStringCached = 1;
          }
        }
      }
    }
    if ( BaseAddress )
    {
      MmUnmapIoSpace(BaseAddress, v3);
      WmipReleaseSmbiosLockShared();
    }
  }
  return (unsigned int)SMBiosString;
}
