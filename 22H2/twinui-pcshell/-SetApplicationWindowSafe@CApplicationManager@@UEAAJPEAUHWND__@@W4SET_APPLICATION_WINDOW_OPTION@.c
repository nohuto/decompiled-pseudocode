/*
 * XREFs of ?SetApplicationWindowSafe@CApplicationManager@@UEAAJPEAUHWND__@@W4SET_APPLICATION_WINDOW_OPTION@@@Z @ 0x1801C0D90
 * Callers:
 *     ?SetApplicationWindow@CApplicationManager@@UEAAJPEAUHWND__@@W4SET_APPLICATION_WINDOW_OPTION@@@Z @ 0x1801C0CF0 (-SetApplicationWindow@CApplicationManager@@UEAAJPEAUHWND__@@W4SET_APPLICATION_WINDOW_OPTION@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180085384 (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::SetApplicationWindowSafe(__int64 a1, __int64 a2, int a3)
{
  bool v5; // di
  __int64 v6; // rbx
  signed int First; // ebx
  __int64 v9; // [rsp+30h] [rbp-18h] BYREF
  int v10; // [rsp+38h] [rbp-10h]
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0;
  v11 = 0LL;
  v6 = a1 - 248;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  v9 = a2;
  v10 = 0;
  First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(v6, &v9, &v11, 0LL);
  if ( First >= 0 )
  {
    if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 384LL))(v11) == a2 )
    {
      v5 = (a3 & 0xFFFFFFFE) == 0;
    }
    else if ( (a3 & 1) == 0 )
    {
      First = -2147024809;
    }
    if ( First >= 0 )
    {
      if ( !v5 )
        First = ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 280LL))(v11) & 2) != 0 ? 0x8007139F : 0;
      if ( First >= 0 && !v5 )
        First = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v11 + 112LL))(v11, a2, 1LL);
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  return (unsigned int)First;
}
