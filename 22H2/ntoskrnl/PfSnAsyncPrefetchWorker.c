/*
 * XREFs of PfSnAsyncPrefetchWorker @ 0x14062E400
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14025BB40 (KiStackAttachProcess.c)
 *     MmGetDefaultPagePriority @ 0x14026E790 (MmGetDefaultPagePriority.c)
 *     MmGetAvailablePagesBelowPriority @ 0x14032833C (MmGetAvailablePagesBelowPriority.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     PfSnLogAsyncWorker @ 0x14062E6E4 (PfSnLogAsyncWorker.c)
 *     PfSnCleanupPrefetchHeader @ 0x140633648 (PfSnCleanupPrefetchHeader.c)
 *     PfSnOpenVolumesForPrefetch @ 0x140634420 (PfSnOpenVolumesForPrefetch.c)
 *     PfSnAsyncPrefetchStep @ 0x140680A0C (PfSnAsyncPrefetchStep.c)
 *     PfSnPreallocatePrefetchHeader @ 0x14068A450 (PfSnPreallocatePrefetchHeader.c)
 *     PfSnAsyncContextCleanup @ 0x14069FA7C (PfSnAsyncContextCleanup.c)
 *     PfSnPowerBoost @ 0x1406A1F48 (PfSnPowerBoost.c)
 *     PfpPrefetchSharedStart @ 0x14070BF54 (PfpPrefetchSharedStart.c)
 *     PfpPrefetchSharedInitialize @ 0x14070C0A0 (PfpPrefetchSharedInitialize.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

void __fastcall PfSnAsyncPrefetchWorker(PVOID P)
{
  __int64 v1; // r14
  int v3; // r12d
  int v4; // r15d
  unsigned int v5; // ebx
  _DWORD *v6; // r9
  int DefaultPagePriority; // eax
  unsigned __int64 AvailablePagesBelowPriority; // rax
  __int64 v9; // rax
  PVOID PoolWithTag; // rax
  int v11; // ebx
  unsigned int v12; // esi
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15[4]; // [rsp+28h] [rbp-99h] BYREF
  _QWORD v16[16]; // [rsp+38h] [rbp-89h] BYREF
  _OWORD v17[3]; // [rsp+B8h] [rbp-9h] BYREF

  v1 = *((_QWORD *)P + 26);
  v15[0] = 0;
  v3 = 0;
  memset(v17, 0, sizeof(v17));
  v4 = 0;
  memset(v16, 0, sizeof(v16));
  v5 = *((_DWORD *)P + 59);
  v16[4] = &v16[3];
  v16[0] = v1;
  v16[3] = &v16[3];
  v16[6] = &v16[5];
  v16[5] = &v16[5];
  PfSnLogAsyncWorker(v1, PfSnEvt_AsyncWorker_Start);
  if ( (*((_DWORD *)P + 60) & 1) != 0 )
  {
    PfSnPowerBoost((PEX_RUNDOWN_REF)P + 5);
    v4 = 1;
  }
  KiStackAttachProcess(*((_KPROCESS **)P + 27), 0LL, (__int64)v17, v6);
  DefaultPagePriority = MmGetDefaultPagePriority();
  if ( v5 <= DefaultPagePriority - 1 )
  {
    LODWORD(v16[12]) = v5;
    HIDWORD(v16[12]) = v5;
  }
  else
  {
    LODWORD(v16[12]) = DefaultPagePriority - 1;
    HIDWORD(v16[12]) = DefaultPagePriority;
  }
  if ( (int)PfSnPreallocatePrefetchHeader(v16) >= 0 )
  {
    AvailablePagesBelowPriority = MmGetAvailablePagesBelowPriority(HIDWORD(v16[12]) + 1);
    v9 = AvailablePagesBelowPriority < 0xF00 ? 0LL : AvailablePagesBelowPriority - 3840;
    v16[13] = v9;
    if ( v9 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x90uLL, 0x43536650u);
      v16[1] = PoolWithTag;
      if ( PoolWithTag )
      {
        PfpPrefetchSharedInitialize(PoolWithTag);
        *(_QWORD *)(v16[1] + 32LL) = v16;
        *(_DWORD *)(v16[1] + 60LL) = 250;
        *(_DWORD *)(v16[1] + 56LL) = 15;
        if ( (int)PfpPrefetchSharedStart(v16[1]) >= 0 && (int)PfSnOpenVolumesForPrefetch(v16, v15) >= 0 )
        {
          v11 = v15[0];
          if ( *(_DWORD *)(v1 + 80) == 1 )
          {
            v11 = v15[0] | 1;
            v15[0] |= 1u;
          }
          if ( (dword_140C502B0 & 4) != 0 )
          {
            v12 = 0;
            v11 &= ~2u;
            v15[0] = v11;
          }
          else
          {
            if ( (v11 & 1) != 0 )
              v12 = *(_DWORD *)(v1 + 124);
            else
              v12 = 1;
            if ( 1 << v12 != 1 && (int)PfSnAsyncPrefetchStep(P, v16, (unsigned int)((1 << v12) - 1)) < 0 )
              goto LABEL_21;
            ExReleaseRundownProtection(*((PEX_RUNDOWN_REF *)P + 4));
            v3 = 1;
            PfSnLogAsyncWorker(v1, PfSnEvt_SyncPrefetchingDone_Info);
          }
          if ( v12 < *(_DWORD *)(v1 + 124) && (v11 & 2) == 0 )
          {
            _InterlockedExchange((volatile __int32 *)(*((_QWORD *)P + 27) + 2272LL), 5000);
            while ( v12 < *(_DWORD *)(v1 + 124) && (int)PfSnAsyncPrefetchStep(P, v16, (unsigned int)(1 << v12)) >= 0 )
              ++v12;
          }
        }
      }
    }
  }
LABEL_21:
  _InterlockedExchange((volatile __int32 *)(*((_QWORD *)P + 27) + 2272LL), 0);
  v13 = *((_QWORD *)P + 28);
  if ( v13 )
  {
    *(_QWORD *)(v13 + 472) = v16[14];
    v14 = *((_QWORD *)P + 28);
    v16[14] = 0LL;
    *(_DWORD *)(v14 + 480) = v16[15];
  }
  PfSnCleanupPrefetchHeader(v16);
  _InterlockedDecrement(&dword_140C504B0);
  if ( v4 )
    PfSnPowerBoost((PEX_RUNDOWN_REF)P + 5);
  KiUnstackDetachProcess((__int64)v17, 0);
  if ( !v3 )
  {
    ExReleaseRundownProtection(*((PEX_RUNDOWN_REF *)P + 4));
    PfSnLogAsyncWorker(v1, PfSnEvt_SyncPrefetchingDone_Info);
  }
  PfSnLogAsyncWorker(v1, PfSnEvt_AsyncWorker_Stop);
  PfSnAsyncContextCleanup(P);
  ExFreePoolWithTag(P, 0);
}
