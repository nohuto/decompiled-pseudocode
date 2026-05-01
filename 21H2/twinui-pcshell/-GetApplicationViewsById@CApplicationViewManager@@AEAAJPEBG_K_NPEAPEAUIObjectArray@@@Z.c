/*
 * XREFs of ?GetApplicationViewsById@CApplicationViewManager@@AEAAJPEBG_K_NPEAPEAUIObjectArray@@@Z @ 0x1801FE050
 * Callers:
 *     ?GetViewsByAppUserModelId@CApplicationViewManager@@UEAAJPEBGPEAPEAUIObjectArray@@@Z @ 0x1801FE750 (-GetViewsByAppUserModelId@CApplicationViewManager@@UEAAJPEBGPEAPEAUIObjectArray@@@Z.c)
 *     ?SetViewStateForDesiredAppState@CApplicationViewManager@@UEAAJPEBGW4APPLICATION_DESIRED_STATE@@@Z @ 0x1801FF400 (-SetViewStateForDesiredAppState@CApplicationViewManager@@UEAAJPEBGW4APPLICATION_DESIRED_STATE@@@.c)
 *     ?SetViewStateForDesiredAppStateByHostId@CApplicationViewManager@@UEAAJ_KW4APPLICATION_DESIRED_STATE@@@Z @ 0x1801FF4C0 (-SetViewStateForDesiredAppStateByHostId@CApplicationViewManager@@UEAAJ_KW4APPLICATION_DESIRED_ST.c)
 * Callees:
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x180044910 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?RefreshCollection@CApplicationViewManager@@UEAAJXZ @ 0x1801FED50 (-RefreshCollection@CApplicationViewManager@@UEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationViewManager::GetApplicationViewsById(
        RTL_SRWLOCK *this,
        GUID *a2,
        __int64 a3,
        char a4,
        struct IObjectArray **a5)
{
  __int64 v9; // rdx
  const struct _GUID *v11; // rdx
  __int64 v12; // rcx
  int Instance; // eax
  unsigned int v14; // edi
  __int64 v15; // rdx
  __int64 v16; // r14
  __int64 (__fastcall ****Ptr)(_QWORD, GUID *, __int64 *); // rdi
  int v18; // eax
  int v19; // edi
  int v20; // eax
  __int64 v21; // [rsp+20h] [rbp-20h] BYREF
  void *v22[3]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  int v24; // [rsp+88h] [rbp+48h] BYREF

  *a5 = 0LL;
  if ( a4 == 1 )
  {
    if ( a3 == -1 )
    {
      v9 = 898LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)0x80070057LL);
      return 2147942487LL;
    }
  }
  else if ( !a4 && !a2 )
  {
    v9 = 899LL;
    goto LABEL_4;
  }
  v22[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v22);
  Instance = CEnumerableObjectCollection::CreateInstance(v12, v11, v22);
  v14 = Instance;
  if ( Instance < 0 )
  {
    v15 = 902LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)Instance);
    goto LABEL_24;
  }
  v22[1] = &this[84];
  AcquireSRWLockShared(this + 84);
  v16 = 0LL;
  if ( this[86].Ptr )
  {
    while ( 1 )
    {
      Ptr = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this[85].Ptr;
      if ( a4 )
      {
        v21 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
        v18 = (**Ptr[v16])(Ptr[v16], &GUID_7f25223a_79ad_4e72_a39a_6a194dd604c1, &v21);
        v14 = v18;
        if ( v18 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x393,
            (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
            (const char *)(unsigned int)v18);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
          goto LABEL_27;
        }
        v19 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v21 + 56LL))(v21, a3, &v24);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
      }
      else
      {
        v19 = (*Ptr[v16])[19](Ptr[v16], a2, (__int64 *)&v24);
      }
      if ( v19 >= 0 )
      {
        if ( v24 )
        {
          v20 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v22[0] + 40LL))(
                  v22[0],
                  *((_QWORD *)this[85].Ptr + v16));
          v14 = v20;
          if ( v20 < 0 )
            break;
        }
      }
      if ( (PVOID)++v16 >= this[86].Ptr )
        goto LABEL_19;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39D,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v20);
LABEL_27:
    if ( this != (RTL_SRWLOCK *)-672LL )
      ReleaseSRWLockShared(this + 84);
    goto LABEL_24;
  }
LABEL_19:
  if ( this != (RTL_SRWLOCK *)-672LL )
    ReleaseSRWLockShared(this + 84);
  CApplicationViewManager::RefreshCollection((CApplicationViewManager *)&this[17]);
  Instance = (**(__int64 (__fastcall ***)(void *, GUID *, struct IObjectArray **))v22[0])(
               v22[0],
               &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
               a5);
  v14 = Instance;
  if ( Instance < 0 )
  {
    v15 = 934LL;
    goto LABEL_23;
  }
LABEL_24:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v22);
  return v14;
}
