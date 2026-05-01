/*
 * XREFs of ?_GetMostRecentlyUsedViewForAppInstance@CAppViewManager@@AEAAJ_KPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x180013430
 * Callers:
 *     ?_GetViewForSwitchInternalByHostId@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@_KPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x1800132A4 (-_GetViewForSwitchInternalByHostId@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@_KPEAUIImme.c)
 * Callees:
 *     ?_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x1800131BC (-_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800133E0 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$As@UIImmersiveApplication@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@@Details@12@@Z @ 0x18007E4BC (--$As@UIImmersiveApplication@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1801C9B94 (WPP_SF_.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x1801D6C70 (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$com_ptr_t@UIApplicationView@@Uerr_returncode_p.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIImmersiveApplicationInternal@@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x1801D6EF0 (--0Iterator@-$ObjectArrayAdapterImpl@UIImmersiveApplicationInternal@@V-$ComPtr@UIImmersiveApplic.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIImmersiveApplicationInternal@@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1801DA76C (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIImmersiveApplicationInternal@@V-$ComPtr@UI.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall CAppViewManager::_GetMostRecentlyUsedViewForAppInstance(
        CAppViewManager *this,
        __int64 a2,
        struct IImmersiveMonitor *a3,
        struct IImmersiveApplicationInternal **a4)
{
  HRESULT v7; // r14d
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, __int64, __int64 *); // rdi
  unsigned int v10; // eax
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, _QWORD, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, struct IImmersiveApplicationInternal **)); // rdi
  void *v14; // rbx
  __int64 (__fastcall *v15)(void *, __int64 *); // rdi
  __int64 v16; // rdi
  __int64 v17; // rsi
  struct IImmersiveApplicationInternal *v18; // rbx
  CAppViewManager *v19; // rcx
  PVOID Ptr; // r14
  __int64 (__fastcall *v21)(PVOID, __int64, __int64 *); // rbx
  __int64 *v22; // rcx
  __int64 v23; // rbx
  __int64 (__fastcall *v24)(__int64, _QWORD, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, struct IImmersiveApplicationInternal **)); // rdi
  __int64 v25; // [rsp+30h] [rbp-69h] BYREF
  struct IImmersiveApplicationInternal *v26; // [rsp+38h] [rbp-61h] BYREF
  __int64 v27; // [rsp+40h] [rbp-59h] BYREF
  __int64 v28; // [rsp+48h] [rbp-51h] BYREF
  __int64 v29; // [rsp+50h] [rbp-49h] BYREF
  __int64 v30; // [rsp+58h] [rbp-41h] BYREF
  __int64 v31; // [rsp+60h] [rbp-39h] BYREF
  void *ppvOut; // [rsp+68h] [rbp-31h] BYREF
  __int64 v33; // [rsp+70h] [rbp-29h] BYREF
  int v34; // [rsp+78h] [rbp-21h] BYREF
  struct IImmersiveApplicationInternal *v35[2]; // [rsp+80h] [rbp-19h] BYREF
  _BYTE v36[8]; // [rsp+90h] [rbp-9h] BYREF
  unsigned int v37; // [rsp+98h] [rbp-1h]
  int v38; // [rsp+A0h] [rbp+7h] BYREF
  _BYTE v39[8]; // [rsp+A8h] [rbp+Fh] BYREF
  struct IImmersiveApplicationInternal *v40; // [rsp+B0h] [rbp+17h]
  int v41; // [rsp+100h] [rbp+67h] BYREF
  unsigned int v42; // [rsp+110h] [rbp+77h] BYREF
  int v43; // [rsp+114h] [rbp+7Bh]
  __int64 (__fastcall ***v44)(_QWORD, GUID *, struct IImmersiveApplicationInternal **); // [rsp+118h] [rbp+7Fh] BYREF

  v43 = HIDWORD(a3);
  *a4 = 0LL;
  v44 = 0LL;
  v25 = 0LL;
  v42 = 0;
  v33 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
  v7 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 15))(
         *((_QWORD *)this + 15),
         &GUID_6ab2f0e6_cf78_4445_80dd_201879cf4c70,
         &v33);
  if ( v7 >= 0 )
  {
    v8 = v33;
    v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v33 + 24LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
    v7 = v9(v8, a2, &v25);
    if ( v7 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v25 + 24LL))(v25, &v42);
      if ( v7 >= 0 )
      {
        v10 = v42;
        if ( v42 == 1 )
        {
          v11 = v25;
          v12 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, struct IImmersiveApplicationInternal **)))(*(_QWORD *)v25 + 32LL);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v44);
          v7 = v12(v11, 0LL, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v44);
          v10 = v42;
        }
        if ( v7 >= 0 )
        {
          if ( v10 <= 1 )
          {
LABEL_8:
            if ( v7 >= 0 )
              v7 = (**v44)(v44, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, a4);
            goto LABEL_10;
          }
          ppvOut = 0LL;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppvOut);
          v7 = IUnknown_QueryService(
                 *((IUnknown **)this + 15),
                 (const GUID *const)&SID_VirtualDesktopManager,
                 &GUID_f31574d6_b682_4cdc_bd56_1827860abec6,
                 &ppvOut);
          if ( v7 < 0 )
          {
LABEL_34:
            if ( !v44 )
            {
              if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 29LL, &WPP_4118369381663a2e526d206c00d3ecd5_Traceguids);
              v23 = v25;
              v24 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, struct IImmersiveApplicationInternal **)))(*(_QWORD *)v25 + 32LL);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v44);
              v7 = v24(v23, 0LL, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v44);
            }
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppvOut);
            goto LABEL_8;
          }
          v31 = 0LL;
          v14 = ppvOut;
          v15 = *(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)ppvOut + 48LL);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
          v7 = v15(v14, &v31);
          if ( v7 < 0 )
          {
LABEL_33:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
            goto LABEL_34;
          }
          v16 = 0LL;
          v30 = 0LL;
          v17 = 0LL;
          v29 = 0LL;
          details::ObjectArrayAdapterImpl<IApplicationView,wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>::ObjectArrayAdapterImpl<IApplicationView,wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>(
            v36,
            v25);
          details::ObjectArrayAdapterImpl<IImmersiveApplicationInternal,Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::Iterator::Iterator(
            &v34,
            v36,
            0LL);
          details::ObjectArrayAdapterImpl<IImmersiveApplicationInternal,Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::Iterator::Iterator(
            &v38,
            v36,
            v37);
          while ( v34 != v38 || v35[1] != v40 )
          {
            v18 = v35[0];
            v26 = v35[0];
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v26);
            AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
            LOBYTE(v18) = CAppViewManager::_IsMultiViewOperationAllowed(v19, v18);
            ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
            if ( (_BYTE)v18 )
            {
              if ( !v16 )
              {
                Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v30, (__int64 *)&v26);
                v16 = v30;
              }
              v28 = 0LL;
              v7 = Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication>(&v26, &v28);
              if ( v7 >= 0 )
              {
                v27 = 0LL;
                Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
                v21 = *(__int64 (__fastcall **)(PVOID, __int64, __int64 *))(*(_QWORD *)Ptr + 56LL);
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
                v7 = v21(Ptr, v28, &v27);
                if ( v7 >= 0 )
                {
                  v7 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v31 + 24LL))(v31, v27, &v41);
                  if ( v7 >= 0 )
                  {
                    if ( v41 )
                    {
                      Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v29, (__int64 *)&v26);
                      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
                      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
                      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
                      v17 = v29;
                      break;
                    }
                  }
                }
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
              }
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
            }
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
            ++v34;
            details::ObjectArrayAdapterImpl<IImmersiveApplicationInternal,Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::Iterator::GetCurrentObject(&v34);
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v39);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v35);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v36);
          if ( v17 )
          {
            v22 = &v29;
          }
          else
          {
            if ( !v16 )
            {
LABEL_32:
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
              goto LABEL_33;
            }
            v22 = &v30;
          }
          Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication>(v22, &v44);
          goto LABEL_32;
        }
      }
    }
  }
LABEL_10:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v44);
  return (unsigned int)v7;
}
