/*
 * XREFs of ??_GInkFeedbackProviderBase@@MEAAPEAXI@Z @ 0x1C0244D00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

InkFeedbackProviderBase *__fastcall InkFeedbackProviderBase::`scalar deleting destructor'(
        InkFeedbackProviderBase *this,
        char a2)
{
  *(_QWORD *)this = &InkFeedbackProviderBase::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool(this);
  return this;
}
