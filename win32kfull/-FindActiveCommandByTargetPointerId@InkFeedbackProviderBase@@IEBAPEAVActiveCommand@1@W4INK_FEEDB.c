/*
 * XREFs of ?FindActiveCommandByTargetPointerId@InkFeedbackProviderBase@@IEBAPEAVActiveCommand@1@W4INK_FEEDBACK_COMMAND@@I@Z @ 0x1C0245044
 * Callers:
 *     ?ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C02452F0 (-ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 *     ?ProcessInkFeedbackCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C0246E60 (-ProcessInkFeedbackCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall InkFeedbackProviderBase::FindActiveCommandByTargetPointerId(__int64 a1, int a2, int a3)
{
  __int64 **v3; // rcx
  __int64 *result; // rax

  v3 = (__int64 **)(a1 + 24);
  for ( result = *v3; result != (__int64 *)v3; result = (__int64 *)*result )
  {
    if ( *((_DWORD *)result + 4) == a2 && *((_DWORD *)result + 5) == a3 )
      return result;
  }
  return 0LL;
}
