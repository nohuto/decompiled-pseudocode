/*
 * XREFs of RtlCheckSandboxedToken @ 0x180085F70
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryInformationToken @ 0x18009D900 (NtQueryInformationToken.c)
 */

__int64 __fastcall RtlCheckSandboxedToken(__int64 a1, _BYTE *a2)
{
  __int64 result; // rax
  int v4; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0;
  result = NtQueryInformationToken(a1, 47LL, &v4);
  if ( (int)result >= 0 )
  {
    if ( v4 )
      *a2 = 1;
  }
  return result;
}
