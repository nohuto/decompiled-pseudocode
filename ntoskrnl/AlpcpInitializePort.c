/*
 * XREFs of AlpcpInitializePort @ 0x140712D08
 * Callers:
 *     AlpcpCreateClientPort @ 0x140713330 (AlpcpCreateClientPort.c)
 *     AlpcpAcceptConnectPort @ 0x140713844 (AlpcpAcceptConnectPort.c)
 *     AlpcpCreateConnectionPort @ 0x14077D738 (AlpcpCreateConnectionPort.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14023FE20 (ExAllocateFromNPagedLookasideList.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeInitializeSemaphore @ 0x140343A50 (KeInitializeSemaphore.c)
 */

__int64 __fastcall AlpcpInitializePort(__int64 a1, char a2, char a3)
{
  __int64 *v4; // rax
  char v5; // al
  struct _KSEMAPHORE *v7; // rax

  *(_QWORD *)(a1 + 352) = 0LL;
  *(_QWORD *)(a1 + 328) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 344) = a1 + 336;
  *(_QWORD *)(a1 + 336) = a1 + 336;
  *(_QWORD *)(a1 + 152) = a1 + 144;
  *(_QWORD *)(a1 + 144) = a1 + 144;
  *(_QWORD *)(a1 + 192) = a1 + 184;
  *(_QWORD *)(a1 + 184) = a1 + 184;
  *(_QWORD *)(a1 + 168) = a1 + 160;
  *(_QWORD *)(a1 + 160) = a1 + 160;
  *(_QWORD *)(a1 + 392) = a1 + 384;
  *(_QWORD *)(a1 + 384) = a1 + 384;
  *(_QWORD *)(a1 + 216) = a1 + 208;
  *(_QWORD *)(a1 + 208) = a1 + 208;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_QWORD *)(a1 + 240) = a1 + 232;
  *(_QWORD *)(a1 + 232) = a1 + 232;
  *(_DWORD *)(a1 + 416) = *(_DWORD *)(a1 + 416) & 0xFFFFFDF9 | (2 * (a2 & 3 | ((a3 & 1) << 8)));
  if ( a3 )
  {
    *(_DWORD *)(a1 + 256) |= 0x40000u;
    v7 = (struct _KSEMAPHORE *)ExAllocateFromNPagedLookasideList(&AlpcpNPLookasides);
    *(_QWORD *)(a1 + 248) = v7;
    if ( !v7 )
      return 3221225626LL;
    KeInitializeSemaphore(v7, 0, 0x7FFFFFFF);
  }
  else
  {
    *(_QWORD *)(a1 + 248) = AlpcpDummyEvent;
  }
  *(_DWORD *)(a1 + 416) |= 1u;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&AlpcpPortListLock, 0LL);
  v4 = (__int64 *)qword_140C402F8;
  if ( *(__int64 **)qword_140C402F8 != &AlpcpPortList )
    __fastfail(3u);
  *(_QWORD *)(a1 + 8) = qword_140C402F8;
  *(_QWORD *)a1 = &AlpcpPortList;
  *v4 = a1;
  qword_140C402F8 = a1;
  v5 = _InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpPortListLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v5 & 2) != 0 && (v5 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpPortListLock);
  KeAbPostRelease((ULONG_PTR)&AlpcpPortListLock);
  return 0LL;
}
