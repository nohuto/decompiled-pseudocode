/*
 * XREFs of ?UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ @ 0x1C01CAEC8
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C01CB020 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?FinishCommand@BLTQUEUE@@AEAAXJ@Z @ 0x1C01CBAB0 (-FinishCommand@BLTQUEUE@@AEAAXJ@Z.c)
 *     ?StartVSync@BLTQUEUE@@AEAAXHW4VsyncEvent@1@@Z @ 0x1C01CBAFC (-StartVSync@BLTQUEUE@@AEAAXHW4VsyncEvent@1@@Z.c)
 *     ?StopVSync@BLTQUEUE@@AEAAXHW4VsyncEvent@1@@Z @ 0x1C03D0170 (-StopVSync@BLTQUEUE@@AEAAXHW4VsyncEvent@1@@Z.c)
 */

void __fastcall BLTQUEUE::UpdateDisplayModeInfoWorker(BLTQUEUE *this)
{
  LARGE_INTEGER v2; // rax
  __int64 v3; // rcx
  int v4; // r9d
  unsigned int v5; // edx
  LARGE_INTEGER v6; // rcx
  _BYTE v7[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+30h] [rbp-18h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+50h] [rbp+8h] BYREF

  *((_QWORD *)this + 46) = *((_QWORD *)this + 73);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v7, (struct _KTHREAD **)this + 51, 0);
  DXGPUSHLOCK::AcquireExclusive(v8);
  PerformanceFrequency.QuadPart = 0LL;
  v9 = 2;
  v2 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v3 = *((unsigned int *)this + 92);
  v4 = *((_DWORD *)this + 148);
  *((LARGE_INTEGER *)this + 55) = v2;
  *((_QWORD *)this + 58) = PerformanceFrequency.QuadPart * *((unsigned int *)this + 93) / v3;
  v5 = 40 * v4 / 0x3E8u;
  *((_DWORD *)this + 118) = v5;
  v6 = *(LARGE_INTEGER *)this;
  *((_DWORD *)this + 119) = v5 + v4;
  *((_DWORD *)this + 120) = v5 + v4 + 5 * v4 / 0x3E8u;
  if ( v6.QuadPart )
    *((_DWORD *)this + 65) = *(_DWORD *)(4000LL * *((unsigned int *)this + 64)
                                       + *(_QWORD *)(*(_QWORD *)(v6.QuadPart + 88) + 128LL)
                                       + 1088);
  if ( (*((_DWORD *)this + 238) & 2) != 0 && *((_DWORD *)this + 34) != 1 )
  {
    BLTQUEUE::StopVSync(this, 1LL, 4LL);
    BLTQUEUE::StartVSync(this, 1LL, 4LL);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v7);
  *((_BYTE *)this + 570) = 0;
  BLTQUEUE::FinishCommand(this, 0);
}
