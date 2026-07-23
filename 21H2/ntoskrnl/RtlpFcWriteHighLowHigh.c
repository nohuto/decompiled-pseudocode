/*
 * XREFs of RtlpFcWriteHighLowHigh @ 0x1403CE5D4
 * Callers:
 *     CmFcManagerUpdateFeatureConfigurations @ 0x14087DE64 (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x14087E1C0 (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 *     CmFcManagerStartBootPhase @ 0x140A396D8 (CmFcManagerStartBootPhase.c)
 *     CmFcManagerStartRuntimePhase @ 0x140A39784 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFcWriteHighLowHigh(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v3; // [rsp+0h] [rbp-8h]

  _disable();
  *(_DWORD *)(a1 + 8) = HIDWORD(a2);
  result = v3 >> 9;
  *(_QWORD *)a1 = a2;
  if ( (v3 & 0x200) != 0 )
    _enable();
  return result;
}
