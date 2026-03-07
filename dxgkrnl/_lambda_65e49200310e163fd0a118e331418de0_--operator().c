char __fastcall lambda_65e49200310e163fd0a118e331418de0_::operator()(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rcx
  _DWORD *Pool2; // rax
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  __int64 v9; // rax
  struct DXGKVMB_SINGLEPACKETCONTEXT *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // ecx
  int v14; // r8d
  volatile __int32 *v15; // r9
  _QWORD v17[2]; // [rsp+60h] [rbp-38h] BYREF
  __int128 v18; // [rsp+70h] [rbp-28h]
  __int64 v19; // [rsp+80h] [rbp-18h]

  v4 = *(_DWORD **)a1;
  if ( *(_DWORD *)(a2 + 16) == *v4 && *(_DWORD *)(a2 + 20) == v4[1] && *(_DWORD *)(a2 + 24) == **(_DWORD **)(a1 + 8) )
  {
    if ( *(_QWORD *)(a2 + 48) )
    {
      if ( !*(_QWORD *)(a2 + 88) )
      {
        Pool2 = (_DWORD *)ExAllocatePool2(64LL, 16LL, 1114077252LL);
        *(_QWORD *)(a2 + 88) = Pool2;
        if ( Pool2 )
        {
          *Pool2 = 1;
          *(_QWORD *)(*(_QWORD *)(a2 + 88) + 8LL) = 0LL;
        }
        else
        {
          WdLogSingleEntry1(6LL, 654LL);
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
            McTemplateK0zqqzxxxxx_EtwWriteTransfer(
              v7,
              v6,
              v8,
              0LL,
              1,
              -1,
              L"Failed to allocate DXGKVMB_SINGLEPACKETCONTEXT",
              654LL,
              0LL,
              0LL,
              0LL,
              0LL);
        }
      }
      v9 = *(_QWORD *)(a2 + 88);
      if ( v9 )
      {
        if ( !*(_QWORD *)(v9 + 8) )
        {
          v10 = *(struct DXGKVMB_SINGLEPACKETCONTEXT **)(a2 + 88);
          v19 = 0LL;
          v11 = *(_QWORD *)(a2 + 48);
          v17[0] = 0LL;
          v17[1] = v11;
          v12 = *(_QWORD *)(a2 + 32);
          v18 = 0LL;
          v17[0] = v12;
          *(_WORD *)((char *)&v18 + 1) = 257;
          DXG_HOST_GLOBAL_VMBUS::VmBusSendSignalGuestEventSinglePacket((struct DXG_SIGNAL_GUEST_CPU_EVENT *)v17, v10);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
            McTemplateK0xqpp_EtwWriteTransfer(
              v13,
              (unsigned int)&RemoteMonitorVSyncTrigger,
              v14,
              *(_QWORD *)(a2 + 16),
              *(_DWORD *)(a2 + 24),
              *(_QWORD *)(a2 + 48),
              *(_QWORD *)(a2 + 32));
        }
      }
    }
    else
    {
      v15 = *(volatile __int32 **)(a2 + 56);
      if ( v15 )
      {
        _InterlockedExchange(v15, **(_DWORD **)(a1 + 16));
        _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(a2 + 56) + 8LL), **(_QWORD **)(a1 + 24));
      }
    }
  }
  return 1;
}
