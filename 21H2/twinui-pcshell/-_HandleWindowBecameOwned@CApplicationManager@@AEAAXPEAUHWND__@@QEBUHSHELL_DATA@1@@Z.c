/*
 * XREFs of ?_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z @ 0x18008425C
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x18003E070 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x180047FB0 (-_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUIImmersiveMonitor@@@Z @ 0x18008431C (-_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUII.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180085384 (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x1801C5D94 (-_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleImmersiveOwnedWindowVisibilityChange@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z @ 0x1801C6390 (-_HandleImmersiveOwnedWindowVisibilityChange@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWN.c)
 *     ?_HandleMonitorRelatedNotificationForDesktopWindow@CApplicationManager@@AEAAXPEAUHWND__@@0_NW4ZBID@@@Z @ 0x1801C6554 (-_HandleMonitorRelatedNotificationForDesktopWindow@CApplicationManager@@AEAAXPEAUHWND__@@0_NW4ZB.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CApplicationManager::_HandleWindowBecameOwned(
        CApplicationManager *this,
        HWND a2,
        const struct CApplicationManager::HSHELL_DATA *const a3)
{
  __int64 v6; // r15
  int v7; // eax
  int v8; // ecx
  __int64 v9; // r9
  int v10; // r14d
  BOOL v11; // eax
  void *v12; // rbx
  void (__fastcall *v13)(void *, IUnknown *, HWND *, HWND *); // rdi
  HWND v14; // [rsp+30h] [rbp-30h] BYREF
  int v15; // [rsp+38h] [rbp-28h]
  __int64 v16; // [rsp+40h] [rbp-20h] BYREF
  HWND v17; // [rsp+48h] [rbp-18h] BYREF
  __int64 v18; // [rsp+50h] [rbp-10h] BYREF
  char v19; // [rsp+58h] [rbp-8h]
  IUnknown *punk; // [rsp+90h] [rbp+30h] BYREF
  void *ppv; // [rsp+98h] [rbp+38h] BYREF

  v6 = *(_QWORD *)a3;
  v7 = *((_DWORD *)a3 + 4);
  if ( v7 == 1 )
  {
    if ( !*((_BYTE *)a3 + 21) || (v11 = IsWindowVisible(*((HWND *)a3 + 1)), v8 = 5, !v11) )
      v8 = 9;
    v14 = (HWND)*((_QWORD *)a3 + 1);
    v15 = v8;
    v16 = 0LL;
    v10 = (*(__int64 (__fastcall **)(_QWORD, HWND *))(**((_QWORD **)this + 67) + 80LL))(*((_QWORD *)this + 67), &v14);
    if ( v10 == 1 )
    {
      LOBYTE(v9) = 1;
      CApplicationManager::_HandleMonitorRelatedNotificationForDesktopWindow(
        this,
        *((_QWORD *)a3 + 1),
        *((_QWORD *)a3 + 1),
        v9,
        *((_DWORD *)a3 + 6));
    }
    if ( v6 == 25 )
    {
      CApplicationManager::_HandleActivation2((__int64)this, (__int64)a3, 3);
    }
    else if ( !v10 )
    {
      CApplicationManager::_TryPresentDesktopExperience(this, *((_QWORD *)a3 + 1), 3LL, v16);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  }
  else if ( (unsigned int)(v7 - 2) <= 1 )
  {
    if ( v6 == 25 )
      CApplicationManager::_HandleActivation(this, a3);
    else
      CApplicationManager::_HandleImmersiveOwnedWindowVisibilityChange(this, a3, a2);
    punk = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
    v14 = a2;
    v15 = 1;
    if ( (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(this, &v14, &punk, 0LL) >= 0 )
    {
      ppv = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
      if ( IUnknown_GetSite(punk, &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee, &ppv) >= 0 )
      {
        v14 = 0LL;
        v12 = ppv;
        v13 = *(void (__fastcall **)(void *, IUnknown *, HWND *, HWND *))(*(_QWORD *)ppv + 56LL);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
        v17 = a2;
        v18 = 0LL;
        v19 = 0;
        v13(v12, punk, &v17, &v14);
        Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v18);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
  }
  else
  {
    CApplicationManager::_HandleActivation(this, a3);
  }
}
