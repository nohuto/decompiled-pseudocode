/*
 * XREFs of VslApplyHotPatch @ 0x140548770
 * Callers:
 *     MiApplyDriverHotPatch @ 0x140A31BB8 (MiApplyDriverHotPatch.c)
 *     MiLoadHotPatch @ 0x140A352A0 (MiLoadHotPatch.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall VslApplyHotPatch(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 result; // rax
  int v13; // ecx
  _OWORD v14[7]; // [rsp+20h] [rbp-81h] BYREF

  memset(v14, 0, 0x68uLL);
  _InterlockedIncrement(&VslpHotpatchStats);
  DWORD2(v14[3]) = a7;
  *((_QWORD *)&v14[0] + 1) = a1;
  *(_QWORD *)&v14[1] = a2;
  *((_QWORD *)&v14[1] + 1) = a3;
  *(_QWORD *)&v14[2] = a4;
  *((_QWORD *)&v14[2] + 1) = a5;
  *(_QWORD *)&v14[3] = a6;
  result = VslpEnterIumSecureMode(2u, 72, 0, (__int64)v14);
  if ( (int)result < 0 )
  {
    _InterlockedIncrement(&dword_140C5EEA8);
  }
  else
  {
    _InterlockedIncrement(&dword_140C5EEA4);
    if ( a8 )
    {
      v13 = v14[2];
      *(_OWORD *)a8 = v14[1];
      *(_DWORD *)(a8 + 16) = v13;
    }
  }
  return result;
}
