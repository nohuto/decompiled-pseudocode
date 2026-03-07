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
