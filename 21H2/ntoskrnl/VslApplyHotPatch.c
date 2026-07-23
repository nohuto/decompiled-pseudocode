/*
 * XREFs of VslApplyHotPatch @ 0x1404FBF40
 * Callers:
 *     MiApplyDriverHotPatch @ 0x1408C8F14 (MiApplyDriverHotPatch.c)
 *     MiLoadHotPatch @ 0x1408CAD30 (MiLoadHotPatch.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402840D0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

NTSTATUS __fastcall VslApplyHotPatch(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  NTSTATUS result; // eax
  int v12; // ecx
  _OWORD v13[7]; // [rsp+20h] [rbp-B8h] BYREF

  memset(v13, 0, 0x68uLL);
  _InterlockedIncrement(&VslpHotpatchStats);
  *((_QWORD *)&v13[0] + 1) = a1;
  *(_QWORD *)&v13[1] = a2;
  *((_QWORD *)&v13[1] + 1) = a3;
  *(_QWORD *)&v13[2] = a4;
  *((_QWORD *)&v13[2] + 1) = a5;
  *(_QWORD *)&v13[3] = a6;
  result = VslpEnterIumSecureMode(2u, 70, 0, (__int64)v13);
  if ( result < 0 )
  {
    _InterlockedIncrement(&dword_140C47468);
  }
  else
  {
    _InterlockedIncrement(&dword_140C47464);
    if ( a7 )
    {
      v12 = v13[2];
      *(_OWORD *)a7 = v13[1];
      *(_DWORD *)(a7 + 16) = v12;
    }
  }
  return result;
}
