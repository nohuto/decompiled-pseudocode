char __fastcall VIDMM_PROCESS_ADAPTER_INFO::SuspendAllDevices(VIDMM_PROCESS_ADAPTER_INFO *this, char a2)
{
  char v4; // r8
  unsigned int v5; // esi
  __int64 v6; // rbp
  _QWORD *v7; // rcx
  _QWORD *v8; // r14
  __int64 v9; // rdi
  VIDMM_GLOBAL **v10; // rcx

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
  v4 = 0;
  v5 = 0;
  if ( *((_DWORD *)this + 3) )
  {
    while ( 1 )
    {
      v6 = 184LL * v5;
      v7 = (_QWORD *)(v6 + *((_QWORD *)this + 2) + 40LL);
      v8 = (_QWORD *)*v7;
      if ( (_QWORD *)*v7 != v7 )
        break;
LABEL_14:
      if ( ++v5 >= *((_DWORD *)this + 3) )
        return v4;
    }
    while ( 1 )
    {
      v9 = v8[4];
      v8 = (_QWORD *)*v8;
      if ( !a2 )
        break;
      if ( *(_QWORD *)(v9 + 24) )
      {
        VIDMM_DEVICE::IndefinitelySuspend((__int64 **)v9, 1);
LABEL_12:
        VIDMM_DEVICE::FaultAllAllocations((VIDMM_DEVICE *)v9);
        v4 = 1;
      }
LABEL_13:
      if ( v8 == (_QWORD *)(v6 + *((_QWORD *)this + 2) + 40LL) )
        goto LABEL_14;
    }
    if ( !*(_QWORD *)(v9 + 24) || (*(_DWORD *)(v9 + 60) & 7) != 0 || VIDMM_DEVICE::IsResumedRecently((VIDMM_DEVICE *)v9) )
      goto LABEL_13;
    VIDMM_DEVICE::FullySuspend(v10);
    goto LABEL_12;
  }
  return v4;
}
