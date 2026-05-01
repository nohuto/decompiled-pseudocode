/*
 * XREFs of ?QuerySnapView@WindowArrangementOperation@@AEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@PEAW4FinalizeLayoutFlags@@@Z @ 0x180478384
 * Callers:
 *     ?QueryArrangeView@WindowArrangementOperation@@AEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@PEAW4FinalizeLayoutFlags@@@Z @ 0x180478034 (-QueryArrangeView@WindowArrangementOperation@@AEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@P.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x18040BD40 (-GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowArrangementOperation::QuerySnapView(
        __int64 a1,
        struct IApplicationView *a2,
        int a3,
        _DWORD *a4)
{
  int v8; // r13d
  int v9; // r15d
  int ViewLayoutBehaviorFlags; // ebx
  __int64 v11; // rdx
  __int64 *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rdx
  int v18; // eax
  char v19; // bl
  int v20; // eax
  unsigned int v21; // esi
  int v22; // eax
  unsigned int v23; // edi
  char v24; // r15
  __int64 v25; // rbx
  int v26; // eax
  int v27; // ecx
  unsigned int v28; // [rsp+30h] [rbp-30h] BYREF
  int v29[2]; // [rsp+38h] [rbp-28h] BYREF
  __int128 v30; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]

  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 80LL))(*(_QWORD *)(a1 + 64), 5LL);
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 80LL))(*(_QWORD *)(a1 + 64), 1LL);
  if ( !(*(unsigned int (__fastcall **)(_QWORD, struct IApplicationView *))(**(_QWORD **)(a1 + 64) + 184LL))(
          *(_QWORD *)(a1 + 64),
          a2) )
    ++v9;
  ViewLayoutBehaviorFlags = GetViewLayoutBehaviorFlags(a2, (enum APP_LAYOUT_ITEM_BEHAVIOR_FLAGS *)&v28);
  if ( ViewLayoutBehaviorFlags < 0 )
  {
    v11 = 163LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementoperation.cpp",
      (const char *)(unsigned int)ViewLayoutBehaviorFlags);
    return (unsigned int)ViewLayoutBehaviorFlags;
  }
  v13 = *(__int64 **)(a1 + 64);
  v14 = *v13;
  if ( v8 == 2 )
  {
    if ( !(*(unsigned int (__fastcall **)(__int64 *, struct IApplicationView *))(v14 + 184))(v13, a2) )
    {
      ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct IApplicationView *, __int64))(**(_QWORD **)(a1 + 64) + 248LL))(
                                  *(_QWORD *)(a1 + 64),
                                  0LL,
                                  a2,
                                  1LL);
      if ( ViewLayoutBehaviorFlags < 0 )
      {
        v11 = 176LL;
        goto LABEL_5;
      }
    }
    ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, _QWORD, unsigned int *))(**(_QWORD **)(a1 + 64) + 152LL))(
                                *(_QWORD *)(a1 + 64),
                                a2,
                                0LL,
                                &v28);
    if ( ViewLayoutBehaviorFlags < 0 )
    {
      v11 = 181LL;
      goto LABEL_5;
    }
    if ( a3 == 1 && v28 || a3 == 2 && v28 != 1 )
    {
      *(_QWORD *)v29 = 0LL;
      v15 = *(_QWORD *)(a1 + 64);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v29);
      v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, int *))(*(_QWORD *)v15 + 96LL))(
              v15,
              0LL,
              &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04,
              v29);
      ViewLayoutBehaviorFlags = v16;
      if ( v16 < 0 )
      {
        v17 = 189LL;
LABEL_23:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v17,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementoperation.cpp",
          (const char *)(unsigned int)v16);
LABEL_24:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v29);
        return (unsigned int)ViewLayoutBehaviorFlags;
      }
      v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 64) + 256LL))(*(_QWORD *)(a1 + 64), 0LL);
      ViewLayoutBehaviorFlags = v16;
      if ( v16 < 0 )
      {
        v17 = 190LL;
        goto LABEL_23;
      }
      v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 64) + 224LL))(
              *(_QWORD *)(a1 + 64),
              *(_QWORD *)v29,
              1LL);
      ViewLayoutBehaviorFlags = v16;
      if ( v16 < 0 )
      {
        v17 = 191LL;
        goto LABEL_23;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v29);
    }
  }
  else if ( v9 == 1 )
  {
    v18 = (*(__int64 (__fastcall **)(__int64 *, struct IApplicationView *))(v14 + 184))(v13, a2);
    v19 = v28;
    if ( !v18 )
    {
      v20 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 64)
                                                                                                 + 232LL))(
              *(_QWORD *)(a1 + 64),
              a2,
              0LL,
              v28,
              0LL);
      v21 = v20;
      if ( v20 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xC8,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementoperation.cpp",
          (const char *)(unsigned int)v20);
        return v21;
      }
    }
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 264LL))(*(_QWORD *)(a1 + 64), 4LL);
    v22 = (*(__int64 (__fastcall **)(_QWORD, bool, _QWORD, _QWORD))(**(_QWORD **)(a1 + 64) + 240LL))(
            *(_QWORD *)(a1 + 64),
            a3 == 1,
            0LL,
            0LL);
    v23 = v22;
    if ( v22 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCE,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementoperation.cpp",
        (const char *)(unsigned int)v22);
      return v23;
    }
    *a4 |= (v19 & 2) != 0 ? 12 : 6;
  }
  else
  {
    if ( (*(unsigned int (__fastcall **)(__int64 *, __int64))(v14 + 88))(v13, 2LL) )
    {
      v24 = 1;
      *(_QWORD *)v29 = 0LL;
      v25 = *(_QWORD *)(a1 + 64);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v29);
      v26 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, int *))(*(_QWORD *)v25 + 112LL))(
              v25,
              0LL,
              2LL,
              &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04,
              v29);
      ViewLayoutBehaviorFlags = v26;
      if ( v26 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xE0,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementoperation.cpp",
          (const char *)(unsigned int)v26);
        goto LABEL_24;
      }
      v30 = 0LL;
      (*(void (__fastcall **)(_QWORD, _QWORD, __int128 *))(**(_QWORD **)v29 + 104LL))(*(_QWORD *)v29, 0LL, &v30);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v29);
    }
    else
    {
      v24 = 0;
    }
    ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, bool, _QWORD, _QWORD))(**(_QWORD **)(a1 + 64) + 232LL))(
                                *(_QWORD *)(a1 + 64),
                                a2,
                                a3 != 1,
                                v28,
                                0LL);
    if ( ViewLayoutBehaviorFlags < 0 )
    {
      v11 = 232LL;
      goto LABEL_5;
    }
    if ( (v28 & 2) != 0 || (v27 = 6, v24) )
      v27 = 12;
    *a4 |= v27;
  }
  return 0LL;
}
