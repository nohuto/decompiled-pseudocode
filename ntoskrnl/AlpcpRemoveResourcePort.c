/*
 * XREFs of AlpcpRemoveResourcePort @ 0x1406A293C
 * Callers:
 *     AlpcSectionDeleteProcedure @ 0x1406A04A0 (AlpcSectionDeleteProcedure.c)
 *     AlpcViewDestroyProcedure @ 0x1406A2290 (AlpcViewDestroyProcedure.c)
 *     AlpcSecurityDestroyProcedure @ 0x1406D4580 (AlpcSecurityDestroyProcedure.c)
 *     AlpcSectionDestroyProcedure @ 0x140785050 (AlpcSectionDestroyProcedure.c)
 *     AlpcReserveDestroyProcedure @ 0x140794020 (AlpcReserveDestroyProcedure.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x14079A3A0 (AlpcpMapLegacyPortRemoteView.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 */

signed __int32 __fastcall AlpcpRemoveResourcePort(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rdi
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  _QWORD *v5; // rcx

  v2 = (volatile signed __int64 *)(a1 + 328);
  v3 = (_QWORD *)(a2 - 48);
  ExAcquirePushLockExclusiveEx(a1 + 328, 0LL);
  v4 = (_QWORD *)*v3;
  if ( (_QWORD *)*v3 != v3 )
  {
    if ( (_QWORD *)v4[1] != v3 || (v5 = (_QWORD *)v3[1], (_QWORD *)*v5 != v3) )
      __fastfail(3u);
    *v5 = v4;
    v4[1] = v5;
    v3[1] = v3;
    *v3 = v3;
  }
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2);
  return KeAbPostRelease((ULONG_PTR)v2);
}
