/*
 * XREFs of ??_GSnapAssistViewInvocationAnimationCoordinator@@UEAAPEAXI@Z @ 0x18040CF40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800906D4 (--3@YAXPEAX@Z.c)
 *     ??1MultitaskingViewAnimationCoordinatorBase@@QEAA@XZ @ 0x18040C1F0 (--1MultitaskingViewAnimationCoordinatorBase@@QEAA@XZ.c)
 */

SnapAssistViewInvocationAnimationCoordinator *__fastcall SnapAssistViewInvocationAnimationCoordinator::`scalar deleting destructor'(
        SnapAssistViewInvocationAnimationCoordinator *this,
        char a2)
{
  *((_DWORD *)this + 57) = -1073741823;
  MultitaskingViewAnimationCoordinatorBase::~MultitaskingViewAnimationCoordinatorBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
