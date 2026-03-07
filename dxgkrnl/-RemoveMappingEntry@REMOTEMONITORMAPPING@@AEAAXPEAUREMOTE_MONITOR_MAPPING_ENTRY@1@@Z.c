void __fastcall REMOTEMONITORMAPPING::RemoveMappingEntry(struct _KTHREAD **this, struct _LUID *a2)
{
  DXG_GUEST_GLOBAL_VMBUS *v3; // rcx
  int updated; // eax
  __int64 v5; // rbx
  struct _LUID v6; // rcx
  struct REMOTEMONITORMAPPING::REMOTE_MONITOR_MAPPING_ENTRY **v7; // rax

  if ( this[3] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 133LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_Lock.IsExclusiveOwner()", 133LL, 0LL, 0LL, 0LL, 0LL);
  }
  v3 = (DXG_GUEST_GLOBAL_VMBUS *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 214);
  if ( v3 )
  {
    updated = DXG_GUEST_GLOBAL_VMBUS::VmBusSendUpdateMonitorMapping(v3, a2[2], a2[3].LowPart, 0, a2[5].LowPart);
    if ( updated < 0 )
    {
      v5 = updated;
      WdLogSingleEntry4(2LL, a2[2].HighPart, a2[2].LowPart, a2[3].LowPart, updated);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Host failed to update monitor mapping for Adapter LUID 0x%08I64x%08I64x, target id 0x%I64x, status 0x%I64x",
        a2[2].HighPart,
        a2[2].LowPart,
        a2[3].LowPart,
        v5,
        0LL);
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 140LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"VmBus not connected so cannot redirect",
      140LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v6 = *a2;
  if ( *(struct _LUID **)(*(_QWORD *)a2 + 8LL) != a2
    || (v7 = (struct REMOTEMONITORMAPPING::REMOTE_MONITOR_MAPPING_ENTRY **)a2[1],
        *v7 != (struct REMOTEMONITORMAPPING::REMOTE_MONITOR_MAPPING_ENTRY *)a2) )
  {
    __fastfail(3u);
  }
  *v7 = (struct REMOTEMONITORMAPPING::REMOTE_MONITOR_MAPPING_ENTRY *)v6;
  *(_QWORD *)(*(_QWORD *)&v6 + 8LL) = v7;
  operator delete(a2);
}
