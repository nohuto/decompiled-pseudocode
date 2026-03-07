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
