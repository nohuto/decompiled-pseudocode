/*
 * XREFs of AlpcpFlushMessagesByRequestor @ 0x140781C5C
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

signed __int32 __fastcall AlpcpFlushMessagesByRequestor(__int64 a1, __int64 a2, ULONG_PTR *a3, int a4)
{
  __int64 v8; // rax
  ULONG_PTR i; // rsi
  int v10; // edi
  int v11; // edi
  volatile signed __int64 *v12; // rdi
  volatile signed __int64 *v14; // r14
  __int64 v15; // rax

  if ( a4 == 1 || a4 == 2 )
  {
    v8 = 136LL;
  }
  else if ( a4 == 3 )
  {
    v8 = 176LL;
  }
  else
  {
    v8 = 200LL;
  }
  ExAcquirePushLockExclusiveEx(a2 + v8, 0LL);
LABEL_7:
  for ( i = *a3; (ULONG_PTR *)i != a3; i = *(_QWORD *)i )
  {
    if ( *(_QWORD *)(i + 24) == a1 || (*(_DWORD *)(i + 40) & 0x10000) != 0 )
    {
      AlpcpReferenceBlob(i);
      if ( a4 == 1 || a4 == 2 )
      {
        v14 = (volatile signed __int64 *)(a2 + 136);
      }
      else if ( a4 == 3 )
      {
        v14 = (volatile signed __int64 *)(a2 + 176);
      }
      else
      {
        v14 = (volatile signed __int64 *)(a2 + 200);
      }
      if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v14);
      KeAbPostRelease((ULONG_PTR)v14);
      AlpcpLockForCachedReferenceBlob(i);
      --*(_WORD *)(i - 30);
      if ( *(_QWORD *)(i + 24) == a1 )
        AlpcpCancelMessage(a2, i, 0x10000);
      else
        AlpcpUnlockMessage(i);
      if ( a4 == 1 || a4 == 2 )
      {
        v15 = 136LL;
      }
      else if ( a4 == 3 )
      {
        v15 = 176LL;
      }
      else
      {
        v15 = 200LL;
      }
      ExAcquirePushLockExclusiveEx(v15 + a2, 0LL);
      goto LABEL_7;
    }
  }
  v10 = a4 - 1;
  if ( v10 && (v11 = v10 - 1) != 0 )
  {
    if ( v11 == 1 )
      v12 = (volatile signed __int64 *)(a2 + 176);
    else
      v12 = (volatile signed __int64 *)(a2 + 200);
  }
  else
  {
    v12 = (volatile signed __int64 *)(a2 + 136);
  }
  if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v12);
  return KeAbPostRelease((ULONG_PTR)v12);
}
