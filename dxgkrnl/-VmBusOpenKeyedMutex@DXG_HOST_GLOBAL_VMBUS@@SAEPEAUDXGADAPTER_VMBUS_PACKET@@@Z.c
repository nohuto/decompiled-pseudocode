unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusOpenKeyedMutex(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  unsigned int v4; // edx
  unsigned int v5; // eax
  __int64 v6; // rbx
  DXGKEYEDMUTEX *v8; // rax
  DXGKEYEDMUTEX *v9; // rsi
  __int64 v10; // [rsp+68h] [rbp+10h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
  v3 = v2;
  if ( !v2 )
    return 0;
  v4 = *(_DWORD *)(v2 + 28) + 32;
  if ( *(_DWORD *)(v2 + 28) >= 0xFFFFFFE0 )
    return 0;
  v5 = *((_DWORD *)a1 + 36);
  if ( v5 < v4 )
  {
    v6 = v4;
    WdLogSingleEntry2(2LL, v5, v4);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid packet size (%u < %u)",
      *((unsigned int *)a1 + 36),
      v6,
      0LL,
      0LL,
      0LL);
    return 0;
  }
  v10 = 0LL;
  v8 = (DXGKEYEDMUTEX *)DxgkpAcquireKeyedMutexFromHandle(*((struct DXGPROCESS **)a1 + 12), *(_DWORD *)(v3 + 24));
  v9 = v8;
  if ( v8 )
  {
    HIDWORD(v10) = DXGKEYEDMUTEX::Open(v8, (unsigned int *)&v10, (char *)(v3 + 32), *(_DWORD *)(v3 + 28), 0);
    if ( v10 < 0 )
    {
      WdLogSingleEntry2(2LL, *(unsigned int *)(v3 + 24), -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to open keyed mutex (0x%I64x), returning 0x%I64x",
        *(unsigned int *)(v3 + 24),
        -1073741811LL,
        0LL,
        0LL,
        0LL);
    }
    DXGKEYEDMUTEX::ReleaseReference(v9);
  }
  else
  {
    HIDWORD(v10) = -1073741811;
  }
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v10, 8u);
  return 1;
}
