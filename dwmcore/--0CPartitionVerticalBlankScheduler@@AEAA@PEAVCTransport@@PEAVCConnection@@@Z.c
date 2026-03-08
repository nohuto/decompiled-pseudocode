/*
 * XREFs of ??0CPartitionVerticalBlankScheduler@@AEAA@PEAVCTransport@@PEAVCConnection@@@Z @ 0x1800D5DAC
 * Callers:
 *     ?MainCompositionThreadLoop@CConnection@@AEAAJXZ @ 0x1800D5CD8 (-MainCompositionThreadLoop@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18003A2A4 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?Reset@?$LinearFitT@$0BAA@@@QEAAXXZ @ 0x18004C6C8 (-Reset@-$LinearFitT@$0BAA@@@QEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Scheduler_VSync_Smoothing@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800AF148 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Scheduler_VSync_Smoothing@@@details@wil@@.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

CPartitionVerticalBlankScheduler *__fastcall CPartitionVerticalBlankScheduler::CPartitionVerticalBlankScheduler(
        CPartitionVerticalBlankScheduler *this,
        struct CTransport *a2,
        struct CConnection *a3)
{
  unsigned __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rax
  _QWORD *v10; // rbx
  void *v11; // rcx

  *(_QWORD *)this = &CPartitionVerticalBlankScheduler::`vftable';
  *((_DWORD *)this + 22) = 16;
  `vector constructor iterator'((char *)this + 96, 256LL, 16LL, (void (__fastcall *)(char *))CFrameInfo::CFrameInfo);
  *((_DWORD *)this + 2197) = -1;
  *((_DWORD *)this + 2196) = -1;
  *((_DWORD *)this + 1161) = -1;
  *((_DWORD *)this + 1160) = -1;
  *((_QWORD *)this + 1097) = g_qpcFrequency.QuadPart / 60;
  *((_QWORD *)this + 1170) = 0LL;
  *((_DWORD *)this + 2326) = GetCurrentThreadId();
  v6 = ((unsigned __int64)*((unsigned int *)this + 1048) << 8) + 96;
  *((_DWORD *)this + 1049) = 15;
  *((_DWORD *)this + 1050) = -1;
  *((_QWORD *)this + 526) = (char *)this + v6;
  *((_QWORD *)this + 527) = (char *)this + 3936;
  *((_DWORD *)this + 1051) = -1;
  *((_BYTE *)this + 4551) = 1;
  *((_QWORD *)this + 6) = a2;
  *((_QWORD *)this + 7) = a3;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Scheduler_VSync_Smoothing>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_Scheduler_VSync_Smoothing>::GetImpl'::`2'::impl,
    1u,
    v7,
    v8);
  v9 = operator new(0x1068uLL);
  v10 = v9;
  if ( v9 )
  {
    v9[11] = 0LL;
    v9[12] = 0LL;
    *v9 = &LinearFitT<256>::`vftable';
    v9[4] = 0x3FF0000000000000LL;
    LinearFitT<256>::Reset((__int64)v9);
    *v10 = &CPartitionVerticalBlankScheduler::SchedulerLinearFit::`vftable';
  }
  else
  {
    v10 = 0LL;
  }
  v11 = (void *)*((_QWORD *)this + 1170);
  *((_QWORD *)this + 1170) = v10;
  if ( v11 )
    operator delete(v11, 0x1068uLL);
  *(_QWORD *)(*((_QWORD *)this + 1170) + 88LL) = 1LL;
  *(_QWORD *)(*((_QWORD *)this + 1170) + 96LL) = 5 * g_qpcFrequency.QuadPart;
  return this;
}
