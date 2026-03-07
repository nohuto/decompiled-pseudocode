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
