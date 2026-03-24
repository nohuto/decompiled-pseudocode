/*
 * XREFs of ?UpdatePerfData@MousePerfStage@@QEAAX_K@Z @ 0x1C01C3414
 * Callers:
 *     ?CollectMousePacketPerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePacketPerf@@@Z @ 0x1C0042AD4 (-CollectMousePacketPerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePacketPerf@@@Z.c)
 *     ?CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z @ 0x1C0042DE8 (-CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall MousePerfStage::UpdatePerfData(MousePerfStage *this, unsigned __int64 a2)
{
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  bool v7; // zf
  unsigned __int64 v8; // rcx

  if ( a2 )
  {
    v3 = a2;
    if ( *(_QWORD *)this > a2 )
      v3 = *(_QWORD *)this;
    v4 = *((_QWORD *)this + 1);
    *(_QWORD *)this = v3;
    v5 = a2;
    if ( v4 < a2 )
      v5 = v4;
    v6 = a2 + *((_QWORD *)this + 3);
    *((_QWORD *)this + 1) = v5;
    v7 = (*((_DWORD *)this + 8))++ == -1;
    v8 = *((unsigned int *)this + 8);
    *((_QWORD *)this + 3) = v6;
    if ( v7 )
      *((_QWORD *)this + 2) = 0LL;
    else
      *((_QWORD *)this + 2) = v6 / v8;
  }
}
