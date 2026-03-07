__int64 __fastcall UsbhPropagateUxdState(__int64 a1, void *a2)
{
  __int64 result; // rax
  unsigned int v5; // ebx
  unsigned int i; // edi
  PCWSTR Path; // [rsp+30h] [rbp-48h] BYREF
  wchar_t pszDest[16]; // [rsp+38h] [rbp-40h] BYREF

  Path = 0LL;
  wcscpy(pszDest, L"uxd_port_nnn");
  result = UsbhOpenUxdPortHandle(a1, (void **)&Path);
  v5 = result;
  if ( (int)result >= 0 )
  {
    for ( i = 1; i <= *((unsigned __int8 *)FdoExt(a1) + 2938); ++i )
    {
      RtlStringCbPrintfW(pszDest, 0x1AuLL, L"uxd_port_%3.3d", i);
      v5 = RtlWriteRegistryValue(0x40000000u, Path, pszDest, 3u, a2, 0x44u);
    }
    ZwClose((HANDLE)Path);
    return v5;
  }
  return result;
}
