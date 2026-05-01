/*
 * XREFs of ?_QueryEvictAppFromLayout@PPIWin32VtcLayoutOperation@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x1800D9A74
 * Callers:
 *     ?EvictApp@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x1800D7F60 (-EvictApp@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z.c)
 *     ?SwapVTCPanel@PPIWin32VtcLayoutOperation@@UEAAJXZ @ 0x1800D8AB0 (-SwapVTCPanel@PPIWin32VtcLayoutOperation@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_IsViewMeetingWindow@PPIWin32VtcLayoutOperation@@AEAA_NPEAUIApplicationView@@@Z @ 0x1800D9720 (-_IsViewMeetingWindow@PPIWin32VtcLayoutOperation@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PPIWin32VtcLayoutOperation::_QueryEvictAppFromLayout(
        PPIWin32VtcLayoutOperation *this,
        struct IApplicationView *a2,
        bool *a3)
{
  bool v6; // di
  int v7; // eax
  unsigned int v8; // ebp
  char v10; // al
  __int64 v11; // r9
  int v12; // edi
  __int64 v13; // rdx
  int v14; // eax
  unsigned int v15; // esi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v17; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0;
  v7 = (*(__int64 (__fastcall **)(PPIWin32VtcLayoutOperation *, struct IApplicationView *, _QWORD, char *))(*(_QWORD *)this + 128LL))(
         this,
         a2,
         0LL,
         &v17);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x234,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
      (const char *)(unsigned int)v7);
    return v8;
  }
  v10 = (*(__int64 (__fastcall **)(PPIWin32VtcLayoutOperation *, struct IApplicationView *))(*(_QWORD *)this + 168LL))(
          this,
          a2);
  v11 = *(_QWORD *)this;
  if ( v10 )
  {
    v12 = (*(__int64 (__fastcall **)(PPIWin32VtcLayoutOperation *, struct IApplicationView *))(v11 + 104))(this, a2);
    if ( v12 < 0 )
    {
      v13 = 568LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
        (const char *)(unsigned int)v12);
      return (unsigned int)v12;
    }
LABEL_12:
    v6 = 1;
    goto LABEL_13;
  }
  if ( (*(int (__fastcall **)(PPIWin32VtcLayoutOperation *, _QWORD, _QWORD))(v11 + 160))(this, 0LL, 0LL) < 0
    && !PPIWin32VtcLayoutOperation::_IsViewMeetingWindow(this, a2) )
  {
    v12 = (*(__int64 (__fastcall **)(PPIWin32VtcLayoutOperation *, struct IApplicationView *))(*(_QWORD *)this + 104LL))(
            this,
            a2);
    if ( v12 < 0 )
    {
      v13 = 585LL;
      goto LABEL_6;
    }
    (*(void (__fastcall **)(PPIWin32VtcLayoutOperation *, __int64))(*(_QWORD *)this + 120LL))(this, 4LL);
    goto LABEL_12;
  }
  v14 = (*(__int64 (__fastcall **)(PPIWin32VtcLayoutOperation *, struct IApplicationView *))(*(_QWORD *)this + 112LL))(
          this,
          a2);
  v15 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x241,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
      (const char *)(unsigned int)v14);
    return v15;
  }
LABEL_13:
  if ( a3 )
    *a3 = v6;
  (*(void (__fastcall **)(PPIWin32VtcLayoutOperation *, __int64))(*(_QWORD *)this + 120LL))(this, 2LL);
  return 0LL;
}
