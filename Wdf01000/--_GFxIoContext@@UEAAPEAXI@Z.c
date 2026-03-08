/*
 * XREFs of ??_GFxIoContext@@UEAAPEAXI@Z @ 0x1C0006E60
 * Callers:
 *     <none>
 * Callees:
 *     ??1FxIoContext@@UEAA@XZ @ 0x1C0002AA0 (--1FxIoContext@@UEAA@XZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 */

FxIoContext *__fastcall FxIoContext::`scalar deleting destructor'(FxIoContext *this, char a2)
{
  FxIoContext::~FxIoContext(this);
  if ( (a2 & 1) != 0 && this )
    FxPoolFree(this);
  return this;
}
