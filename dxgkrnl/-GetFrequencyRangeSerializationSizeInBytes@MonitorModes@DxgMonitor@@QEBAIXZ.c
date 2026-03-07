__int64 __fastcall DxgMonitor::MonitorModes::GetFrequencyRangeSerializationSizeInBytes(struct _ERESOURCE *this)
{
  ULONG ActiveEntries; // eax
  unsigned int v3; // ebx
  PERESOURCE Resource; // [rsp+30h] [rbp+8h] BYREF

  RESOURCE_LOCK<DxgMonitor::MonitorModes const>::RESOURCE_LOCK<DxgMonitor::MonitorModes const>(&Resource, this);
  ActiveEntries = this[1].ActiveEntries;
  if ( ActiveEntries )
    v3 = 48 * ActiveEntries + 8;
  else
    v3 = 56;
  if ( Resource )
  {
    ExReleaseResourceLite(Resource);
    KeLeaveCriticalRegion();
  }
  return v3;
}
