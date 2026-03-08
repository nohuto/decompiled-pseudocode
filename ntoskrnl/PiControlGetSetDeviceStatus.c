/*
 * XREFs of PiControlGetSetDeviceStatus @ 0x1406CD670
 * Callers:
 *     <none>
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x1402459EC (PiControlFreeUserModeCallersBuffer.c)
 *     PnpRequestDeviceAction @ 0x1402F5074 (PnpRequestDeviceAction.c)
 *     PnpDeleteDeviceActionRequest @ 0x1402FDD5C (PnpDeleteDeviceActionRequest.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     PnpCancelDeviceActionRequest @ 0x140560204 (PnpCancelDeviceActionRequest.c)
 *     PnpRemoveDeviceActionRequestFromQueue @ 0x14056025C (PnpRemoveDeviceActionRequestFromQueue.c)
 *     PiControlGetUserFlagsFromDeviceNode @ 0x1406CD404 (PiControlGetUserFlagsFromDeviceNode.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1406CDF08 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1406CFA10 (PiControlMakeUserModeCallersCopy.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiControlGetSetDeviceStatus(__int64 a1, int *a2, unsigned int a3, char a4)
{
  unsigned int v4; // ecx
  size_t v5; // r12
  int *v7; // rbx
  volatile signed __int32 *v8; // rdi
  void *v9; // r14
  __int64 result; // rax
  _QWORD *v11; // r13
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  _DWORD *v15; // rsi
  int v16; // ecx
  int v17; // r15d
  int v18; // ebx
  int v19; // ecx
  int v20; // eax
  NTSTATUS v21; // eax
  void *Pool2; // rax
  __int64 *v23; // rdx
  __int64 *v24; // rcx
  struct _KEVENT *p_Event; // rax
  __int64 v26; // [rsp+40h] [rbp-40h] BYREF
  int *v27; // [rsp+48h] [rbp-38h] BYREF
  __int128 v28; // [rsp+50h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-20h] BYREF
  __int64 v30; // [rsp+B8h] [rbp+38h] BYREF

  v4 = *(unsigned __int16 *)a2;
  v5 = a3;
  v28 = 0LL;
  v26 = 0LL;
  LODWORD(v30) = 0;
  WORD1(v28) = v4;
  v7 = a2;
  LOWORD(v28) = v4;
  v8 = 0LL;
  v9 = 0LL;
  memset(&Event, 0, sizeof(Event));
  if ( (unsigned __int16)(v4 - 1) > 0x18Fu || (v4 & 1) != 0 )
    return 3221225485LL;
  result = PiControlMakeUserModeCallersCopy((char *)&v28 + 8, *((_QWORD *)a2 + 1), v4, 2LL, a4, 1);
  if ( (int)result >= 0 )
  {
    v11 = (_QWORD *)PnpDeviceObjectFromDeviceInstanceWithTag(&v28, 1399877200LL);
    PiControlFreeUserModeCallersBuffer(a4, *((void **)&v28 + 1));
    if ( !v11 )
      return (unsigned int)-1073741810;
    v14 = v11[39];
    v15 = *(_DWORD **)(v14 + 40);
    if ( !v15 )
    {
      v18 = -1073741810;
      goto LABEL_11;
    }
    if ( v15 == IopRootDeviceNode && v7[4] )
    {
      v18 = -1073741790;
      goto LABEL_11;
    }
    v16 = v7[4];
    v17 = v7[7] & 1;
    if ( !v16 )
    {
      PiControlGetUserFlagsFromDeviceNode(*(_QWORD *)(v14 + 40), v7 + 5, v12, v13);
      v7[6] = v15[101];
      v7[8] = v15[102];
      v18 = 0;
      goto LABEL_9;
    }
    v19 = v16 - 1;
    if ( v19 )
    {
      if ( v19 != 1 )
      {
        v18 = -1073741808;
        goto LABEL_11;
      }
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v20 = PnpRequestDeviceAction(v11, 1, 0, 0LL, (__int64)&Event, (__int64)&v30, &v26);
      v18 = v20;
    }
    else
    {
      if ( v17 )
      {
        Pool2 = (void *)ExAllocatePool2(256LL, v5, 1433431632LL);
        v9 = Pool2;
        if ( !Pool2 )
        {
          v18 = -1073741670;
LABEL_11:
          ObfDereferenceObjectWithTag(v11, 0x53706E50u);
          if ( v18 < 0 )
          {
            if ( v9 )
              ExFreePoolWithTag(v9, 0x55706E50u);
          }
          return (unsigned int)v18;
        }
        memmove(Pool2, v7, v5);
        v7 = (int *)v9;
      }
      else
      {
        KeInitializeEvent(&Event, NotificationEvent, 0);
      }
      v27 = v7;
      v23 = &v26;
      if ( v17 )
        v23 = 0LL;
      v24 = &v30;
      if ( v17 )
        v24 = 0LL;
      p_Event = &Event;
      if ( v17 )
        p_Event = 0LL;
      v20 = PnpRequestDeviceAction(v11, 15, 0, &v27, (__int64)p_Event, (__int64)v24, v23);
      v18 = v20;
      if ( v17 )
        goto LABEL_40;
    }
    if ( v20 >= 0 )
    {
      v21 = KeWaitForSingleObject(&Event, Executive, 0, 1u, 0LL);
      v8 = (volatile signed __int32 *)v26;
      v18 = v21;
      if ( v21 == 257 )
      {
        if ( (unsigned int)PnpRemoveDeviceActionRequestFromQueue((volatile signed __int32 *)v26) )
        {
          v18 = -1073741536;
          goto LABEL_9;
        }
        PnpCancelDeviceActionRequest((__int64)v8);
        v18 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      }
      if ( !v18 )
        v18 = v30;
      goto LABEL_9;
    }
LABEL_40:
    v8 = (volatile signed __int32 *)v26;
LABEL_9:
    if ( v8 )
      PnpDeleteDeviceActionRequest(v8);
    goto LABEL_11;
  }
  return result;
}
