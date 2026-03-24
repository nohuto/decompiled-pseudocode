/*
 * XREFs of ?_Destroy@?$_Ref_count@UManipulationThreadTelemetryData@@@std@@EEAAXXZ @ 0x180232B20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall std::_Ref_count<ManipulationThreadTelemetryData>::_Destroy(__int64 a1)
{
  operator delete(*(void **)(a1 + 16));
}
