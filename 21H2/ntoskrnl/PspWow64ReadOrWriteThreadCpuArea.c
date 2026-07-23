/*
 * XREFs of PspWow64ReadOrWriteThreadCpuArea @ 0x1405F5DB8
 * Callers:
 *     PspWow64SetContextThread @ 0x1405F5270 (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x1405F561C (PspWow64GetContextThread.c)
 * Callees:
 *     PsGetThreadTeb @ 0x14022F9A0 (PsGetThreadTeb.c)
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     RtlWow64GetCpuAreaInfo @ 0x1405F6134 (RtlWow64GetCpuAreaInfo.c)
 *     ProbeForWrite @ 0x1406495C0 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PspWow64ReadOrWriteThreadCpuArea(
        _KPROCESS *BugCheckParameter1,
        __int64 a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        _DWORD *a7,
        bool *a8)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v12; // r14
  __int64 ThreadTeb; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  _OWORD *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rax
  _OWORD *v20; // rbx
  __int64 v21; // r8
  __int64 v22; // rax
  struct _KTHREAD *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  struct _KTHREAD *v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  int CpuAreaInfo; // [rsp+24h] [rbp-C4h]
  __int64 v34; // [rsp+28h] [rbp-C0h]
  volatile void *Address[2]; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v36; // [rsp+50h] [rbp-98h]
  __int128 v37; // [rsp+60h] [rbp-88h]
  __int64 v38; // [rsp+70h] [rbp-78h]
  _OWORD v39[3]; // [rsp+78h] [rbp-70h] BYREF

  memset(v39, 0, sizeof(v39));
  *(_OWORD *)Address = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v12 = (signed __int64 *)(a2 + 1280);
  ExAcquirePushLockSharedEx(a2 + 1280, 0LL);
  ThreadTeb = PsGetThreadTeb(a2);
  v34 = ThreadTeb;
  if ( ThreadTeb )
  {
    KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v39);
    v15 = *(_QWORD *)(ThreadTeb + 5256);
    v38 = v15;
    if ( v15 )
    {
      CpuAreaInfo = RtlWow64GetCpuAreaInfo(v15, v14, Address);
      if ( CpuAreaInfo >= 0 )
      {
        if ( a3 )
        {
          v16 = Address[0];
          if ( ((__int64)Address[0] & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)Address[0] + 716 > 0x7FFFFFFF0000LL || (char *)Address[0] + 716 < Address[0] )
            MEMORY[0x7FFFFFFF0000] = 0;
          v17 = 5LL;
          do
          {
            *(_OWORD *)a4 = *v16;
            *(_OWORD *)(a4 + 16) = v16[1];
            *(_OWORD *)(a4 + 32) = v16[2];
            *(_OWORD *)(a4 + 48) = v16[3];
            *(_OWORD *)(a4 + 64) = v16[4];
            *(_OWORD *)(a4 + 80) = v16[5];
            *(_OWORD *)(a4 + 96) = v16[6];
            a4 += 128LL;
            *(_OWORD *)(a4 - 16) = v16[7];
            v16 += 8;
            --v17;
          }
          while ( v17 );
          *(_OWORD *)a4 = *v16;
          *(_OWORD *)(a4 + 16) = v16[1];
          *(_OWORD *)(a4 + 32) = v16[2];
          *(_OWORD *)(a4 + 48) = v16[3];
          *(_QWORD *)(a4 + 64) = *((_QWORD *)v16 + 8);
          *(_DWORD *)(a4 + 72) = *((_DWORD *)v16 + 18);
          if ( a7 )
          {
            v19 = *((_QWORD *)&v36 + 1);
            if ( *((_QWORD *)&v36 + 1) >= 0x7FFFFFFF0000uLL )
              v19 = 0x7FFFFFFF0000LL;
            *a7 = *(_DWORD *)v19;
          }
        }
        else
        {
          v20 = Address[0];
          ProbeForWrite(Address[0], 0x2CCuLL, 4u);
          v21 = 5LL;
          do
          {
            *v20 = *(_OWORD *)a4;
            v20[1] = *(_OWORD *)(a4 + 16);
            v20[2] = *(_OWORD *)(a4 + 32);
            v20[3] = *(_OWORD *)(a4 + 48);
            v20[4] = *(_OWORD *)(a4 + 64);
            v20[5] = *(_OWORD *)(a4 + 80);
            v20[6] = *(_OWORD *)(a4 + 96);
            v20 += 8;
            *(v20 - 1) = *(_OWORD *)(a4 + 112);
            a4 += 128LL;
            --v21;
          }
          while ( v21 );
          *v20 = *(_OWORD *)a4;
          v20[1] = *(_OWORD *)(a4 + 16);
          v20[2] = *(_OWORD *)(a4 + 32);
          v20[3] = *(_OWORD *)(a4 + 48);
          *((_QWORD *)v20 + 8) = *(_QWORD *)(a4 + 64);
          *((_DWORD *)v20 + 18) = *(_DWORD *)(a4 + 72);
          ThreadTeb = v34;
          if ( a7 )
          {
            v22 = *((_QWORD *)&v36 + 1);
            if ( *((_QWORD *)&v36 + 1) >= 0x7FFFFFFF0000uLL )
              v22 = 0x7FFFFFFF0000LL;
            *(_DWORD *)v22 = *a7;
          }
        }
        if ( a8 )
        {
          v18 = *(_QWORD *)(ThreadTeb + 5328);
          if ( v18 )
          {
            if ( (v18 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( (unsigned __int64)(v18 + 8) > 0x7FFFFFFF0000LL || v18 + 8 < (unsigned __int64)(v18 + 4) )
              MEMORY[0x7FFFFFFF0000] = 0;
            *a8 = (*(_DWORD *)(v18 + 4) & 2) != 0;
          }
          else
          {
            *a8 = 0;
          }
        }
      }
    }
    else
    {
      CpuAreaInfo = -1073741811;
    }
    KiUnstackDetachProcess((__int64)v39, 0LL);
    v23 = KeGetCurrentThread();
    if ( _InterlockedCompareExchange64(v12, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v12);
    KeAbPostRelease((ULONG_PTR)v12);
    KeLeaveCriticalRegionThread((__int64)v23, v24, v25, v26);
    return (unsigned int)CpuAreaInfo;
  }
  else
  {
    v28 = KeGetCurrentThread();
    if ( _InterlockedCompareExchange64(v12, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v12);
    KeAbPostRelease((ULONG_PTR)v12);
    KeLeaveCriticalRegionThread((__int64)v28, v29, v30, v31);
    return 3221225547LL;
  }
}
