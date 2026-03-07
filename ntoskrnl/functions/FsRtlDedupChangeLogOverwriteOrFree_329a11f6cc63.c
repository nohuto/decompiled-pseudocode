__int64 __fastcall FsRtlDedupChangeLogOverwriteOrFree(int *a1, __int64 a2, __int64 a3, const GUID *a4)
{
  int v5; // [rsp+28h] [rbp-10h]

  if ( (Microsoft_Windows_Dedup_ChangeEnableBits & 4) != 0 )
  {
    v5 = *a1;
    McTemplateK0xxq_EtwWriteTransfer((__int64)a1, a2, a4, a2, a3, v5);
  }
  return 0LL;
}
