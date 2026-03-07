__int64 __fastcall ImpQueueCharacter(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int16 v4; // r12
  int v5; // edi
  struct _KPROCESS *CurrentProcess; // rsi
  __int64 v9; // rax
  _QWORD *v10; // rbx
  unsigned int v11; // ebx
  unsigned __int8 *v12; // rdx
  __int64 *v13; // rax
  _QWORD *v14; // rax
  int v16; // [rsp+38h] [rbp-39h] BYREF
  __int64 v17; // [rsp+40h] [rbp-31h] BYREF
  _QWORD v18[2]; // [rsp+48h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+58h] [rbp-19h] BYREF
  int *v20; // [rsp+78h] [rbp+7h]
  int v21; // [rsp+80h] [rbp+Fh]
  int v22; // [rsp+84h] [rbp+13h]
  int *v23; // [rsp+88h] [rbp+17h]
  int v24; // [rsp+90h] [rbp+1Fh]
  int v25; // [rsp+94h] [rbp+23h]
  __int64 *v26; // [rsp+98h] [rbp+27h]
  int v27; // [rsp+A0h] [rbp+2Fh]
  int v28; // [rsp+A4h] [rbp+33h]

  v4 = a4;
  v5 = a3;
  CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(a1, a2, a3, a4);
  v9 = ImpAllocate(56LL, 1, 1);
  v10 = (_QWORD *)v9;
  if ( v9 )
  {
    *(_DWORD *)(v9 + 24) = v5;
    *(_QWORD *)(v9 + 16) = a1;
    *(_QWORD *)(v9 + 32) = a2;
    *(_WORD *)(v9 + 40) = v4;
    *(_DWORD *)(v9 + 44) = (unsigned int)PsGetProcessId(CurrentProcess);
    v10[6] = PsGetProcessSequenceNumber(CurrentProcess);
    ImpAcquireLock();
    v14 = *(&ImpRequestListHead + 1);
    if ( *(PVOID **)*(&ImpRequestListHead + 1) != &ImpRequestListHead )
      __fastfail(3u);
    *v10 = &ImpRequestListHead;
    v10[1] = v14;
    *v14 = v10;
    *(&ImpRequestListHead + 1) = v10;
    ImpReleaseLock();
    if ( !ImpWorkerEvent )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    KeSetEvent((PRKEVENT)ImpWorkerEvent, 0, 0);
    v11 = 0;
    if ( (unsigned int)dword_1C02C9780 > 5 )
    {
      v12 = (unsigned __int8 *)&dword_1C02A03C9;
      v22 = 0;
      v25 = 0;
      v28 = 0;
      v16 = ImpSessionId;
      v20 = &v16;
      v23 = (int *)v18;
      v13 = &v17;
      v18[0] = a1;
      v24 = 8;
      v17 = a2;
      goto LABEL_11;
    }
  }
  else
  {
    v11 = -1073741670;
    if ( (unsigned int)dword_1C02C9780 > 2 && tlgKeywordOn((__int64)&dword_1C02C9780, 0x400000000000LL) )
    {
      v12 = (unsigned __int8 *)&unk_1C02A0484;
      v22 = 0;
      v25 = 0;
      v28 = 0;
      LODWORD(v17) = ImpSessionId;
      v20 = (int *)&v17;
      v23 = &v16;
      v13 = v18;
      v16 = -1073741670;
      v24 = 4;
      v18[0] = 0x1000000LL;
LABEL_11:
      v26 = v13;
      v21 = 4;
      v27 = 8;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C02C9780, v12, 0LL, 0LL, 5u, &v19);
    }
  }
  return v11;
}
