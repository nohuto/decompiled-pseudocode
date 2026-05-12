/*
 * XREFs of RaidAdapterCheckWaitTimeout @ 0x1C002B7B0
 * Callers:
 *     RaidQueueWaitCheckDpcRoutine @ 0x1C0032D10 (RaidQueueWaitCheckDpcRoutine.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0009080 (RaidCompleteRequestEx.c)
 *     RaUnitReleaseRemoveLock @ 0x1C000B640 (RaUnitReleaseRemoveLock.c)
 *     RaUnitAcquireRemoveLock @ 0x1C000B684 (RaUnitAcquireRemoveLock.c)
 *     RaidAllocatePool @ 0x1C000BDB0 (RaidAllocatePool.c)
 *     RaidDeleteDeviceQueueEntry @ 0x1C0015968 (RaidDeleteDeviceQueueEntry.c)
 *     RaidLunQueueCheckWaitTimeout @ 0x1C0034BE0 (RaidLunQueueCheckWaitTimeout.c)
 *     GatewayCheckWaitTimeout @ 0x1C004D800 (GatewayCheckWaitTimeout.c)
 */

void __fastcall RaidAdapterCheckWaitTimeout(__int64 a1)
{
  __int64 v2; // r12
  unsigned int v3; // r13d
  __int64 v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // r14
  char v9; // si
  __int64 v10; // rbx
  __int64 v11; // rax
  char v12; // al
  char v13; // cl
  char v14; // cl
  char v15; // al
  unsigned int v16; // r8d
  char v17; // al
  unsigned int v18; // esi
  _QWORD **v19; // r15
  _QWORD *i; // rdi
  _QWORD *v21; // rbx
  unsigned int v22; // edi
  __int64 *v23; // rbx
  unsigned int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rdi
  IRP *v28; // r14
  __int64 v29; // rcx
  char v30; // si
  _IO_SECURITY_CONTEXT *SecurityContext; // rbx
  _SECURITY_QUALITY_OF_SERVICE *v32; // rax
  char v33; // al
  char v34; // cl
  char v35; // cl
  char v36; // al
  unsigned int v37; // r8d
  char v38; // al
  _QWORD v39[2]; // [rsp+20h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v41; // [rsp+90h] [rbp+40h]
  __int64 *Pool; // [rsp+98h] [rbp+48h]

  v41 = DpcCompletionLimit;
  v39[1] = v39;
  v2 = 0LL;
  v39[0] = v39;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = GatewayCheckWaitTimeout((PKSPIN_LOCK)(a1 + 832));
  while ( 1 )
  {
    v4 = v39[0];
    if ( (_QWORD *)v39[0] == v39 )
      break;
    if ( *(_QWORD **)(v39[0] + 8LL) != v39 || (v5 = *(_QWORD *)v39[0], *(_QWORD *)(*(_QWORD *)v39[0] + 8LL) != v39[0]) )
LABEL_62:
      __fastfail(3u);
    v39[0] = *(_QWORD *)v39[0];
    *(_QWORD *)(v5 + 8) = v39;
    v6 = (_QWORD *)(v4 - 24);
    v7 = *(_QWORD *)(v4 - 24 + 48);
    v8 = *(_QWORD *)(v4 - 24 + 40);
    v9 = *(_BYTE *)(v7 + 450);
    RaidDeleteDeviceQueueEntry(v7 + 656, *(_BYTE *)(v8 + 142) & 1);
    _InterlockedIncrement64((volatile signed __int64 *)(v7 + 2120));
    RaUnitReleaseRemoveLock(v7);
    v10 = *(_QWORD *)(*(_QWORD *)(v8 + 184) + 8LL);
    v11 = v6[2];
    if ( *(_BYTE *)(v10 + 2) == 40 )
    {
      *(_QWORD *)(v10 + 96) = v11;
    }
    else
    {
      *(_QWORD *)(v10 + 56) = 0LL;
      *(_QWORD *)(v10 + 40) = 0LL;
      *(_QWORD *)(v10 + 48) = v11;
    }
    ExFreePoolWithTag(v6, 0x54436152u);
    v12 = *(_BYTE *)(v10 + 2);
    v13 = *(_BYTE *)(v10 + 3);
    if ( (v9 & 2) != 0 )
    {
      if ( v12 == 40 )
      {
        v14 = ((v13 >> 7) & 0x80) + 56;
      }
      else
      {
        v15 = 56;
        if ( v13 < 0 )
          v15 = -72;
        v14 = v15;
      }
      v16 = -1073740534;
    }
    else
    {
      if ( v12 == 40 )
      {
        v14 = ((v13 >> 7) & 0x80) + 9;
      }
      else
      {
        v17 = 9;
        if ( v13 < 0 )
          v17 = -119;
        v14 = v17;
      }
      v16 = 258;
    }
    *(_BYTE *)(v10 + 3) = v14;
    RaidCompleteRequestEx((PIRP)v8, 0, v16);
  }
  if ( v41 != v3 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
    v18 = *(_DWORD *)(a1 + 152);
    if ( v18 && (Pool = (__int64 *)RaidAllocatePool(NonPagedPoolNx, 8LL * v18, 0x4C556152u, *(_QWORD *)(a1 + 8))) != 0LL )
    {
      v19 = (_QWORD **)(a1 + 136);
      for ( i = *v19; i != v19; i = (_QWORD *)*i )
      {
        v21 = i - 7;
        if ( *((_BYTE *)i + 3160)
          && (*((_DWORD *)v21 + 810) != -1 || (*((_BYTE *)v21 + 450) & 2) != 0)
          && (int)RaUnitAcquireRemoveLock((__int64)(i - 7), 0LL, 0LL) >= 0 )
        {
          Pool[v2] = (__int64)v21;
          v2 = (unsigned int)(v2 + 1);
        }
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( (unsigned int)v2 < v18 )
        Pool[v2] = 0LL;
      v22 = 0;
      v23 = Pool;
      do
      {
        if ( !*v23 )
          break;
        if ( v41 > v3 )
        {
          v24 = RaidLunQueueCheckWaitTimeout(*v23 + 656, v41 - v3, v39);
          v3 += v24;
          if ( v24 )
            _InterlockedExchangeAdd64((volatile signed __int64 *)(*v23 + 2128), v24);
        }
        RaUnitReleaseRemoveLock(*v23);
        ++v22;
        ++v23;
      }
      while ( v22 < v18 );
      ExFreePoolWithTag(Pool, 0x4C556152u);
      while ( 1 )
      {
        v25 = v39[0];
        if ( (_QWORD *)v39[0] == v39 )
          break;
        if ( *(_QWORD **)(v39[0] + 8LL) != v39 )
          goto LABEL_62;
        v26 = *(_QWORD *)v39[0];
        if ( *(_QWORD *)(*(_QWORD *)v39[0] + 8LL) != v39[0] )
          goto LABEL_62;
        v39[0] = *(_QWORD *)v39[0];
        v27 = (_QWORD *)(v25 - 24);
        *(_QWORD *)(v26 + 8) = v39;
        v28 = *(IRP **)(v25 - 24 + 40);
        v29 = *(_QWORD *)(v25 - 24 + 48);
        v30 = *(_BYTE *)(v29 + 450);
        SecurityContext = v28->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
        RaUnitReleaseRemoveLock(v29);
        v32 = (_SECURITY_QUALITY_OF_SERVICE *)v27[2];
        if ( BYTE2(SecurityContext->SecurityQos) == 40 )
        {
          SecurityContext[4].SecurityQos = v32;
        }
        else
        {
          SecurityContext[2].AccessState = 0LL;
          *(_QWORD *)&SecurityContext[1].DesiredAccess = 0LL;
          SecurityContext[2].SecurityQos = v32;
        }
        ExFreePoolWithTag(v27, 0x54436152u);
        v33 = BYTE2(SecurityContext->SecurityQos);
        v34 = BYTE3(SecurityContext->SecurityQos);
        if ( (v30 & 2) != 0 )
        {
          if ( v33 == 40 )
          {
            v35 = ((v34 >> 7) & 0x80) + 56;
          }
          else
          {
            v36 = 56;
            if ( v34 < 0 )
              v36 = -72;
            v35 = v36;
          }
          v37 = -1073740534;
        }
        else
        {
          if ( v33 == 40 )
          {
            v35 = ((v34 >> 7) & 0x80) + 9;
          }
          else
          {
            v38 = 9;
            if ( v34 < 0 )
              v38 = -119;
            v35 = v38;
          }
          v37 = 258;
        }
        BYTE3(SecurityContext->SecurityQos) = v35;
        RaidCompleteRequestEx(v28, 0, v37);
      }
    }
    else
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
  }
}
