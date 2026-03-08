/*
 * XREFs of AlpcpFlushQueue @ 0x1407178BC
 * Callers:
 *     AlpcpFlushMessagesPort @ 0x140717700 (AlpcpFlushMessagesPort.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     AlpcpCancelMessage @ 0x1407141F0 (AlpcpCancelMessage.c)
 *     AlpcpUnlockMessage @ 0x140716BD8 (AlpcpUnlockMessage.c)
 *     AlpcpReferenceBlob @ 0x1407CAA30 (AlpcpReferenceBlob.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1407CBD44 (AlpcpLockForCachedReferenceBlob.c)
 */

signed __int32 __fastcall AlpcpFlushQueue(__int64 a1, ULONG_PTR *a2, int a3)
{
  __int64 v6; // rax
  ULONG_PTR v7; // r15
  int v8; // edi
  int v9; // edi
  volatile signed __int64 *v10; // rdi
  volatile signed __int64 *v12; // r14
  __int64 v13; // rax

  if ( a3 == 1 || a3 == 2 )
  {
    v6 = 136LL;
  }
  else if ( a3 == 3 )
  {
    v6 = 176LL;
  }
  else
  {
    v6 = 200LL;
  }
  ExAcquirePushLockExclusiveEx(v6 + a1, 0LL);
  while ( 1 )
  {
    v7 = *a2;
    if ( (ULONG_PTR *)*a2 == a2 )
      break;
    AlpcpReferenceBlob(*a2);
    if ( a3 == 1 || a3 == 2 )
    {
      v12 = (volatile signed __int64 *)(a1 + 136);
    }
    else if ( a3 == 3 )
    {
      v12 = (volatile signed __int64 *)(a1 + 176);
    }
    else
    {
      v12 = (volatile signed __int64 *)(a1 + 200);
    }
    if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v12);
    KeAbPostRelease((ULONG_PTR)v12);
    AlpcpLockForCachedReferenceBlob(v7);
    --*(_WORD *)(v7 - 30);
    if ( *(_QWORD *)(v7 + 16) == a1 )
      AlpcpCancelMessage(a1, v7, 0x10000);
    else
      AlpcpUnlockMessage(v7);
    if ( a3 == 1 || a3 == 2 )
    {
      v13 = 136LL;
    }
    else if ( a3 == 3 )
    {
      v13 = 176LL;
    }
    else
    {
      v13 = 200LL;
    }
    ExAcquirePushLockExclusiveEx(v13 + a1, 0LL);
  }
  v8 = a3 - 1;
  if ( v8 && (v9 = v8 - 1) != 0 )
  {
    if ( v9 == 1 )
      v10 = (volatile signed __int64 *)(a1 + 176);
    else
      v10 = (volatile signed __int64 *)(a1 + 200);
  }
  else
  {
    v10 = (volatile signed __int64 *)(a1 + 136);
  }
  if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v10);
  return KeAbPostRelease((ULONG_PTR)v10);
}
