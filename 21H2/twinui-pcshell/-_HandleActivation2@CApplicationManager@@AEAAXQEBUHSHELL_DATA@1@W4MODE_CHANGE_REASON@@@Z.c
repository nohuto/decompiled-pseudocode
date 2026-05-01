/*
 * XREFs of ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x180047FB0
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x18003E070 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 *     ?_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z @ 0x180083DEC (-_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z.c)
 *     ?_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z @ 0x18008425C (-_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x1801C5D94 (-_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x1801C6E1C (-_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 * Callees:
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x180044910 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?_MonitorFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z @ 0x180057800 (-_MonitorFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?_ShouldKeepImmersiveRealmStatusQuo@CApplicationManager@@AEBA_NPEAUHWND__@@@Z @ 0x180057878 (-_ShouldKeepImmersiveRealmStatusQuo@CApplicationManager@@AEBA_NPEAUHWND__@@@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x18005EB60 (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@_K$0PPPPPPPO@V?$CTPolicyCoTaskMem@_K@@V?$CSimpleArrayStandardCompareHelper@_K@@V?$CSimpleArrayStandardMergeHelper@_K@@@@QEAAJ_K0@Z @ 0x18005EE50 (-_EnsureCapacity@-$CTSimpleArray@_K$0PPPPPPPO@V-$CTPolicyCoTaskMem@_K@@V-$CSimpleArrayStandardCo.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x18007E548 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V.c)
 *     ?_IsMultimon@CApplicationManager@@AEBA_NXZ @ 0x180089024 (-_IsMultimon@CApplicationManager@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180090978 (memset_0.c)
 *     memmove_0 @ 0x180091333 (memmove_0.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?SHCoGetApartmentId@@YAJPEAK@Z @ 0x1801C0BEC (-SHCoGetApartmentId@@YAJPEAK@Z.c)
 *     ?_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x1801C5C5C (-_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArr.c)
 */

// Hidden C++ exception states: #wind=21
void __fastcall CApplicationManager::_HandleActivation2(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r12
  __int64 v5; // r15
  __int64 v6; // rdi
  int v7; // ebx
  int v8; // eax
  int ApartmentId; // ebx
  HWND v10; // r14
  bool v11; // r13
  __int64 v12; // r13
  __int64 v13; // r14
  __int64 v14; // rbx
  int v15; // edi
  __int64 v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rcx
  int v19; // eax
  __int64 (__fastcall ***v20)(_QWORD, GUID *, IUnknown **); // rcx
  int v21; // eax
  void *v22; // rcx
  __int64 *v23; // rcx
  __int64 v24; // rax
  IUnknown *v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 *v28; // rcx
  unsigned __int64 v29; // rdi
  unsigned __int128 v30; // rax
  IUnknown *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rdi
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // r9
  unsigned __int64 v36; // rbx
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // r15
  char *v39; // r14
  unsigned __int64 v40; // r13
  int v41; // eax
  __int64 *v42; // rcx
  __int64 v43; // rcx
  struct IObjectArray *v44; // rcx
  char v45; // r14
  int v46; // eax
  __int64 v47; // rbx
  int SingleMonitorObjectArray; // eax
  void *v49; // rcx
  unsigned __int64 i; // rbx
  __int64 v51; // rcx
  __int64 v52; // r13
  __int64 v53; // r15
  PSRWLOCK v54; // rbx
  PVOID Ptr; // r14
  __int64 v56; // r12
  _QWORD *v57; // rbx
  _QWORD *v58; // rax
  _QWORD *v59; // rdi
  void *v60; // rbx
  HRESULT v61; // edi
  IUnknown *v62; // rcx
  void *v63; // rcx
  __int64 v64; // rcx
  __int64 v65; // rax
  int v66; // eax
  __int64 v67; // rcx
  struct IObjectArray *v68; // rcx
  IUnknown *v69; // rcx
  void *v70; // rcx
  const void **v71; // rbx
  __int64 v72; // rcx
  unsigned __int64 v73; // rdi
  __int64 v74; // r8
  IUnknown *v75; // rcx
  __int64 v76; // rax
  __int64 v77; // r8
  int v78; // eax
  unsigned __int8 v79; // bl
  __int64 v80; // rdi
  int (__fastcall *v81)(__int64, HWND, GUID *, GUID *, __int64 *); // rbx
  __int64 v82; // rbx
  unsigned __int64 v83; // rcx
  __int64 *v84; // rdx
  int cchValue; // [rsp+20h] [rbp-E0h]
  char v86; // [rsp+40h] [rbp-C0h]
  char v87; // [rsp+40h] [rbp-C0h]
  IUnknown *punk; // [rsp+48h] [rbp-B8h] BYREF
  void *ppv; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v90; // [rsp+58h] [rbp-A8h] BYREF
  struct IObjectArray *v91; // [rsp+60h] [rbp-A0h] BYREF
  int v92; // [rsp+68h] [rbp-98h]
  int v93; // [rsp+6Ch] [rbp-94h]
  HWND v94; // [rsp+70h] [rbp-90h]
  LPVOID pv; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v96; // [rsp+80h] [rbp-80h]
  __int64 v97; // [rsp+88h] [rbp-78h]
  unsigned __int64 v98; // [rsp+90h] [rbp-70h]
  void *v99; // [rsp+98h] [rbp-68h] BYREF
  int v100; // [rsp+A0h] [rbp-60h]
  void *ppvOut; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD *v102; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v103; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v104; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v105; // [rsp+C8h] [rbp-38h] BYREF
  IUnknown *v106; // [rsp+D0h] [rbp-30h] BYREF
  struct IImmersiveMonitor *v107; // [rsp+D8h] [rbp-28h] BYREF
  unsigned int v108; // [rsp+E0h] [rbp-20h] BYREF
  int v109; // [rsp+E4h] [rbp-1Ch] BYREF
  unsigned int v110; // [rsp+E8h] [rbp-18h]
  int v111; // [rsp+ECh] [rbp-14h]
  int v112; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v113; // [rsp+F8h] [rbp-8h] BYREF
  int v114; // [rsp+100h] [rbp+0h] BYREF
  LPMALLOC ppMalloc; // [rsp+108h] [rbp+8h] BYREF
  __int64 v116; // [rsp+110h] [rbp+10h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+118h] [rbp+18h]
  __int64 v118; // [rsp+120h] [rbp+20h]
  __int64 v119; // [rsp+128h] [rbp+28h]
  void *v120; // [rsp+130h] [rbp+30h]
  HWND v121; // [rsp+138h] [rbp+38h] BYREF
  __int64 v122; // [rsp+140h] [rbp+40h]
  char v123; // [rsp+148h] [rbp+48h]
  PVOID v124; // [rsp+150h] [rbp+50h] BYREF
  _QWORD v125[9]; // [rsp+158h] [rbp+58h] BYREF
  int v126; // [rsp+1A0h] [rbp+A0h]
  __int64 v127; // [rsp+1A8h] [rbp+A8h]
  __int64 v128; // [rsp+1B0h] [rbp+B0h]
  WCHAR Filename[264]; // [rsp+1C0h] [rbp+C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+418h] [rbp+318h]

  v92 = a3;
  v3 = a2;
  v116 = a2;
  v5 = 0LL;
  v111 = 0;
  if ( a1 )
    v6 = a1 + 392;
  else
    v6 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)v6;
  v125[8] = v6;
  v7 = *(_DWORD *)(v6 + 44);
  if ( v7 != 2 )
  {
    v8 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
    if ( `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess )
      goto LABEL_5;
    if ( GetModuleFileNameW(0LL, Filename, 0x104u) )
    {
      if ( FindStringOrdinal(0x800000u, Filename, -1, L"\\EXPLORER.EXE", -1, 1) != -1 )
        goto LABEL_220;
      `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = 1;
    }
    else if ( `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess != 1 )
    {
      goto LABEL_6;
    }
    if ( v7 == 1 )
    {
      if ( !(unsigned int)IsAppCompatModeEnabled(16LL) )
      {
        v8 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
LABEL_5:
        if ( v8 != 1 )
          goto LABEL_6;
        goto LABEL_213;
      }
LABEL_220:
      `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = 2;
      goto LABEL_6;
    }
  }
LABEL_213:
  if ( *(_DWORD *)(v6 + 40) != -3 )
  {
    ApartmentId = SHCoGetApartmentId(&v108);
    v93 = ApartmentId;
    if ( ApartmentId >= 0 )
    {
      if ( v108 != *(_DWORD *)(v6 + 40) )
        ApartmentId = -2147417842;
      v93 = ApartmentId;
    }
    if ( ApartmentId < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xC8,
        (unsigned int)"onecoreuap\\internal\\shell\\inc\\private\\Cowthreadusedetection.h",
        (const char *)(unsigned int)ApartmentId,
        cchValue);
      goto LABEL_9;
    }
  }
LABEL_6:
  ApartmentId = -2147417842;
  if ( TryEnterCriticalSection((LPCRITICAL_SECTION)v6) )
    ApartmentId = 0;
  v93 = ApartmentId;
LABEL_9:
  v126 = ApartmentId;
  v10 = *(HWND *)(v3 + 8);
  v94 = v10;
  v11 = 1;
  v86 = 1;
  if ( *(_DWORD *)(v3 + 16) == 1 )
  {
    v107 = 0LL;
    if ( *(_BYTE *)(v3 + 20) || *(_BYTE *)(v3 + 21) )
    {
      v79 = 0;
    }
    else
    {
      v79 = 1;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v107);
      CApplicationManager::_MonitorFromWindow((CApplicationManager *)a1, v10, &v107);
    }
    if ( v10 != (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 752) + 24LL))(*(_QWORD *)(a1 + 752))
      && v10 != (HWND)1
      && (*(int (__fastcall **)(_QWORD, HWND, _QWORD))(**(_QWORD **)(a1 + 536) + 56LL))(*(_QWORD *)(a1 + 536), v10, v79) >= 0
      && (!v107
       || (*(unsigned __int8 (__fastcall **)(_QWORD, HWND))(**(_QWORD **)(a1 + 536) + 32LL))(*(_QWORD *)(a1 + 536), v10))
      && CApplicationManager::_IsMultimon((CApplicationManager *)a1)
      && *(_DWORD *)(v3 + 24) == 1 )
    {
      v11 = !CApplicationManager::_ShouldKeepImmersiveRealmStatusQuo((CApplicationManager *)a1, v10);
      v86 = v11;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v107);
  }
  ppv = 0LL;
  punk = 0LL;
  v119 = 0LL;
  if ( *(_DWORD *)(v3 + 16) == 2 )
  {
    punk = 0LL;
    v125[2] = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    if ( *(_QWORD *)(a1 + 640) )
    {
      v125[3] = 0LL;
      while ( 1 )
      {
        v14 = *(_QWORD *)(*(_QWORD *)(a1 + 632) + 8 * v13);
        v118 = v14;
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
        v15 = -1;
        v102 = 0LL;
        if ( (**(int (__fastcall ***)(__int64, GUID *, _QWORD **))v14)(
               v14,
               &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
               &v102) >= 0 )
        {
          v16 = *v102;
          v121 = v94;
          v122 = 0LL;
          v123 = 0;
          v15 = ((*(unsigned __int8 (__fastcall **)(_QWORD *, HWND *, __int64))(v16 + 296))(v102, &v121, 2LL) != 0) - 1;
          v17 = v122;
          if ( v122 )
          {
            v122 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
          }
        }
        v18 = v102;
        if ( v102 )
        {
          v102 = 0LL;
          (*(void (__fastcall **)(_QWORD *))(*v18 + 16LL))(v18);
        }
        v118 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        if ( !v15 )
          break;
        if ( (unsigned __int64)++v13 >= *(_QWORD *)(a1 + 640) )
          goto LABEL_223;
      }
      v12 = v13;
      v19 = 0;
    }
    else
    {
LABEL_223:
      v19 = -2147319765;
    }
    if ( v19 < 0
      || (v20 = *(__int64 (__fastcall ****)(_QWORD, GUID *, IUnknown **))(*(_QWORD *)(a1 + 632) + 8 * v12),
          v21 = (**v20)(v20, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &punk),
          v5 = v12,
          v119 = v12,
          v21 < 0) )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppv);
      (*(void (__fastcall **)(_QWORD, _QWORD, GUID *, void **))(**(_QWORD **)(a1 + 576) + 32LL))(
        *(_QWORD *)(a1 + 576),
        0LL,
        &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee,
        &ppv);
    }
    else
    {
      v22 = ppv;
      if ( ppv )
      {
        ppv = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v22 + 16LL))(v22);
      }
      IUnknown_GetSite(punk, &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee, &ppv);
    }
    v11 = v86;
    v10 = v94;
  }
  v23 = *(__int64 **)(a1 + 592);
  v24 = *v23;
  if ( *(_DWORD *)(v3 + 16) == 3 )
    (*(void (__fastcall **)(__int64 *, _QWORD))(v24 + 40))(v23, *(_QWORD *)(v3 + 8));
  else
    (*(void (**)(void))(v24 + 48))();
  v25 = punk;
  *(_QWORD *)(a1 + 488) = v10;
  *(_DWORD *)(a1 + 504) = v92;
  if ( v25 && *(IUnknown **)(a1 + 512) != v25 )
  {
    ((void (__fastcall *)(IUnknown *))v25->lpVtbl->AddRef)(v25);
    v26 = *(_QWORD *)(a1 + 512);
    *(_QWORD *)(a1 + 512) = v25;
    if ( v26 )
    {
      v125[4] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    }
    v25 = punk;
  }
  if ( *(_DWORD *)(v3 + 16) == 2 && !v25 )
  {
    v27 = 2LL;
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 528) + 40LL))(
      *(_QWORD *)(a1 + 528),
      *(unsigned int *)(v3 + 24));
    (*(void (__fastcall **)(_QWORD, _QWORD, bool))(**(_QWORD **)(a1 + 528) + 88LL))(
      *(_QWORD *)(a1 + 528),
      *(unsigned int *)(v3 + 24),
      v11);
    v27 = *(unsigned int *)(v3 + 16);
  }
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 520) + 24LL))(
    *(_QWORD *)(a1 + 520),
    *(unsigned int *)(v3 + 24),
    v27,
    *(unsigned __int8 *)(v3 + 28));
  v28 = (__int64 *)ppv;
  if ( ppv && punk )
  {
    if ( (*(int (__fastcall **)(void *, IUnknown *, HWND, _QWORD, int, _QWORD))(*(_QWORD *)ppv + 48LL))(
           ppv,
           punk,
           v10,
           0LL,
           2,
           0LL) >= 0
      && v5 )
    {
      v71 = (const void **)(a1 + 632);
      CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::RemoveAt(
        a1 + 632,
        v5);
      v72 = *(_QWORD *)(a1 + 640);
      v73 = 1LL;
      if ( v72 )
        v73 = v72 + 1;
      if ( v73 <= *(_QWORD *)(a1 + 656)
        || (int)CTSimpleArray<unsigned __int64,4294967294,CTPolicyCoTaskMem<unsigned __int64>,CSimpleArrayStandardCompareHelper<unsigned __int64>,CSimpleArrayStandardMergeHelper<unsigned __int64>>::_EnsureCapacity(
                  a1 + 632,
                  v73) >= 0 )
      {
        v74 = *(_QWORD *)(a1 + 640);
        if ( v74 )
          memmove_0((char *)*v71 + 8, *v71, 8 * v74);
        *(_QWORD *)(a1 + 640) = v73;
        if ( *v71 )
        {
          v75 = punk;
          *(_QWORD *)*v71 = punk;
          if ( v75 )
            ((void (__fastcall *)(IUnknown *))v75->lpVtbl->AddRef)(v75);
        }
      }
    }
    v28 = (__int64 *)ppv;
  }
  if ( *(_DWORD *)(v3 + 16) != 2 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppv);
    if ( (*(int (__fastcall **)(_QWORD, _QWORD, GUID *, void **))(**(_QWORD **)(a1 + 576) + 32LL))(
           *(_QWORD *)(a1 + 576),
           0LL,
           &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee,
           &ppv) < 0 )
      goto LABEL_45;
    v28 = (__int64 *)ppv;
    v76 = *(_QWORD *)ppv;
    if ( v11 )
    {
      v77 = *(unsigned int *)(v3 + 24);
LABEL_168:
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(v76 + 40))(v28, 4LL, v77);
      goto LABEL_45;
    }
LABEL_227:
    v77 = 0LL;
    goto LABEL_168;
  }
  if ( !punk )
  {
    v76 = *v28;
    goto LABEL_227;
  }
LABEL_45:
  v29 = 0LL;
  v91 = 0LL;
  v90 = 0LL;
  v100 = 0xFFFF;
  v87 = 1;
  if ( GetShellWindow() != v10
    && !(unsigned int)GetPropW(v10, L"MultimonitorActivationException")
    && (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 752) + 24LL))(*(_QWORD *)(a1 + 752)) != v10 )
  {
    pv = 0LL;
    v96 = 0LL;
    v97 = 0LL;
    v98 = 0LL;
    v31 = punk;
    if ( punk )
    {
      v32 = v90;
      if ( v90 )
      {
        v90 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
        v31 = punk;
      }
      ((void (__fastcall *)(IUnknown *, GUID *, __int64 *))v31->lpVtbl->QueryInterface)(
        v31,
        &GUID_8b14e88b_5663_4caf_b196_c31479262831,
        &v90);
      v105 = 0LL;
      ((void (__fastcall *)(IUnknown *, __int64 *))punk->lpVtbl[19].AddRef)(punk, &v105);
      v33 = v105;
      v113 = v105;
      if ( v105 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v105 + 8LL))(v105);
      v34 = v96;
      if ( v96 != v98 )
        goto LABEL_71;
      v35 = v96 + 1;
      if ( v96 + 1 > 0xFFFFFFFE )
        goto LABEL_74;
      if ( v35 <= v98 )
        goto LABEL_71;
      v30 = v98 * (unsigned __int128)2uLL;
      v125[5] = *((_QWORD *)&v30 + 1);
      v36 = 2 * v98;
      if ( !is_mul_ok(v98, 2uLL) )
        goto LABEL_74;
      if ( (unsigned __int64)v30 - v98 > 0x1000 )
        v36 = v98 + 4096;
      v37 = v35 <= v36 ? v36 : v96 + 1;
      if ( v37 > 0xFFFFFFFE )
      {
        v36 = 4294967294LL;
      }
      else if ( v35 > v36 )
      {
        v36 = v96 + 1;
      }
      v30 = v36 * (unsigned __int128)8uLL;
      v125[6] = *((_QWORD *)&v30 + 1);
      v38 = 8 * v36;
      if ( is_mul_ok(v36, 8uLL) )
      {
        v39 = (char *)CoTaskMemRealloc(pv, v30);
        if ( !v39 )
          goto LABEL_74;
        if ( CoGetMalloc(1u, &ppMalloc) >= 0 )
        {
          v40 = ((__int64 (__fastcall *)(LPMALLOC, char *))ppMalloc->lpVtbl->GetSize)(ppMalloc, v39);
          ((void (__fastcall *)(LPMALLOC))ppMalloc->lpVtbl->Release)(ppMalloc);
          if ( v40 > v38 )
            memset_0(&v39[v38], 0, v40 - v38);
        }
        v41 = 0;
        v98 = v36;
        pv = v39;
        v34 = v96;
      }
      else
      {
        v41 = -2147024362;
      }
      if ( v41 >= 0 )
      {
LABEL_71:
        v96 = v34 + 1;
        v42 = (__int64 *)((char *)pv + 8 * v34);
        if ( v42 )
        {
          *v42 = 0LL;
          if ( v42 != &v113 )
          {
            *v42 = v33;
            v33 = 0LL;
            v113 = 0LL;
          }
        }
      }
LABEL_74:
      if ( v33 )
      {
        v113 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
      }
      v43 = v105;
      if ( v105 )
      {
        v29 = 0LL;
        v105 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
        goto LABEL_78;
      }
LABEL_204:
      v29 = 0LL;
      goto LABEL_78;
    }
    v78 = *(_DWORD *)(v3 + 16);
    if ( v78 == 1 )
    {
      (*(void (__fastcall **)(_QWORD, HWND, LPVOID *))(**(_QWORD **)(a1 + 536) + 48LL))(*(_QWORD *)(a1 + 536), v10, &pv);
      goto LABEL_78;
    }
    if ( v78 == 2 )
      goto LABEL_237;
    if ( *(_DWORD *)(v3 + 24) == 1 || *(_DWORD *)(v3 + 24) == 8 )
    {
LABEL_78:
      v44 = v91;
      if ( v91 )
      {
        v91 = 0LL;
        ((void (__fastcall *)(struct IObjectArray *))v44->lpVtbl->Release)(v44);
      }
      v45 = 0;
      v91 = 0LL;
      v99 = 0LL;
      v46 = CEnumerableObjectCollection::CreateInstance((__int64)v44, *((const struct _GUID **)&v30 + 1), &v99);
      v47 = v46;
      if ( v46 >= 0 )
      {
        if ( v96 )
        {
          do
          {
            if ( v47 < 0 )
              break;
            (*(void (__fastcall **)(_QWORD, int *))(**((_QWORD **)pv + v29) + 48LL))(*((_QWORD *)pv + v29), &v114);
            if ( v114 )
              (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)v99 + 40LL))(v99, *((_QWORD *)pv + v29));
            ++v29;
          }
          while ( v29 < v96 );
        }
        (*(void (__fastcall **)(void *, int *))(*(_QWORD *)v99 + 24LL))(v99, &v109);
        if ( v109 )
        {
          SingleMonitorObjectArray = (**(__int64 (__fastcall ***)(void *, GUID *, struct IObjectArray **))v99)(
                                       v99,
                                       &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
                                       &v91);
        }
        else
        {
          v45 = 1;
          SingleMonitorObjectArray = CApplicationManager::_GetSingleMonitorObjectArray(
                                       (CApplicationManager *)a1,
                                       0LL,
                                       &v91);
        }
        LODWORD(v47) = SingleMonitorObjectArray;
      }
      v49 = v99;
      if ( v99 )
      {
        v99 = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v49 + 16LL))(v49);
      }
      if ( (int)v47 >= 0 )
      {
        if ( v45 && punk )
          v92 = 8;
        v10 = v94;
        goto LABEL_94;
      }
      v10 = v94;
LABEL_237:
      v87 = 0;
LABEL_94:
      if ( pv )
      {
        for ( i = 0LL; i < v96; ++i )
        {
          v51 = *((_QWORD *)pv + i);
          if ( v51 )
          {
            *((_QWORD *)pv + i) = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
          }
        }
        CoTaskMemFree(pv);
        pv = 0LL;
      }
      v96 = 0LL;
      v98 = 0LL;
      goto LABEL_101;
    }
    v104 = 0LL;
    v80 = *(_QWORD *)(a1 + 560);
    v81 = *(int (__fastcall **)(__int64, HWND, GUID *, GUID *, __int64 *))(*(_QWORD *)v80 + 88LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v104);
    if ( v81(v80, v10, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &v104) < 0 )
    {
LABEL_201:
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, HWND))(**(_QWORD **)(a1 + 568) + 64LL))(
             *(_QWORD *)(a1 + 568),
             v10) )
      {
        v100 = 65534;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v104);
      goto LABEL_204;
    }
    v82 = v104;
    v103 = v104;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v103);
    v83 = v96;
    if ( v96 == v98 )
    {
      if ( (int)CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
                  &pv,
                  v96 + 1) < 0 )
      {
LABEL_200:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v103);
        goto LABEL_201;
      }
      v83 = v96;
    }
    v96 = v83 + 1;
    v84 = (__int64 *)((char *)pv + 8 * v83);
    if ( v84 )
    {
      *v84 = 0LL;
      if ( v84 != &v103 )
      {
        *v84 = v82;
        v103 = 0LL;
      }
    }
    goto LABEL_200;
  }
  if ( v10 == (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 752) + 24LL))(*(_QWORD *)(a1 + 752)) )
    v87 = 0;
LABEL_101:
  v52 = (__int64)v10;
  v53 = v90;
  if ( !v90 && v10 )
  {
    v52 = (*(__int64 (__fastcall **)(_QWORD, HWND))(**(_QWORD **)(a1 + 536) + 112LL))(*(_QWORD *)(a1 + 536), v10);
    v53 = v90;
  }
  v127 = v53;
  if ( v53 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 8LL))(v53);
  v128 = v52;
  v54 = CApplicationManagerUtility::g_pIAMGlobals;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  if ( Ptr )
  {
    v124 = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v56 = v53;
    v125[0] = v53;
    if ( v53 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 8LL))(v53);
    v125[1] = v52;
    v110 = (unsigned int)v54[15].Ptr;
    v57 = 0LL;
    v125[7] = 0LL;
    v58 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v59 = v58;
    if ( v58 )
    {
      *((_DWORD *)v58 + 3) = 1;
      *v58 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      v59[2] = 0LL;
      if ( v59 + 2 != &v124 )
      {
        v59[2] = Ptr;
        Ptr = 0LL;
      }
      v59[3] = 0LL;
      if ( v59 + 3 != v125 )
      {
        v59[3] = v53;
        v56 = 0LL;
      }
      v59[4] = v52;
      *v59 = off_1804FA528;
      v57 = v59;
    }
    SHTaskPoolQueueTask(3LL, 2LL, v110, 0LL, v57, 0LL);
    if ( v57 )
      (*(void (__fastcall **)(_QWORD *))(*v57 + 16LL))(v57);
    if ( v56 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
    if ( Ptr )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
    v3 = v116;
  }
  if ( v87 )
  {
    v60 = 0LL;
    v120 = 0LL;
    ppvOut = 0LL;
    v106 = 0LL;
    v111 = 2;
    (*(void (__fastcall **)(__int64, GUID *, IUnknown **))(*(_QWORD *)(a1 + 48) + 32LL))(
      a1 + 48,
      &GUID_00000000_0000_0000_c000_000000000046,
      &v106);
    v61 = IUnknown_QueryService(v106, &IID_ISyncIAMEventHandler, &GUID_9c89efc7_3c2d_4913_897f_dd317f677138, &ppvOut);
    v62 = v106;
    if ( v106 )
    {
      v106 = 0LL;
      ((void (__fastcall *)(IUnknown *))v62->lpVtbl->Release)(v62);
    }
    v63 = ppvOut;
    if ( v61 >= 0 )
    {
      if ( ppvOut )
      {
        (*(void (**)(void))(*(_QWORD *)ppvOut + 8LL))();
        v63 = ppvOut;
      }
      v60 = v63;
      v120 = v63;
      v61 = 0;
    }
    if ( v63 )
    {
      ppvOut = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v63 + 16LL))(v63);
    }
    if ( v61 >= 0 )
      (*(void (__fastcall **)(void *, struct IObjectArray *, __int64, __int64, _DWORD, int, int))(*(_QWORD *)v60 + 24LL))(
        v60,
        v91,
        a1 + 248,
        v90,
        *(_DWORD *)(v3 + 24),
        v92,
        v100);
    if ( v60 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v60 + 16LL))(v60);
  }
  if ( *(_BYTE *)(a1 + 480) )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 552) + 48LL))(*(_QWORD *)(a1 + 552));
  v64 = *(_QWORD *)(a1 + 512);
  if ( v64 )
  {
    *(_QWORD *)(a1 + 512) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v64 + 16LL))(v64);
  }
  *(_DWORD *)(a1 + 504) = 0;
  v65 = *(_QWORD *)(a1 + 488);
  if ( v65 != 1 )
    *(_QWORD *)(a1 + 496) = v65;
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_BYTE *)(a1 + 480) = 0;
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 528) + 48LL))(
    *(_QWORD *)(a1 + 528),
    *(unsigned int *)(v3 + 24));
  *(_QWORD *)(a1 + 768) = v94;
  v112 = 0;
  v66 = RtlPublishWnfStateData(WNF_SHEL_WINDOW_ACTIVATED, 0LL, &v112, 4LL) | 0x10000000;
  if ( v66 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x355,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)(unsigned int)v66,
      0);
    JUMPOUT(0x18018DCF8LL);
  }
  if ( v53 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
  v67 = v90;
  if ( v90 )
  {
    v90 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v67 + 16LL))(v67);
  }
  v68 = v91;
  if ( v91 )
  {
    v91 = 0LL;
    ((void (__fastcall *)(struct IObjectArray *))v68->lpVtbl->Release)(v68);
  }
  v69 = punk;
  if ( punk )
  {
    punk = 0LL;
    ((void (__fastcall *)(IUnknown *))v69->lpVtbl->Release)(v69);
  }
  v70 = ppv;
  if ( ppv )
  {
    ppv = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v70 + 16LL))(v70);
  }
  if ( v93 >= 0 )
    LeaveCriticalSection(lpCriticalSection);
}
