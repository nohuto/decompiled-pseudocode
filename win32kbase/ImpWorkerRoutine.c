void __fastcall ImpWorkerRoutine(PVOID StartContext)
{
  __int64 v1; // r12
  __int64 v2; // r13
  struct _KTHREAD *CurrentThread; // rbx
  int v5; // r8d
  int v6; // r8d
  NTSTATUS v7; // ebx
  int v8; // r8d
  __int16 v9; // si
  unsigned __int16 i; // di
  PVOID v11; // rbx
  __int64 v12; // rax
  int v13; // ecx
  __int16 v14; // dx
  __int16 v15; // r14
  __int16 v16; // [rsp+48h] [rbp-C0h]
  int v17; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v18; // [rsp+50h] [rbp-B8h]
  __int64 v19; // [rsp+58h] [rbp-B0h] BYREF
  __int64 P; // [rsp+60h] [rbp-A8h] BYREF
  PVOID P_8[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 Object; // [rsp+78h] [rbp-90h]
  PVOID Object_8[2]; // [rsp+80h] [rbp-88h] BYREF
  _QWORD SystemInformation[2]; // [rsp+90h] [rbp-78h] BYREF
  int v25; // [rsp+A0h] [rbp-68h]
  int v26; // [rsp+A4h] [rbp-64h]
  _DWORD ThreadInformation[4]; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v28; // [rsp+B8h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+C8h] [rbp-40h] BYREF
  int *v30; // [rsp+E8h] [rbp-20h]
  __int64 v31; // [rsp+F0h] [rbp-18h]
  __int64 *v32; // [rsp+F8h] [rbp-10h]
  __int64 v33; // [rsp+100h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+108h] [rbp+0h] BYREF
  int *v35; // [rsp+128h] [rbp+20h]
  __int64 v36; // [rsp+130h] [rbp+28h]
  __int64 *v37; // [rsp+138h] [rbp+30h]
  __int64 v38; // [rsp+140h] [rbp+38h]

  v16 = 0;
  LODWORD(v18) = 0;
  Object = 0LL;
  P = 0LL;
  *(_OWORD *)P_8 = 0LL;
  v1 = 0LL;
  v2 = 0LL;
  *(_OWORD *)Object_8 = 0LL;
  v28 = 0LL;
  KeWaitForSingleObject(StartContext, Executive, 0, 0, 0LL);
  ExFreePoolWithTag(StartContext, 0);
  if ( (unsigned int)Feature_IMRespectWTDToggle__private_IsEnabledDeviceUsage() )
  {
    Object_8[0] = ImpWorkerEvent;
    if ( !ImpRpcAsync )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    Object_8[1] = ImpRpcAsync->u.Event;
  }
  CurrentThread = KeGetCurrentThread();
  v26 = 0;
  SystemInformation[0] = PsGetThreadProcessId(CurrentThread);
  v25 = 7;
  SystemInformation[1] = PsGetThreadId(CurrentThread);
  if ( ZwSetSystemInformation(SystemThreadPriorityClientIdInformation, SystemInformation, 0x18uLL) < 0
    && (unsigned int)dword_1C02C9780 > 2
    && tlgKeywordOn((__int64)&dword_1C02C9780, 0x400000000000LL) )
  {
    v17 = v5;
    v35 = &v17;
    v36 = 4LL;
    v37 = &v19;
    v19 = 0x1000000LL;
    v38 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C02C9780, (unsigned __int8 *)dword_1C02A0580, 0LL, 0LL, 4u, &v34);
  }
  ThreadInformation[0] = 1;
  ThreadInformation[1] = 1;
  ThreadInformation[2] = 1;
  if ( ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadHideFromDebugger|0x20, ThreadInformation, 0xCu) < 0
    && (unsigned int)dword_1C02C9780 > 2
    && tlgKeywordOn((__int64)&dword_1C02C9780, 0x400000000000LL) )
  {
    v17 = v6;
    v30 = &v17;
    v31 = 4LL;
    v32 = &v19;
    v19 = 0x1000000LL;
    v33 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C02C9780, (unsigned __int8 *)dword_1C02A05BF, 0LL, 0LL, 4u, &v29);
  }
  if ( ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadAmILastThread|0x20, &v28, 0x10u, 0LL) >= 0 )
    P = v28;
  else
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( (unsigned int)Feature_IMRespectWTDToggle__private_IsEnabledDeviceUsage() )
    ImpRpcQueryEnabledStateAsync();
  while ( 1 )
  {
LABEL_18:
    if ( (unsigned int)Feature_IMRespectWTDToggle__private_IsEnabledDeviceUsage() )
    {
      v7 = KeWaitForMultipleObjects(2u, Object_8, WaitAny, Executive, 0, 0, 0LL, 0LL);
      if ( v7 < 0 && (unsigned int)dword_1C02C9780 > 2 && tlgKeywordOn((__int64)&dword_1C02C9780, 0x400000000000LL) )
      {
        v17 = v7;
        v30 = &v17;
        v31 = 4LL;
        v32 = &v19;
        v19 = 0x1000000LL;
        v33 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C02C9780,
          (unsigned __int8 *)dword_1C02A0544,
          0LL,
          0LL,
          4u,
          &v29);
      }
    }
    else
    {
      KeWaitForSingleObject(ImpWorkerEvent, Executive, 0, 0, 0LL);
      v7 = 0;
    }
    ImpAcquireLock();
    if ( !ImpIsWorkerThreadEnabled )
      break;
    if ( !v7 )
    {
      if ( ImpRequestListHead == &ImpRequestListHead )
      {
        P_8[1] = P_8;
        P_8[0] = P_8;
      }
      else
      {
        *(_OWORD *)P_8 = *(_OWORD *)&ImpRequestListHead;
        *((_QWORD *)ImpRequestListHead + 1) = P_8;
        *(_QWORD *)*(&ImpRequestListHead + 1) = P_8;
        *(&ImpRequestListHead + 1) = &ImpRequestListHead;
        ImpRequestListHead = &ImpRequestListHead;
      }
      ImpReleaseLock();
      v9 = 0;
      for ( i = 0; ; i += v15 )
      {
        v11 = P_8[0];
        if ( P_8[0] == P_8 )
        {
          if ( i )
            ImpProcessSequence(v1, v2, v8, i, v16, v18, Object, (__int64)&P);
          goto LABEL_18;
        }
        if ( *((PVOID **)P_8[0] + 1) != P_8 || (v12 = *(_QWORD *)P_8[0], *(PVOID *)(*(_QWORD *)P_8[0] + 8LL) != P_8[0]) )
          __fastfail(3u);
        P_8[0] = *(PVOID *)P_8[0];
        *(_QWORD *)(v12 + 8) = P_8;
        if ( !i )
          goto LABEL_49;
        if ( !v9 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM();
        if ( v1 != *((_QWORD *)v11 + 2) || v2 != *((_QWORD *)v11 + 4) )
          break;
        v13 = v18;
        if ( (_DWORD)v18 != *((_DWORD *)v11 + 11) )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM();
          v13 = v18;
        }
        v8 = 2;
        if ( (*((_BYTE *)v11 + 40) & 2) != 0 )
        {
          ImpProcessSequence(v1, v2, 2, i, v16, v13, Object, (__int64)&P);
          v9 = 0;
          i = 0;
LABEL_49:
          v1 = *((_QWORD *)v11 + 2);
          v2 = *((_QWORD *)v11 + 4);
          v16 = *((_WORD *)v11 + 20);
          LODWORD(v18) = *((_DWORD *)v11 + 11);
          Object = *((_QWORD *)v11 + 6);
          goto LABEL_50;
        }
        if ( v9 == 96 )
        {
          if ( (unsigned int)dword_1C02C9780 > 2 && tlgKeywordOn((__int64)&dword_1C02C9780, 0x400000000000LL) )
          {
            v17 = ImpSessionId;
            v31 = 4LL;
            v30 = &v17;
            v19 = 0x1000000LL;
            v32 = &v19;
            v33 = 8LL;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C02C9780,
              (unsigned __int8 *)dword_1C02A05F5,
              0LL,
              0LL,
              4u,
              &v29);
          }
          if ( i != 191 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM();
LABEL_48:
          ImpProcessSequence(v1, v2, v8, i, v16, v18, Object, (__int64)&P);
          v9 = 0;
          i = 0;
          goto LABEL_49;
        }
LABEL_50:
        v14 = *((_WORD *)v11 + 12);
        if ( (unsigned __int16)(v14 + 10240) > 0x3FFu || (unsigned __int16)(*((_WORD *)v11 + 13) + 9216) > 0x3FFu )
        {
          if ( (unsigned __int16)(v14 + 10240) <= 0x3FFu || *((_WORD *)v11 + 13) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM();
          ImpCharacterBuffer[i] = *((_WORD *)v11 + 12);
          v15 = 1;
        }
        else
        {
          v15 = 2;
          ImpCharacterBuffer[i] = v14;
          ImpCharacterBuffer[i + 1] = *((_WORD *)v11 + 13);
        }
        ++v9;
        ExFreePoolWithTag(v11, 0);
      }
      if ( i >= 0xBFu )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      goto LABEL_48;
    }
    if ( (unsigned int)Feature_IMRespectWTDToggle__private_IsEnabledDeviceUsage() )
    {
      ImpReleaseLock();
      if ( v7 == 1 && (int)ImpRpcAsyncResponseHandler() < 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
  }
  ImpReleaseLock();
}
