/*
 * XREFs of ?OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180057F50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x180057BF4 (-_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z.c)
 *     ?_IsDisplayContextHolographic@HolographicPositioner@@AEAA_NXZ @ 0x180057C88 (-_IsDisplayContextHolographic@HolographicPositioner@@AEAA_NXZ.c)
 *     ?IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ @ 0x180057DA0 (-IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ.c)
 *     ?_OnUnmanagedWin32ViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32ApplicationView@@@Z @ 0x180057ED4 (-_OnUnmanagedWin32ViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32Applicat.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     _LogEventWithApplicationViewData_unsigned_short_const_(&)[10]_unsigned_int_ @ 0x1802AD7DC (_LogEventWithApplicationViewData_unsigned_short_const_(-)[10]_unsigned_int_.c)
 *     _LogEventWithApplicationViewData_unsigned_short_const_(&)[11]_unsigned_int_ @ 0x1802AD8A4 (_LogEventWithApplicationViewData_unsigned_short_const_(-)[11]_unsigned_int_.c)
 *     _LogEventWithApplicationViewData_unsigned_short_const_(&)[12]_unsigned_int_ @ 0x1802AD96C (_LogEventWithApplicationViewData_unsigned_short_const_(-)[12]_unsigned_int_.c)
 *     _LogEventWithApplicationViewData_unsigned_short_const_(&)[14]_unsigned_int_ @ 0x1802ADA34 (_LogEventWithApplicationViewData_unsigned_short_const_(-)[14]_unsigned_int_.c)
 *     ?_EvaluateTakingControlOfWin32Slate@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32ApplicationView@@_N@Z @ 0x1802B3DEC (-_EvaluateTakingControlOfWin32Slate@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32.c)
 *     ?_GetApplicationViewUniqueIdForTracing@HolographicPositioner@@CAIPEAUIApplicationView@@@Z @ 0x1802B4368 (-_GetApplicationViewUniqueIdForTracing@HolographicPositioner@@CAIPEAUIApplicationView@@@Z.c)
 *     ?_HandleControlLostForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1802B4660 (-_HandleControlLostForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_OnManagedWin32AppFocusGained@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32ApplicationView@@@Z @ 0x1802B516C (-_OnManagedWin32AppFocusGained@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32Appli.c)
 *     ?_RaiseViewFocusGained@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1802B5888 (-_RaiseViewFocusGained@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_RaiseViewFocusLost@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1802B596C (-_RaiseViewFocusLost@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_RaiseViewRemoved@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1802B5A50 (-_RaiseViewRemoved@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall HolographicPositioner::OnApplicationViewChanged(__int64 a1, struct IApplicationView *a2, int a3)
{
  BOOL v6; // r14d
  struct IWin32ApplicationView *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct IWin32ApplicationView *v11; // rdi
  __int64 v12; // rax
  struct IWin32ApplicationView *v13; // rcx
  unsigned int v14; // ebx
  int v15; // eax
  __int64 *v16; // rcx
  int v17; // eax
  unsigned int v18; // edi
  struct IWin32ApplicationView *v19; // r8
  HolographicPositioner *v20; // rsi
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // r8
  int v31; // eax
  struct IWin32ApplicationView *v32[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct IWin32ApplicationView *v34; // [rsp+50h] [rbp+20h] BYREF

  if ( !*(_DWORD *)(a1 + 72) )
    return 0LL;
  if ( !a2 )
  {
    v14 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x466,
      (unsigned int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)0x80070057LL,
      (int)v32[0]);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1AD,
      (unsigned int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)0x80070057LL,
      (int)v32[0]);
    return v14;
  }
  v34 = 0LL;
  if ( (*(int (__fastcall **)(struct IApplicationView *, struct IWin32ApplicationView **))(*(_QWORD *)a2 + 264LL))(
         a2,
         &v34) < 0 )
  {
    v8 = v34;
    if ( v34 )
    {
      v34 = 0LL;
      (*(void (__fastcall **)(struct IWin32ApplicationView *))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v6 = 0;
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(struct IWin32ApplicationView *))(*(_QWORD *)v34 + 24LL))(v34) == 5;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
  }
  if ( !v6 )
  {
    if ( a3 )
    {
      if ( (unsigned int)(a3 - 7) > 1 )
        return 0LL;
      (**(void (__fastcall ***)(struct IApplicationView *, GUID *, struct IWin32ApplicationView **))a2)(
        a2,
        &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
        v32);
      v11 = v32[0];
      if ( !v32[0] )
        goto LABEL_13;
      if ( IsHolographicWin32SlatesFeatureEnabled(v10, v9)
        && HolographicPositioner::_IsDisplayContextHolographic((HolographicPositioner *)(a1 - 184))
        && (LODWORD(v34) = 6,
            (*(int (__fastcall **)(struct IApplicationView *, struct IWin32ApplicationView **))(*(_QWORD *)a2 + 400LL))(
              a2,
              &v34) >= 0)
        && !(_DWORD)v34
        && (v31 = HolographicPositioner::_EvaluateTakingControlOfWin32Slate(
                    (HolographicPositioner *)(a1 - 184),
                    a2,
                    v11,
                    0),
            v14 = v31,
            v31 < 0) )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x8F2,
          (unsigned int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
          (const char *)(unsigned int)v31,
          (int)v32[0]);
      }
      else
      {
        v14 = 0;
      }
      if ( (v14 & 0x80000000) == 0 )
      {
        v11 = v32[0];
LABEL_13:
        if ( !v11 )
          return 0LL;
        v12 = *(_QWORD *)v11;
        v13 = v11;
LABEL_15:
        (*(void (__fastcall **)(struct IWin32ApplicationView *))(v12 + 16))(v13);
        return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F6,
        (unsigned int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)v14,
        (int)v32[0]);
      v16 = (__int64 *)v32;
      goto LABEL_28;
    }
    (**(void (__fastcall ***)(struct IApplicationView *, GUID *, struct IWin32ApplicationView **))a2)(
      a2,
      &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
      &v34);
    v13 = v34;
    if ( v34 )
    {
      v15 = HolographicPositioner::_OnUnmanagedWin32ViewAdded((HolographicPositioner *)(a1 - 184), a2, v34);
      v14 = v15;
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1ED,
          (unsigned int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
          (const char *)(unsigned int)v15,
          (int)v32[0]);
        v16 = (__int64 *)&v34;
LABEL_28:
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v16);
        return v14;
      }
      v13 = v34;
    }
    if ( !v13 )
      return 0LL;
    v12 = *(_QWORD *)v13;
    goto LABEL_15;
  }
  switch ( a3 )
  {
    case 0:
      LODWORD(v34) = HolographicPositioner::_GetApplicationViewUniqueIdForTracing(a2);
      LogEventWithApplicationViewData_unsigned_short_const_____10__unsigned_int_(a2, v29, v30, &v34);
      return 0LL;
    case 1:
      LODWORD(v34) = HolographicPositioner::_GetApplicationViewUniqueIdForTracing(a2);
      LogEventWithApplicationViewData_unsigned_short_const_____12__unsigned_int_(a2, v27, v28, &v34);
      return 0LL;
    case 2:
      LODWORD(v34) = HolographicPositioner::_GetApplicationViewUniqueIdForTracing(a2);
      LogEventWithApplicationViewData_unsigned_short_const_____14__unsigned_int_(a2, v25, v26, &v34);
      HolographicPositioner::_RaiseViewRemoved((HolographicPositioner *)(a1 - 184), a2);
      return 0LL;
    case 4:
      LODWORD(v34) = HolographicPositioner::_GetApplicationViewUniqueIdForTracing(a2);
      LogEventWithApplicationViewData_unsigned_short_const_____11__unsigned_int_(a2, v22, v23, &v34);
      if ( HolographicPositioner::_IsViewWin32Slate((__int64)a2, 6) )
      {
        v24 = HolographicPositioner::_HandleControlLostForView((HolographicPositioner *)(a1 - 184), a2);
        if ( v24 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1D6,
            (unsigned int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
            (const char *)(unsigned int)v24,
            (int)v32[0]);
      }
      return 0LL;
  }
  if ( a3 <= 6 )
    return 0LL;
  if ( a3 > 8 )
  {
    if ( a3 == 9 )
      HolographicPositioner::_RaiseViewFocusLost((HolographicPositioner *)(a1 - 184), a2);
    return 0LL;
  }
  v17 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a2 + 96LL))(a2, 1LL);
  v18 = v17;
  if ( v17 >= 0 )
  {
    (**(void (__fastcall ***)(struct IApplicationView *, GUID *, struct IWin32ApplicationView **))a2)(
      a2,
      &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
      &v34);
    v20 = (HolographicPositioner *)(a1 - 184);
    if ( v34 )
    {
      v21 = HolographicPositioner::_OnManagedWin32AppFocusGained(v20, a2, v19);
      if ( v21 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1BB,
          (unsigned int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
          (const char *)(unsigned int)v21,
          (int)v32[0]);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v34);
    HolographicPositioner::_RaiseViewFocusGained(v20, a2);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1B6,
    (unsigned int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)(unsigned int)v17,
    (int)v32[0]);
  return v18;
}
