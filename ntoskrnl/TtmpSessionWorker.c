/*
 * XREFs of TtmpSessionWorker @ 0x1409A2950
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionById @ 0x14022A4F0 (MmGetSessionById.c)
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     MmDetachSession @ 0x1402EA460 (MmDetachSession.c)
 *     MmAttachSession @ 0x1402EA500 (MmAttachSession.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     TtmiSessionDeviceListWorker @ 0x14099FD30 (TtmiSessionDeviceListWorker.c)
 *     TtmpActivateSessionWorker @ 0x1409A2018 (TtmpActivateSessionWorker.c)
 *     TtmpDeactivateSessionWorker @ 0x1409A220C (TtmpDeactivateSessionWorker.c)
 *     TtmpDereferenceSessionMaybeLast @ 0x1409A228C (TtmpDereferenceSessionMaybeLast.c)
 *     TtmiLogError @ 0x1409A536C (TtmiLogError.c)
 *     TtmiLogSessionWorkerPass @ 0x1409A6E64 (TtmiLogSessionWorkerPass.c)
 *     TtmiLogSessionWorkerStart @ 0x1409A6F2C (TtmiLogSessionWorkerStart.c)
 *     TtmiLogSessionWorkerStop @ 0x1409A6FC0 (TtmiLogSessionWorkerStop.c)
 *     TtmiSessionTerminalListWorker @ 0x1409A82BC (TtmiSessionTerminalListWorker.c)
 */

__int64 __fastcall TtmpSessionWorker(volatile unsigned __int32 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char v3; // r13
  __int64 v4; // r14
  volatile unsigned __int32 v5; // r12d
  __int64 v6; // rdx
  unsigned int v7; // ecx
  struct _KPROCESS *SessionById; // rax
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
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-60h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  v25[0] = 0;
  v4 = 0LL;
  v24 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&TtmpSessionLock, 1u);
  v5 = *a1;
  TtmiLogSessionWorkerStart(*(unsigned int *)a1);
  v7 = a1[1] & 0xFFFFFFFC | 2;
  *((_DWORD *)a1 + 1) = v7;
  *((_QWORD *)a1 + 29) = KeGetCurrentThread();
  if ( (v7 & 4) == 0 )
  {
    SessionById = (struct _KPROCESS *)MmGetSessionById(v5, v6);
    v4 = (__int64)SessionById;
    if ( !SessionById )
    {
      v9 = -1073740715;
      v10 = 0xFFFFFFFFLL;
      v11 = 3221226581LL;
      v12 = 2910LL;
LABEL_4:
      TtmiLogError("TtmpSessionWorker", v12, v10, v11);
      goto LABEL_25;
    }
    v13 = MmAttachSession(SessionById, &ApcState);
    v9 = v13;
    if ( v13 < 0 )
    {
      v11 = (unsigned int)v13;
      v10 = (unsigned int)v13;
      v12 = 2919LL;
      goto LABEL_4;
    }
    v3 = 1;
  }
  v9 = 0;
  for ( i = 1; ; ++i )
  {
    v22 = *((_DWORD *)a1 + 56);
    *((_DWORD *)a1 + 56) = 0;
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
          v21 = *((_DWORD *)a1 + 1);
          if ( (v21 & 0x1000) != 0 )
          {
            *((_DWORD *)a1 + 1) = v21 & 0xFFFFEFFF;
LABEL_17:
            TtmiSessionDeviceListWorker((__int64)a1);
            goto LABEL_18;
          }
        }
      }
    }
    if ( (v19 & 1) != 0 )
      goto LABEL_17;
LABEL_18:
    if ( (_BYTE)v20 && (a1[1] & 0x20) != 0 )
      v9 = TtmpDeactivateSessionWorker((__int64)a1, v15);
  }
  if ( v3 )
    MmDetachSession(v4, ($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
LABEL_25:
  *((_DWORD *)a1 + 1) &= ~2u;
  *((_QWORD *)a1 + 29) = 0LL;
  ExReleaseResourceLite(&TtmpSessionLock);
  KeLeaveCriticalRegion();
  TtmpDereferenceSessionMaybeLast((volatile signed __int32 *)a1);
  return TtmiLogSessionWorkerStop(v5, v9);
}
