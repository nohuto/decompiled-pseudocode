/*
 * XREFs of VidSchReportContext @ 0x1C0108460
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C002EF9C (McTemplateK0pqq_EtwWriteTransfer.c)
 */

__int64 __fastcall VidSchReportContext(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v3; // r9

  if ( a1 )
  {
    v3 = *(_QWORD *)(a1 + 56);
    if ( !v3 || (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
      v3 = a1;
    if ( (byte_1C00769C1 & 1) != 0 )
      McTemplateK0pqq_EtwWriteTransfer(
        a1,
        &EventChangePriority,
        *(unsigned int *)(a1 + 400),
        v3,
        *(_DWORD *)(a1 + 400),
        *(_DWORD *)(a1 + 404));
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    DxgkLogInternalTriageEvent(v1, 0x40000LL);
    return 3221225485LL;
  }
}
