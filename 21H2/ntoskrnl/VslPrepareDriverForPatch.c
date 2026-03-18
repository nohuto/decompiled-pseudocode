/*
 * XREFs of VslPrepareDriverForPatch @ 0x14054ED80
 * Callers:
 *     MiApplyHotPatchToLoadedDriver @ 0x140971848 (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140358A20 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall VslPrepareDriverForPatch(__int64 a1)
{
  __int64 result; // rax
  volatile signed __int32 *v3; // rcx
  _QWORD v4[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v4, 0, 0x68uLL);
  _InterlockedIncrement(&dword_140C487D8);
  v4[1] = a1;
  result = VslpEnterIumSecureMode(2u, 74, 0, (__int64)v4);
  v3 = (volatile signed __int32 *)&unk_140C487DC;
  if ( (int)result < 0 )
    v3 = (volatile signed __int32 *)&unk_140C487E0;
  _InterlockedIncrement(v3);
  return result;
}
