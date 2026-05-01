/*
 * XREFs of ?ClearCachedAppView@ApplicationViewManagerVisibilityDebouncer@@AEAAXPEAUIApplicationView@@@Z @ 0x1802008EC
 * Callers:
 *     ?OnApplicationViewChanged@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18002DF80 (-OnApplicationViewChanged@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationView@@.c)
 *     ?ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ @ 0x180200C4C (-ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180045D28 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x1801D5AC0 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoT.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall ApplicationViewManagerVisibilityDebouncer::ClearCachedAppView(RTL_SRWLOCK *this, struct IUnknown *a2)
{
  RTL_SRWLOCK *v3; // r14
  RTL_SRWLOCK *v4; // rbx
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // rsi
  BOOL v7; // edi
  int v8; // edi
  unsigned __int64 v9; // rdx
  struct IUnknown *v10; // [rsp+80h] [rbp+38h] BYREF
  __int64 v11; // [rsp+88h] [rbp+40h] BYREF
  struct IUnknown *v12; // [rsp+90h] [rbp+48h]
  __int64 v13; // [rsp+98h] [rbp+50h] BYREF

  v3 = this + 24;
  v4 = this + 23;
  AcquireSRWLockExclusive(this + 23);
  v12 = a2;
  v13 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  if ( v3[1].Ptr )
  {
    while ( 1 )
    {
      v11 = 0LL;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v11);
      v10 = (struct IUnknown *)*((_QWORD *)v3->Ptr + v6);
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v10);
      v7 = SHIsSameObject(v10, v12) == 0;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
      if ( !v7 )
        break;
      if ( (PVOID)++v6 >= v3[1].Ptr )
        goto LABEL_4;
    }
    v5 = v6;
    v8 = 0;
  }
  else
  {
LABEL_4:
    v8 = -2147319765;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  v9 = -1LL;
  if ( v8 >= 0 )
    v9 = v5;
  if ( v9 != -1LL )
    CTSimpleArray<Microsoft::WRL::ComPtr<IApplicationView>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IApplicationView>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IApplicationView>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IApplicationView>>>::RemoveAt(
      v3,
      v9);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}
