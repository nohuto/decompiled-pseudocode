__int64 __fastcall BiOpenStoreKeyFromObject(HANDLE KeyHandle, _QWORD *a2)
{
  NTSTATUS Key; // ebx
  ULONG ResultLength[4]; // [rsp+30h] [rbp-C8h] BYREF
  _DWORD KeyInformation[40]; // [rsp+40h] [rbp-B8h] BYREF

  memset(KeyInformation, 0, sizeof(KeyInformation));
  ResultLength[0] = 160;
  *a2 = 0LL;
  if ( ((unsigned __int8)KeyHandle & 1) != 0 )
  {
    Key = -1073741822;
  }
  else
  {
    Key = ZwQueryKey(KeyHandle, KeyNameInformation, KeyInformation, 0xA0u, ResultLength);
    if ( Key >= 0 )
    {
      if ( KeyInformation[0] < 0x4Cu )
        return (unsigned int)Key;
      HIWORD(KeyInformation[15]) = 0;
      Key = BiOpenKey(0LL, &KeyInformation[1], 131103LL, a2);
      if ( Key >= 0 )
        return (unsigned int)Key;
    }
  }
  if ( *a2 )
  {
    BiCloseKey(*a2);
    *a2 = 0LL;
  }
  return (unsigned int)Key;
}
