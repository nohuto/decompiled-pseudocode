/*
 * XREFs of ?GetViewsForPositioner@ShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x180443A20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x18001C768 (-GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPo.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x180044910 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsViewOnMonitor@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x180069BE0 (-IsViewOnMonitor@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ShellPositionerManager::GetViewsForPositioner(
        __int64 a1,
        int a2,
        struct IApplicationView *a3,
        _QWORD *a4)
{
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64 *); // rbx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  const struct _GUID *v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  unsigned int i; // esi
  __int64 v18; // rbx
  int (__fastcall *v19)(__int64, _QWORD, GUID *, struct IApplicationView **); // rdi
  struct IImmersiveMonitor *v20; // r8
  void *v22; // [rsp+30h] [rbp-20h] BYREF
  __int64 v23; // [rsp+38h] [rbp-18h] BYREF
  struct IShellPositionerPriority *v24[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  unsigned int v26; // [rsp+90h] [rbp+40h] BYREF
  struct IApplicationView *v27; // [rsp+A8h] [rbp+58h] BYREF

  *a4 = 0LL;
  v23 = 0LL;
  v8 = *(_QWORD *)(a1 + 72);
  v9 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 32LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
  v10 = v9(v8, &v23);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v23 + 24LL))(v23, &v26);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 392LL;
      goto LABEL_5;
    }
    v22 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
    v15 = CEnumerableObjectCollection::CreateInstance(v14, v13, &v22);
    v11 = v15;
    if ( v15 >= 0 )
    {
      for ( i = 0; i < v26; ++i )
      {
        v27 = 0LL;
        v18 = v23;
        v19 = *(int (__fastcall **)(__int64, _QWORD, GUID *, struct IApplicationView **))(*(_QWORD *)v23 + 32LL);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v27);
        if ( v19(v18, i, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v27) >= 0
          && (!a3 || ApplicationViewHelpers::IsViewOnMonitor(v27, a3, v20)) )
        {
          v24[0] = 0LL;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v24);
          if ( (int)ShellPositionerManager::GetPositionerPriorityForView((ShellPositionerManager *)(a1 - 88), v27, v24) >= 0
            && (*(unsigned int (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v24[0] + 24LL))(v24[0]) == a2 )
          {
            (*(void (__fastcall **)(void *, struct IApplicationView *))(*(_QWORD *)v22 + 40LL))(v22, v27);
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v24);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v27);
      }
      v15 = (**(__int64 (__fastcall ***)(void *, GUID *, _QWORD *))v22)(
              v22,
              &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
              a4);
      v11 = v15;
      if ( v15 >= 0 )
        goto LABEL_20;
      v16 = 415LL;
    }
    else
    {
      v16 = 395LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v15);
LABEL_20:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
    goto LABEL_21;
  }
  v12 = 389LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
    (const char *)(unsigned int)v10);
LABEL_21:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
  return v11;
}
