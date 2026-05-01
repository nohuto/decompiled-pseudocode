/*
 * XREFs of ?RemoveApplication@?$CActivationBasedCollection@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@UEAAX_K@Z @ 0x1801D5900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CActivationBasedCollection<Microsoft::WRL::ComPtr<ITaskWindow>>::RemoveApplication(__int64 a1)
{
  return CTSimpleArray<Microsoft::WRL::ComPtr<IApplicationView>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IApplicationView>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IApplicationView>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IApplicationView>>>::RemoveAt(a1 + 8);
}
