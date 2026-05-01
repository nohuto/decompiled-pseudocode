/*
 * XREFs of ?GetPosition@ApplicationViewOperation@@UEAAJPEAPEAUIApplicationViewPosition@@@Z @ 0x18007E0A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@@Z @ 0x1801F3F6C (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewArrangePosition@@UIApplicationViewPosition@@AEAUtagRECT@@AEAW4ARRANGEMENT_BASED_VIEW_STATE@@AEAKAEAW4ARRANGEMENT_BASED_VIEW_STATE_OPTIONS@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@AEAW4ARRANGEMENT_BASED_VIEW_STATE@@AEAKAEAW4ARRANGEMENT_BASED_VIEW_STATE_OPTIONS@@@Z @ 0x180213598 (--$MakeAndInitialize@VCCommonApplicationViewArrangePosition@@UIApplicationViewPosition@@AEAUtagR.c)
 */

__int64 __fastcall ApplicationViewOperation::GetPosition(
        ApplicationViewOperation *this,
        struct IApplicationViewPosition **a2)
{
  __int64 *v2; // rdi
  char v4; // al
  __int64 v6; // rdx
  int v7; // ebx
  char *v8; // r14
  int v9; // ecx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *a2 = 0LL;
  v2 = (__int64 *)((char *)this + 72);
  if ( *((_QWORD *)this + 9) )
    goto LABEL_5;
  v4 = *((_BYTE *)this + 92);
  if ( !v4 && !*((_DWORD *)this + 20) )
    return 2147943568LL;
  if ( !*((_DWORD *)this + 21) || *((_DWORD *)this + 20) == 4 )
  {
    v8 = (char *)this + 88;
    if ( *((_DWORD *)this + 22) && !*((_DWORD *)this + 20) )
    {
      v6 = 65LL;
      goto LABEL_10;
    }
    v9 = *((_DWORD *)this + 20);
    if ( v9 )
    {
      if ( v4 && (unsigned int)(v9 - 3) > 1 )
      {
        v6 = 73LL;
        goto LABEL_10;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v2);
      v7 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewArrangePosition,IApplicationViewPosition,tagRECT &,enum ARRANGEMENT_BASED_VIEW_STATE &,unsigned long &,enum ARRANGEMENT_BASED_VIEW_STATE_OPTIONS &>(
             (void **)v2,
             (__int64)v8);
      if ( v7 < 0 )
      {
        v6 = 76LL;
        goto LABEL_11;
      }
    }
    else
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v2);
      v7 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>((void **)v2);
      if ( v7 < 0 )
      {
        v6 = 81LL;
        goto LABEL_11;
      }
    }
LABEL_5:
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v2);
    *a2 = (struct IApplicationViewPosition *)*v2;
    return 0LL;
  }
  v6 = 61LL;
LABEL_10:
  v7 = -2147024809;
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"onecoreuap\\internal\\shell\\inc\\private\\ApplicationViewOperationHelpers.h",
    (const char *)(unsigned int)v7);
  return (unsigned int)v7;
}
