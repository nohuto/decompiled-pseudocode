__int64 __fastcall PoFxSetTargetDripsDevicePowerState(__int64 a1, int a2)
{
  NTSTATUS v4; // ebx
  char v5; // r15
  __int64 v6; // rcx
  __int64 Pool2; // rax
  unsigned __int16 *v8; // r9
  int v10; // [rsp+30h] [rbp-79h] BYREF
  int v11; // [rsp+34h] [rbp-75h] BYREF
  NTSTATUS v12; // [rsp+38h] [rbp-71h] BYREF
  int v13; // [rsp+3Ch] [rbp-6Dh] BYREF
  __int64 v14; // [rsp+40h] [rbp-69h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+60h] [rbp-49h] BYREF
  _DWORD *v17; // [rsp+80h] [rbp-29h]
  __int64 v18; // [rsp+88h] [rbp-21h]
  __int64 v19; // [rsp+90h] [rbp-19h]
  _DWORD v20[2]; // [rsp+98h] [rbp-11h] BYREF
  int *v21; // [rsp+A0h] [rbp-9h]
  __int64 v22; // [rsp+A8h] [rbp-1h]
  NTSTATUS *v23; // [rsp+B0h] [rbp+7h]
  __int64 v24; // [rsp+B8h] [rbp+Fh]
  __int64 *v25; // [rsp+C0h] [rbp+17h]
  __int64 v26; // [rsp+C8h] [rbp+1Fh]

  v10 = 0;
  v11 = 0;
  DestinationString = 0LL;
  if ( PopFxBasicAccountingDisabled )
  {
    if ( a2 == 1 || a2 > 4 )
      goto LABEL_25;
    v5 = dword_140CF7A00;
    if ( dword_140CF7A00 == -1 )
    {
      v4 = -1073741823;
      goto LABEL_26;
    }
    if ( !a1 )
    {
LABEL_25:
      v4 = -1073741811;
      goto LABEL_26;
    }
    v4 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(a1 + 240), 0LL, &byte_140887FD0, 1u, 0x20u);
    if ( v4 < 0 )
      goto LABEL_26;
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 824), 0, 0) & 0x10) != 0 )
    {
      v6 = *(_QWORD *)(a1 + 56);
      if ( v6 )
      {
        if ( PopPepGetMinimumDevicePowerState(v6, v5, 1, &v10, &v11) )
        {
          if ( !a2 && v10 == v11 || a2 == v10 )
          {
            v4 = 0;
            goto LABEL_22;
          }
          if ( v11 <= 1 || !a2 || a2 > v11 )
          {
            Pool2 = ExAllocatePool2(64LL, 64LL, 1297630800LL);
            if ( Pool2 )
            {
              *(_QWORD *)(Pool2 + 8) = Pool2;
              *(_QWORD *)Pool2 = Pool2;
              *(_QWORD *)(Pool2 + 16) = a1;
              *(_DWORD *)(Pool2 + 24) = a2;
              *(_QWORD *)(Pool2 + 48) = PopFxUpdateVetoMaskWork;
              *(_QWORD *)(Pool2 + 56) = Pool2;
              *(_QWORD *)(Pool2 + 32) = 0LL;
              ExQueueWorkItem((PWORK_QUEUE_ITEM)(Pool2 + 32), DelayedWorkQueue);
              return (unsigned int)v4;
            }
            v4 = -1073741670;
LABEL_22:
            PopFxReleaseDevice(a1);
            if ( v4 >= 0 )
              return (unsigned int)v4;
            goto LABEL_26;
          }
        }
      }
    }
    v4 = -1073741823;
    goto LABEL_22;
  }
  v4 = -1073741637;
LABEL_26:
  RtlInitUnicodeString(&DestinationString, &word_1408834C0);
  if ( (unsigned int)dword_140C03928 > 5 && tlgKeywordOn((__int64)&dword_140C03928, 0x400000000000LL) )
  {
    v18 = 2LL;
    v17 = v20;
    v19 = *((_QWORD *)v8 + 1);
    v20[0] = *v8;
    v21 = &v13;
    v23 = &v12;
    v25 = &v14;
    v20[1] = 0;
    v13 = a2;
    v22 = 4LL;
    v12 = v4;
    v24 = 4LL;
    v14 = 0x1000000LL;
    v26 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C03928, (unsigned __int8 *)byte_14002D7BD, 0LL, 0LL, 7u, &v16);
  }
  return (unsigned int)v4;
}
