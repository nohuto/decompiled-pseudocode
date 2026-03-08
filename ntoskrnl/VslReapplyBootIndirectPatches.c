/*
 * XREFs of VslReapplyBootIndirectPatches @ 0x140B90324
 * Callers:
 *     MiInitializeDriverImages @ 0x140B3B090 (MiInitializeDriverImages.c)
 *     MmReapplyBootPatchImports @ 0x140B70FB0 (MmReapplyBootPatchImports.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall VslReapplyBootIndirectPatches(__int64 a1)
{
  __int64 result; // rax
  volatile signed __int32 *v3; // rcx
  _QWORD v4[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v4, 0, 0x68uLL);
  _InterlockedIncrement(&dword_140C5EECC);
  v4[1] = a1;
  result = VslpEnterIumSecureMode(2u, 220, 0, (__int64)v4);
  v3 = (volatile signed __int32 *)&unk_140C5EED0;
  if ( (int)result < 0 )
    v3 = (volatile signed __int32 *)&unk_140C5EED4;
  _InterlockedIncrement(v3);
  return result;
}
