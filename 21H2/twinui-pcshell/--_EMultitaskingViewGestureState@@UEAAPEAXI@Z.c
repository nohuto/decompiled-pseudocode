/*
 * XREFs of ??_EMultitaskingViewGestureState@@UEAAPEAXI@Z @ 0x1803F1B50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800906D4 (--3@YAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=3
MultitaskingViewGestureState *__fastcall MultitaskingViewGestureState::`vector deleting destructor'(
        MultitaskingViewGestureState *this,
        char a2)
{
  *((_DWORD *)this + 13) = -1073741823;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 5);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
