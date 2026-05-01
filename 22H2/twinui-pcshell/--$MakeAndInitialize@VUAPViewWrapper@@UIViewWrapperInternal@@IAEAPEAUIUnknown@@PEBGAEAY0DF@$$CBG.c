/*
 * XREFs of ??$MakeAndInitialize@VUAPViewWrapper@@UIViewWrapperInternal@@IAEAPEAUIUnknown@@PEBGAEAY0DF@$$CBGPEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@@012@$$QEAIAEAPEAUIUnknown@@$$QEAPEBGAEAY0DF@$$CBG$$QEAPEAVViewEventDispatcher@@@Z @ 0x18030DCC8
 * Callers:
 *     ?ViewCreated@ViewEventDispatcher@@QEAAXIPEAUIUnknown@@@Z @ 0x180318B8C (-ViewCreated@ViewEventDispatcher@@QEAAXIPEAUIUnknown@@@Z.c)
 *     ?_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z @ 0x18031BB84 (-_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<UAPViewWrapper,IViewWrapperInternal,unsigned int,IUnknown * &,unsigned short const *,unsigned short const (&)[53],ViewEventDispatcher *>(
        __int64 *a1,
        unsigned int *a2,
        struct IUnknown **a3,
        const unsigned __int16 **a4,
        __int64 a5,
        struct ViewEventDispatcher **a6)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
  return Microsoft::WRL::Details::MakeAndInitialize<UAPViewWrapper,IViewWrapperInternal,unsigned int &,IUnknown *,unsigned short const *,unsigned short const (&)[53],ViewEventDispatcher *>(
           (UAPViewWrapper **)a1,
           a2,
           a3,
           a4,
           L"Windows.Internal.ShellExperience.TopLevelApplication",
           a6);
}
