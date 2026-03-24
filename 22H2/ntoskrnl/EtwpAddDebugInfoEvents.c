/*
 * XREFs of EtwpAddDebugInfoEvents @ 0x140712E04
 * Callers:
 *     EtwpRealtimeNotifyConsumers @ 0x140710C90 (EtwpRealtimeNotifyConsumers.c)
 *     EtwpFinalizeHeader @ 0x140713010 (EtwpFinalizeHeader.c)
 *     EtwpAddLogHeader @ 0x140713C88 (EtwpAddLogHeader.c)
 *     EtwpSendDbgId @ 0x14093CDA0 (EtwpSendDbgId.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     EtwpAddEventToBuffer @ 0x140712F90 (EtwpAddEventToBuffer.c)
 */

void __fastcall EtwpAddDebugInfoEvents(__int64 a1, __int64 a2, int a3, __int64 *a4, int a5)
{
  __int64 *v5; // r12
  int v6; // edi
  char v8; // r15
  int v10; // r13d
  __int64 v11; // rax
  int v12; // r15d
  int v13; // esi
  __int64 *v14; // rsi
  __int64 *v15; // rax
  _OWORD *v16; // rax
  __int64 *v17; // rcx
  int v19; // [rsp+90h] [rbp+18h] BYREF
  __int64 v20; // [rsp+98h] [rbp+20h] BYREF

  v19 = 0;
  v5 = &v20;
  v20 = 0LL;
  v6 = a3 - *(_DWORD *)(a2 + 48);
  v8 = a5;
  if ( a4 )
    v5 = a4;
  v10 = a5 & 2;
  a5 = v10;
  if ( v10 )
    ExAcquirePushLockExclusiveEx(a1 + 704, 0LL);
  if ( (v8 & 1) != 0 && *(_QWORD *)(a1 + 112) != a1 + 112 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( NtBuildLabEx[v11] );
    if ( !EtwpAddEventToBuffer(a2, 66LL, v5, NtBuildLabEx, (int)v11 + 1, v6, &v19) )
      goto LABEL_20;
    v6 -= v19;
  }
  v12 = v8 & 4;
  if ( v12 )
  {
    v15 = *(__int64 **)(a1 + 128);
    v13 = 0;
    if ( !v15 )
      goto LABEL_14;
    do
    {
      if ( *((_BYTE *)v15 + 40) )
        break;
      v15 = (__int64 *)*v15;
      ++v13;
    }
    while ( v15 );
  }
  else
  {
    v13 = *(_DWORD *)(a1 + 136);
  }
  if ( v13 )
  {
    v16 = (_OWORD *)EtwpAddEventToBuffer(a2, 68LL, v5, 0LL, 32 * v13, v6, &v19);
    if ( v16 )
    {
      v17 = *(__int64 **)(a1 + 128);
      do
      {
        *v16 = *(_OWORD *)(v17 + 1);
        v16 += 2;
        *(v16 - 1) = *(_OWORD *)(v17 + 3);
        v17 = (__int64 *)*v17;
        --v13;
      }
      while ( v13 );
      v6 -= v19;
    }
  }
LABEL_14:
  v14 = *(__int64 **)(a1 + 112);
  if ( v14 != (__int64 *)(a1 + 112) )
  {
    do
    {
      if ( !v12 || !*((_BYTE *)v14 + 16) )
      {
        if ( !EtwpAddEventToBuffer(a2, 64LL, v5, (char *)v14 + 28, *((_DWORD *)v14 + 5) - 4, v6, &v19) )
          break;
        v6 -= v19;
      }
      v14 = (__int64 *)*v14;
    }
    while ( v14 != (__int64 *)(a1 + 112) );
    v10 = a5;
  }
LABEL_20:
  if ( v10 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 704), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 704));
    KeAbPostRelease(a1 + 704);
  }
}
