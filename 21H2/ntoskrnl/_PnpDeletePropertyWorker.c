/*
 * XREFs of _PnpDeletePropertyWorker @ 0x1406DB1B4
 * Callers:
 *     _PnpSetGenericStoreProperty @ 0x140771FFC (_PnpSetGenericStoreProperty.c)
 *     DrvDbDeleteObjectSubKey @ 0x140A2DB88 (DrvDbDeleteObjectSubKey.c)
 * Callees:
 *     RtlUnalignedStringCchLengthW @ 0x1402DF9D0 (RtlUnalignedStringCchLengthW.c)
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchPrintfExW @ 0x1402DFBC4 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x14041D2E0 (ZwDeleteValueKey.c)
 *     _PnpOpenPropertiesKey @ 0x14077EF20 (_PnpOpenPropertiesKey.c)
 */

__int64 __fastcall PnpDeletePropertyWorker(
        __int64 a1,
        __int64 a2,
        const WCHAR *a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7)
{
  int v11; // eax
  NTSTATUS v12; // ebx
  NTSTATUS inited; // edi
  ULONG dwFlags; // [rsp+20h] [rbp-148h]
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-D0h] BYREF
  wchar_t pszDest[48]; // [rsp+B0h] [rbp-B8h] BYREF

  if ( a5 || a7 )
    return (unsigned int)-1073741811;
  if ( !a3 || (v12 = RtlUnalignedStringCchLengthW(a3, 0x55uLL, (size_t *)&DestinationString.Length), v12 >= 0) )
  {
    if ( RtlStringCchPrintfExW(
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
           *(_DWORD *)(a4 + 16)) < 0 )
      return (unsigned int)-1073741595;
    LOBYTE(dwFlags) = 0;
    v11 = PnpOpenPropertiesKey(a1, a2, pszDest, 6LL, dwFlags);
    v12 = v11;
    if ( v11 == -1073741772 )
      return (unsigned int)-1073741275;
    if ( v11 < 0 )
      return (unsigned int)v12;
    DestinationString = 0LL;
    inited = RtlInitUnicodeStringEx(&DestinationString, a3);
    if ( inited >= 0 )
      inited = ZwDeleteValueKey(0LL, &DestinationString);
    ZwClose(0LL);
    if ( inited == -1073741772 || inited == -1073741444 )
      return (unsigned int)-1073741275;
    if ( inited < 0 )
      return (unsigned int)inited;
  }
  return (unsigned int)v12;
}
