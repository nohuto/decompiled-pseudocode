/*
 * XREFs of PiPnpRtlGetFilteredDeviceInterfaceList @ 0x140777504
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1406CE2F0 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140246490 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     RtlGUIDFromString @ 0x1406D1AA0 (RtlGUIDFromString.c)
 *     PiDmGetCmObjectConstraintListFromCache @ 0x14077761C (PiDmGetCmObjectConstraintListFromCache.c)
 *     PiDmGetCmObjectListFromCache @ 0x1407777AC (PiDmGetCmObjectListFromCache.c)
 */

NTSTATUS __fastcall PiPnpRtlGetFilteredDeviceInterfaceList(__int64 a1)
{
  bool v2; // zf
  const WCHAR *v3; // rdx
  char v4; // cl
  int v5; // ecx
  __int64 v6; // r9
  NTSTATUS result; // eax
  __int128 v8; // [rsp+48h] [rbp+7h] BYREF
  __int128 v9; // [rsp+58h] [rbp+17h]
  __int64 v10; // [rsp+68h] [rbp+27h]
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp+2Fh] BYREF
  GUID Guid; // [rsp+80h] [rbp+3Fh] BYREF

  v2 = (*(_BYTE *)(a1 + 32) & 1) == 0;
  v9 = 0LL;
  v3 = *(const WCHAR **)(a1 + 16);
  v4 = _mm_cvtsi128_si32((__m128i)0LL);
  if ( !v2 )
    v4 = 1;
  v2 = *(_QWORD *)(a1 + 24) == 0LL;
  *((_QWORD *)&v9 + 1) = *(_QWORD *)(a1 + 40);
  v10 = *(_QWORD *)(a1 + 48);
  Guid = 0LL;
  LOBYTE(v9) = v4;
  v8 = 0LL;
  DestinationString = 0LL;
  if ( v2 )
  {
    v5 = *(_DWORD *)(a1 + 64);
    v6 = *(_QWORD *)(a1 + 56);
    if ( v3 )
      return PiDmGetCmObjectConstraintListFromCache(
               0,
               (_DWORD)v3,
               (unsigned int)PiPnpRtlInterfaceFilterCallback,
               (unsigned int)&v8,
               v6,
               v5,
               *(_QWORD *)(a1 + 72));
    else
      return PiDmGetCmObjectListFromCache(
               3,
               (unsigned int)PiPnpRtlInterfaceFilterCallback,
               (unsigned int)&v8,
               v6,
               v5,
               *(_QWORD *)(a1 + 72));
  }
  if ( !v3 )
    return PiDmGetCmObjectConstraintListFromCache(
             1,
             *(_QWORD *)(a1 + 24),
             (unsigned int)PiPnpRtlInterfaceFilterCallback,
             (unsigned int)&v8,
             *(_QWORD *)(a1 + 56),
             *(_DWORD *)(a1 + 64),
             *(_QWORD *)(a1 + 72));
  result = RtlInitUnicodeStringEx(&DestinationString, v3);
  if ( result >= 0 )
  {
    result = RtlGUIDFromString(&DestinationString, &Guid);
    if ( result >= 0 )
    {
      *(_QWORD *)&v8 = &Guid;
      return PiDmGetCmObjectConstraintListFromCache(
               1,
               *(_QWORD *)(a1 + 24),
               (unsigned int)PiPnpRtlInterfaceFilterCallback,
               (unsigned int)&v8,
               *(_QWORD *)(a1 + 56),
               *(_DWORD *)(a1 + 64),
               *(_QWORD *)(a1 + 72));
    }
  }
  return result;
}
