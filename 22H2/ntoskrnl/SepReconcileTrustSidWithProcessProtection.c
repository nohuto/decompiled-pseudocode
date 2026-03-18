/*
 * XREFs of SepReconcileTrustSidWithProcessProtection @ 0x1402B32E4
 * Callers:
 *     SeCreateClientSecurityEx @ 0x14071D220 (SeCreateClientSecurityEx.c)
 *     SeCreateClientSecurity @ 0x14071D3C0 (SeCreateClientSecurity.c)
 * Callees:
 *     SepSidFromProcessProtection @ 0x1402B3340 (SepSidFromProcessProtection.c)
 *     RtlSidDominatesForTrust @ 0x1402B33C0 (RtlSidDominatesForTrust.c)
 */

__int64 __fastcall SepReconcileTrustSidWithProcessProtection(__int64 a1, __int64 a2, _BYTE *a3, _QWORD *a4)
{
  __int64 v5; // rdi
  __int64 v6; // r9
  __int64 v7; // r10
  __int64 result; // rax
  __int64 *v9; // r11
  char v10; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0;
  *a4 = 0LL;
  v10 = 0;
  v5 = SepSidFromProcessProtection(a2);
  result = RtlSidDominatesForTrust(v5, v7, &v10, v6);
  if ( !v10 )
  {
    *a3 = 1;
    *v9 = v5;
  }
  return result;
}
