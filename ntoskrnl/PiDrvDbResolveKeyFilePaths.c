__int64 __fastcall PiDrvDbResolveKeyFilePaths(HANDLE Handle)
{
  int Node; // ebx
  unsigned __int16 Length; // ax
  unsigned __int64 v4; // rcx
  const WCHAR *v5; // rdx
  int v6; // ebx
  __int64 v7; // rcx
  int NodeSystemRoot; // eax
  const UNICODE_STRING *v9; // r9
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-20h] BYREF
  UNICODE_STRING String2; // [rsp+30h] [rbp-10h] BYREF
  __int64 v13; // [rsp+68h] [rbp+28h] BYREF
  const UNICODE_STRING *v14; // [rsp+70h] [rbp+30h] BYREF

  v14 = 0LL;
  DestinationString = 0LL;
  v13 = 0LL;
  String2 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  Node = IopQueryRegistryKeySystemPath(Handle, &DestinationString);
  if ( Node >= 0 )
  {
    Length = DestinationString.Length;
    if ( DestinationString.Length >= 2u )
    {
      v4 = (unsigned __int64)DestinationString.Length >> 1;
      if ( DestinationString.Buffer[v4 - 1] == 92 )
      {
        DestinationString.Buffer[v4 - 1] = 0;
        Length = DestinationString.Length - 2;
        DestinationString.Length -= 2;
      }
    }
    if ( Length > 0x26u
      && RtlPrefixUnicodeString(&PiDrvDbDriverStoreNodesRoot, &DestinationString, 1u)
      && DestinationString.Buffer[18] == 92 )
    {
      v5 = DestinationString.Buffer + 19;
    }
    else
    {
      v5 = L"SYSTEM";
    }
    RtlInitUnicodeString(&String2, v5);
    Node = PiDrvDbFindNode(&String2, &v13);
    if ( Node >= 0 )
    {
      if ( (*(_DWORD *)(v13 + 492) & 1) != 0 )
      {
        v6 = CmIsStateSeparationEnabled() ? 2 : 0;
        NodeSystemRoot = PiDrvDbGetNodeSystemRoot(v7, &v14);
        v9 = v14;
        if ( NodeSystemRoot < 0 )
          v9 = 0LL;
        Node = PiDrvDbResolveFilePathKeyValues((__int64)Handle, v6 + 1, &DestinationString, v9);
      }
      else
      {
        Node = 0;
      }
    }
  }
  RtlFreeUnicodeString(&DestinationString);
  return (unsigned int)Node;
}
