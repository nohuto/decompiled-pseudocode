/*
 * XREFs of ?SaveStorageProperty@SC_DEVICE@@MEAAXW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x140674570
 * Callers:
 *     ?SaveStorageProperty@SC_DISK@@MEAAXW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x140673690 (-SaveStorageProperty@SC_DISK@@MEAAXW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z.c)
 * Callees:
 *     ?ScExtractDeviceStrings@@YAJPEAU_STORAGE_DEVICE_DESCRIPTOR@@PEAU_UNICODE_STRING@@111@Z @ 0x140672C18 (-ScExtractDeviceStrings@@YAJPEAU_STORAGE_DEVICE_DESCRIPTOR@@PEAU_UNICODE_STRING@@111@Z.c)
 *     ?ExtractFaultDomainIds@SC_DEVICE@@AEAAJXZ @ 0x1406742E8 (-ExtractFaultDomainIds@SC_DEVICE@@AEAAJXZ.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x14078FD20 (-Free@SC_ENV@@SAXPEAX@Z.c)
 */

void __fastcall SC_DEVICE::SaveStorageProperty(
        SC_DEVICE *this,
        enum _STORAGE_PROPERTY_ID a2,
        struct _STORAGE_DESCRIPTOR_HEADER *a3)
{
  __int64 v6; // rbx
  void *v7; // rcx

  if ( a2 )
  {
    switch ( a2 )
    {
      case StorageAdapterProperty:
        v6 = 152LL;
        break;
      case StorageDeviceIdProperty:
        v6 = 184LL;
        break;
      case StorageMiniportProperty:
        v6 = 192LL;
        break;
      case StorageDeviceFaultDomainProperty:
        v6 = 176LL;
        break;
      case StorageDeviceUnsafeShutdownCount|StorageDeviceIdProperty:
        v6 = 168LL;
        break;
      default:
        if ( a3 )
          SC_ENV::Free(a3);
        return;
    }
  }
  else
  {
    v6 = 160LL;
  }
  v7 = *(void **)((char *)this + v6);
  if ( v7 )
    SC_ENV::Free(v7);
  *(_QWORD *)((char *)this + v6) = a3;
  if ( a2 )
  {
    if ( a2 == StorageDeviceFaultDomainProperty )
      SC_DEVICE::ExtractFaultDomainIds(this);
  }
  else
  {
    ScExtractDeviceStrings(
      *((struct _STORAGE_DEVICE_DESCRIPTOR **)this + 20),
      (struct _UNICODE_STRING *)((char *)this + 24),
      (struct _UNICODE_STRING *)((char *)this + 40),
      (struct _UNICODE_STRING *)((char *)this + 56),
      (struct _UNICODE_STRING *)((char *)this + 72));
  }
}
