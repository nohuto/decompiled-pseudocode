/*
 * XREFs of PiCMSetDeviceProblem @ 0x1409679A8
 * Callers:
 *     PiCMHandleIoctl @ 0x1406CF040 (PiCMHandleIoctl.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PiAuDoesClientHaveAccess @ 0x1406C4454 (PiAuDoesClientHaveAccess.c)
 *     PiCMReturnBasicResultData @ 0x1406C7AF0 (PiCMReturnBasicResultData.c)
 *     _CmValidateDeviceName @ 0x1406D3DF0 (_CmValidateDeviceName.c)
 *     PiAuDoesClientHavePrivilege @ 0x140958948 (PiAuDoesClientHavePrivilege.c)
 *     PiCMCaptureProblemInputData @ 0x14096502C (PiCMCaptureProblemInputData.c)
 *     PiCMSetProblem @ 0x140967AB4 (PiCMSetProblem.c)
 */

__int64 __fastcall PiCMSetDeviceProblem(
        _OWORD *a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        __int64 a5,
        _DWORD *a6)
{
  __int64 v10; // r8
  __int64 result; // rax
  __int64 v12; // rcx
  int v13; // eax
  _OWORD v14[26]; // [rsp+30h] [rbp-1E8h] BYREF

  memset(v14, 0, sizeof(v14));
  *a6 = 0;
  result = PiCMCaptureProblemInputData(a1, a2, v10, v14);
  if ( (int)result >= 0 )
  {
    if ( PiAuDoesClientHaveAccess(4u) && PiAuDoesClientHavePrivilege(0xAu) )
    {
      if ( WORD4(v14[0]) && a3 && a4 >= 8 && (unsigned int)(DWORD1(v14[0]) - 1) <= 1 )
      {
        v13 = CmValidateDeviceName(v12, (const wchar_t *)v14 + 4);
        if ( v13 >= 0 )
          v13 = PiCMSetProblem((PCWSTR)v14 + 4);
      }
      else
      {
        v13 = -1073741811;
      }
    }
    else
    {
      v13 = -1073741790;
    }
    return PiCMReturnBasicResultData(v13, SHIDWORD(v14[25]), a3, a4, a6);
  }
  return result;
}
