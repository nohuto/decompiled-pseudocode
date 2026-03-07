__int64 __fastcall PiDrvDbResolveNodeFilePaths(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  int v5; // eax
  NTSTATUS v6; // ebx
  int v8; // ecx
  int NodeSystemRoot; // eax
  __int64 v10; // r9
  unsigned int v11; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  __int64 v13; // [rsp+70h] [rbp+30h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp+40h] BYREF

  Handle = 0LL;
  v13 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v4 = 1;
  if ( (*(_DWORD *)(a1 + 492) & 1) == 0
    || (v5 = SysCtxRegOpenKey(0LL, a2, (__int64)L"Setup\\ResolveFilePaths", 0, 0x20019u, (__int64)&Handle),
        v6 = v5,
        v5 == -1073741772) )
  {
    v6 = 0;
    goto LABEL_4;
  }
  if ( v5 >= 0 )
  {
    v8 = *(_DWORD *)(a1 + 64);
    if ( (v8 & 1) == 0 && CmIsStateSeparationEnabled() )
      v4 = 3;
    if ( (v8 & 8) != 0 )
    {
      v11 = *(unsigned __int16 *)(a1 + 18) + 38;
      if ( v11 > 0xFFFE )
      {
        v6 = -2147483643;
        goto LABEL_4;
      }
      DestinationString.Length = 0;
      DestinationString.MaximumLength = v11;
      DestinationString.Buffer = (wchar_t *)ExpAllocateStringRoutine(v11);
      if ( DestinationString.Buffer )
      {
        v6 = RtlUnicodeStringPrintf(&DestinationString, L"%ws\\%wZ", L"\\DriverStore\\Nodes", a1 + 16);
        if ( v6 < 0 )
          goto LABEL_4;
        goto LABEL_11;
      }
    }
    else if ( RtlCreateUnicodeString(&DestinationString, L"\\SystemRoot") )
    {
LABEL_11:
      NodeSystemRoot = PiDrvDbGetNodeSystemRoot(a1, &v13);
      v10 = v13;
      if ( NodeSystemRoot < 0 )
        v10 = 0LL;
      v6 = PiDrvDbResolveFilePathKeyValues(a2, v4, &DestinationString, v10);
      goto LABEL_4;
    }
    v6 = -1073741670;
  }
LABEL_4:
  RtlFreeUnicodeString(&DestinationString);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v6;
}
