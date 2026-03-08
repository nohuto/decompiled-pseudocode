/*
 * XREFs of ?UpdateStorageProperty@SC_DEVICE@@QEAAJW4_STORAGE_PROPERTY_ID@@@Z @ 0x14067464C
 * Callers:
 *     ?Initialize@SC_DISK@@UEAAJXZ @ 0x1406732C0 (-Initialize@SC_DISK@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ?GetStorageProperty@SC_DEVICE@@QEAAJW4_STORAGE_PROPERTY_ID@@PEAPEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x140674348 (-GetStorageProperty@SC_DEVICE@@QEAAJW4_STORAGE_PROPERTY_ID@@PEAPEAU_STORAGE_DESCRIPTOR_HEADER@@@.c)
 */

__int64 __fastcall SC_DEVICE::UpdateStorageProperty(SC_DEVICE *this, enum _STORAGE_PROPERTY_ID a2)
{
  int StorageProperty; // ebx
  struct _STORAGE_DESCRIPTOR_HEADER *v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  StorageProperty = SC_DEVICE::GetStorageProperty(this, a2, &v5);
  if ( StorageProperty >= 0 )
    (*(void (__fastcall **)(SC_DEVICE *, __int64, struct _STORAGE_DESCRIPTOR_HEADER *))(*(_QWORD *)this + 48LL))(
      this,
      6LL,
      v5);
  return (unsigned int)StorageProperty;
}
