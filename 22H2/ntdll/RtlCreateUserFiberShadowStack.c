/*
 * XREFs of RtlCreateUserFiberShadowStack @ 0x1800E17B0
 * Callers:
 *     <none>
 * Callees:
 *     NtSetInformationProcess @ 0x18009D860 (NtSetInformationProcess.c)
 *     RtlCalculateUserShadowStackSizes @ 0x1800E16FC (RtlCalculateUserShadowStackSizes.c)
 */

__int64 __fastcall RtlCreateUserFiberShadowStack(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  unsigned __int64 v4; // rbx
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+30h] [rbp-18h]

  v4 = HIBYTE(a2);
  if ( HIBYTE(a2) > 0x40u )
    return 3221225485LL;
  v6 = 0LL;
  v7 = 0LL;
  result = RtlCalculateUserShadowStackSizes(a1, (unsigned __int64 *)&v6);
  if ( (int)result >= 0 )
  {
    LODWORD(v7) = v4;
    result = NtSetInformationProcess();
    if ( (int)result >= 0 )
    {
      *a3 = *((_QWORD *)&v7 + 1);
      return (unsigned int)result;
    }
  }
  return result;
}
