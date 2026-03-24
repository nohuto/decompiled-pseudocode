/*
 * XREFs of ?_SqmTHQA@@YAXGGK@Z @ 0x1C01EDD2C
 * Callers:
 *     ValidateDeviceSignature @ 0x1C01EEBA0 (ValidateDeviceSignature.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

void __fastcall _SqmTHQA(unsigned __int16 a1, unsigned __int16 a2, int a3)
{
  _DWORD v3[12]; // [rsp+30h] [rbp-40h] BYREF

  if ( gSqmIsOptedIn )
  {
    v3[2] = a1;
    v3[1] = 1;
    v3[5] = 1;
    v3[9] = 1;
    v3[0] = 16;
    v3[4] = 16;
    v3[8] = 16;
    v3[10] = a3;
    v3[6] = a2;
    v3[3] = 0;
    v3[7] = 0;
    v3[11] = 0;
    WinSqmAddToStreamEx(0LL, 9179LL, 3LL, v3, 0);
  }
}
