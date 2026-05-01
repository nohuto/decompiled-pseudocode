/*
 * XREFs of _lambda_9e93575117fc73f27611926629c080cf_::operator() @ 0x1800D5C84
 * Callers:
 *     CSimpleHashTable_HWND_____MultitaskingViewAnimationCoordinatorBase::ThumbnailData_CDefaultHashPolicy_HWND______CDefaultKeyCompare_HWND______CDefaultResizePolicy_CDefaultRehashPolicy_::s_EnumAdaptor__lambda_9e93575117fc73f27611926629c080cf___ @ 0x18041FBE8 (CSimpleHashTable_HWND_____MultitaskingViewAnimationCoordinatorBase--ThumbnailData_CDefaultHashPo.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1803FD1BC (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1803FD240 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_9e93575117fc73f27611926629c080cf_::operator()(_QWORD **a1, _QWORD *a2, __int64 *a3)
{
  _QWORD *v6; // rcx
  __int64 v7; // rdx
  int WindowThumbnailSourceSize; // eax
  __int64 v9; // rdx
  __int64 v11; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v12[2]; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v13[16]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v14; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a3[1] + 208LL))(a3[1], **a1) )
  {
    v11 = a1[1][4];
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v11);
    DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v13, &v11, &GUID_NULL, 0LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    v6 = a1[1];
    v12[0] = 0;
    v12[1] = 0;
    v7 = *a3;
    v14 = 0LL;
    WindowThumbnailSourceSize = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int128 *))(*v6 + 152LL))(v6, v7, &v14);
    if ( WindowThumbnailSourceSize >= 0 )
    {
      WindowThumbnailSourceSize = DwmpQueryWindowThumbnailSourceSize(*a2, 0LL, v12);
      if ( WindowThumbnailSourceSize >= 0 )
      {
        WindowThumbnailSourceSize = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, __int128 *, _DWORD, _QWORD))(*(_QWORD *)a3[1] + 120LL))(
                                      a3[1],
                                      **a1,
                                      v12,
                                      &v14,
                                      *((_DWORD *)a1[1] + 37),
                                      0LL);
        if ( WindowThumbnailSourceSize >= 0 )
        {
LABEL_9:
          DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v13);
          return 0LL;
        }
        v9 = 289LL;
      }
      else
      {
        v9 = 287LL;
      }
    }
    else
    {
      v9 = 286LL;
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewanimationcoordinatorbase.cpp",
      (const char *)(unsigned int)WindowThumbnailSourceSize);
    goto LABEL_9;
  }
  return 1LL;
}
