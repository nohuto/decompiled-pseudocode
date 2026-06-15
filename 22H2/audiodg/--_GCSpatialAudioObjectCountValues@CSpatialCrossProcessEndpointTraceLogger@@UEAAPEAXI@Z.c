/*
 * XREFs of ??_GCSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogger@@UEAAPEAXI@Z @ 0x1400677D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001CCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues *__fastcall CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues::`scalar deleting destructor'(
        CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues *this,
        char a2)
{
  *(_QWORD *)this = &CAggregateValuesBase<enum CpGlitchEvent,unsigned int *>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
