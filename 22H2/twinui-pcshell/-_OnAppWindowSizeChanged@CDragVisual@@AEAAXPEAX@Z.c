/*
 * XREFs of ?_OnAppWindowSizeChanged@CDragVisual@@AEAAXPEAX@Z @ 0x180496E40
 * Callers:
 *     ?_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x180498688 (-_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1803FCEEC (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1803FCF70 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ?_UpdateThumbnailRect@CDragVisual@@AEAA_NW4DragVisualMode@@@Z @ 0x180498220 (-_UpdateThumbnailRect@CDragVisual@@AEAA_NW4DragVisualMode@@@Z.c)
 */

void __fastcall CDragVisual::_OnAppWindowSizeChanged(CDragVisual *this, void *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // [rsp+40h] [rbp-40h] BYREF
  __int64 v7; // [rsp+48h] [rbp-38h] BYREF
  HWND hWnd; // [rsp+50h] [rbp-30h] BYREF
  __int64 v9[2]; // [rsp+58h] [rbp-28h] BYREF
  struct tagRECT Rect; // [rsp+68h] [rbp-18h] BYREF

  if ( !*((_BYTE *)this + 279) && *((_QWORD *)this + 10) )
  {
    v6 = *((_QWORD *)this + 9);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v6);
    DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v9, &v6, (__int64)&GUID_NULL, 0LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
    v7 = 0LL;
    v4 = *((_QWORD *)this + 10);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
    if ( (*(int (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v4 + 24LL))(
           v4,
           5LL,
           &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
           &v7) >= 0
      && (*(int (__fastcall **)(__int64, HWND *))(*(_QWORD *)v7 + 32LL))(v7, &hWnd) >= 0 )
    {
      Rect = 0LL;
      GetWindowRect(hWnd, &Rect);
      if ( !EqualRect((const RECT *)this + 14, &Rect) )
      {
        if ( *((_QWORD *)this + 13) == *((_QWORD *)this + 14) )
        {
          CopyRect((LPRECT)this + 14, &Rect);
          if ( !*((_BYTE *)this + 277) )
            CDragVisual::_UpdateThumbnailRect(this, *((unsigned int *)this + 37));
          v5 = *((_QWORD *)this + 13);
          if ( v5 )
          {
            LODWORD(v6) = *((_DWORD *)this + 58) - *((_DWORD *)this + 56);
            HIDWORD(v6) = *((_DWORD *)this + 59) - *((_DWORD *)this + 57);
            (*(void (__fastcall **)(__int64, void *, __int64 *, char *, _DWORD, _QWORD))(*(_QWORD *)v5 + 120LL))(
              v5,
              a2,
              &v6,
              (char *)this + 240,
              0,
              0LL);
          }
        }
        else
        {
          (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 3) + 64LL))(
            (char *)this + 24,
            *((_QWORD *)this + 10));
        }
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
    DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v9);
  }
}
