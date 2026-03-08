/*
 * XREFs of VslPrepareDriverForPatch @ 0x140549980
 * Callers:
 *     MiApplyHotPatchToLoadedDriver @ 0x140A323A8 (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall VslPrepareDriverForPatch(__int64 a1)
{
  __int64 result; // rax
  volatile signed __int32 *v3; // rcx
  _QWORD v4[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v4, 0, 0x68uLL);
  _InterlockedIncrement(&dword_140C5EEB8);
  v4[1] = a1;
  result = VslpEnterIumSecureMode(2u, 74, 0, (__int64)v4);
  v3 = (volatile signed __int32 *)&unk_140C5EEBC;
  if ( (int)result < 0 )
    v3 = (volatile signed __int32 *)&unk_140C5EEC0;
  _InterlockedIncrement(v3);
  return result;
}
