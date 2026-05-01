/*
 * XREFs of ?OnApplicationViewChanged@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18002DF80
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V?$ComPtr@UIApplicationViewChangeListener@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x18002E610 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V-$ComPtr@U.c)
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18002E810 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180045D28 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memmove_0 @ 0x180091313 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x1801A7660 (--1-$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardCompareHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardMergeHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@@@QEAAJ_K0@Z @ 0x1801C4E34 (-_EnsureCapacity@-$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisib.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801F4340 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCom_ea_1801F4340.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1801F46B0 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonAp.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_5f803f865b4b07caa2d72f9fc7ffab60___ @ 0x1801FFFCC (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_5f803f865b4b07caa2d72f9fc7ffab60___.c)
 *     ??0ApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@QEAA@AEBU01@@Z @ 0x180200190 (--0ApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@QEAA@AEBU01@@Z.c)
 *     ?ClearCachedAppView@ApplicationViewManagerVisibilityDebouncer@@AEAAXPEAUIApplicationView@@@Z @ 0x18020073C (-ClearCachedAppView@ApplicationViewManagerVisibilityDebouncer@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEAAKXZ @ 0x180200A4C (-InternalRelease@-$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveAt@?$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardCompareHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardMergeHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@@@QEAAJ_K@Z @ 0x180200E88 (-RemoveAt@-$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDe.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::OnApplicationViewChanged(
        __int64 a1,
        struct IUnknown *a2,
        int a3,
        ULONG (__stdcall *a4)(IObjectArray *This))
{
  int v5; // r15d
  struct IObjectArray *v6; // rbx
  __int64 v7; // rdi
  struct IObjectArray *v8; // r13
  void *v9; // rsi
  struct IObjectArrayVtbl *v10; // rdi
  __int64 v11; // r14
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rbx
  bool v15; // si
  char v16; // bl
  struct IObjectArray *v17; // rbx
  struct IUnknown *v18; // rdi
  ULONGLONG TickCount64; // r14
  struct IObjectArray *v20; // rsi
  int v21; // ebx
  struct IObjectArrayVtbl *lpVtbl; // rdx
  char *v23; // rax
  struct IObjectArray *v24; // r15
  struct IObjectArray *v25; // rdi
  ULONGLONG v26; // rsi
  struct IObjectArrayVtbl *v27; // rbx
  struct IApplicationView *QueryInterface; // r14
  unsigned int AddRef; // r13d
  ULONG (__stdcall *Release)(IObjectArray *); // r12
  ULONGLONG GetCount; // rbx
  int v32; // eax
  __int64 v33; // rdx
  __int64 *v34; // rax
  __int64 v35; // rbx
  __int64 v36; // rcx
  __int64 v37; // rbx
  __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  struct IObjectArrayVtbl *v43; // rbx
  ULONG (__stdcall *v44)(IObjectArray *); // rcx
  HRESULT (__stdcall *v45)(IObjectArray *, const IID *const, void **); // rcx
  struct IObjectArrayVtbl *v46; // rax
  int v47; // ebx
  __int64 v48; // rcx
  int v50; // [rsp+20h] [rbp-89h]
  int v51; // [rsp+20h] [rbp-89h]
  unsigned int v52; // [rsp+30h] [rbp-79h] BYREF
  __int64 v53; // [rsp+38h] [rbp-71h] BYREF
  __int64 *v54; // [rsp+40h] [rbp-69h]
  __int64 v55; // [rsp+50h] [rbp-59h] BYREF
  int v56; // [rsp+58h] [rbp-51h] BYREF
  struct IObjectArray *v57; // [rsp+60h] [rbp-49h] BYREF
  __int128 v58; // [rsp+68h] [rbp-41h] BYREF
  ULONG (__stdcall *v59)(IObjectArray *); // [rsp+78h] [rbp-31h] BYREF
  ULONGLONG v60; // [rsp+80h] [rbp-29h]
  __int64 v61; // [rsp+88h] [rbp-21h] BYREF
  struct IObjectArray *v62; // [rsp+90h] [rbp-19h] BYREF
  int v63; // [rsp+98h] [rbp-11h] BYREF
  __int64 v64; // [rsp+A0h] [rbp-9h]
  __int64 *v65; // [rsp+A8h] [rbp-1h]
  PSRWLOCK SRWLock; // [rsp+B8h] [rbp+Fh]
  __int64 v67; // [rsp+C0h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]
  struct IObjectArray *v69; // [rsp+110h] [rbp+67h] BYREF
  struct IUnknown *v70; // [rsp+118h] [rbp+6Fh]
  int v71; // [rsp+120h] [rbp+77h]

  v71 = a3;
  v70 = a2;
  v69 = (struct IObjectArray *)a1;
  v5 = a3;
  v6 = (struct IObjectArray *)a1;
  v7 = a1 + 104;
  SRWLock = (PSRWLOCK)(a1 + 104);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 104));
  v67 = v7;
  if ( !v5 )
  {
    v60 = 0LL;
    v58 = 0LL;
    v59 = 0LL;
    v8 = v6 + 8;
    v9 = 0LL;
    v57 = 0LL;
    v10 = 0LL;
    if ( v6[9].lpVtbl )
    {
      v11 = 0LL;
      while ( 1 )
      {
        v12 = ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification::ApplicationViewManagerNotification(
                (ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *)&v63,
                (const struct ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *)&v58);
        v55 = v12;
        v13 = ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification::ApplicationViewManagerNotification(
                (ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *)&v52,
                (const struct ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *)((char *)v8->lpVtbl + v11));
        v14 = v13;
        v61 = v13;
        v15 = *(_DWORD *)(v13 + 8) == 1 && (unsigned int)SHIsSameObject(*(struct IUnknown **)v13, v70);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v14 + 16);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v14);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12 + 16);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12);
        if ( v15 )
          break;
        v10 = (struct IObjectArrayVtbl *)((char *)v10 + 1);
        v11 += 32LL;
        if ( v10 >= v8[1].lpVtbl )
        {
          v9 = v57;
          goto LABEL_11;
        }
      }
      v9 = v10;
      v16 = 1;
    }
    else
    {
LABEL_11:
      v16 = 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v59);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v58);
    if ( v16 )
    {
      CTSimpleArray<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification,4294967294,CTPolicyCoTaskMem<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardCompareHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardMergeHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>>::RemoveAt(
        v8,
        v9);
      v17 = v69;
      if ( !v9 )
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v69[21]);
      goto LABEL_36;
    }
    v6 = v69;
    v5 = v71;
  }
  v18 = v70;
  *(_QWORD *)&v58 = v70;
  if ( v70 )
    ((void (__fastcall *)(struct IUnknown *))v70->lpVtbl->AddRef)(v70);
  DWORD2(v58) = v5;
  v59 = a4;
  if ( a4 )
    (*(void (__fastcall **)(ULONG (__stdcall *)(IObjectArray *)))(*(_QWORD *)a4 + 8LL))(a4);
  TickCount64 = GetTickCount64();
  v60 = TickCount64;
  v20 = v6 + 8;
  v21 = 0;
  lpVtbl = v20[1].lpVtbl;
  if ( lpVtbl != v20[3].lpVtbl
    || (v21 = CTSimpleArray<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification,4294967294,CTPolicyCoTaskMem<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardCompareHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardMergeHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>>::_EnsureCapacity(
                v20,
                (char *)&lpVtbl->QueryInterface + 1),
        v21 >= 0) )
  {
    v23 = (char *)v20->lpVtbl + 32 * (__int64)v20[1].lpVtbl++;
    if ( v23 )
    {
      *(_QWORD *)v23 = 0LL;
      if ( v23 != (char *)&v58 )
      {
        *(_QWORD *)v23 = v18;
        v18 = 0LL;
      }
      *((_DWORD *)v23 + 2) = v5;
      *((_QWORD *)v23 + 2) = 0LL;
      if ( v23 + 16 != (char *)&v59 )
      {
        *((_QWORD *)v23 + 2) = a4;
        a4 = 0LL;
      }
      *((_QWORD *)v23 + 3) = TickCount64;
    }
  }
  if ( a4 )
    (*(void (__fastcall **)(ULONG (__stdcall *)(IObjectArray *)))(*(_QWORD *)a4 + 16LL))(a4);
  if ( v18 )
    ((void (__fastcall *)(struct IUnknown *))v18->lpVtbl->Release)(v18);
  if ( v21 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEF,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanagervisibilitydebouncer.cpp",
      (const char *)(unsigned int)v21,
      v50);
    goto LABEL_90;
  }
  v17 = v69;
LABEL_36:
  v24 = v17 - 1;
  v69 = 0LL;
  AgileRegistrationList::GetCallbackArray((AgileRegistrationList *)&v17[14], &v69);
  v25 = v69;
  while ( v24[10].lpVtbl )
  {
    v26 = GetTickCount64();
    v27 = v24[9].lpVtbl;
    QueryInterface = (struct IApplicationView *)v27->QueryInterface;
    *(_QWORD *)&v58 = QueryInterface;
    if ( QueryInterface )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)QueryInterface + 8LL))(QueryInterface);
    AddRef = (unsigned int)v27->AddRef;
    DWORD2(v58) = AddRef;
    Release = v27->Release;
    v59 = Release;
    if ( Release )
      (*(void (__fastcall **)(ULONG (__stdcall *)(IObjectArray *)))(*(_QWORD *)Release + 8LL))(Release);
    GetCount = (ULONGLONG)v27->GetCount;
    v60 = GetCount;
    if ( AddRef == 1 )
    {
      if ( v26 < GetCount + 50 )
      {
        if ( !v24[22].lpVtbl )
        {
          v47 = GetCount - v26;
          v57 = v24;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::InternalAddRef(v24);
          v61 = (__int64)v24;
          v62 = v24;
          if ( v24 )
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::AddRef(v24);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24[22]);
          v21 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_5f803f865b4b07caa2d72f9fc7ffab60___(
                  v48,
                  (unsigned int)(v47 + 50),
                  &v24[22],
                  &v61);
          Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalRelease(&v62);
          if ( v21 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x128,
              (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanagervisibilitydebouncer.cpp",
              (const char *)(unsigned int)v21,
              v50);
            Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalRelease(&v57);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v59);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v58);
            Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>(&v69);
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xF1,
              (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanagervisibilitydebouncer.cpp",
              (const char *)(unsigned int)v21,
              v51);
            goto LABEL_90;
          }
          Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalRelease(&v57);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v59);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v58);
        break;
      }
      ApplicationViewManagerVisibilityDebouncer::ClearCachedAppView(
        (ApplicationViewManagerVisibilityDebouncer *)v24,
        QueryInterface);
    }
    v55 = (__int64)v25;
    if ( v25 )
      ((void (__fastcall *)(struct IObjectArray *))v25->lpVtbl->AddRef)(v25);
    v56 = 0;
    v32 = ((__int64 (__fastcall *)(struct IObjectArray *, int *))v25->lpVtbl->GetCount)(v25, &v56);
    if ( v32 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x10,
        (unsigned int)"internal\\shell\\private\\inc\\ObjectArrayAdapter.h",
        (const char *)(unsigned int)v32,
        v50);
    v52 = 0;
    v53 = 0LL;
    v54 = &v55;
    details::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>::Iterator::GetCurrentObject(&v52);
    v63 = v56;
    v64 = 0LL;
    v65 = &v55;
LABEL_50:
    LODWORD(v33) = v52;
    v34 = v54;
    while ( (_DWORD)v33 != v63 || v34 != v65 )
    {
      v35 = v53;
      v61 = v53;
      if ( v53 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 8LL))(v53);
      (*(void (__fastcall **)(__int64, struct IApplicationView *, _QWORD, ULONG (__stdcall *)(IObjectArray *)))(*(_QWORD *)v35 + 24LL))(
        v35,
        QueryInterface,
        AddRef,
        Release);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
      v33 = ++v52;
      v36 = v53;
      if ( v53 )
      {
        v53 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
        v33 = v52;
      }
      while ( 1 )
      {
        v34 = v54;
        if ( (unsigned int)v33 >= *((_DWORD *)v54 + 2) )
          break;
        v37 = *v54;
        v38 = v53;
        if ( v53 )
        {
          v53 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
          v33 = v52;
        }
        v39 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v37 + 32LL))(
                v37,
                v33,
                &GUID_727f9e97_76ee_497b_a942_b6371328485c,
                &v53);
        if ( v39 >= 0 )
          goto LABEL_50;
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x35,
          (unsigned int)"internal\\shell\\private\\inc\\ObjectArrayAdapter.h",
          (const char *)(unsigned int)v39,
          v50);
        v33 = ++v52;
      }
    }
    v40 = v64;
    if ( v64 )
    {
      v64 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
    }
    v41 = v53;
    if ( v53 )
    {
      v53 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
    }
    v42 = v55;
    if ( v55 )
    {
      v55 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
    }
    if ( v24[10].lpVtbl )
    {
      v43 = v24[9].lpVtbl;
      v44 = v43->Release;
      if ( v44 )
      {
        v43->Release = 0LL;
        (*(void (__fastcall **)(ULONG (__stdcall *)(IObjectArray *)))(*(_QWORD *)v44 + 16LL))(v44);
      }
      v45 = v43->QueryInterface;
      if ( v43->QueryInterface )
      {
        v43->QueryInterface = 0LL;
        (*(void (__fastcall **)(HRESULT (__stdcall *)(IObjectArray *, const IID *const, void **)))(*(_QWORD *)v45 + 16LL))(v45);
      }
      v46 = v24[10].lpVtbl;
      if ( v46 != (struct IObjectArrayVtbl *)1 )
      {
        memmove_0(v24[9].lpVtbl, &v24[9].lpVtbl->GetAt, 32LL * ((_QWORD)v46 - 1));
        v46 = v24[10].lpVtbl;
      }
      v24[10].lpVtbl = (struct IObjectArrayVtbl *)((char *)v46 - 1);
    }
    if ( Release )
      (*(void (__fastcall **)(ULONG (__stdcall *)(IObjectArray *)))(*(_QWORD *)Release + 16LL))(Release);
    if ( QueryInterface )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)QueryInterface + 16LL))(QueryInterface);
  }
  if ( v25 )
    ((void (__fastcall *)(struct IObjectArray *))v25->lpVtbl->Release)(v25);
  v21 = 0;
LABEL_90:
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return (unsigned int)v21;
}
