/*
 * XREFs of ??1CAppTransitionManager@@UEAA@XZ @ 0x18043437C
 * Callers:
 *     ??_ECAppTransitionManager@@UEAAPEAXI@Z @ 0x1804344D0 (--_ECAppTransitionManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x1801AFD3C (--1CImmersiveShellComponent@@UEAA@XZ.c)
 *     ??1?$CCoSimpleArray@URecoveredViewInfo@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@URecoveredViewInfo@@@@@@QEAA@XZ @ 0x18031020C (--1-$CCoSimpleArray@URecoveredViewInfo@@$0PPPPPPPO@V-$CSimpleArrayStandardCompareHelper@URecover.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall CAppTransitionManager::~CAppTransitionManager(CAppTransitionManager *this)
{
  CCoSimpleArray<RecoveredViewInfo,4294967294,CSimpleArrayStandardCompareHelper<RecoveredViewInfo>>::~CCoSimpleArray<RecoveredViewInfo,4294967294,CSimpleArrayStandardCompareHelper<RecoveredViewInfo>>((__int64)this + 232);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 28);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 27);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 26);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 25);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 23);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 22);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)this + 21);
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 3);
  *((_DWORD *)this + 29) = -1073741823;
  CImmersiveShellComponent::~CImmersiveShellComponent((CAppTransitionManager *)((char *)this + 24));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 2);
}
