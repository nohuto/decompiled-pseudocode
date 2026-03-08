/*
 * XREFs of PspWow64ReadOrWriteThreadCpuArea @ 0x14077C5B8
 * Callers:
 *     PspWow64GetContextThread @ 0x14077BF00 (PspWow64GetContextThread.c)
 *     PspWow64SetContextThread @ 0x14077C1CC (PspWow64SetContextThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     PsGetThreadTeb @ 0x1402ECAE0 (PsGetThreadTeb.c)
 *     KiStackAttachProcess @ 0x14030DF30 (KiStackAttachProcess.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     RtlWow64GetCpuAreaInfo @ 0x14077C93C (RtlWow64GetCpuAreaInfo.c)
 *     ProbeForWrite @ 0x1407C4030 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
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
  __int64 v14; // rcx
  _OWORD *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  _DWORD *v18; // rcx
  __int64 v19; // rax
  _OWORD *v20; // rbx
  __int64 v21; // r8
  __int64 v22; // rax
  struct _KTHREAD *v23; // rbx
  struct _KTHREAD *v25; // rbx
  int CpuAreaInfo; // [rsp+24h] [rbp-C4h]
  __int64 v28; // [rsp+28h] [rbp-C0h]
  volatile void *Address[2]; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v30; // [rsp+50h] [rbp-98h]
  __int128 v31; // [rsp+60h] [rbp-88h]
  __int64 v32; // [rsp+70h] [rbp-78h]
  $115DCDF994C6370D29323EAB0E0C9502 v33; // [rsp+78h] [rbp-70h] BYREF

  memset(&v33, 0, sizeof(v33));
  *(_OWORD *)Address = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v12 = (signed __int64 *)(a2 + 1360);
  ExAcquirePushLockSharedEx(a2 + 1360, 0LL);
  ThreadTeb = PsGetThreadTeb(a2);
  v28 = ThreadTeb;
  if ( ThreadTeb )
  {
    KiStackAttachProcess(BugCheckParameter1, 0, (__int64)&v33);
    v14 = *(_QWORD *)(ThreadTeb + 5256);
    v32 = v14;
    if ( v14 )
    {
      CpuAreaInfo = RtlWow64GetCpuAreaInfo(v14, 332LL, Address);
      if ( CpuAreaInfo >= 0 )
      {
        if ( a3 )
        {
          v15 = Address[0];
          if ( ((__int64)Address[0] & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)Address[0] + 716 > 0x7FFFFFFF0000LL || (char *)Address[0] + 716 < Address[0] )
            MEMORY[0x7FFFFFFF0000] = 0;
          v16 = 5LL;
          do
          {
            *(_OWORD *)a4 = *v15;
            *(_OWORD *)(a4 + 16) = v15[1];
            *(_OWORD *)(a4 + 32) = v15[2];
            *(_OWORD *)(a4 + 48) = v15[3];
            *(_OWORD *)(a4 + 64) = v15[4];
            *(_OWORD *)(a4 + 80) = v15[5];
            *(_OWORD *)(a4 + 96) = v15[6];
            a4 += 128LL;
            *(_OWORD *)(a4 - 16) = v15[7];
            v15 += 8;
            --v16;
          }
          while ( v16 );
          *(_OWORD *)a4 = *v15;
          *(_OWORD *)(a4 + 16) = v15[1];
          *(_OWORD *)(a4 + 32) = v15[2];
          *(_OWORD *)(a4 + 48) = v15[3];
          *(_QWORD *)(a4 + 64) = *((_QWORD *)v15 + 8);
          *(_DWORD *)(a4 + 72) = *((_DWORD *)v15 + 18);
          if ( a7 )
          {
            v19 = *((_QWORD *)&v30 + 1);
            if ( *((_QWORD *)&v30 + 1) >= 0x7FFFFFFF0000uLL )
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
          ThreadTeb = v28;
          if ( a7 )
          {
            v22 = *((_QWORD *)&v30 + 1);
            if ( *((_QWORD *)&v30 + 1) >= 0x7FFFFFFF0000uLL )
              v22 = 0x7FFFFFFF0000LL;
            *(_DWORD *)v22 = *a7;
          }
        }
        if ( a8 )
        {
          v17 = *(_QWORD *)(ThreadTeb + 5328);
          if ( v17 )
          {
            if ( (v17 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v18 = (_DWORD *)(v17 + 4);
            if ( (unsigned __int64)(v17 + 8) > 0x7FFFFFFF0000LL || v17 + 8 < (unsigned __int64)v18 )
              MEMORY[0x7FFFFFFF0000] = 0;
            *a8 = (*v18 & 2) != 0;
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
    KiUnstackDetachProcess(&v33);
    v23 = KeGetCurrentThread();
    if ( _InterlockedCompareExchange64(v12, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v12);
    KeAbPostRelease((ULONG_PTR)v12);
    KeLeaveCriticalRegionThread((__int64)v23);
    return (unsigned int)CpuAreaInfo;
  }
  else
  {
    v25 = KeGetCurrentThread();
    if ( _InterlockedCompareExchange64(v12, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v12);
    KeAbPostRelease((ULONG_PTR)v12);
    KeLeaveCriticalRegionThread((__int64)v25);
    return 3221225547LL;
  }
}
