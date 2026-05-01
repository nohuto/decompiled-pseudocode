/*
 * XREFs of ?_InvokePresentedWindowCallbackTriggers@CAppViewManager@@AEAAXPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND__@@@Z @ 0x18006ADCC
 * Callers:
 *     ?ApplicationChanged@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND__@@@Z @ 0x18006ADA0 (-ApplicationChanged@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180045D28 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyLocalMem@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18005ED10 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGG.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_G?$ComPtr@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x18006B090 (--_G-$ComPtr@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 *     ?_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@AEAVCMarshaledInterface@@J@Z @ 0x18006B0C4 (-_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@AEAVCMarshaledInterface.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     memmove_0 @ 0x180091313 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1801C9CC4 (WPP_SF_d.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CAppViewManager::_InvokePresentedWindowCallbackTriggers(
        __int64 a1,
        struct IUnknown *a2,
        int a3,
        __int64 a4)
{
  struct IUnknown *v4; // r12
  char *v6; // r15
  __int64 v7; // r14
  RTL_SRWLOCK *v8; // rsi
  __int64 v9; // rax
  unsigned __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rbx
  int v13; // r12d
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rdi
  __int64 v15; // rdi
  void *v16; // r8
  int v17; // eax
  __int64 *v18; // rax
  __int64 v19; // rdx
  char *v20; // rbx
  __int64 v21; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v22; // [rsp+28h] [rbp-50h]
  __int64 v23; // [rsp+30h] [rbp-48h] BYREF
  PSRWLOCK v24; // [rsp+38h] [rbp-40h]
  PSRWLOCK v25; // [rsp+40h] [rbp-38h]
  char *v26; // [rsp+48h] [rbp-30h] BYREF
  __int64 v27; // [rsp+50h] [rbp-28h]
  __int64 v28; // [rsp+58h] [rbp-20h]
  __int64 v29; // [rsp+60h] [rbp-18h]
  struct IImmersiveApplicationInternal *v30; // [rsp+C0h] [rbp+48h] BYREF
  struct IUnknown *v31; // [rsp+C8h] [rbp+50h]
  int v32; // [rsp+D0h] [rbp+58h]
  __int64 v33; // [rsp+D8h] [rbp+60h]

  v33 = a4;
  v32 = a3;
  v31 = a2;
  v4 = a2;
  v6 = 0LL;
  v26 = 0LL;
  v7 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v8 = CApplicationManagerUtility::g_pIAMGlobals;
  v24 = CApplicationManagerUtility::g_pIAMGlobals;
  v25 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v9 = *(_QWORD *)(a1 + 96);
  if ( v9 )
  {
    v10 = v9 - 1;
    v22 = v9 - 1;
    v11 = v9;
    while ( 1 )
    {
      v23 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v10);
      v12 = v23;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v23);
      if ( (unsigned int)SHIsSameObject(v4, *(struct IUnknown **)(v12 + 16)) )
        break;
LABEL_30:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      v22 = --v10;
      if ( !--v11 )
      {
        v8 = v24;
        goto LABEL_2;
      }
    }
    v13 = -2147467260;
    LOBYTE(v30) = 0;
    if ( v32 == 6 )
      goto LABEL_15;
    if ( *(_DWORD *)(v12 + 8) == 1 )
    {
      if ( v32 == 8 )
      {
        v21 = 0LL;
        QueryInterface = v31->lpVtbl->QueryInterface;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
        if ( ((int (__fastcall *)(struct IUnknown *, GUID *, __int64 *))QueryInterface)(
               v31,
               &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
               &v21) >= 0
          && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v21 + 472LL))(v21) )
        {
          LOBYTE(v30) = 1;
          v13 = v33 != *(_QWORD *)(v12 + 32) ? 0x80004004 : 0;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
        if ( (_BYTE)v30 )
          goto LABEL_15;
        v10 = v22;
      }
    }
    else if ( *(_DWORD *)(v12 + 8) == 2 && v33 == *(_QWORD *)(v12 + 32) )
    {
      v13 = v32 != 8 ? 0x80004004 : 0;
LABEL_15:
      v30 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v30);
      if ( (***(int (__fastcall ****)(_QWORD, GUID *, struct IImmersiveApplicationInternal **))(v12 + 16))(
             *(_QWORD *)(v12 + 16),
             &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
             &v30) >= 0 )
      {
        CAppViewManager::_s_QueueCallback(v30, (struct CMarshaledInterface *)(v12 + 24), v13);
        if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            31LL,
            &WPP_4118369381663a2e526d206c00d3ecd5_Traceguids,
            *(unsigned int *)(v12 + 40));
      }
      v15 = v12;
      v21 = v12;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v21);
      if ( v7 != v29
        || (v17 = CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>,4294967294,CTPolicyLocalMem<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>>>::_EnsureCapacity(
                    (__int64)&v26,
                    v7 + 1,
                    v16),
            v7 = v27,
            v6 = v26,
            v17 >= 0) )
      {
        v27 = ++v7;
        v18 = (__int64 *)&v6[8 * v7 - 8];
        if ( v18 )
        {
          *v18 = 0LL;
          if ( v18 != &v21 )
          {
            *v18 = v12;
            v15 = 0LL;
          }
        }
      }
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      v10 = v22;
      if ( v22 < *(_QWORD *)(a1 + 96) )
      {
        Microsoft::WRL::ComPtr<IObservablePropertyCallback>::`scalar deleting destructor'(*(_QWORD *)(a1 + 88) + 8 * v22);
        v19 = *(_QWORD *)(a1 + 96);
        if ( v10 != v19 - 1 )
        {
          memmove_0(
            (void *)(*(_QWORD *)(a1 + 88) + 8 * v10),
            (const void *)(*(_QWORD *)(a1 + 88) + 8 * v10 + 8),
            8 * (v19 - v10) - 8);
          v19 = *(_QWORD *)(a1 + 96);
        }
        *(_QWORD *)(a1 + 96) = v19 - 1;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v30);
    }
    v4 = v31;
    goto LABEL_30;
  }
LABEL_2:
  if ( v8 )
    ReleaseSRWLockExclusive(v8);
  if ( v6 )
  {
    if ( v7 )
    {
      v20 = v6;
      do
      {
        Microsoft::WRL::ComPtr<IObservablePropertyCallback>::`scalar deleting destructor'(v20);
        v20 += 8;
        --v7;
      }
      while ( v7 );
    }
    LocalFree(v6);
  }
}
