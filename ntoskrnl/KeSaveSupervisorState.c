/*
 * XREFs of KeSaveSupervisorState @ 0x14036A078
 * Callers:
 *     KiFreezeTargetExecution @ 0x140369240 (KiFreezeTargetExecution.c)
 *     KeBugCheck2 @ 0x140565E90 (KeBugCheck2.c)
 *     IopLiveDumpCollectPages @ 0x140A97A84 (IopLiveDumpCollectPages.c)
 *     IopLiveDumpProcessCorralStateChange @ 0x140A99280 (IopLiveDumpProcessCorralStateChange.c)
 *     KdEnterDebugger @ 0x140AAD40C (KdEnterDebugger.c)
 * Callees:
 *     RtlXSaveS @ 0x140302524 (RtlXSaveS.c)
 *     KiSaveIptState @ 0x140570730 (KiSaveIptState.c)
 */

__int64 __fastcall KeSaveSupervisorState(__int64 a1, __int64 a2)
{
  __int64 v2; // r11
  __int64 result; // rax
  __int64 v5; // rdx

  if ( a1 )
  {
    v2 = a2;
    if ( (_DWORD)KiIptMsrMask && (a2 & 0x100) != 0 )
      result = KiSaveIptState(MEMORY[0xFFFFF78000000600] - (unsigned __int64)MEMORY[0xFFFFF780000003E8] + a1 + 64);
    if ( (KeFeatureBits & 0x800000) != 0 )
    {
      result = KeEnabledSupervisorXStateFeatures;
      if ( KeEnabledSupervisorXStateFeatures )
      {
        v5 = KeEnabledSupervisorXStateFeatures & v2;
        *(_QWORD *)(a1 + 8) = KeEnabledSupervisorXStateFeatures & v2;
        return RtlXSaveS(a1 - 512, v5);
      }
    }
  }
  return result;
}
