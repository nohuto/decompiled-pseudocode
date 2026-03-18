/*
 * XREFs of RtlFindMessage @ 0x140755AA0
 * Callers:
 *     PiGetDefaultMessageString @ 0x140849DD8 (PiGetDefaultMessageString.c)
 *     IopInitializeBootLogging @ 0x140944EF8 (IopInitializeBootLogging.c)
 *     ExpSystemErrorHandler2 @ 0x140AAB210 (ExpSystemErrorHandler2.c)
 *     ResFwFindMessage @ 0x140AEE06C (ResFwFindMessage.c)
 *     Phase1InitializationDiscard @ 0x140B4FF9C (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x140B52774 (InitBootProcessor.c)
 * Callees:
 *     RtlpFindMessageInTable @ 0x1402F6F9C (RtlpFindMessageInTable.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     LdrpAccessResourceData @ 0x140755B5C (LdrpAccessResourceData.c)
 *     LdrpSearchResourceSection_U @ 0x140756220 (LdrpSearchResourceSection_U.c)
 */

__int64 __fastcall RtlFindMessage(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned __int16 **a5)
{
  __int64 result; // rax
  int v8; // [rsp+30h] [rbp-40h] BYREF
  __int64 v9; // [rsp+38h] [rbp-38h] BYREF
  int *v10; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v11[4]; // [rsp+48h] [rbp-28h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  v8 = 0;
  v11[0] = a2;
  v11[2] = a3;
  v11[1] = 1LL;
  v11[3] = a4;
  result = LdrpSearchResourceSection_U(a1, (unsigned int)v11, 4, 64, (__int64)&v9);
  if ( (int)result >= 0 )
  {
    result = LdrpAccessResourceData(a1, v9, &v10, &v8);
    if ( (int)result >= 0 )
      return RtlpFindMessageInTable(v10, v8, a4, a5);
  }
  return result;
}
