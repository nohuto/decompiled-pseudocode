/*
 * XREFs of ?MoveWindow@VirtualDesktopWindowMoveManager@@UEAAJPEAUHWND__@@U_GUID@@_K@Z @ 0x1804B9350
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardCompareHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardMergeHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@@@QEAAJ_K0@Z @ 0x1801C4E34 (-_EnsureCapacity@-$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisib.c)
 *     ?TrimPendingMoves@VirtualDesktopWindowMoveManager@@AEAAX_K@Z @ 0x1804B971C (-TrimPendingMoves@VirtualDesktopWindowMoveManager@@AEAAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopWindowMoveManager::MoveWindow(
        VirtualDesktopWindowMoveManager *this,
        __int64 a2,
        struct _GUID *a3,
        unsigned __int64 a4)
{
  unsigned int v8; // ebx
  void *v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, struct _GUID *, __int64 *); // rbx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdx
  __m256i *v16; // rcx
  __int64 v17; // rdi
  int (__fastcall *v18)(__int64, __int64, __int64 *); // rbx
  int v19; // eax
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // [rsp+20h] [rbp-40h] BYREF
  int v25; // [rsp+28h] [rbp-38h] BYREF
  __int64 v26; // [rsp+30h] [rbp-30h] BYREF
  __m256i v27; // [rsp+38h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]

  if ( *((_QWORD *)this + 8) )
  {
    VirtualDesktopWindowMoveManager::TrimPendingMoves(this, a4);
    v26 = 0LL;
    v10 = *(_QWORD *)&a3->Data1 - 0x4CF966F2C2DDEA68LL;
    if ( *(_QWORD *)&a3->Data1 == 0x4CF966F2C2DDEA68LL )
      v10 = *(_QWORD *)a3->Data4 + 0x534404FF02E49B7ELL;
    if ( v10 )
    {
      v11 = *((_QWORD *)this + 7);
      v12 = *(__int64 (__fastcall **)(__int64, struct _GUID *, __int64 *))(*(_QWORD *)v11 + 88LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
      v13 = v12(v11, a3, &v26);
      v8 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3D,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopwindowmovemanager.cpp",
          (const char *)(unsigned int)v13);
LABEL_19:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
        return v8;
      }
    }
    v27.m256i_i64[0] = a2;
    *(struct _GUID *)&v27.m256i_u64[1] = *a3;
    v27.m256i_i64[3] = a4;
    v14 = 0;
    v15 = *((_QWORD *)this + 12);
    if ( v15 != *((_QWORD *)this + 14)
      || (v14 = CTSimpleArray<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification,4294967294,CTPolicyCoTaskMem<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardCompareHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardMergeHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>>::_EnsureCapacity(
                  (__int64)this + 88,
                  v15 + 1,
                  v9),
          v14 >= 0) )
    {
      v16 = (__m256i *)(*((_QWORD *)this + 11) + 32 * (*((_QWORD *)this + 12))++);
      if ( v16 )
        *v16 = v27;
    }
    if ( v14 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x42,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopwindowmovemanager.cpp",
        (const char *)(unsigned int)v14);
    v24 = 0LL;
    v25 = 0;
    v17 = *((_QWORD *)this + 8);
    v18 = *(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v17 + 48LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
    if ( v18(v17, a2, &v24) < 0 )
      goto LABEL_17;
    v19 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v24 + 216LL))(v24, &v25);
    if ( v19 >= 0 )
    {
      if ( v25 )
      {
        v21 = *(_QWORD *)&a3->Data1 - 0x4CF966F2C2DDEA68LL;
        if ( *(_QWORD *)&a3->Data1 == 0x4CF966F2C2DDEA68LL )
          v21 = *(_QWORD *)a3->Data4 + 0x534404FF02E49B7ELL;
        if ( v21 )
        {
          v22 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 6) + 216LL))(
                  *((_QWORD *)this + 6),
                  v24,
                  v26);
          v8 = v22;
          if ( v22 >= 0 )
            goto LABEL_17;
          v23 = 79LL;
        }
        else
        {
          v22 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 10) + 96LL))(
                  *((_QWORD *)this + 10),
                  v24);
          v8 = v22;
          if ( v22 >= 0 )
            goto LABEL_17;
          v23 = 75LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v23,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopwindowmovemanager.cpp",
          (const char *)(unsigned int)v22);
        goto LABEL_18;
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x47,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopwindowmovemanager.cpp",
        (const char *)(unsigned int)v19);
    }
LABEL_17:
    v8 = 0;
LABEL_18:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
    goto LABEL_19;
  }
  v8 = -2147019873;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x33,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopwindowmovemanager.cpp",
    (const char *)0x8007139FLL);
  return v8;
}
