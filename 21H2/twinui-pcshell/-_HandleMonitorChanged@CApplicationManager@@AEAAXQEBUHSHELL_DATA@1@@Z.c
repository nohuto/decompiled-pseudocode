/*
 * XREFs of ?_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x18003F110
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x18003E070 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ??$FindEx@VCImmersiveAppFinderByHwnd@@@?$CTSimpleFixedArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVCImmersiveAppFinderByHwnd@@AEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x180043CE0 (--$FindEx@VCImmersiveAppFinderByHwnd@@@-$CTSimpleFixedArray@V-$ComPtr@UIImmersiveApplicationInte.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUIImmersiveMonitor@@@Z @ 0x18008431C (-_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUII.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z @ 0x1801C57A0 (-_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z.c)
 *     ?_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x1801C5C5C (-_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArr.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall CApplicationManager::_HandleMonitorChanged(
        CApplicationManager *this,
        const struct CApplicationManager::HSHELL_DATA *const a2)
{
  __int64 v4; // r15
  PSRWLOCK v5; // rbx
  PVOID Ptr; // rsi
  unsigned int v7; // r12d
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  _QWORD *v10; // rdi
  int v11; // eax
  HWND v12; // rdi
  HWND v13; // rbx
  char v14; // al
  __int64 v15; // rcx
  int v16; // ebx
  int (__fastcall ***v17)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v18; // rdi
  int (__fastcall *v19)(__int64, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **); // rbx
  __int64 v20; // [rsp+20h] [rbp-69h]
  struct IImmersiveMonitor *v21; // [rsp+40h] [rbp-49h] BYREF
  __int64 v22; // [rsp+48h] [rbp-41h] BYREF
  struct ISyncIAMEventHandler *v23; // [rsp+50h] [rbp-39h] BYREF
  struct IObjectArray *v24; // [rsp+58h] [rbp-31h] BYREF
  struct IImmersiveMonitor *v25; // [rsp+60h] [rbp-29h] BYREF
  __int64 v26; // [rsp+68h] [rbp-21h] BYREF
  _DWORD v27[2]; // [rsp+70h] [rbp-19h] BYREF
  __int64 v28; // [rsp+78h] [rbp-11h] BYREF
  _QWORD v29[2]; // [rsp+80h] [rbp-9h] BYREF
  __int64 v30; // [rsp+90h] [rbp+7h] BYREF
  int v31; // [rsp+98h] [rbp+Fh]
  __int64 v32; // [rsp+A0h] [rbp+17h]
  __int64 v33; // [rsp+A8h] [rbp+1Fh]
  __int64 v34; // [rsp+F8h] [rbp+6Fh] BYREF
  struct IObjectArray *v35; // [rsp+100h] [rbp+77h] BYREF
  struct ISyncIAMEventHandler *v36; // [rsp+108h] [rbp+7Fh] BYREF

  v4 = *((_QWORD *)a2 + 1);
  v32 = v4;
  v5 = CApplicationManagerUtility::g_pIAMGlobals;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  if ( Ptr )
  {
    v29[0] = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v29[1] = v4;
    v7 = (unsigned int)v5[15].Ptr;
    v8 = 0LL;
    v33 = 0LL;
    v9 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v10 = v9;
    if ( v9 )
    {
      *((_DWORD *)v9 + 3) = 1;
      *v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      v10[2] = 0LL;
      if ( v10 + 2 != v29 )
      {
        v10[2] = Ptr;
        Ptr = 0LL;
      }
      v10[3] = v4;
      *v10 = off_1804FA1B0;
      v8 = v10;
    }
    SHTaskPoolQueueTask(3LL, 2LL, v7, 0LL, v8, 0LL);
    if ( v8 )
      (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
    if ( Ptr )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
  }
  v11 = *((_DWORD *)a2 + 4);
  if ( v11 == 1 )
  {
    v12 = (HWND)*((_QWORD *)a2 + 1);
    v13 = v12;
    if ( *((_QWORD *)a2 + 5) )
      v13 = (HWND)*((_QWORD *)a2 + 5);
    v34 = 0LL;
    if ( GetShellWindow() != v13
      && !(unsigned int)GetPropW(v13, L"MultimonitorActivationException")
      && (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 94) + 24LL))(*((_QWORD *)this + 94)) != v13 )
    {
      (*(void (__fastcall **)(_QWORD, HWND, GUID *, GUID *, __int64 *))(**((_QWORD **)this + 70) + 88LL))(
        *((_QWORD *)this + 70),
        v13,
        &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
        &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
        &v34);
    }
    v14 = (*(__int64 (__fastcall **)(_QWORD, HWND, __int64))(**((_QWORD **)this + 67) + 32LL))(
            *((_QWORD *)this + 67),
            v12,
            v34);
    v15 = v34;
    if ( v14 && v34 )
    {
      CApplicationManager::_TryPresentDesktopExperience(this, v12, 2LL, v34);
      v15 = v34;
    }
    if ( v15 )
    {
      v34 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
  }
  else if ( v11 == 2 )
  {
    if ( (unsigned int)IsShellFrameWindow(*((_QWORD *)a2 + 1)) )
    {
      v30 = *((_QWORD *)a2 + 1);
      v31 = 2;
      v22 = 0LL;
      v26 = 0LL;
      v16 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::FindEx<CImmersiveAppFinderByHwnd>(
              (int)this + 632,
              (unsigned int)&v30,
              (unsigned int)&v26,
              (unsigned int)&v28,
              v20);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
      if ( v16 >= 0 )
      {
        v17 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 79) + 8 * v28);
        if ( (**v17)(v17, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v22) >= 0 )
        {
          v21 = 0LL;
          if ( (*(int (__fastcall **)(_QWORD, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **))(**((_QWORD **)this + 70)
                                                                                                  + 88LL))(
                 *((_QWORD *)this + 70),
                 *((_QWORD *)a2 + 1),
                 &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                 &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                 &v21) >= 0 )
          {
            v27[0] = *((_DWORD *)this + 240);
            v27[1] = 0;
            (*(void (__fastcall **)(__int64, struct IImmersiveMonitor *, _DWORD *, __int64))(*(_QWORD *)v22 + 456LL))(
              v22,
              v21,
              v27,
              4LL);
            if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v22 + 416LL))(v22) )
            {
              v36 = 0LL;
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v36);
              if ( (int)CApplicationManager::_GetGlobalSyncEventHandler(this, &v36) >= 0 )
              {
                v35 = 0LL;
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
                if ( (int)CApplicationManager::_GetSingleMonitorObjectArray(this, v21, &v35) >= 0 )
                  (*(void (__fastcall **)(struct ISyncIAMEventHandler *, struct IObjectArray *, char *, _QWORD, _DWORD, int, int))(*(_QWORD *)v36 + 24LL))(
                    v36,
                    v35,
                    (char *)this + 248,
                    0LL,
                    *((_DWORD *)a2 + 6),
                    2,
                    0xFFFF);
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
              }
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v36);
            }
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
        }
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
    }
  }
  else if ( *((_QWORD *)a2 + 1) == *((_QWORD *)this + 96) )
  {
    v25 = 0LL;
    v18 = *((_QWORD *)this + 70);
    v19 = *(int (__fastcall **)(__int64, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **))(*(_QWORD *)v18 + 88LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
    if ( v19(
           v18,
           *((_QWORD *)a2 + 1),
           &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
           &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
           &v25) >= 0 )
    {
      v24 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
      if ( (int)CApplicationManager::_GetSingleMonitorObjectArray(this, v25, &v24) >= 0 )
      {
        v23 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
        if ( (int)CApplicationManager::_GetGlobalSyncEventHandler(this, &v23) >= 0 )
          (*(void (__fastcall **)(struct ISyncIAMEventHandler *, struct IObjectArray *, char *, _QWORD, _DWORD, int, int))(*(_QWORD *)v23 + 24LL))(
            v23,
            v24,
            (char *)this + 248,
            0LL,
            *((_DWORD *)a2 + 6),
            2,
            0xFFFF);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
  }
}
