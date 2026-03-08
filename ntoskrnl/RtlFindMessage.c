/*
 * XREFs of RtlFindMessage @ 0x1407E97C0
 * Callers:
 *     PiGetDefaultMessageString @ 0x140847760 (PiGetDefaultMessageString.c)
 *     IopInitializeBootLogging @ 0x140941EE0 (IopInitializeBootLogging.c)
 *     ExpSystemErrorHandler2 @ 0x140AA7FE0 (ExpSystemErrorHandler2.c)
 *     ResFwFindMessage @ 0x140AEA0A8 (ResFwFindMessage.c)
 *     Phase1InitializationDiscard @ 0x140B450A0 (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x140B47864 (InitBootProcessor.c)
 * Callees:
 *     RtlpFindMessageInTable @ 0x14035CABC (RtlpFindMessageInTable.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     LdrpAccessResourceData @ 0x1407E987C (LdrpAccessResourceData.c)
 *     LdrpSearchResourceSection_U @ 0x1407E9958 (LdrpSearchResourceSection_U.c)
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
