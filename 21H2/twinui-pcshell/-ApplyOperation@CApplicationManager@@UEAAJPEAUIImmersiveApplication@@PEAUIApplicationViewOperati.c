/*
 * XREFs of ?ApplyOperation@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewOperation@@@Z @ 0x180047460
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180022A98 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@details@wi.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z @ 0x1801C57A0 (-_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CApplicationManager::ApplyOperation(
        CApplicationManager *this,
        struct IImmersiveApplication *a2,
        struct IApplicationViewOperation *a3)
{
  int v6; // ecx
  int v7; // eax
  int v8; // ebx
  RTL_SRWLOCK *v9; // rdi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r15
  __int64 v12; // rbx
  int v13; // esi
  struct ISyncIAMEventHandler *v14; // rcx
  __int64 (__fastcall ***v15)(_QWORD, GUID *, __int64 **); // rcx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rax
  int v25; // eax
  int v26; // eax
  __int64 *v27; // rsi
  unsigned int v28; // r14d
  _BYTE *v29; // r8
  int v30; // eax
  __int64 *v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  char *v35; // r8
  int v36; // [rsp+20h] [rbp-E0h]
  int v37; // [rsp+20h] [rbp-E0h]
  int v38; // [rsp+20h] [rbp-E0h]
  bool v39; // [rsp+61h] [rbp-9Fh]
  struct ISyncIAMEventHandler *v40; // [rsp+68h] [rbp-98h] BYREF
  __int64 *v41; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v42; // [rsp+78h] [rbp-88h] BYREF
  int v43; // [rsp+7Ch] [rbp-84h]
  __int64 v44; // [rsp+80h] [rbp-80h] BYREF
  __int64 v45; // [rsp+88h] [rbp-78h] BYREF
  __int64 v46; // [rsp+90h] [rbp-70h] BYREF
  __int64 v47; // [rsp+98h] [rbp-68h] BYREF
  int v48; // [rsp+A0h] [rbp-60h] BYREF
  int v49; // [rsp+A4h] [rbp-5Ch] BYREF
  unsigned int v50; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v51; // [rsp+B0h] [rbp-50h]
  __int64 v52; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v53; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v54; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v55; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v56[6]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v57[48]; // [rsp+108h] [rbp+8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+78h]

  if ( (*(int (__fastcall **)(struct IApplicationViewOperation *, unsigned int *))(*(_QWORD *)a3 + 168LL))(a3, &v42) < 0 )
  {
    v42 = 0;
  }
  else if ( v42 > 0x11 || (v6 = 139538, !_bittest(&v6, v42)) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x86B,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)0x80070057LL,
      v36);
    return 2147942487LL;
  }
  v43 = 0;
  if ( (*(int (__fastcall **)(struct IApplicationViewOperation *, int *))(*(_QWORD *)a3 + 104LL))(a3, &v48) >= 0 )
    v43 = 2 - (v48 != 0);
  v39 = (*(int (__fastcall **)(struct IApplicationViewOperation *, _BYTE *))(*(_QWORD *)a3 + 152LL))(a3, v57) >= 0;
  v47 = 0LL;
  (*(void (__fastcall **)(struct IApplicationViewOperation *, __int64 *))(*(_QWORD *)a3 + 88LL))(a3, &v47);
  v46 = 0LL;
  (*(void (__fastcall **)(struct IApplicationViewOperation *, __int64 *))(*(_QWORD *)a3 + 184LL))(a3, &v46);
  v45 = 0LL;
  (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, __int64 *, char *))(*(_QWORD *)a3 + 120LL))(
    a3,
    &v45,
    (char *)&v45 + 4);
  v7 = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, unsigned int *))(*(_QWORD *)a3 + 136LL))(a3, &v50);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v9 = CApplicationManagerUtility::g_pIAMGlobals;
    v56[1] = CApplicationManagerUtility::g_pIAMGlobals;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v41 = 0LL;
    v56[2] = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)a2 + 8LL))(a2);
    v41 = 0LL;
    v56[3] = 0LL;
    v10 = 0LL;
    v51 = 0LL;
    v11 = 0LL;
    if ( *((_QWORD *)this + 53) )
    {
      v56[4] = 0LL;
      do
      {
        v12 = *(_QWORD *)(*((_QWORD *)this + 52) + 8 * v11);
        v56[5] = v12;
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
        v13 = -1;
        v40 = 0LL;
        if ( (**(int (__fastcall ***)(__int64, GUID *, struct ISyncIAMEventHandler **))v12)(
               v12,
               &GUID_8b14e88b_5663_4caf_b196_c31479262831,
               &v40) >= 0 )
        {
          (*(void (__fastcall **)(struct ISyncIAMEventHandler *, struct IImmersiveApplication *, int *))(*(_QWORD *)v40 + 104LL))(
            v40,
            a2,
            &v49);
          v13 = (v49 != 0) - 1;
        }
        v14 = v40;
        if ( v40 )
        {
          v40 = 0LL;
          (*(void (__fastcall **)(struct ISyncIAMEventHandler *))(*(_QWORD *)v14 + 16LL))(v14);
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        if ( !v13 )
        {
          v10 = v11;
          v8 = 0;
          goto LABEL_19;
        }
        ++v11;
      }
      while ( v11 < *((_QWORD *)this + 53) );
      v10 = v51;
    }
    v8 = -2147319765;
LABEL_19:
    if ( v8 >= 0 )
    {
      v15 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 **))(*((_QWORD *)this + 52) + 8 * v10);
      v8 = (**v15)(v15, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v41);
    }
    if ( a2 )
      (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)a2 + 16LL))(a2);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x89C,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v8,
        v36);
    }
    else
    {
      v16 = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, __int64 *, __int64 *))(*(_QWORD *)a3 + 216LL))(
              a3,
              &v53,
              &v52);
      v8 = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x8A1,
          (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const char *)(unsigned int)v16,
          v36);
      }
      else
      {
        v17 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(*v41 + 560))(v41, v53, v52);
        v8 = v17;
        if ( v17 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x8A2,
            (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            (const char *)(unsigned int)v17,
            v36);
        }
        else
        {
          v18 = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, __int64 *, __int64 *))(*(_QWORD *)a3 + 232LL))(
                  a3,
                  &v55,
                  &v54);
          v8 = v18;
          if ( v18 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x8A6,
              (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
              (const char *)(unsigned int)v18,
              v36);
          }
          else
          {
            v19 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(*v41 + 568))(v41, v55, v54);
            v8 = v19;
            if ( v19 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x8A7,
                (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                (const char *)(unsigned int)v19,
                v36);
            }
            else if ( (*(int (__fastcall **)(struct IApplicationViewOperation *, _QWORD *))(*(_QWORD *)a3 + 248LL))(
                        a3,
                        v56) >= 0
                   && (v21 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v41 + 592))(v41, v56[0]), v8 = v21, v21 < 0) )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x8AD,
                (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                (const char *)(unsigned int)v21,
                v36);
            }
            else
            {
              wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::ReportUsage(
                `wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::GetImpl'::`2'::impl,
                1u,
                v20);
              v22 = *(_QWORD *)a3;
              v40 = 0LL;
              if ( (*(int (__fastcall **)(struct IApplicationViewOperation *, struct ISyncIAMEventHandler **))(v22 + 264))(
                     a3,
                     &v40) >= 0 )
              {
                v23 = (*(__int64 (__fastcall **)(__int64 *, struct ISyncIAMEventHandler *))(*v41 + 632))(v41, v40);
                if ( v23 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x8B6,
                    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                    (const char *)(unsigned int)v23,
                    v36);
              }
              if ( v40 )
                (*(void (__fastcall **)(struct ISyncIAMEventHandler *))(*(_QWORD *)v40 + 16LL))(v40);
              v44 = 0LL;
              v24 = *v41;
              v44 = 0LL;
              v25 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v24 + 504))(v41, &v44);
              v8 = v25;
              if ( v25 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x8BC,
                  (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                  (const char *)(unsigned int)v25,
                  v36);
              }
              else
              {
                v26 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v44 + 144LL))(v44, v50);
                v8 = v26;
                if ( v26 < 0 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x8BD,
                    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                    (const char *)(unsigned int)v26,
                    v36);
                }
                else
                {
                  v27 = v41;
                  v28 = v42;
                  if ( v39 )
                    v29 = v57;
                  else
                    v29 = 0LL;
                  v37 = v43;
                  v30 = (*(__int64 (__fastcall **)(__int64 *, __int64, _BYTE *, __int64))(*v41 + 256))(
                          v41,
                          v47,
                          v29,
                          v46);
                  v8 = v30;
                  if ( v30 >= 0 )
                  {
                    if ( v28 && ((*(__int64 (__fastcall **)(__int64 *))(*v27 + 280))(v27) & 2) != 0 )
                    {
                      v40 = 0LL;
                      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v40);
                      if ( (int)CApplicationManager::_GetGlobalSyncEventHandler(
                                  (CApplicationManager *)((char *)this - 216),
                                  &v40) >= 0 )
                      {
                        v35 = (char *)this + 32;
                        if ( this == (CApplicationManager *)216 )
                          v35 = 0LL;
                        (*(void (__fastcall **)(struct ISyncIAMEventHandler *, _QWORD, char *, struct IImmersiveApplication *, unsigned int, int, __int64))(*(_QWORD *)v40 + 24LL))(
                          v40,
                          0LL,
                          v35,
                          a2,
                          v28,
                          5,
                          1LL);
                      }
                      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v40);
                    }
                    if ( v44 )
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
                    v31 = v41;
                    if ( v41 )
                    {
                      v41 = 0LL;
                      (*(void (__fastcall **)(__int64 *))(*v31 + 16))(v31);
                    }
                    if ( v9 )
                      ReleaseSRWLockExclusive(v9);
                    v8 = 0;
                    goto LABEL_49;
                  }
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x104C,
                    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                    (const char *)(unsigned int)v30,
                    v37);
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x8CA,
                    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                    (const char *)(unsigned int)v8,
                    v38);
                }
              }
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v44);
            }
          }
        }
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v41);
    if ( v9 )
      ReleaseSRWLockExclusive(v9);
    goto LABEL_49;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x894,
    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
    (const char *)(unsigned int)v7,
    v36);
LABEL_49:
  v32 = v46;
  if ( v46 )
  {
    v46 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  }
  v33 = v47;
  if ( v47 )
  {
    v47 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  }
  return (unsigned int)v8;
}
