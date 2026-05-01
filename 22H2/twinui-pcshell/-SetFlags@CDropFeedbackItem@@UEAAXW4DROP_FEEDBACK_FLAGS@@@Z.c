/*
 * XREFs of ?SetFlags@CDropFeedbackItem@@UEAAXW4DROP_FEEDBACK_FLAGS@@@Z @ 0x18008EA00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDropFeedbackItem::SetFlags(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 72) = a2;
}
