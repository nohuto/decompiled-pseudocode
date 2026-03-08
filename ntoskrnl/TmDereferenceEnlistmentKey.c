/*
 * XREFs of TmDereferenceEnlistmentKey @ 0x1403D2910
 * Callers:
 *     CmKtmNotification @ 0x140734290 (CmKtmNotification.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmDereferenceEnlistmentKey(PKENLISTMENT Enlistment, PBOOLEAN LastReference)
{
  return __imp_TmDereferenceEnlistmentKey(Enlistment, LastReference);
}
