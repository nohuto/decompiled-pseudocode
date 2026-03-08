/*
 * XREFs of SepReconcileTrustSidWithProcessProtection @ 0x140247C30
 * Callers:
 *     SeCreateClientSecurityEx @ 0x1406D5D70 (SeCreateClientSecurityEx.c)
 *     SeCreateClientSecurity @ 0x1406D61E0 (SeCreateClientSecurity.c)
 * Callees:
 *     SepSidFromProcessProtection @ 0x140247C8C (SepSidFromProcessProtection.c)
 *     RtlSidDominatesForTrust @ 0x140247D00 (RtlSidDominatesForTrust.c)
 */

__int64 __fastcall SepReconcileTrustSidWithProcessProtection(__int64 a1, __int64 a2, _BYTE *a3, _QWORD *a4)
{
  __int64 v5; // rdi
  __int64 v6; // r10
  __int64 result; // rax
  __int64 *v8; // r11
  char v9; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0;
  *a4 = 0LL;
  v9 = 0;
  v5 = SepSidFromProcessProtection(a2, a2, a3, a4);
  result = RtlSidDominatesForTrust(v5, v6, &v9);
  if ( !v9 )
  {
    *a3 = 1;
    *v8 = v5;
  }
  return result;
}
