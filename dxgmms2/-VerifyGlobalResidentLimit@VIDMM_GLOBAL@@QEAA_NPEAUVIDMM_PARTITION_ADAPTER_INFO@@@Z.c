char __fastcall VIDMM_GLOBAL::VerifyGlobalResidentLimit(VIDMM_GLOBAL *this, struct VIDMM_PARTITION_ADAPTER_INFO *a2)
{
  __int64 v3; // rax

  if ( *(_QWORD *)(*(_QWORD *)a2 + 64LL) <= *((_QWORD *)a2 + 2) )
    return 1;
  if ( g_IsInternalReleaseOrDbg )
  {
    v3 = WdLogNewEntry5_WdTrace(*(_QWORD *)a2);
    *(_QWORD *)(v3 + 24) = *((_QWORD *)a2 + 2);
    *(_QWORD *)(v3 + 32) = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
  }
  return 0;
}
