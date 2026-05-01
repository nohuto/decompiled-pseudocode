/*
 * XREFs of ?HandleApplicationViewChangeSync@ApplicationViewManagerVisibilityDebouncer@@UEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x180079D00
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180045D28 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18015DEAC (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x1801D5AC0 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoT.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall ApplicationViewManagerVisibilityDebouncer::HandleApplicationViewChangeSync(
        RTL_SRWLOCK *a1,
        struct IUnknown *a2,
        int a3)
{
  RTL_SRWLOCK *v5; // rbx
  RTL_SRWLOCK *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rsi
  int v9; // edi
  __int64 v10; // rdx
  RTL_SRWLOCK *v11; // rdi
  int v12; // eax
  char *Ptr; // rdx
  struct IUnknown **v14; // r8
  BOOL v15; // edi
  __int64 v16; // [rsp+20h] [rbp-30h] BYREF
  struct IUnknown *v17; // [rsp+28h] [rbp-28h]
  __int64 v18[4]; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  struct IUnknown *v20; // [rsp+88h] [rbp+38h] BYREF

  if ( a3 )
  {
    if ( a3 != 1 )
      return;
    v5 = a1 + 23;
    v18[0] = (__int64)&a1[23];
    AcquireSRWLockExclusive(a1 + 23);
    v20 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v20);
    v11 = a1 + 24;
    v12 = 0;
    Ptr = (char *)v11[1].Ptr;
    if ( Ptr != v11[3].Ptr
      || (v12 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                  v11,
                  Ptr + 1),
          v12 >= 0) )
    {
      v14 = (struct IUnknown **)((char *)v11->Ptr + 8 * (__int64)v11[1].Ptr++);
      if ( v14 )
      {
        *v14 = 0LL;
        if ( v14 != &v20 )
        {
          *v14 = a2;
          v20 = 0LL;
        }
      }
    }
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x102,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanagervisibilitydebouncer.cpp",
        (const char *)(unsigned int)v12);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
  }
  else
  {
    v5 = a1 + 23;
    v18[1] = (__int64)&a1[23];
    AcquireSRWLockExclusive(a1 + 23);
    v17 = a2;
    v18[0] = 0LL;
    v6 = a1 + 24;
    v7 = 0LL;
    v8 = 0LL;
    if ( a1[25].Ptr )
    {
      v18[2] = (__int64)&v16;
      v18[3] = (__int64)&v20;
      while ( 1 )
      {
        v16 = 0LL;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v16);
        v20 = (struct IUnknown *)*((_QWORD *)v6->Ptr + v8);
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v20);
        v15 = SHIsSameObject(v20, v17) == 0;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
        if ( !v15 )
          break;
        if ( (PVOID)++v8 >= v6[1].Ptr )
          goto LABEL_5;
      }
      v7 = v8;
      v9 = 0;
    }
    else
    {
LABEL_5:
      v9 = -2147319765;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v18);
    v10 = -1LL;
    if ( v9 >= 0 )
      v10 = v7;
    if ( v10 != -1 )
      CTSimpleArray<Microsoft::WRL::ComPtr<IApplicationView>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IApplicationView>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IApplicationView>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IApplicationView>>>::RemoveAt(v6);
  }
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
}
