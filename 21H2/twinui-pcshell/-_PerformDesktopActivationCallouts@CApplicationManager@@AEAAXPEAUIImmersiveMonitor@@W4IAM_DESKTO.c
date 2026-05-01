/*
 * XREFs of ?_PerformDesktopActivationCallouts@CApplicationManager@@AEAAXPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x1801C86B4
 * Callers:
 *     CDelayIAMOperations::CDelayedOperation__lambda_d2a883147a4aaef7223296bf15465975___::operator() @ 0x1801B80A0 (CDelayIAMOperations--CDelayedOperation__lambda_d2a883147a4aaef7223296bf15465975___--operator().c)
 * Callees:
 *     ??$FindEx@VCImmersiveMonitorFinder@@@?$CTSimpleFixedArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@QEBAJAEBVCImmersiveMonitorFinder@@AEBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@PEA_K_K@Z @ 0x18005A1BC (--$FindEx@VCImmersiveMonitorFinder@@@-$CTSimpleFixedArray@V-$ComPtr@UIImmersiveMonitor@@@WRL@Mic.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x18005EB60 (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z @ 0x1801C57A0 (-_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z.c)
 *     ?_GetMonitorObjectArray@CApplicationManager@@AEAAJPEAV?$CCoSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@PEAPEAUIObjectArray@@PEA_N@Z @ 0x1801C5B48 (-_GetMonitorObjectArray@CApplicationManager@@AEAAJPEAV-$CCoSimpleArray@V-$ComPtr@UIImmersiveMoni.c)
 *     ?_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x1801C5C5C (-_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArr.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall CApplicationManager::_PerformDesktopActivationCallouts(
        CApplicationManager *a1,
        struct IObjectArray *a2,
        int a3)
{
  char v3; // di
  struct IImmersiveMonitor *v4; // r15
  CApplicationManager *v5; // rbx
  int v6; // r12d
  __int64 *v7; // r14
  __int64 v8; // rsi
  void *v9; // r8
  int v10; // eax
  struct ISyncIAMEventHandler **v11; // rax
  unsigned int v12; // r13d
  __int64 v13; // rdi
  int (__fastcall *v14)(__int64, _QWORD, struct IUnknown **); // rbx
  __int64 v15; // rdx
  bool v16; // bl
  struct IUnknown *v17; // rbx
  void *v18; // r8
  int v19; // eax
  __int64 *v20; // rax
  int SingleMonitorObjectArray; // eax
  __int64 *v22; // rbx
  struct IUnknown *v23; // [rsp+48h] [rbp-29h] BYREF
  struct IUnknown *v24; // [rsp+50h] [rbp-21h] BYREF
  struct IUnknown *v25; // [rsp+58h] [rbp-19h] BYREF
  __int64 v26; // [rsp+60h] [rbp-11h] BYREF
  __int64 *v27; // [rsp+68h] [rbp-9h] BYREF
  __int64 v28; // [rsp+70h] [rbp-1h]
  __int64 v29; // [rsp+78h] [rbp+7h]
  __int64 v30; // [rsp+80h] [rbp+Fh]
  struct IObjectArray *v32; // [rsp+E0h] [rbp+6Fh] BYREF
  int v33; // [rsp+E8h] [rbp+77h] BYREF
  struct ISyncIAMEventHandler *v34; // [rsp+F0h] [rbp+7Fh] BYREF

  v33 = a3;
  v32 = a2;
  v3 = a3;
  v4 = (struct IImmersiveMonitor *)a2;
  v5 = a1;
  v6 = 0;
  LODWORD(v23) = 0;
  v7 = 0LL;
  v27 = 0LL;
  v8 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  if ( a2 )
  {
    v34 = (struct ISyncIAMEventHandler *)a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v34);
    v10 = CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
            (__int64)&v27,
            1uLL,
            v9);
    v7 = v27;
    v8 = v28;
    if ( v10 >= 0 )
    {
      v8 = v28 + 1;
      v28 = v8;
      v11 = (struct ISyncIAMEventHandler **)&v27[v8 - 1];
      if ( v11 )
      {
        *v11 = 0LL;
        if ( v11 != &v34 )
        {
          *v11 = v4;
          v34 = 0LL;
        }
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v34);
  }
  if ( (!v4 || (v3 & 0x12) != 0)
    && (*(int (__fastcall **)(_QWORD *, struct ISyncIAMEventHandler **))(**((_QWORD **)v5 + 70) + 32LL))(
         *((_QWORD **)v5 + 70),
         &v34) >= 0 )
  {
    v12 = 0;
    if ( (_DWORD)v34 )
    {
      do
      {
        v24 = 0LL;
        v13 = *((_QWORD *)a1 + 70);
        v14 = *(int (__fastcall **)(__int64, _QWORD, struct IUnknown **))(*(_QWORD *)v13 + 40LL);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
        v16 = 0;
        if ( v14(v13, v12, &v24) >= 0 )
        {
          v25 = v24;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v25);
          v6 |= 1u;
          LODWORD(v23) = v6;
          if ( (unsigned int)CTSimpleFixedArray<Microsoft::WRL::ComPtr<IImmersiveMonitor>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>>::FindEx<CImmersiveMonitorFinder>(
                               &v27,
                               v15,
                               &v25,
                               &v26) == -2147319765 )
            v16 = 1;
        }
        if ( (v6 & 1) != 0 )
        {
          v6 &= ~1u;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
        }
        if ( v16 )
        {
          v17 = v24;
          v23 = v24;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v23);
          if ( v8 != v30
            || (v19 = CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
                        (__int64)&v27,
                        v8 + 1,
                        v18),
                v8 = v28,
                v7 = v27,
                v19 >= 0) )
          {
            v28 = ++v8;
            v20 = &v7[v8 - 1];
            if ( v20 )
            {
              *v20 = 0LL;
              if ( v20 != (__int64 *)&v23 )
              {
                *v20 = (__int64)v17;
                v23 = 0LL;
              }
            }
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
        ++v12;
      }
      while ( v12 < (unsigned int)v34 );
      v4 = (struct IImmersiveMonitor *)v32;
      v5 = a1;
      v3 = v33;
    }
  }
  if ( (v3 & 1) != 0 )
  {
    v34 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v34);
    if ( (int)CApplicationManager::_GetGlobalSyncEventHandler(v5, &v34) >= 0 )
    {
      v32 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v32);
      if ( v4 )
        SingleMonitorObjectArray = CApplicationManager::_GetSingleMonitorObjectArray(v5, v4, &v32);
      else
        SingleMonitorObjectArray = CApplicationManager::_GetMonitorObjectArray(v5, &v27, &v32, &v33);
      if ( SingleMonitorObjectArray >= 0 )
      {
        AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        (*(void (__fastcall **)(struct ISyncIAMEventHandler *, struct IObjectArray *, unsigned __int64, _QWORD, int, int, int))(*(_QWORD *)v34 + 24LL))(
          v34,
          v32,
          ((unsigned __int64)v5 + 248) & -(__int64)(v5 != 0LL),
          0LL,
          1,
          (v3 & 8) != 0 ? 4 : 1,
          0xFFFF);
        ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v32);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v34);
  }
  if ( v7 )
  {
    if ( v8 )
    {
      v22 = v7;
      do
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v22++);
        --v8;
      }
      while ( v8 );
    }
    CoTaskMemFree(v7);
  }
}
