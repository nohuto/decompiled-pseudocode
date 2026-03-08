/*
 * XREFs of DbgkpQueueMessage @ 0x140934EE8
 * Callers:
 *     DbgkPostModuleMessage @ 0x1405395FC (DbgkPostModuleMessage.c)
 *     DbgkSendSystemDllMessages @ 0x140933E74 (DbgkSendSystemDllMessages.c)
 *     DbgkpPostFakeThreadMessages @ 0x140934820 (DbgkpPostFakeThreadMessages.c)
 *     DbgkpSendApiMessage @ 0x1409370E0 (DbgkpSendApiMessage.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DbgkpQueueMessage(PVOID Object, char *a2, __int64 a3, int a4, PRKEVENT a5)
{
  __int64 v10; // r12
  __int64 Pool2; // rax
  _OWORD *v12; // r14
  int v14; // ecx
  _OWORD *v15; // rbx
  _OWORD *v16; // rax
  _OWORD *v17; // rcx
  __int64 v18; // rdx
  __int128 v19; // xmm1
  int v20; // edi
  struct _FAST_MUTEX *v21; // r12
  struct _LIST_ENTRY *Blink; // rcx
  __int128 v23; // xmm1
  int v24; // [rsp+30h] [rbp-1C8h]
  _OWORD v25[23]; // [rsp+40h] [rbp-1B8h] BYREF

  memset(v25, 0, 0x168uLL);
  v10 = 2LL;
  v24 = a4 & 2;
  if ( (a4 & 2) != 0 )
  {
    Pool2 = ExAllocatePool2(65LL, 360LL, 1164403268LL);
    v12 = (_OWORD *)Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    *(_DWORD *)(Pool2 + 76) = a4 | 4;
    ObfReferenceObjectWithTag(Object, 0x4F676244u);
    ObfReferenceObjectWithTag(a2, 0x4F676244u);
    *((_QWORD *)v12 + 10) = KeGetCurrentThread();
  }
  else
  {
    HIDWORD(v25[4]) = a4;
    v12 = v25;
    ExAcquireFastMutex(&DbgkpProcessDebugPortMutex);
    v14 = *(_DWORD *)(a3 + 40);
    a5 = (PRKEVENT)*((_QWORD *)Object + 175);
    if ( (unsigned int)(v14 - 1) <= 1 && (a2[1376] & 0x40) != 0 )
      a5 = 0LL;
    if ( v14 == 5 )
    {
      if ( ((unsigned __int8)a4 & (unsigned __int8)a2[1376] & 0x40) != 0 )
        a5 = 0LL;
    }
    else if ( (v14 == 3 || v14 == 4) && a2[1376] < 0 )
    {
      a5 = 0LL;
    }
    KeInitializeEvent((PRKEVENT)&v25[1], SynchronizationEvent, 0);
  }
  v15 = (_OWORD *)((char *)v12 + 88);
  *((_QWORD *)v12 + 7) = Object;
  v16 = (_OWORD *)((char *)v12 + 88);
  *((_QWORD *)v12 + 8) = a2;
  v17 = (_OWORD *)a3;
  v18 = 2LL;
  do
  {
    *v16 = *v17;
    v16[1] = v17[1];
    v16[2] = v17[2];
    v16[3] = v17[3];
    v16[4] = v17[4];
    v16[5] = v17[5];
    v16[6] = v17[6];
    v16 += 8;
    v19 = v17[7];
    v17 += 8;
    *(v16 - 1) = v19;
    --v18;
  }
  while ( v18 );
  *v16 = *v17;
  *(_OWORD *)((char *)v12 + 40) = *(_OWORD *)(a2 + 1224);
  if ( a5 )
  {
    v21 = (struct _FAST_MUTEX *)&a5[1];
    ExAcquireFastMutex((PFAST_MUTEX)&a5[1]);
    if ( (a5[4].Header.LockNV & 1) != 0 )
    {
      v20 = -1073740972;
    }
    else
    {
      Blink = a5[3].Header.WaitListHead.Blink;
      if ( Blink->Flink != &a5[3].Header.WaitListHead )
        __fastfail(3u);
      *(_QWORD *)v12 = (char *)a5 + 80;
      *((_QWORD *)v12 + 1) = Blink;
      Blink->Flink = (struct _LIST_ENTRY *)v12;
      a5[3].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)v12;
      if ( !v24 )
        KeSetEvent(a5, 0, 0);
      v20 = 0;
    }
    ExReleaseFastMutex(v21);
    v10 = 2LL;
  }
  else
  {
    v20 = -1073740973;
  }
  if ( v24 )
  {
    if ( v20 < 0 )
    {
      ObfDereferenceObjectWithTag(Object, 0x4F676244u);
      ObfDereferenceObjectWithTag(a2, 0x4F676244u);
      ExFreePoolWithTag(v12, 0);
    }
  }
  else
  {
    ExReleaseFastMutex(&DbgkpProcessDebugPortMutex);
    if ( v20 >= 0 )
    {
      KeWaitForSingleObject(v12 + 1, Executive, 0, 0, 0LL);
      v20 = *((_DWORD *)v12 + 18);
      do
      {
        *(_OWORD *)a3 = *v15;
        *(_OWORD *)(a3 + 16) = v15[1];
        *(_OWORD *)(a3 + 32) = v15[2];
        *(_OWORD *)(a3 + 48) = v15[3];
        *(_OWORD *)(a3 + 64) = v15[4];
        *(_OWORD *)(a3 + 80) = v15[5];
        *(_OWORD *)(a3 + 96) = v15[6];
        a3 += 128LL;
        v23 = v15[7];
        v15 += 8;
        *(_OWORD *)(a3 - 16) = v23;
        --v10;
      }
      while ( v10 );
      *(_OWORD *)a3 = *v15;
    }
  }
  return (unsigned int)v20;
}
