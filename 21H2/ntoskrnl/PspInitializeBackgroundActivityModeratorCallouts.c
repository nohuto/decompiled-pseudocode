/*
 * XREFs of PspInitializeBackgroundActivityModeratorCallouts @ 0x140A48BDC
 * Callers:
 *     PspInitPhase1 @ 0x140A4C338 (PspInitPhase1.c)
 * Callees:
 *     ExRegisterHost @ 0x14079DC20 (ExRegisterHost.c)
 */

__int64 __fastcall PspInitializeBackgroundActivityModeratorCallouts(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _DWORD v3[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v4; // [rsp+28h] [rbp-30h]
  __int64 (__fastcall **v5)(); // [rsp+30h] [rbp-28h]
  __int64 v6; // [rsp+38h] [rbp-20h]
  __int64 v7; // [rsp+40h] [rbp-18h]

  v3[1] = 6;
  v4 = 512LL;
  v3[0] = 851973;
  v5 = PspBamHostInterface;
  v6 = 0LL;
  v7 = 0LL;
  result = ExRegisterHost(&PspBamExtensionHost, a2, (unsigned __int16 *)v3);
  if ( (int)result < 0 )
    PspBamExtensionHost = 0LL;
  return result;
}
