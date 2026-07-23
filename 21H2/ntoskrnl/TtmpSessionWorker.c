/*
 * XREFs of TtmpSessionWorker @ 0x140900190
 * Callers:
 *     <none>
 * Callees:
 *     MmDetachSession @ 0x140215920 (MmDetachSession.c)
 *     MmAttachSession @ 0x1402159C0 (MmAttachSession.c)
 *     MmGetSessionById @ 0x1402AAD40 (MmGetSessionById.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     TtmiSessionDeviceListWorker @ 0x1408FC504 (TtmiSessionDeviceListWorker.c)
 *     TtmiSessionTerminalListWorker @ 0x1408FDA90 (TtmiSessionTerminalListWorker.c)
 *     TtmpActivateSessionWorker @ 0x1408FF818 (TtmpActivateSessionWorker.c)
 *     TtmpDeactivateSessionWorker @ 0x1408FFA20 (TtmpDeactivateSessionWorker.c)
 *     TtmpDereferenceSessionMaybeLast @ 0x1408FFAA0 (TtmpDereferenceSessionMaybeLast.c)
 *     TtmiLogError @ 0x140902C24 (TtmiLogError.c)
 *     TtmiLogSessionWorkerPass @ 0x140904580 (TtmiLogSessionWorkerPass.c)
 *     TtmiLogSessionWorkerStart @ 0x140904648 (TtmiLogSessionWorkerStart.c)
 *     TtmiLogSessionWorkerStop @ 0x1409046DC (TtmiLogSessionWorkerStop.c)
 */

__int64 __fastcall TtmpSessionWorker(unsigned int *a1)
{
  char v2; // r13
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // r14
  unsigned int v5; // r12d
  __int64 v6; // rdx
  unsigned int v7; // ecx
  ULONG_PTR SessionById; // rax
  unsigned int v9; // esi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  unsigned int i; // r15d
  __int64 v15; // rdx
  unsigned int v16; // ebx
  unsigned int v17; // ebx
  unsigned int v18; // ebp
  char v19; // bl
  unsigned int v20; // ebp
  unsigned int v21; // eax
  unsigned int v22; // ebx
  char v24; // [rsp+20h] [rbp-68h] BYREF
  char v25[7]; // [rsp+21h] [rbp-67h] BYREF
  _OWORD v26[3]; // [rsp+28h] [rbp-60h] BYREF

  memset(v26, 0, sizeof(v26));
  v25[0] = 0;
  v2 = 0;
  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  v24 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&TtmpSessionLock, 1u);
  v5 = *a1;
  TtmiLogSessionWorkerStart(*a1);
  v7 = a1[1] & 0xFFFFFFFC | 2;
  a1[1] = v7;
  *((_QWORD *)a1 + 29) = KeGetCurrentThread();
  if ( (v7 & 4) == 0 )
  {
    SessionById = MmGetSessionById(v5, v6);
    v4 = SessionById;
    if ( !SessionById )
    {
      v9 = -1073740715;
      v10 = 0xFFFFFFFFLL;
      v11 = 3221226581LL;
      v12 = 2914LL;
LABEL_4:
      TtmiLogError("TtmpSessionWorker", v12, v10, v11);
      goto LABEL_25;
    }
    v13 = MmAttachSession(SessionById);
    v9 = v13;
    if ( v13 < 0 )
    {
      v11 = (unsigned int)v13;
      v10 = (unsigned int)v13;
      v12 = 2923LL;
      goto LABEL_4;
    }
    v2 = 1;
  }
  v9 = 0;
  for ( i = 1; ; ++i )
  {
    v22 = a1[56];
    a1[56] = 0;
    v17 = v22 & 7;
    if ( !v17 )
      break;
    TtmiLogSessionWorkerPass(v5, v17, i);
    if ( (v17 & 2) != 0 )
    {
      TtmiSessionTerminalListWorker(a1, &v24, v25);
      v16 = (v17 & 0xFD ^ (v17 & 0xFD | (unsigned __int8)(4 * v24))) & 4 ^ v17 & 0xFFFFFFFD;
      v17 = ((unsigned __int8)v16 ^ (unsigned __int8)(v16 | v25[0])) & 1 ^ v16;
    }
    v18 = v17;
    v19 = v17 & 0xFB;
    v20 = v18 >> 2;
    if ( (_BYTE)v20 )
    {
      if ( (a1[1] & 0x10) != 0 )
      {
        v9 = TtmpActivateSessionWorker((__int64)a1, v15);
        if ( v9 != 259 )
        {
          v21 = a1[1];
          if ( (v21 & 0x1000) != 0 )
          {
            v19 = 1;
            a1[1] = v21 & 0xFFFFEFFF;
          }
        }
      }
    }
    if ( (v19 & 1) != 0 )
      TtmiSessionDeviceListWorker((__int64)a1);
    if ( (_BYTE)v20 && (a1[1] & 0x20) != 0 )
      v9 = TtmpDeactivateSessionWorker((__int64)a1, v15);
  }
  if ( v2 )
    MmDetachSession(v4, (__int64)v26);
LABEL_25:
  a1[1] &= ~2u;
  *((_QWORD *)a1 + 29) = 0LL;
  ExReleaseResourceLite(&TtmpSessionLock);
  KeLeaveCriticalRegion();
  TtmpDereferenceSessionMaybeLast((volatile signed __int32 *)a1);
  return TtmiLogSessionWorkerStop(v5, v9);
}
