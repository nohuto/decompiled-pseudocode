/*
 * XREFs of ?SetClient@PTPEngineTraceProducer@@UEAAXPEAVIPTPEngineClient@@@Z @ 0x1C00D6200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PTPEngineTraceProducer::SetClient(PTPEngineTraceProducer *this, struct IPTPEngineClient *a2)
{
  *((_QWORD *)this + 4) = a2;
}
