/*
 * XREFs of PiDrvDbResolveKeyFilePaths @ 0x1408B7874
 * Callers:
 *     PiDevCfgInitResolveContext @ 0x14076732C (PiDevCfgInitResolveContext.c)
 * Callees:
 *     CmIsStateSeparationEnabled @ 0x140323318 (CmIsStateSeparationEnabled.c)
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     PiDrvDbFindNode @ 0x1405100BC (PiDrvDbFindNode.c)
 *     RtlPrefixUnicodeString @ 0x1405EDBE0 (RtlPrefixUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140602CB0 (RtlFreeAnsiString.c)
 *     IopQueryRegistryKeySystemPath @ 0x14073D480 (IopQueryRegistryKeySystemPath.c)
 *     PiDrvDbGetNodeSystemRoot @ 0x1408B5F64 (PiDrvDbGetNodeSystemRoot.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1408B7208 (PiDrvDbResolveFilePathKeyValues.c)
 */

__int64 __fastcall PiDrvDbResolveKeyFilePaths(HANDLE Handle)
{
  int Node; // ebx
  unsigned __int16 Length; // ax
  wchar_t *Buffer; // rbx
  unsigned __int64 v5; // rcx
  const WCHAR *v6; // rdx
  int v7; // ebx
  __int64 v8; // rcx
  int NodeSystemRoot; // eax
  const UNICODE_STRING *v10; // r9
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-20h] BYREF
  UNICODE_STRING String2; // [rsp+30h] [rbp-10h] BYREF
  __int64 v14; // [rsp+68h] [rbp+28h] BYREF
  const UNICODE_STRING *v15; // [rsp+70h] [rbp+30h] BYREF

  v15 = 0LL;
  DestinationString = 0LL;
  v14 = 0LL;
  String2 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  Node = IopQueryRegistryKeySystemPath(Handle, &DestinationString);
  if ( Node >= 0 )
  {
    Length = DestinationString.Length;
    Buffer = DestinationString.Buffer;
    if ( DestinationString.Length >= 2u )
    {
      v5 = (unsigned __int64)DestinationString.Length >> 1;
      if ( DestinationString.Buffer[v5 - 1] == 92 )
      {
        DestinationString.Buffer[v5 - 1] = 0;
        Buffer = DestinationString.Buffer;
        Length = DestinationString.Length - 2;
        DestinationString.Length -= 2;
      }
    }
    if ( Length <= 0x1Cu
      || !RtlPrefixUnicodeString(&PiDrvDbDriverStoresRoot, &DestinationString, 1u)
      || (v6 = Buffer + 14, Buffer[13] != 92) )
    {
      v6 = L"SYSTEM";
    }
    RtlInitUnicodeString(&String2, v6);
    Node = PiDrvDbFindNode(&String2, &v14);
    if ( Node >= 0 )
    {
      if ( (*(_DWORD *)(v14 + 492) & 1) != 0 )
      {
        v7 = CmIsStateSeparationEnabled() ? 2 : 0;
        NodeSystemRoot = PiDrvDbGetNodeSystemRoot(v8, &v15);
        v10 = v15;
        if ( NodeSystemRoot < 0 )
          v10 = 0LL;
        Node = PiDrvDbResolveFilePathKeyValues((__int64)Handle, v7 + 1, &DestinationString, v10);
      }
      else
      {
        Node = 0;
      }
    }
  }
  RtlFreeAnsiString(&DestinationString);
  return (unsigned int)Node;
}
