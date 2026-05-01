/*
 * XREFs of ?RegisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationViewChangeListener@@PEAK@Z @ 0x180200D90
 * Callers:
 *     ?RegisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@WBA@EAAJPEAUIApplicationViewChangeListener@@PEAK@Z @ 0x1801631E0 (-RegisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@WBA@EAAJPEAUIAppli.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Register@AgileRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z @ 0x1801BF08C (-Register@AgileRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z.c)
 *     ??$MakeAndInitialize@VAgileApplicationViewChangeListenerConverter@@UIApplicationViewChangeListener@@AEAPEAU2@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewChangeListener@@AEAPEAU3@@Z @ 0x1801FBAEC (--$MakeAndInitialize@VAgileApplicationViewChangeListenerConverter@@UIApplicationViewChangeListen.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::RegisterForApplicationViewChanges(
        RTL_SRWLOCK *this,
        struct IApplicationViewChangeListener *a2,
        unsigned int *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IApplicationViewChangeListener *v9; // [rsp+38h] [rbp+10h] BYREF
  struct IUnknown *v10; // [rsp+48h] [rbp+20h] BYREF

  v9 = a2;
  v10 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<AgileApplicationViewChangeListenerConverter,IApplicationViewChangeListener,IApplicationViewChangeListener * &>(
         &v10,
         &v9);
  v6 = v5;
  if ( v5 >= 0 )
    v6 = AgileRegistrationList::Register(this + 15, v10, a3);
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6D,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanagervisibilitydebouncer.cpp",
      (const char *)(unsigned int)v5);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  return v6;
}
