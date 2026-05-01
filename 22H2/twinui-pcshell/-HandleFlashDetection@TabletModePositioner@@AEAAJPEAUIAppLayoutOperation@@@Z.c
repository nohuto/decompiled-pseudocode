/*
 * XREFs of ?HandleFlashDetection@TabletModePositioner@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x180467B68
 * Callers:
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x180463894 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_df999f07d52093701c0c38e9d5359aaf___ @ 0x18046218C (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_df999f07d52093701c0c38e9d5359aaf___.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TabletModePositioner::HandleFlashDetection(
        TabletModePositioner *this,
        struct IAppLayoutOperation *a2)
{
  __int64 *v4; // r15
  __int64 *v5; // r14
  int v6; // eax
  int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  struct IAppLayoutOperation *v13; // [rsp+50h] [rbp+30h] BYREF
  __int64 v14; // [rsp+58h] [rbp+38h] BYREF
  TabletModePositioner *v15; // [rsp+60h] [rbp+40h] BYREF

  v4 = (__int64 *)((char *)this + 288);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 36);
  v5 = (__int64 *)((char *)this + 280);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 35);
  v14 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  v6 = (*(__int64 (__fastcall **)(struct IAppLayoutOperation *, __int64 *))(*(_QWORD *)a2 + 120LL))(a2, &v14);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAA7,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_14;
  }
  if ( !v14 )
  {
LABEL_13:
    v7 = 0;
    goto LABEL_14;
  }
  v15 = this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
  v13 = this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v13);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v4);
  v7 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_df999f07d52093701c0c38e9d5359aaf___(
         v9,
         v8,
         (__int64)v4,
         &v13);
  v10 = (__int64)v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  if ( v7 >= 0 )
  {
    if ( (struct IAppLayoutOperation *)*v5 != a2 )
    {
      v13 = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v13);
      v13 = (struct IAppLayoutOperation *)*v5;
      *v5 = (__int64)a2;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    }
    if ( this )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(TabletModePositioner *))(*(_QWORD *)this + 16LL))(this);
    }
    goto LABEL_13;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xAAE,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)v7);
  if ( this )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(TabletModePositioner *))(*(_QWORD *)this + 16LL))(this);
  }
LABEL_14:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  return (unsigned int)v7;
}
