/*
 * XREFs of ?AddWin32ApplicationView@CApplicationViewManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUIApplicationView@@@Z @ 0x1800578F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CWin32ApplicationView@@QEAA@PEAUIClassicWindowExternal@@@Z @ 0x180055ED8 (--0CWin32ApplicationView@@QEAA@PEAUIClassicWindowExternal@@@Z.c)
 *     ?RuntimeClassInitialize@CWin32ApplicationView@@QEAAJXZ @ 0x180056580 (-RuntimeClassInitialize@CWin32ApplicationView@@QEAAJXZ.c)
 *     ?_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1800579E0 (-_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWin32ApplicationView@@UIAppSizeConstraintsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180058840 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApp_ea_180058840.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationViewManager::AddWin32ApplicationView(
        RTL_SRWLOCK *this,
        struct IClassicWindowExternal *a2,
        struct IApplicationView **a3)
{
  void **v6; // rdi
  CWin32ApplicationView *v7; // rax
  struct IApplicationView *v8; // rsi
  int v9; // eax
  unsigned int v10; // ebp
  int v11; // eax
  __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = 0LL;
  v7 = (CWin32ApplicationView *)operator new(0x110uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = 0LL;
  if ( v7 )
  {
    v6 = (void **)CWin32ApplicationView::CWin32ApplicationView(v7, a2);
    v8 = (struct IApplicationView *)v6;
  }
  if ( !v8 )
  {
    v10 = -2147024882;
    v13 = 2147942414LL;
    v14 = 518LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)v13,
      v15);
    goto LABEL_9;
  }
  v9 = CWin32ApplicationView::RuntimeClassInitialize(v6);
  v10 = v9;
  if ( v9 < 0 )
  {
    v13 = (unsigned int)v9;
    v14 = 519LL;
    goto LABEL_14;
  }
  AcquireSRWLockExclusive(this + 67);
  v11 = CApplicationViewManager::_AddApplicationView(
          (CApplicationViewManager *)&this[-17],
          (struct IApplicationView *)v6,
          0LL);
  v10 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20B,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v11,
      (_DWORD)this + 536);
    if ( this != (RTL_SRWLOCK *)-536LL )
      ReleaseSRWLockExclusive(this + 67);
  }
  else
  {
    if ( this != (RTL_SRWLOCK *)-536LL )
      ReleaseSRWLockExclusive(this + 67);
    *a3 = v8;
    v10 = 0;
    v8 = 0LL;
  }
LABEL_9:
  if ( v8 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWin32ApplicationView,IAppSizeConstraintsCallback,Microsoft::WRL::FtmBase>::Release(v8);
  return v10;
}
