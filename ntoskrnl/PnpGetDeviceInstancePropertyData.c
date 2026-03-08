/*
 * XREFs of PnpGetDeviceInstancePropertyData @ 0x1409548E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     _PnpGetObjectProperty @ 0x1406D0FB4 (_PnpGetObjectProperty.c)
 *     RtlLCIDToCultureName @ 0x1409BBD70 (RtlLCIDToCultureName.c)
 */

__int64 __fastcall PnpGetDeviceInstancePropertyData(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        _DWORD *a8)
{
  __int64 result; // rax
  __int64 v12; // rcx
  int v13; // [rsp+60h] [rbp-118h] BYREF
  __int64 v14; // [rsp+68h] [rbp-110h] BYREF
  _BYTE *v15; // [rsp+70h] [rbp-108h]
  _BYTE v16[176]; // [rsp+80h] [rbp-F8h] BYREF

  memset(v16, 0, 0xAAuLL);
  v14 = 0LL;
  v13 = 0;
  if ( a3 )
  {
    WORD1(v14) = 170;
    v15 = v16;
    if ( !(unsigned __int8)RtlLCIDToCultureName(a3, &v14) )
      return 3221225473LL;
    v12 = (__int64)v15;
  }
  else
  {
    v12 = 0LL;
  }
  result = PnpGetObjectProperty(*(__int64 *)&PiPnpRtlCtx, a1, 1LL, 0LL, v12, a2, (__int64)&v13, a6, a5, a7, 0);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result == -1073741275 )
      return 3221225524LL;
  }
  else
  {
    *a8 = v13;
  }
  return result;
}
