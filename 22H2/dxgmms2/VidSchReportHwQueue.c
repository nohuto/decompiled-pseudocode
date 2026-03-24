/*
 * XREFs of VidSchReportHwQueue @ 0x1C00D1D80
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x1C0024F28 (McTemplateK0ppp_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall VidSchReportHwQueue(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r9
  NTSTATUS result; // eax

  if ( !*(_QWORD *)(a1 + 48) && bTracingEnabled )
  {
    v1 = *(_QWORD *)(a1 + 40);
    v2 = *(_QWORD *)(v1 + 24);
    if ( !v2 || (result = *(_DWORD *)(v1 + 56), (result & 0x40) != 0) )
      v2 = *(_QWORD *)(a1 + 40);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      return McTemplateK0ppp_EtwWriteTransfer(a1, &EventReportHwQueue, 0LL, v2, 0LL, a1);
  }
  return result;
}
