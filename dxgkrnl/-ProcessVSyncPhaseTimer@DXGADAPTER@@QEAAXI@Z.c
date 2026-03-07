void __fastcall DXGADAPTER::ProcessVSyncPhaseTimer(DXGADAPTER *this, unsigned int a2)
{
  __int64 v2; // rsi
  char *v3; // rbx
  __int64 v5; // rcx
  __int64 v6; // r8
  _DWORD *v7; // rcx
  unsigned int v8; // r9d
  int v9; // r9d

  v2 = a2;
  v3 = (char *)this + 4160;
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v3, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v9 = *((_DWORD *)v3 + 6);
      if ( v9 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v5, (const EVENT_DESCRIPTOR *)"g", v6, v9);
    }
    ExAcquirePushLockExclusiveEx(v3, 0LL);
  }
  *((_QWORD *)v3 + 1) = KeGetCurrentThread();
  v7 = (_DWORD *)*((_QWORD *)this + 514);
  if ( (*((_DWORD *)this + 698) & 0x10) != 0 )
  {
    if ( v7[v2] == 1 )
      goto LABEL_4;
LABEL_8:
    *((_QWORD *)v3 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v3, 0LL);
    KeLeaveCriticalRegion();
    return;
  }
  if ( *v7 != 1 )
    goto LABEL_8;
LABEL_4:
  v8 = -3;
  if ( (*((_DWORD *)this + 698) & 0x10) != 0 )
    v8 = v2;
  LOBYTE(v6) = 1;
  DXGADAPTER::DdiControlInterrupt2(this, (struct _DXGKARG_CONTROLINTERRUPT2)0x200000003LL, v6, v8);
}
