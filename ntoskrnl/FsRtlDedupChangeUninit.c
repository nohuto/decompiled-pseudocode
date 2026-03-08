/*
 * XREFs of FsRtlDedupChangeUninit @ 0x14093B810
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0jq_EtwWriteTransfer @ 0x14053CC04 (McTemplateK0jq_EtwWriteTransfer.c)
 *     FsRtlpDedupChangeUnregisterVolume @ 0x14093BB4C (FsRtlpDedupChangeUnregisterVolume.c)
 */

NTSTATUS __fastcall FsRtlDedupChangeUninit(_DWORD *a1, __int64 a2)
{
  NTSTATUS result; // eax
  __int64 v5; // [rsp+20h] [rbp-18h]

  result = FsRtlpDedupChangeUnregisterVolume(a2);
  if ( (Microsoft_Windows_Dedup_ChangeEnableBits & 8) != 0 )
  {
    LODWORD(v5) = *a1;
    return McTemplateK0jq_EtwWriteTransfer(
             MS_Dedup_Change_Provider_Context,
             (const EVENT_DESCRIPTOR *)DedupChange_VolumeDismount,
             0LL,
             a2,
             v5);
  }
  return result;
}
