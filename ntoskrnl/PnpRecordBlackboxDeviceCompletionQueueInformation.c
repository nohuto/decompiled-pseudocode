/*
 * XREFs of PnpRecordBlackboxDeviceCompletionQueueInformation @ 0x140688C14
 * Callers:
 *     PnpRecordBlackbox @ 0x14068A980 (PnpRecordBlackbox.c)
 * Callees:
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PnpRecordBlackboxDeviceCompletionQueueInformation(__int64 a1)
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
    v2 = 72LL;
    Pool2 = ExAllocatePool2(64LL, 72LL, 1265659472LL);
    v1 = Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)Pool2 = 1;
      *(_DWORD *)(Pool2 + 4) = 72;
      *(_BYTE *)(Pool2 + 8) = 0;
      v6 = *(_QWORD **)(a1 + 64);
      if ( v6 )
        *(_DWORD *)(v1 + 12) = (v4 - *v6) / 0x2710uLL;
      *(_DWORD *)(v1 + 16) = *(_DWORD *)(a1 + 32);
      *(_QWORD *)(v1 + 24) = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(v1 + 40) = a1;
      *(_QWORD *)(v1 + 48) = *(_QWORD *)&PnpDeviceEventThread;
      *(_QWORD *)(v1 + 56) = PnpDeviceActionThread;
      *(_QWORD *)(v1 + 64) = *(_QWORD *)&PnpDelayedRemoveWorkerThread;
    }
  }
  InputBuffer[2] = 0LL;
  v9 = 0;
  v8 = 10;
  InputBuffer[0] = v1;
  InputBuffer[1] = v2;
  NtPowerInformation(UpdateBlackBoxRecorder, InputBuffer, 0x20u, 0LL, 0);
  if ( v1 )
    ExFreePoolWithTag((PVOID)v1, 0x4B706E50u);
}
