/*
 * XREFs of ?SampleRandomPickStart@MousePerfSummary@@AEAAXXZ @ 0x1C0041798
 * Callers:
 *     ?CollectMousePacketPerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePacketPerf@@@Z @ 0x1C0041664 (-CollectMousePacketPerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePacketPerf@@@Z.c)
 * Callees:
 *     rand @ 0x1C00C56E8 (rand.c)
 */

void __fastcall MousePerfSummary::SampleRandomPickStart(MousePerfSummary *this)
{
  unsigned __int64 v1; // rax

  v1 = *((_QWORD *)this + 64);
  if ( v1 + 1 >= v1 )
  {
    *((_QWORD *)this + 64) = v1 + 1;
    if ( !((unsigned __int64)rand() % *((_QWORD *)this + 64)) )
    {
      *((_QWORD *)this + 69) = *((_QWORD *)this + 53);
      *((_QWORD *)this + 70) = *((_QWORD *)this + 54);
      *((_QWORD *)this + 71) = *((_QWORD *)this + 55);
      *((_QWORD *)this + 72) = *((_QWORD *)this + 56);
      *((_DWORD *)this + 153) = *((_DWORD *)this + 120);
      *((_DWORD *)this + 152) = *((_DWORD *)this + 122);
      *((_BYTE *)this + 520) = 1;
    }
  }
}
