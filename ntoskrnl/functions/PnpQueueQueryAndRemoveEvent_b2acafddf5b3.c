__int64 __fastcall PnpQueueQueryAndRemoveEvent(unsigned __int16 *a1, char *a2, _WORD *a3, _WORD *a4, char a5, int a6)
{
  int v7; // r14d
  volatile __int32 *v9; // rdi
  char *v10; // r15
  unsigned __int16 *v11; // rsi
  _QWORD *v12; // rax
  char *v13; // r13
  int v14; // ebx
  PVOID v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rbx
  char *Pool2; // rax
  int v19; // ebx
  int v20; // edi
  int v21; // r13d
  unsigned int v23; // ecx
  int v24; // ecx
  _WORD *v25; // rax
  int v26; // [rsp+48h] [rbp-59h]
  int v27; // [rsp+50h] [rbp-51h]
  char v28; // [rsp+78h] [rbp-29h]
  int v29; // [rsp+7Ch] [rbp-25h] BYREF
  BOOL v30; // [rsp+80h] [rbp-21h]
  PVOID P; // [rsp+88h] [rbp-19h] BYREF
  PVOID Object; // [rsp+90h] [rbp-11h]
  struct _KEVENT Event; // [rsp+98h] [rbp-9h] BYREF

  v7 = a5 & 8;
  v29 = 0;
  memset(&Event, 0, sizeof(Event));
  v9 = 0LL;
  P = 0LL;
  v10 = 0LL;
  v28 = 0;
  v11 = 0LL;
  *(_DWORD *)a2 = 0;
  if ( (a5 & 8) != 0 )
    PnpDiagnosticTraceObject(&KMPnPEvt_DeviceEject_Start, a1);
  v12 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)a1, 0x43706E50u);
  Object = v12;
  if ( !v12 )
  {
    v13 = a2;
    v14 = -1073741810;
    goto LABEL_35;
  }
  v15 = *(PVOID *)(v12[39] + 40LL);
  if ( v15 )
  {
    if ( v15 == IopRootDeviceNode )
    {
      v14 = -1073741790;
      goto LABEL_7;
    }
    v16 = *(unsigned int *)a4;
    if ( (_DWORD)v16 )
    {
      v17 = (unsigned int)v16;
      Pool2 = (char *)ExAllocatePool2(256LL, v16 + 20, 538996816LL);
      v10 = Pool2;
      if ( !Pool2 )
      {
        v14 = -1073741670;
        goto LABEL_7;
      }
      memset(Pool2, 0, v17 + 20);
      v11 = (unsigned __int16 *)(v10 + 4);
      *((_WORD *)v10 + 2) = 0;
      *(_QWORD *)(v10 + 12) = v10 + 20;
      v19 = 0;
      *((_WORD *)v10 + 3) = *a4;
      v28 = 1;
    }
    else
    {
      v19 = 1;
    }
    if ( v7 && a6 )
      v19 = 1;
    v30 = (a5 & 0xB) != 0;
    if ( (a5 & 2) != 0 )
    {
      v20 = 22;
    }
    else
    {
      if ( v7 )
      {
        v20 = 47;
        v21 = 1;
        goto LABEL_24;
      }
      v20 = 21;
    }
    v21 = 0;
LABEL_24:
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v14 = PnpSetTargetDeviceRemove(
            Object,
            0,
            v30,
            v21,
            v19,
            v20,
            0,
            (__int64)&Event,
            v26,
            v27,
            &v29,
            (__int64)v10,
            (__int64)v11,
            (__int64 *)&P);
    if ( v14 >= 0 )
    {
      v14 = KeWaitForSingleObject(&Event, Executive, 0, 1u, 0LL);
      if ( v14 == 257 )
      {
        v9 = (volatile __int32 *)P;
        if ( (unsigned int)PnpRemoveEventFromQueue(P) )
        {
          v13 = a2;
          v14 = -1073741536;
          goto LABEL_32;
        }
        if ( !_InterlockedExchange(v9 + 17, 1) )
        {
          v14 = -1073741536;
          v28 = 0;
          *((_BYTE *)P + 72) = 1;
          _InterlockedExchange(v9 + 17, 0);
          goto LABEL_30;
        }
        v14 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      }
      v13 = a2;
      if ( v14 >= 0 )
        v14 = v29;
      if ( v10 )
        *(_DWORD *)a2 = *(_DWORD *)v10;
      if ( v11 )
      {
        v23 = *v11;
        if ( (_WORD)v23 )
        {
          if ( v23 >= *(_DWORD *)a4 )
          {
            LOWORD(v23) = *a4 - 2;
            *v11 = v23;
          }
          memmove(a3, *((const void **)v11 + 1), (unsigned __int16)v23);
          a3[(unsigned __int64)*v11 >> 1] = 0;
        }
        *(_DWORD *)a4 = *v11;
      }
      if ( *(_DWORD *)a2 == 6 && *(_DWORD *)a4 >= 2u )
      {
        v24 = 0;
        v25 = a3;
        if ( *a3 )
        {
          while ( *v25 != 92 || ++v24 != 3 )
          {
            if ( !*++v25 )
              goto LABEL_31;
          }
          *v25 = 0;
          *(_DWORD *)a4 = (unsigned __int16)((_WORD)v25 - (_WORD)a3);
        }
      }
      goto LABEL_31;
    }
LABEL_30:
    v13 = a2;
LABEL_31:
    v9 = (volatile __int32 *)P;
    goto LABEL_32;
  }
  v14 = -1073741810;
LABEL_7:
  v13 = a2;
LABEL_32:
  ObfDereferenceObjectWithTag(Object, 0x43706E50u);
  if ( v9 && _InterlockedExchangeAdd(v9 + 16, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag(P, 0x4B706E50u);
LABEL_35:
  if ( v7 )
    PnpDiagnosticTraceDeviceOperation(&KMPnPEvt_DeviceEject_Stop, a1, v14, (__int64)v11, *v13);
  if ( v28 )
    ExFreePoolWithTag(v10, 0);
  return (unsigned int)v14;
}
