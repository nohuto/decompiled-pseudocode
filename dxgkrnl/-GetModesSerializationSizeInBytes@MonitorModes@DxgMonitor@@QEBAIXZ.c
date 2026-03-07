__int64 __fastcall DxgMonitor::MonitorModes::GetModesSerializationSizeInBytes(struct _ERESOURCE *this)
{
  int OwnerTable; // eax
  unsigned int v3; // ebx
  PERESOURCE Resource; // [rsp+30h] [rbp+8h] BYREF

  RESOURCE_LOCK<DxgMonitor::MonitorModes const>::RESOURCE_LOCK<DxgMonitor::MonitorModes const>(&Resource, this);
  OwnerTable = (int)this[1].OwnerTable;
  if ( OwnerTable )
    v3 = 104 * OwnerTable + 8;
  else
    v3 = 112;
  if ( Resource )
  {
    ExReleaseResourceLite(Resource);
    KeLeaveCriticalRegion();
  }
  return v3;
}
