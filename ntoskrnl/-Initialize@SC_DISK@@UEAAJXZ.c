/*
 * XREFs of ?Initialize@SC_DISK@@UEAAJXZ @ 0x1406732C0
 * Callers:
 *     ?Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x14093D4C8 (-Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ?GenerateId@SC_DISK@@AEAAJXZ @ 0x14067305C (-GenerateId@SC_DISK@@AEAAJXZ.c)
 *     ?Initialize@SC_DEVICE@@UEAAJXZ @ 0x1406744E0 (-Initialize@SC_DEVICE@@UEAAJXZ.c)
 *     ?UpdateStorageProperty@SC_DEVICE@@QEAAJW4_STORAGE_PROPERTY_ID@@@Z @ 0x14067464C (-UpdateStorageProperty@SC_DEVICE@@QEAAJW4_STORAGE_PROPERTY_ID@@@Z.c)
 */

__int64 __fastcall SC_DISK::Initialize(SC_DISK *this)
{
  __int64 result; // rax
  __int64 v3; // rax
  _QWORD *v4; // rdi
  enum _STORAGE_PROPERTY_ID v5; // edx
  unsigned int v6; // eax
  __int128 v7; // [rsp+40h] [rbp-38h] BYREF
  __int128 v8; // [rsp+50h] [rbp-28h]
  __int64 v9; // [rsp+60h] [rbp-18h]

  v7 = 0LL;
  v9 = 0LL;
  v8 = 0LL;
  result = SC_DEVICE::Initialize(this);
  if ( (int)result >= 0 )
  {
    v3 = *((_QWORD *)this + 1) - *(_QWORD *)&GUID_DEVCLASS_SMRDISK.Data1;
    if ( !v3 )
      v3 = *((_QWORD *)this + 2) - *(_QWORD *)GUID_DEVCLASS_SMRDISK.Data4;
    if ( !v3 )
      *((_DWORD *)this + 50) |= 1u;
    v4 = (_QWORD *)((char *)this + 208);
    if ( (*(int (__fastcall **)(SC_DISK *, __int64, _QWORD, _QWORD, char *, int))(*(_QWORD *)this + 16LL))(
           this,
           475228LL,
           0LL,
           0LL,
           (char *)this + 208,
           8) < 0
      || !*v4 )
    {
      result = (*(__int64 (__fastcall **)(SC_DISK *, __int64, _QWORD, _QWORD, __int128 *, int))(*(_QWORD *)this + 16LL))(
                 this,
                 458912LL,
                 0LL,
                 0LL,
                 &v7,
                 40);
      if ( (int)result < 0 )
        return result;
      *v4 = *((_QWORD *)&v8 + 1);
    }
    result = (*(__int64 (__fastcall **)(SC_DISK *, __int64, _QWORD, _QWORD, char *, int))(*(_QWORD *)this + 16LL))(
               this,
               458752LL,
               0LL,
               0LL,
               (char *)this + 216,
               24);
    if ( (int)result >= 0 )
    {
      v6 = *((_DWORD *)this + 59);
      if ( v6 )
      {
        _BitScanReverse(&v6, v6);
        *((_DWORD *)this + 60) = v6;
        *((_QWORD *)this + 31) = *v4 >> *((_DWORD *)this + 60);
        SC_DEVICE::UpdateStorageProperty(this, v5);
        return SC_DISK::GenerateId(this);
      }
      else
      {
        return 3221225635LL;
      }
    }
  }
  return result;
}
