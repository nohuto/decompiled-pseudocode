void __fastcall PnpRecordBlackboxDelayedRemoveWorkerInformation(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v4; // rbp
  __int64 Pool2; // rax
  _QWORD *v6; // rax
  _QWORD InputBuffer[3]; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+48h] [rbp-10h]
  int v9; // [rsp+4Ch] [rbp-Ch]

  v1 = 0LL;
  v2 = 0LL;
  v4 = MEMORY[0xFFFFF78000000008];
  if ( a1 )
  {
    v2 = 64LL;
    Pool2 = ExAllocatePool2(64LL, 64LL, 1265659472LL);
    v1 = Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)Pool2 = 1;
      *(_DWORD *)(Pool2 + 4) = 64;
      *(_BYTE *)(Pool2 + 8) = 0;
      v6 = (_QWORD *)a1[3];
      if ( v6 )
        *(_DWORD *)(v1 + 12) = (v4 - *v6) / 0x2710uLL;
      *(_QWORD *)(v1 + 24) = a1[1];
      *(_QWORD *)(v1 + 32) = a1[2];
      *(_QWORD *)(v1 + 16) = *a1;
      *(_QWORD *)(v1 + 40) = *(_QWORD *)&PnpDeviceEventThread;
      *(_QWORD *)(v1 + 48) = PnpDeviceActionThread;
      *(_QWORD *)(v1 + 56) = *(_QWORD *)&PnpDelayedRemoveWorkerThread;
    }
  }
  InputBuffer[2] = 0LL;
  v9 = 0;
  v8 = 11;
  InputBuffer[0] = v1;
  InputBuffer[1] = v2;
  NtPowerInformation(UpdateBlackBoxRecorder, InputBuffer, 0x20u, 0LL, 0);
  if ( v1 )
    ExFreePoolWithTag((PVOID)v1, 0x4B706E50u);
}
