/*
 * XREFs of ?GetStorageProperty@SC_DEVICE@@QEAAJW4_STORAGE_PROPERTY_ID@@PEAPEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x140674348
 * Callers:
 *     ?UpdateStorageProperty@SC_DEVICE@@QEAAJW4_STORAGE_PROPERTY_ID@@@Z @ 0x14067464C (-UpdateStorageProperty@SC_DEVICE@@QEAAJW4_STORAGE_PROPERTY_ID@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x14078FD20 (-Free@SC_ENV@@SAXPEAX@Z.c)
 *     ?Allocate@SC_ENV@@SAPEAX_KKE@Z @ 0x14093D390 (-Allocate@SC_ENV@@SAPEAX_KKE@Z.c)
 */

__int64 __fastcall SC_DEVICE::GetStorageProperty(
        SC_DEVICE *this,
        enum _STORAGE_PROPERTY_ID a2,
        struct _STORAGE_DESCRIPTOR_HEADER **a3)
{
  __int64 v4; // rax
  unsigned int v6; // edx
  int v7; // edi
  unsigned __int8 v8; // r8
  ULONG Size; // esi
  struct _STORAGE_DESCRIPTOR_HEADER *v10; // rbx
  unsigned int v11; // edx
  unsigned __int8 v12; // r8
  SIZE_T NumberOfBytes; // [rsp+40h] [rbp-48h] BYREF
  _DWORD v15[4]; // [rsp+48h] [rbp-40h] BYREF

  *a3 = 0LL;
  v4 = *(_QWORD *)this;
  LODWORD(NumberOfBytes) = 0;
  v15[2] = 0;
  v7 = (*(__int64 (__fastcall **)(SC_DEVICE *, __int64, SIZE_T *))(v4 + 32))(this, 6LL, &NumberOfBytes);
  if ( v7 >= 0 )
  {
    Size = NumberOfBytes;
    v15[1] = 0;
    v15[0] = 6;
    v10 = (struct _STORAGE_DESCRIPTOR_HEADER *)SC_ENV::Allocate((unsigned int)NumberOfBytes, v6, v8);
    if ( v10 )
    {
      while ( 1 )
      {
        v7 = (*(__int64 (__fastcall **)(SC_DEVICE *, __int64, _DWORD *, __int64, struct _STORAGE_DESCRIPTOR_HEADER *, ULONG))(*(_QWORD *)this + 16LL))(
               this,
               2954240LL,
               v15,
               12LL,
               v10,
               Size);
        if ( ((v7 + 0x80000000) & 0x80000000) == 0 && v7 != -2147483643 )
          break;
        if ( v10->Size <= Size )
        {
          v10->Size = Size;
          v7 = (*(__int64 (__fastcall **)(SC_DEVICE *, __int64, struct _STORAGE_DESCRIPTOR_HEADER *))(*(_QWORD *)this + 40LL))(
                 this,
                 6LL,
                 v10);
          if ( v7 >= 0 )
          {
            *a3 = v10;
            return (unsigned int)v7;
          }
          break;
        }
        Size = v10->Size;
        SC_ENV::Free(v10);
        v10 = (struct _STORAGE_DESCRIPTOR_HEADER *)SC_ENV::Allocate(Size, v11, v12);
        if ( !v10 )
          return (unsigned int)-1073741670;
      }
      SC_ENV::Free(v10);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v7;
}
