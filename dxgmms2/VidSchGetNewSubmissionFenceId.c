/*
 * XREFs of VidSchGetNewSubmissionFenceId @ 0x1C00ADAC8
 * Callers:
 *     VidSchiSwitchNodeFromContext @ 0x1C00AD9A0 (VidSchiSwitchNodeFromContext.c)
 *     VidSchiSubmitPagingCommand @ 0x1C0106954 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1C0106E0C (VidSchiSubmitRenderCommand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchGetNewSubmissionFenceId(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  __int64 v4; // r10
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 632);
  if ( a3 < *(_DWORD *)(a1 + 704) )
    v4 += 8LL * a3;
  result = *(_QWORD *)(*(_QWORD *)v4 + 48LL) + 1LL;
  *(_QWORD *)(*(_QWORD *)v4 + 48LL) = result;
  *a4 = result;
  if ( a2 )
    *(_QWORD *)(a2 + 120) = result;
  return result;
}
