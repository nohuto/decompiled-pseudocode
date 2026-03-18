/*
 * XREFs of RtlpFcApplyUpdateAndAddFeature @ 0x1409BF0F8
 * Callers:
 *     RtlpFcUpdateFeatureConfiguration @ 0x1409BF744 (RtlpFcUpdateFeatureConfiguration.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlpFcDoesFeatureHaveUniqueState @ 0x1409BF598 (RtlpFcDoesFeatureHaveUniqueState.c)
 *     RtlpFcUpdateFeature @ 0x1409BF6D0 (RtlpFcUpdateFeature.c)
 */

__int64 __fastcall RtlpFcApplyUpdateAndAddFeature(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  unsigned int v3; // eax
  __int64 *v4; // r10
  _DWORD *v5; // r11
  __int64 v6; // rcx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v8; // [rsp+28h] [rbp-20h]

  result = *(unsigned int *)(a1 + 28);
  if ( (result & 4) == 0 )
  {
    v3 = *((_DWORD *)a2 + 2);
    v7 = *a2;
    v8 = v3;
    RtlpFcUpdateFeature(&v7, a1);
    result = RtlpFcDoesFeatureHaveUniqueState(&v7);
    if ( (_BYTE)result )
    {
      v6 = *v4;
      result = v8;
      *(_QWORD *)v6 = v7;
      *(_DWORD *)(v6 + 8) = result;
      *v4 += 12LL;
      ++*v5;
    }
  }
  return result;
}
