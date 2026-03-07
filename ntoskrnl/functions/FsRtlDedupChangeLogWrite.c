__int64 __fastcall FsRtlDedupChangeLogWrite(int *a1, __int64 a2, int a3, _QWORD *a4, const GUID *a5)
{
  int v7; // [rsp+38h] [rbp-10h]

  if ( (Microsoft_Windows_Dedup_ChangeEnableBits & 2) != 0 )
  {
    v7 = *a1;
    McTemplateK0xxxqq_EtwWriteTransfer(
      MS_Dedup_Change_Provider_Context,
      (const EVENT_DESCRIPTOR *)TieredStorage_HeatRead,
      a5,
      *a4,
      a4[1],
      a2,
      a3,
      v7);
  }
  return 0LL;
}
