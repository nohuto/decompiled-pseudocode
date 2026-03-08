/*
 * XREFs of NtDxgkNotifyWorkSubmission @ 0x1C031BA60
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkNotifyWorkSubmissionInternal@@YAJPEAU_D3DKMT_NOTIFY_WORK_SUBMISSION@@_N@Z @ 0x1C0313C48 (-DxgkNotifyWorkSubmissionInternal@@YAJPEAU_D3DKMT_NOTIFY_WORK_SUBMISSION@@_N@Z.c)
 */

__int64 __fastcall NtDxgkNotifyWorkSubmission(struct DXGHWQUEUE **a1, __int64 a2, __int64 a3)
{
  return DxgkNotifyWorkSubmissionInternal(a1, a2, a3);
}
