void __fastcall TdrDeleteRecoveryContext(_QWORD *P)
{
  __int64 v2; // rcx
  CTDR_DUMP_BUFFER *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx

  v2 = P[355];
  if ( v2 )
    WdDbgReportComplete(v2);
  v3 = (CTDR_DUMP_BUFFER *)P[358];
  if ( v3 )
    CTDR_DUMP_BUFFER::`scalar deleting destructor'(v3);
  v4 = (void *)P[356];
  if ( v4 )
    ExFreePoolWithTag(v4, 0x52445476u);
  v5 = (void *)P[359];
  if ( v5 )
    ExFreePoolWithTag(v5, 0x52445476u);
  ExFreePoolWithTag(P, 0x52445476u);
}
