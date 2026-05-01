/*
 * XREFs of ?RegisterForApplicationViewChanges@CApplicationViewManager@@UEAAJPEAUIApplicationViewChangeListener@@PEAK@Z @ 0x1801FEE60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Register@AgileRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z @ 0x1801BF23C (-Register@AgileRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z.c)
 *     ??$MakeAndInitialize@VAgileApplicationViewChangeListenerConverter@@UIApplicationViewChangeListener@@AEAPEAU2@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewChangeListener@@AEAPEAU3@@Z @ 0x1801FBC9C (--$MakeAndInitialize@VAgileApplicationViewChangeListenerConverter@@UIApplicationViewChangeListen.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewManager::RegisterForApplicationViewChanges(
        RTL_SRWLOCK *this,
        struct IApplicationViewChangeListener *a2,
        unsigned int *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IApplicationViewChangeListener *v10; // [rsp+38h] [rbp+10h] BYREF
  struct IUnknown *v11; // [rsp+48h] [rbp+20h] BYREF

  v10 = a2;
  v11 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<AgileApplicationViewChangeListenerConverter,IApplicationViewChangeListener,IApplicationViewChangeListener * &>(
         &v11,
         &v10);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 503LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_6;
  }
  v5 = AgileRegistrationList::Register(this + 13, v11, a3);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 505LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  return v6;
}
