__int64 __fastcall PnpGetGenericStoreProperty(
        __int64 a1,
        __int64 a2,
        const wchar_t *a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        int a7,
        _DWORD *a8)
{
  NTSTATUS v9; // ebx
  int v10; // eax
  unsigned int ValueIndirect; // eax
  int dwFlags; // [rsp+20h] [rbp-F0h]
  size_t pcchLength; // [rsp+C8h] [rbp-48h] BYREF
  wchar_t pszDest[48]; // [rsp+D0h] [rbp-40h] BYREF

  *a5 = 0;
  *a8 = 0;
  if ( !a3 || (v9 = RtlUnalignedStringCchLengthW(a3, 0x55uLL, &pcchLength), v9 >= 0) )
  {
    v9 = RtlStringCchPrintfExW(
           pszDest,
           0x30uLL,
           0LL,
           0LL,
           0x800u,
           L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}\\%04lX",
           *(_DWORD *)a4,
           *(unsigned __int16 *)(a4 + 4),
           *(unsigned __int16 *)(a4 + 6),
           *(unsigned __int8 *)(a4 + 8),
           *(unsigned __int8 *)(a4 + 9),
           *(unsigned __int8 *)(a4 + 10),
           *(unsigned __int8 *)(a4 + 11),
           *(unsigned __int8 *)(a4 + 12),
           *(unsigned __int8 *)(a4 + 13),
           *(unsigned __int8 *)(a4 + 14),
           *(unsigned __int8 *)(a4 + 15),
           *(_DWORD *)(a4 + 16),
           0);
    if ( v9 >= 0 )
    {
      LOBYTE(dwFlags) = 0;
      v10 = PnpOpenPropertiesKey(a1, a2, pszDest, 1LL, dwFlags);
      v9 = v10;
      if ( v10 == -1073741772 )
        return (unsigned int)-1073741275;
      if ( v10 < 0 )
        return (unsigned int)v9;
      ValueIndirect = PnpCtxRegQueryValueIndirect(a1, 0LL);
      if ( ValueIndirect == -1073741772 || ValueIndirect == -1073741444 )
      {
        return (unsigned int)-1073741275;
      }
      else if ( !ValueIndirect || ValueIndirect == -1073741789 )
      {
        *a5 = 0;
        *a8 = a7;
        if ( ValueIndirect || !a7 )
          return (unsigned int)-1073741789;
      }
      else
      {
        return ValueIndirect;
      }
    }
  }
  return (unsigned int)v9;
}
