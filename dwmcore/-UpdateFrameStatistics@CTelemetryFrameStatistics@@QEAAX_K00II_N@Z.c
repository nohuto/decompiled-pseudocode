/*
 * XREFs of ?UpdateFrameStatistics@CTelemetryFrameStatistics@@QEAAX_K00II_N@Z @ 0x180050AE8
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x18004E7F8 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CTelemetryFrameStatistics::UpdateFrameStatistics(
        CTelemetryFrameStatistics *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        bool a7)
{
  unsigned __int64 v8; // rcx
  double v9; // xmm1_8
  unsigned int v10; // eax
  unsigned __int64 v11; // rcx
  double v12; // xmm1_8
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax

  if ( a7 )
  {
    ++*((_DWORD *)this + 8);
    *((_DWORD *)this + 6) = 0;
    *((_QWORD *)this + 6) += a3 - a2;
    if ( a3 - a2 > *((_QWORD *)this + 7) )
      *((_QWORD *)this + 7) = a3 - a2;
    if ( a3 - *((_QWORD *)this + 2) > 4 * a4 )
      ++*((_DWORD *)this + 9);
    *((_QWORD *)this + 2) = a3;
    if ( a5 )
      ++*((_DWORD *)this + 10);
    if ( a6 )
      ++*((_DWORD *)this + 11);
    v8 = a3 - *(_QWORD *)this;
    if ( (__int64)(a3 - *(_QWORD *)this) < 0 )
    {
      v14 = v8 & 1 | ((a3 - *(_QWORD *)this) >> 1);
      v9 = (double)(int)v14 + (double)(int)v14;
    }
    else
    {
      v9 = (double)(int)v8;
    }
    if ( v9 / ((double)(int)g_qpcFrequency.LowPart / 1000.0) >= 300000.0 )
      CTelemetryFrameStatistics::SendFrameStatisticsTelemetry(this, a3);
  }
  else
  {
    v10 = *((_DWORD *)this + 6) + 1;
    *((_DWORD *)this + 6) = v10;
    if ( v10 > 0x3C )
    {
      if ( !*((_QWORD *)this + 1)
        || ((v11 = a2 - *((_QWORD *)this + 1), (__int64)(a2 - *((_QWORD *)this + 1)) < 0)
          ? (v13 = v11 & 1 | ((a2 - *((_QWORD *)this + 1)) >> 1), v12 = (double)(int)v13 + (double)(int)v13)
          : (v12 = (double)(int)v11),
            v12 / ((double)(int)g_qpcFrequency.LowPart / 1000.0) > 600000.0) )
      {
        CTelemetryFrameStatistics::SendUnpresentedFramesAlarmTelemetry(this, a2);
      }
    }
  }
}
