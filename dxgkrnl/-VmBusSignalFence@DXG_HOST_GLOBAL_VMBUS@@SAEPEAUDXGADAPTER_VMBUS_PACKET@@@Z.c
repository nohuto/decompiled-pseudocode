unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusSignalFence(struct DXGPROCESS **a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  int v4; // eax
  struct DXGPROCESS *v5; // rcx
  unsigned int v6; // eax
  __int64 v7; // r8
  int v8; // ecx
  const wchar_t *v9; // r9
  __int64 v10; // rbx
  volatile signed __int32 *v11; // rbx
  struct DXGPROCESS *v12; // rcx
  unsigned int v13; // eax
  __int64 v14; // r8
  int v15; // ecx
  int v16; // eax
  PERESOURCE *Global; // rax
  __int64 v19; // [rsp+28h] [rbp-48h]
  _BYTE v20[32]; // [rsp+50h] [rbp-20h] BYREF
  int v21; // [rsp+98h] [rbp+28h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  v3 = v2;
  if ( !v2 )
    return v2;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v20, a1[12]);
  v4 = *(_DWORD *)(v3 + 28);
  if ( !v4 )
  {
    v5 = a1[12];
    v6 = (*(_DWORD *)(v3 + 24) >> 6) & 0xFFFFFF;
    if ( v6 >= *((_DWORD *)v5 + 74) )
      goto LABEL_9;
    v7 = *((_QWORD *)v5 + 35);
    if ( ((*(_DWORD *)(v3 + 24) >> 25) & 0x60) != (*(_BYTE *)(v7 + 16LL * v6 + 8) & 0x60) )
      goto LABEL_9;
    if ( (*(_DWORD *)(v7 + 16LL * v6 + 8) & 0x2000) != 0 )
      goto LABEL_9;
    v8 = *(_DWORD *)(v7 + 16LL * v6 + 8) & 0x1F;
    if ( !v8 )
      goto LABEL_9;
    if ( v8 != 13 )
    {
      WdLogSingleEntry1(2LL, 267LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_9:
      WdLogSingleEntry1(2LL, *(unsigned int *)(v3 + 24));
      v9 = L"Invalid shared object handle: 0x%I64x";
      v19 = 0LL;
LABEL_24:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v9, *(unsigned int *)(v3 + 24), v19, 0LL, 0LL, 0LL);
      goto LABEL_25;
    }
    v10 = *(_QWORD *)(v7 + 16LL * v6);
    if ( !v10 || *(_DWORD *)v10 != 11 && *(_DWORD *)v10 != 8 )
      goto LABEL_9;
    v11 = *(volatile signed __int32 **)(v10 + 8);
    if ( !v11 )
    {
      WdLogSingleEntry1(1LL, 7503LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pSyncObject", 7503LL, 0LL, 0LL, 0LL, 0LL);
    }
LABEL_31:
    _InterlockedIncrement(v11 + 6);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
    v16 = DXGSYNCOBJECT::SignalFence((__int64)v11, *(_QWORD *)(v3 + 32), 0, 0);
    v21 = v16;
    if ( v16 < 0 )
    {
      WdLogSingleEntry1(2LL, v16);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"SignalFence failed: 0x%I64x", v21, 0LL, 0LL, 0LL, 0LL);
    }
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal();
    DXGGLOBAL::DestroySyncObject(Global, (struct DXGSYNCOBJECT *)v11, 0);
    goto LABEL_26;
  }
  if ( v4 == 1 )
  {
    v12 = a1[12];
    v13 = (*(_DWORD *)(v3 + 24) >> 6) & 0xFFFFFF;
    if ( v13 < *((_DWORD *)v12 + 74) )
    {
      v14 = *((_QWORD *)v12 + 35);
      if ( ((*(_DWORD *)(v3 + 24) >> 25) & 0x60) == (*(_BYTE *)(v14 + 16LL * v13 + 8) & 0x60)
        && (*(_DWORD *)(v14 + 16LL * v13 + 8) & 0x2000) == 0 )
      {
        v15 = *(_DWORD *)(v14 + 16LL * v13 + 8) & 0x1F;
        if ( v15 )
        {
          if ( v15 == 8 )
          {
            v11 = *(volatile signed __int32 **)(v14 + 16LL * v13);
            if ( v11 )
              goto LABEL_31;
          }
          else
          {
            WdLogSingleEntry1(2LL, 267LL);
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
          }
        }
      }
    }
    WdLogSingleEntry2(2LL, *(unsigned int *)(v3 + 24), 7498LL);
    v9 = L"Invalid sync object handle: 0x%I64x";
    v19 = 7498LL;
    goto LABEL_24;
  }
  WdLogSingleEntry1(2LL, *(int *)(v3 + 28));
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Invalid handle type: 0x%I64x",
    *(int *)(v3 + 28),
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_25:
  v21 = -1073741811;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
LABEL_26:
  if ( v21 < 0 )
    HandleAsyncCommandError((__int64 *)a1, v21, 0, 3);
  VmBusCompletePacket(a1[16], &v21, 4u);
  LOBYTE(v2) = 1;
  return v2;
}
