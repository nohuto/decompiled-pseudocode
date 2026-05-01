/*
 * XREFs of ??$_FindFirstApplication@VCImmersiveAppFinderByHostId@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHostId@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x1801B5614
 * Callers:
 *     ?ForgetApplicationByHostId@CApplicationManager@@UEAAJPEBG_K@Z @ 0x1801BA260 (-ForgetApplicationByHostId@CApplicationManager@@UEAAJPEBG_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$GetAppPosition@VCImmersiveAppFinderByHostId@@@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEBAJAEBVCImmersiveAppFinderByHostId@@_KPEA_K@Z @ 0x1801B3738 (--$GetAppPosition@VCImmersiveAppFinderByHostId@@@-$CActivationBasedCollection@V-$ComPtr@UIImmers.c)
 */

__int64 CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHostId>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        ...)
{
  __int64 result; // rax
  __int64 (__fastcall ***v6)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v7; // [rsp+48h] [rbp+20h] BYREF
  va_list va; // [rsp+48h] [rbp+20h]
  va_list va1; // [rsp+50h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v7 = va_arg(va1, _QWORD);
  if ( a3 )
    *a3 = 0LL;
  result = CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByHostId>(
             a1 + 624,
             a2,
             (__int64)a3,
             (__int64 *)va);
  if ( (int)result >= 0 )
  {
    if ( a3 )
    {
      v6 = *(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))(*(_QWORD *)(a1 + 632) + 8 * v7);
      return (**v6)(v6, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, a3);
    }
  }
  return result;
}
