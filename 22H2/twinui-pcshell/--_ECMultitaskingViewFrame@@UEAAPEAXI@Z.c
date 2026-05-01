/*
 * XREFs of ??_ECMultitaskingViewFrame@@UEAAPEAXI@Z @ 0x180408600
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800906B4 (--3@YAXPEAX@Z.c)
 *     ??1CMultitaskingViewFrame@@UEAA@XZ @ 0x180408428 (--1CMultitaskingViewFrame@@UEAA@XZ.c)
 */

CMultitaskingViewFrame *__fastcall CMultitaskingViewFrame::`vector deleting destructor'(
        CMultitaskingViewFrame *this,
        char a2)
{
  CMultitaskingViewFrame::~CMultitaskingViewFrame(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
