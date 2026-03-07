void __fastcall PnpRecordBlackboxPnpEventWorkerInformation(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v4; // rbp
  __int64 Pool2; // rax
  int v6; // eax
  _QWORD InputBuffer[3]; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+48h] [rbp-10h]
  int v9; // [rsp+4Ch] [rbp-Ch]

  v1 = 0LL;
  v2 = 0LL;
  v4 = MEMORY[0xFFFFF78000000008];
  if ( a1 )
  {
    v2 = 72LL;
    Pool2 = ExAllocatePool2(64LL, 72LL, 1265659472LL);
    v1 = Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)Pool2 = 1;
      *(_DWORD *)(Pool2 + 4) = 72;
      *(_DWORD *)(Pool2 + 16) = *(_DWORD *)(a1 + 16);
      *(_BYTE *)(Pool2 + 8) = 0;
      if ( *(_QWORD *)a1 )
        *(_DWORD *)(Pool2 + 12) = (v4 - **(_QWORD **)a1) / 0x2710uLL;
      *(_QWORD *)(Pool2 + 24) = *(_QWORD *)(a1 + 8);
      v6 = *(_DWORD *)(a1 + 20);
      *(_QWORD *)(v1 + 40) = 0LL;
      *(_DWORD *)(v1 + 32) = v6;
      *(_QWORD *)(v1 + 48) = *(_QWORD *)&PnpDeviceEventThread;
      *(_QWORD *)(v1 + 56) = PnpDeviceActionThread;
      *(_QWORD *)(v1 + 64) = *(_QWORD *)&PnpDelayedRemoveWorkerThread;
    }
  }
  InputBuffer[2] = 0LL;
  v9 = 0;
  v8 = 9;
  InputBuffer[0] = v1;
  InputBuffer[1] = v2;
  NtPowerInformation(UpdateBlackBoxRecorder, InputBuffer, 0x20u, 0LL, 0);
  if ( v1 )
    ExFreePoolWithTag((PVOID)v1, 0x4B706E50u);
}
