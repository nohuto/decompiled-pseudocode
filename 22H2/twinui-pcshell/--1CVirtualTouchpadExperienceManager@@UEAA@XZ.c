/*
 * XREFs of ??1CVirtualTouchpadExperienceManager@@UEAA@XZ @ 0x1802519AC
 * Callers:
 *     ??_ECVirtualTouchpadExperienceManager@@UEAAPEAXI@Z @ 0x180252000 (--_ECVirtualTouchpadExperienceManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ @ 0x1801B1CA0 (-_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ.c)
 *     ??1TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA@XZ @ 0x180251A58 (--1TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA@XZ.c)
 *     ??1CSingleViewShellExperience@@QEAA@XZ @ 0x1804E343C (--1CSingleViewShellExperience@@QEAA@XZ.c)
 *     ??1CExperienceManagerAnimationHelper@@QEAA@XZ @ 0x1804E56D0 (--1CExperienceManagerAnimationHelper@@QEAA@XZ.c)
 */

void __fastcall CVirtualTouchpadExperienceManager::~CVirtualTouchpadExperienceManager(
        CVirtualTouchpadExperienceManager *this)
{
  HMODULE v2; // rcx
  Concurrency::details::_RefCounter *v3; // rcx
  volatile int *v4; // rdx

  v2 = (HMODULE)*((_QWORD *)this + 96);
  if ( v2 )
    FreeLibrary(v2);
  v3 = (Concurrency::details::_RefCounter *)*((_QWORD *)this + 95);
  if ( v3 )
    Concurrency::details::_RefCounter::_Destroy(v3);
  CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper((CVirtualTouchpadExperienceManager *)((char *)this + 720));
  CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper((CVirtualTouchpadExperienceManager *)((char *)this + 688));
  TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::~TouchpadLaunched((CVirtualTouchpadExperienceManager *)((char *)this + 376));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 43);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 42);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 41);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 34);
  CSingleViewShellExperience::~CSingleViewShellExperience((CVirtualTouchpadExperienceManager *)((char *)this + 64));
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager,IApplicationFrameEventHandler,IScaleChangeSink,Windows::Foundation::IClosable>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager,IApplicationFrameEventHandler,IScaleChangeSink,Windows::Foundation::IClosable>(
    (__int64)this,
    v4);
}
