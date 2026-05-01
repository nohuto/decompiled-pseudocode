/*
 * XREFs of ?OnShowWindowPolicy@ViewPresentationMediator@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@@Z @ 0x180046BA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIObjectArray@@@WRL@Microsoft@@QEAA@XZ @ 0x1800490A0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIObjectArray@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180090958 (memset_0.c)
 *     __Platform_ReleaseSRWLockShared @ 0x180090CEA (__Platform_ReleaseSRWLockShared.c)
 *     __Platform_AcquireSRWLockShared @ 0x180090D26 (__Platform_AcquireSRWLockShared.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18015DD3C (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1801A7B14 (--1-$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall ViewPresentationMediator::OnShowWindowPolicy(
        RTL_SRWLOCK *this,
        HWND a2,
        unsigned int a3,
        unsigned int *a4,
        LPRECT lprc)
{
  unsigned int *v5; // rdi
  unsigned int v6; // r12d
  int v8; // r14d
  RTL_SRWLOCK *v9; // r13
  char *v10; // rax
  char *v11; // rbx
  unsigned __int64 Ptr; // rcx
  int v13; // esi
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rsi
  char *v16; // r12
  __int64 *v17; // r14
  __int64 *v18; // r15
  __int64 v19; // rdx
  __int64 *v20; // rdx
  __int64 v21; // rcx
  char *v22; // rbx
  int v23; // eax
  __int64 *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rbx
  IMalloc *v27; // rcx
  int v28; // eax
  HWND v29; // rsi
  unsigned int v30; // ecx
  IMalloc *v31; // rbx
  __int64 *v32; // rax
  __int64 v33; // rdi
  int v34; // eax
  __int64 v35; // rcx
  IMalloc *v36; // rcx
  char *v37; // rcx
  char *v38; // rcx
  int v40; // [rsp+20h] [rbp-51h]
  int v41; // [rsp+20h] [rbp-51h]
  LPMALLOC ppMalloc; // [rsp+30h] [rbp-41h] BYREF
  unsigned __int64 v43; // [rsp+38h] [rbp-39h]
  char *v44; // [rsp+40h] [rbp-31h] BYREF
  int v45; // [rsp+48h] [rbp-29h] BYREF
  unsigned int v46; // [rsp+50h] [rbp-21h]
  IMalloc *v47; // [rsp+58h] [rbp-19h] BYREF
  char **v48; // [rsp+60h] [rbp-11h]
  int v49; // [rsp+68h] [rbp-9h]
  __int64 v50; // [rsp+70h] [rbp-1h]
  char **v51; // [rsp+78h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+57h]
  char *v53; // [rsp+D0h] [rbp+5Fh] BYREF
  HWND v54; // [rsp+D8h] [rbp+67h]
  unsigned int v55; // [rsp+E0h] [rbp+6Fh]
  unsigned int *v56; // [rsp+E8h] [rbp+77h]

  v56 = a4;
  v55 = a3;
  v54 = a2;
  v5 = a4;
  v6 = a3;
  *a4 = 0;
  v8 = (int)lprc;
  SetRectEmpty(lprc);
  v53 = 0LL;
  v9 = this + 12;
  _Platform_AcquireSRWLockShared(this + 12);
  v53 = 0LL;
  v10 = (char *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v10;
  if ( v10 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IObjectArray>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IObjectArray>(v10);
    *(_QWORD *)v11 = &CGITCallbackArray::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IObjectArray>>'};
    *((_QWORD *)v11 + 4) = &CGITCallbackArray::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IObjectArray>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IObjectArray>>'};
    *((_QWORD *)v11 + 6) = 0LL;
    *((_QWORD *)v11 + 7) = 0LL;
    *((_QWORD *)v11 + 8) = 0LL;
    *((_QWORD *)v11 + 9) = 0LL;
    v44 = v11;
    Ptr = (unsigned __int64)this[14].Ptr;
    if ( !Ptr )
      goto LABEL_21;
    v13 = -2147024774;
    if ( Ptr > 0xFFFFFFFE )
    {
LABEL_61:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5F,
        (unsigned int)"shell\\lib\\gitreglist.cpp",
        (const char *)(unsigned int)v13,
        v40);
LABEL_62:
      Microsoft::WRL::ComPtr<CImmersiveWindowManager>::~ComPtr<CImmersiveWindowManager>(&v44);
      goto LABEL_22;
    }
    if ( is_mul_ok(0LL, 2uLL) )
    {
      if ( this[14].Ptr > (PVOID)0xFFFFFFFELL )
        v14 = 4294967294LL;
      else
        v14 = (unsigned __int64)this[14].Ptr;
      v15 = 8 * v14;
      if ( !is_mul_ok(v14, 8uLL) )
      {
        v13 = -2147024362;
        goto LABEL_13;
      }
      v16 = (char *)CoTaskMemRealloc(*((LPVOID *)v11 + 6), 8 * v14);
      if ( v16 )
      {
        if ( CoGetMalloc(1u, &ppMalloc) >= 0 )
        {
          v43 = ((__int64 (__fastcall *)(LPMALLOC, char *))ppMalloc->lpVtbl->GetSize)(ppMalloc, v16);
          ((void (__fastcall *)(LPMALLOC))ppMalloc->lpVtbl->Release)(ppMalloc);
          if ( v43 > v15 )
            memset_0(&v16[v15], 0, v43 - v15);
        }
        v13 = 0;
        *((_QWORD *)v11 + 9) = v14;
        *((_QWORD *)v11 + 6) = v16;
        v6 = v55;
LABEL_13:
        if ( v13 >= 0 )
        {
          v17 = (__int64 *)this[13].Ptr;
          v18 = &v17[(__int64)this[14].Ptr];
          if ( v17 != v18 )
          {
            while ( 1 )
            {
              v19 = *((_QWORD *)v11 + 7);
              if ( v19 == *((_QWORD *)v11 + 9) )
              {
                v13 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                        v11 + 48,
                        v19 + 1);
                if ( v13 < 0 )
                  break;
              }
              v20 = (__int64 *)(*((_QWORD *)v11 + 6) + 8 * (*((_QWORD *)v11 + 7))++);
              if ( v20 )
              {
                v21 = *v17;
                *v20 = *v17;
                if ( v21 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
              }
              if ( ++v17 == v18 )
                goto LABEL_20;
            }
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x63,
              (unsigned int)"shell\\lib\\gitreglist.cpp",
              (const char *)(unsigned int)v13,
              v40);
            v8 = (int)lprc;
            goto LABEL_62;
          }
LABEL_20:
          v8 = (int)lprc;
LABEL_21:
          v13 = (**(__int64 (__fastcall ***)(void *, GUID *, char **))v11)(
                  v11,
                  &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
                  &v53);
          (*(void (__fastcall **)(char *))(*(_QWORD *)v11 + 16LL))(v11);
LABEL_22:
          v5 = v56;
          goto LABEL_23;
        }
        goto LABEL_60;
      }
      v13 = -2147024882;
      v6 = v55;
    }
    else
    {
      v13 = -2147024362;
    }
LABEL_60:
    v8 = (int)lprc;
    goto LABEL_61;
  }
  v13 = -2147024882;
LABEL_23:
  _Platform_ReleaseSRWLockShared(v9);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x90,
      (unsigned int)"pcshell\\twinui\\viewpresentationmediator\\lib\\viewpresentationmediator.cpp",
      (const char *)(unsigned int)v13,
      v40);
  }
  else
  {
    v22 = v53;
    v44 = v53;
    if ( v53 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v53 + 8LL))(v53);
    v45 = 0;
    v23 = (*(__int64 (__fastcall **)(char *, int *))(*(_QWORD *)v22 + 24LL))(v22, &v45);
    if ( v23 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x10,
        (unsigned int)"internal\\shell\\private\\inc\\ObjectArrayAdapter.h",
        (const char *)(unsigned int)v23,
        v40);
    v46 = 0;
    v47 = 0LL;
    v24 = (__int64 *)&v44;
    v48 = &v44;
    v25 = 0LL;
    if ( v45 )
    {
      do
      {
        v26 = *v24;
        v27 = v47;
        if ( v47 )
        {
          v47 = 0LL;
          ((void (__fastcall *)(IMalloc *))v27->lpVtbl->Release)(v27);
          v25 = v46;
        }
        v28 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, IMalloc **))(*(_QWORD *)v26 + 32LL))(
                v26,
                v25,
                &GUID_8878425f_8c9b_4051_a1ef_cc08e3166e7b,
                &v47);
        if ( v28 >= 0 )
          break;
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x35,
          (unsigned int)"internal\\shell\\private\\inc\\ObjectArrayAdapter.h",
          (const char *)(unsigned int)v28,
          v40);
        v25 = v46 + 1;
        v46 = v25;
        v24 = (__int64 *)v48;
      }
      while ( (unsigned int)v25 < *((_DWORD *)v48 + 2) );
    }
    v49 = v45;
    v50 = 0LL;
    v51 = &v44;
    v29 = v54;
LABEL_33:
    v30 = v46;
    v31 = v47;
    v32 = (__int64 *)v48;
    while ( v30 != v49 || v32 != (__int64 *)v51 )
    {
      ppMalloc = v31;
      if ( v31 )
        ((void (__fastcall *)(IMalloc *))v31->lpVtbl->AddRef)(v31);
      if ( *v5 )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppMalloc);
        break;
      }
      v41 = v8;
      ((void (__fastcall *)(IMalloc *, HWND, _QWORD, unsigned int *))v31->lpVtbl->Alloc)(v31, v29, v6, v5);
      ppMalloc = 0LL;
      ((void (__fastcall *)(IMalloc *))v31->lpVtbl->Release)(v31);
      v30 = ++v46;
      v31 = v47;
      if ( v47 )
      {
        v47 = 0LL;
        ((void (__fastcall *)(IMalloc *))v31->lpVtbl->Release)(v31);
        v31 = v47;
        v30 = v46;
      }
      v32 = (__int64 *)v48;
      if ( v30 < *((_DWORD *)v48 + 2) )
      {
        do
        {
          v33 = *v32;
          if ( v31 )
          {
            v47 = 0LL;
            ((void (__fastcall *)(IMalloc *))v31->lpVtbl->Release)(v31);
            v30 = v46;
          }
          v34 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, IMalloc **))(*(_QWORD *)v33 + 32LL))(
                  v33,
                  v30,
                  &GUID_8878425f_8c9b_4051_a1ef_cc08e3166e7b,
                  &v47);
          if ( v34 >= 0 )
          {
            v5 = v56;
            goto LABEL_33;
          }
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x35,
            (unsigned int)"internal\\shell\\private\\inc\\ObjectArrayAdapter.h",
            (const char *)(unsigned int)v34,
            v41);
          v30 = v46 + 1;
          v46 = v30;
          v32 = (__int64 *)v48;
          v31 = v47;
        }
        while ( v30 < *((_DWORD *)v48 + 2) );
        v5 = v56;
      }
    }
    v35 = v50;
    if ( v50 )
    {
      v50 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
    }
    v36 = v47;
    if ( v47 )
    {
      v47 = 0LL;
      ((void (__fastcall *)(IMalloc *))v36->lpVtbl->Release)(v36);
    }
    v37 = v44;
    if ( v44 )
    {
      v44 = 0LL;
      (*(void (__fastcall **)(char *))(*(_QWORD *)v37 + 16LL))(v37);
    }
    v13 = 0;
  }
  v38 = v53;
  if ( v53 )
  {
    v53 = 0LL;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v38 + 16LL))(v38);
  }
  return (unsigned int)v13;
}
