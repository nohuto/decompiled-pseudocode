/*
 * XREFs of _lambda_98c1f1c5cf1ecd7152756a5091f202b2_::operator() @ 0x180251FA4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_98c1f1c5cf1ecd7152756a5091f202b2___::Run @ 0x1802542B0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_98c1f1c5cf1ecd7152756a5091f202b2___--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?ComputeDesiredSizeForMonitor@CVirtualTouchpadExperienceManager@@AEAAJPEAUHMONITOR__@@@Z @ 0x180252BC8 (-ComputeDesiredSizeForMonitor@CVirtualTouchpadExperienceManager@@AEAAJPEAUHMONITOR__@@@Z.c)
 *     ?GetFramePosition@CVirtualTouchpadExperienceManager@@AEAAJPEAUtagRECT@@@Z @ 0x180253074 (-GetFramePosition@CVirtualTouchpadExperienceManager@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?UpdateFramePositionAndSize@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x180255564 (-UpdateFramePositionAndSize@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_98c1f1c5cf1ecd7152756a5091f202b2_::operator()(CVirtualTouchpadExperienceManager **a1)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  HMONITOR v4; // rax
  int FramePosition; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v9[2]; // [rsp+28h] [rbp-38h] BYREF
  __int64 v10; // [rsp+38h] [rbp-28h] BYREF
  char v11; // [rsp+40h] [rbp-20h]
  struct tagRECT v12; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v2 = (__int64)*a1;
  v9[0] = (__int64)a1[1];
  v3 = v9[0];
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v9);
  v9[1] = v2;
  v10 = v3;
  v9[0] = 0LL;
  v11 = 1;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v9);
  if ( *((_DWORD *)*a1 + 188) != 2 )
    goto LABEL_9;
  v4 = MonitorFromWindow(*((HWND *)*a1 + 44), 2u);
  FramePosition = CVirtualTouchpadExperienceManager::ComputeDesiredSizeForMonitor(*a1, v4);
  v6 = FramePosition;
  if ( FramePosition >= 0 )
  {
    FramePosition = CVirtualTouchpadExperienceManager::GetFramePosition(*a1, &v12);
    v6 = FramePosition;
    if ( FramePosition < 0 )
    {
      v7 = 752LL;
      goto LABEL_8;
    }
    *((_DWORD *)*a1 + 80) = v12.left + *((_DWORD *)*a1 + 75) / 2;
    *((_DWORD *)*a1 + 81) = v12.top + *((_DWORD *)*a1 + 76) / 2;
    FramePosition = CVirtualTouchpadExperienceManager::UpdateFramePositionAndSize(*a1);
    v6 = FramePosition;
    if ( FramePosition < 0 )
    {
      v7 = 755LL;
      goto LABEL_8;
    }
LABEL_9:
    v6 = 0;
    goto LABEL_10;
  }
  v7 = 750LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
    (const char *)(unsigned int)FramePosition);
LABEL_10:
  v11 = 0;
  *(_BYTE *)(v2 + 800) = 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  return v6;
}
