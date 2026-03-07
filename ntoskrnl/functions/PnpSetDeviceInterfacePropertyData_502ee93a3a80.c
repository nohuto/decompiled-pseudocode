__int64 __fastcall PnpSetDeviceInterfacePropertyData(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        const wchar_t *a7)
{
  __int64 v10; // rsi
  int v11; // ebx
  WCHAR *v13; // [rsp+50h] [rbp-108h] BYREF
  __int64 v14; // [rsp+58h] [rbp-100h] BYREF
  _BYTE *v15; // [rsp+60h] [rbp-F8h]
  _BYTE v16[176]; // [rsp+70h] [rbp-E8h] BYREF

  memset(v16, 0, 0xAAuLL);
  v14 = 0LL;
  v13 = 0LL;
  if ( !a1 || !*(_QWORD *)(a1 + 8) || !*(_WORD *)a1 )
    return (unsigned int)-1073741811;
  if ( a3 )
  {
    WORD1(v14) = 170;
    v15 = v16;
    if ( !(unsigned __int8)RtlLCIDToCultureName(a3, &v14) )
      return (unsigned int)-1073741823;
    v10 = (__int64)v15;
  }
  else
  {
    v10 = 0LL;
  }
  v11 = PnpUnicodeStringToWstr(&v13, 0LL, (unsigned __int16 *)a1);
  if ( v11 >= 0 )
    v11 = PiPnpRtlSetObjectProperty(*(__int64 *)&PiPnpRtlCtx, v13, 3, 0LL, v10, a2, a5, a7, a6, 0);
  PnpUnicodeStringToWstrFree(v13, a1);
  if ( v11 == -1073741275 )
    return (unsigned int)-1073741772;
  return (unsigned int)v11;
}
