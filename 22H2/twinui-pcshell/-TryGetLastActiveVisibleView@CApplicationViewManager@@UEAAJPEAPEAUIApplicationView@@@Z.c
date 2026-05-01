/*
 * XREFs of ?TryGetLastActiveVisibleView@CApplicationViewManager@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x1801FF8D0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800133E0 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180097E78 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIApplicationViewBase@@@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewBase@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801FB4D0 (--$As@UIApplicationViewBase@@@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$C.c)
 */

__int64 __fastcall CApplicationViewManager::TryGetLastActiveVisibleView(
        RTL_SRWLOCK *this,
        struct IApplicationView **a2)
{
  struct IApplicationView *v4; // r14
  unsigned __int64 v5; // r15
  RTL_SRWLOCK *v6; // rbx
  __int64 *Ptr; // rsi
  __int64 *v8; // rdi
  int v9; // eax
  HWND v10; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+38h]
  int v13; // [rsp+60h] [rbp+40h] BYREF
  struct IApplicationView *v14; // [rsp+68h] [rbp+48h] BYREF
  __int64 v15; // [rsp+70h] [rbp+50h] BYREF
  unsigned __int64 v16; // [rsp+78h] [rbp+58h] BYREF

  *a2 = 0LL;
  v4 = 0LL;
  v14 = 0LL;
  v5 = 0LL;
  v6 = this + 67;
  AcquireSRWLockShared(this + 67);
  Ptr = (__int64 *)this[68].Ptr;
  v8 = &Ptr[(__int64)this[69].Ptr];
  if ( Ptr != v8 )
  {
    do
    {
      if ( (*(int (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)*Ptr + 184LL))(*Ptr, &v16) >= 0
        && v16 > v5
        && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)*Ptr + 88LL))(*Ptr, &v13) >= 0
        && v13 )
      {
        v15 = 0LL;
        v9 = Microsoft::WRL::ComPtr<IApplicationView>::As<IApplicationViewBase>(Ptr, &v15);
        if ( v9 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            363LL,
            (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
            (const char *)(unsigned int)v9);
          JUMPOUT(0x1801FFA2BLL);
        }
        v10 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 24LL))(v15);
        if ( !IsIconic(v10) )
        {
          Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&v14, Ptr);
          v5 = v16;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
      }
      ++Ptr;
    }
    while ( Ptr != v8 );
    v4 = v14;
  }
  v14 = 0LL;
  *a2 = v4;
  if ( v6 )
    ReleaseSRWLockShared(v6);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  return 0LL;
}
