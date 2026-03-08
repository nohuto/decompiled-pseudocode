/*
 * XREFs of AlpcpQueryRemoteView @ 0x140774F54
 * Callers:
 *     AlpcpReceiveLegacyConnectionReply @ 0x140774E0C (AlpcpReceiveLegacyConnectionReply.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObReferenceObjectSafe @ 0x1402CBCB0 (ObReferenceObjectSafe.c)
 *     AlpcpLocateView @ 0x1406A0954 (AlpcpLocateView.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1407CBD44 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x1407CDB50 (AlpcpUnlockBlob.c)
 */

__int64 __fastcall AlpcpQueryRemoteView(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rsi
  signed __int64 *v6; // rbx
  _DWORD *v7; // rcx
  unsigned int v8; // edi
  void *v9; // rsi
  ULONG_PTR v10; // rbx
  _QWORD *View; // rax

  v3 = *(_QWORD **)(a1 + 16);
  v6 = v3 - 2;
  ExAcquirePushLockSharedEx((ULONG_PTR)(v3 - 2), 0LL);
  v7 = (_DWORD *)*v3;
  v8 = 0;
  if ( !*v3 )
    goto LABEL_12;
  v9 = (void *)v3[1];
  if ( !v9 )
    goto LABEL_12;
  if ( (v7[104] & 0x1000) == 0 )
    v9 = v7;
  if ( ObReferenceObjectSafe((__int64)v9) )
  {
    if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v6);
    KeAbPostRelease((ULONG_PTR)v6);
    v10 = *(_QWORD *)(a2 + 16);
    AlpcpLockForCachedReferenceBlob(v10);
    View = AlpcpLocateView(v10, (__int64)v9);
    if ( View )
    {
      *(_DWORD *)a3 = 24;
      *(_QWORD *)(a3 + 16) = View[5];
      *(_QWORD *)(a3 + 8) = View[6];
    }
    else
    {
      v8 = -1073741670;
    }
    AlpcpUnlockBlob(v10);
    ObfDereferenceObject(v9);
    return v8;
  }
  else
  {
LABEL_12:
    if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v6);
    KeAbPostRelease((ULONG_PTR)v6);
    return 3221225527LL;
  }
}
