/*
 * XREFs of ?HandleWindowAction@CImmersiveWindowManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4IWM_ACTION_TYPE@@PEAUITaskWindow@@@Z @ 0x180046780
 * Callers:
 *     <none>
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@_K$0PPPPPPPO@V?$CTPolicyCoTaskMem@_K@@V?$CSimpleArrayStandardCompareHelper@_K@@V?$CSimpleArrayStandardMergeHelper@_K@@@@QEAAJ_K0@Z @ 0x18005EE50 (-_EnsureCapacity@-$CTSimpleArray@_K$0PPPPPPPO@V-$CTPolicyCoTaskMem@_K@@V-$CSimpleArrayStandardCo.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x18007E548 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V.c)
 *     ?_HandleApplicationCreation@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x18007F85C (-_HandleApplicationCreation@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEA.c)
 *     memmove_0 @ 0x180091333 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?_DeactivatePrevActiveApp@CImmersiveWindowManager@@AEAAJW4ZBID@@@Z @ 0x1801CEEB8 (-_DeactivatePrevActiveApp@CImmersiveWindowManager@@AEAAJW4ZBID@@@Z.c)
 *     ?_HandleApplicationPrecreation@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x1801CEF40 (-_HandleApplicationPrecreation@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@.c)
 *     ?_RemoveApplication@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x1801CF044 (-_RemoveApplication@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CImmersiveWindowManager::HandleWindowAction(
        __int64 a1,
        IUnknown *a2,
        __int64 a3,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a4,
        int a5,
        struct ITaskWindow *a6)
{
  int ActiveApp; // ebx
  unsigned int v8; // edi
  __int64 v9; // r13
  __int64 v10; // r8
  const void **v11; // r14
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // r15
  __int64 v14; // rbx
  int v15; // r12d
  __int64 v16; // rcx
  __int64 v17; // rcx
  char v18; // r15
  unsigned int v19; // eax
  unsigned int v21; // eax
  __int64 v22; // rcx
  unsigned __int64 v23; // r15
  __int64 v24; // r8
  __int64 v25; // [rsp+30h] [rbp-30h] BYREF
  __int64 v26; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v27[4]; // [rsp+40h] [rbp-20h] BYREF

  ActiveApp = -2147024809;
  v8 = 0;
  if ( !a5 )
    return (unsigned int)CImmersiveWindowManager::_HandleApplicationCreation((IUnknown *)(a1 - 160), a2, a4, a6);
  if ( a5 != 2 )
  {
    switch ( a5 )
    {
      case 1:
LABEL_48:
        if ( a5 != 1 )
        {
          if ( a5 == 9 )
          {
            v8 = 1;
          }
          else if ( a5 == 10 )
          {
            v8 = 2;
          }
          else
          {
            v8 = 3;
          }
        }
        v21 = ((__int64 (__fastcall *)(IUnknown *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, _QWORD, struct ITaskWindow *))a2->lpVtbl[2].QueryInterface)(
                a2,
                a4,
                v8,
                a6);
        break;
      case 5:
        v21 = ((__int64 (__fastcall *)(IUnknown *, __int64, _QWORD, _QWORD))a2->lpVtbl[4].Release)(a2, a3, 0LL, 0LL);
        break;
      case 6:
        v21 = CImmersiveWindowManager::_RemoveApplication(
                (CImmersiveWindowManager *)(a1 - 160),
                (struct IImmersiveApplicationInternal *)a2);
        break;
      case 7:
        v21 = ((__int64 (__fastcall *)(IUnknown *, __int64))a2->lpVtbl[2].AddRef)(a2, a3);
        break;
      case 8:
        v21 = CImmersiveWindowManager::_HandleApplicationPrecreation(
                (IUnknown *)(a1 - 160),
                (struct IImmersiveApplicationInternal *)a2);
        break;
      default:
        if ( a5 <= 8 || a5 > 11 )
          return (unsigned int)ActiveApp;
        goto LABEL_48;
    }
    return v21;
  }
  v9 = a1 - 160;
  v26 = 0LL;
  ((void (__fastcall *)(IUnknown *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
    a2,
    &GUID_8b14e88b_5663_4caf_b196_c31479262831,
    &v26);
  v11 = (const void **)(v9 + 216);
  v27[0] = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  if ( *(_QWORD *)(v9 + 224) )
  {
    v27[1] = 0LL;
    do
    {
      v14 = *((_QWORD *)*v11 + v13);
      v27[2] = v14;
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      v15 = -1;
      v25 = 0LL;
      if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v14)(
             v14,
             &GUID_8b14e88b_5663_4caf_b196_c31479262831,
             &v25) >= 0 )
      {
        (*(void (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v25 + 104LL))(v25, v26, &a5);
        v15 = (a5 != 0) - 1;
      }
      v16 = v25;
      if ( v25 )
      {
        v25 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      if ( !v15 )
      {
        v12 = v13;
        ActiveApp = 0;
        goto LABEL_13;
      }
      ++v13;
    }
    while ( v13 < *(_QWORD *)(v9 + 224) );
    v12 = 0LL;
  }
  ActiveApp = -2147319765;
LABEL_13:
  v17 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  if ( ActiveApp >= 0 )
  {
    if ( !*(_BYTE *)(v9 + 248) || (v18 = 1, v12) )
      v18 = 0;
    LOBYTE(v10) = v18;
    ActiveApp = ((__int64 (__fastcall *)(IUnknown *, __int64, __int64))a2->lpVtbl[2].Release)(a2, a3, v10);
    if ( ActiveApp >= 0 )
    {
      if ( !v18 )
      {
        v19 = ((__int64 (__fastcall *)(IUnknown *))a2->lpVtbl[5].Release)(a2);
        ActiveApp = 0;
        if ( *(_BYTE *)(v9 + 248) )
          ActiveApp = CImmersiveWindowManager::_DeactivatePrevActiveApp(v9, v19);
      }
      if ( v12 )
      {
        v27[0] = a2;
        ((void (__fastcall *)(IUnknown *))a2->lpVtbl->AddRef)(a2);
        CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::RemoveAt(
          v9 + 216,
          v12);
        v22 = *(_QWORD *)(v9 + 224);
        v23 = 1LL;
        if ( v22 )
          v23 = v22 + 1;
        if ( v23 <= *(_QWORD *)(v9 + 240)
          || (int)CTSimpleArray<unsigned __int64,4294967294,CTPolicyCoTaskMem<unsigned __int64>,CSimpleArrayStandardCompareHelper<unsigned __int64>,CSimpleArrayStandardMergeHelper<unsigned __int64>>::_EnsureCapacity(
                    v9 + 216,
                    v23) >= 0 )
        {
          v24 = *(_QWORD *)(v9 + 224);
          if ( v24 )
            memmove_0((char *)*v11 + 8, *v11, 8 * v24);
          *(_QWORD *)(v9 + 224) = v23;
          if ( *v11 )
          {
            *(_QWORD *)*v11 = a2;
            ((void (__fastcall *)(IUnknown *))a2->lpVtbl->AddRef)(a2);
          }
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v27);
      }
      if ( ActiveApp >= 0 )
        *(_BYTE *)(v9 + 248) = 1;
    }
  }
  return (unsigned int)ActiveApp;
}
