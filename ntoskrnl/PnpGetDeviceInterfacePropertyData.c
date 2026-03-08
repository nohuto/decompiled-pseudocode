/*
 * XREFs of PnpGetDeviceInterfacePropertyData @ 0x14078D104
 * Callers:
 *     IoGetDeviceInterfacePropertyData @ 0x14078D0C0 (IoGetDeviceInterfacePropertyData.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PnpUnicodeStringToWstr @ 0x1406D07D4 (PnpUnicodeStringToWstr.c)
 *     PnpUnicodeStringToWstrFree @ 0x1406D08F4 (PnpUnicodeStringToWstrFree.c)
 *     _PnpGetObjectProperty @ 0x1406D0FB4 (_PnpGetObjectProperty.c)
 *     RtlLCIDToCultureName @ 0x1409BBD70 (RtlLCIDToCultureName.c)
 */

__int64 __fastcall PnpGetDeviceInterfacePropertyData(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v11; // rsi
  int ObjectProperty; // ebx
  void *v14; // [rsp+60h] [rbp-118h] BYREF
  __int64 v15; // [rsp+68h] [rbp-110h] BYREF
  _BYTE *v16; // [rsp+70h] [rbp-108h]
  _BYTE v17[176]; // [rsp+80h] [rbp-F8h] BYREF

  memset(v17, 0, 0xAAuLL);
  v15 = 0LL;
  v14 = 0LL;
  if ( !a1 || !*(_QWORD *)(a1 + 8) || !*(_WORD *)a1 )
    return (unsigned int)-1073741811;
  if ( a3 )
  {
    WORD1(v15) = 170;
    v16 = v17;
    if ( !(unsigned __int8)RtlLCIDToCultureName(a3, &v15) )
      return (unsigned int)-1073741823;
    v11 = (__int64)v16;
  }
  else
  {
    v11 = 0LL;
  }
  ObjectProperty = PnpUnicodeStringToWstr(&v14, 0LL, (unsigned __int16 *)a1);
  if ( ObjectProperty >= 0 )
    ObjectProperty = PnpGetObjectProperty(*(__int64 *)&PiPnpRtlCtx, (__int64)v14, 3LL, 0LL, v11, a2, a8, a6, a5, a7, 0);
  PnpUnicodeStringToWstrFree(v14, a1);
  if ( ObjectProperty == -1073741275 )
    return (unsigned int)-1073741772;
  return (unsigned int)ObjectProperty;
}
