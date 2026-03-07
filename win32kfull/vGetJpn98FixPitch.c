int vGetJpn98FixPitch()
{
  int v0; // ebx
  int result; // eax
  __int64 v2; // rcx
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  v0 = 0;
  Handle = 0LL;
  result = GetGreRegKey(
             &Handle,
             0x80000000,
             L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize");
  if ( result >= 0 )
  {
    if ( (unsigned int)bQueryFntCacheReg(Handle) )
    {
      LOBYTE(v0) = 0;
      *(_DWORD *)(*(_QWORD *)(SGDGetSessionState(v2) + 32) + 19400LL) = v0;
    }
    return ZwClose(Handle);
  }
  return result;
}
