__int64 __fastcall XDCOBJ::ipfdDevMaxGet(XDCOBJ *this)
{
  int v2; // edi
  __int64 v3; // rbx
  _QWORD *v4; // rcx
  __int64 DeviceHdev; // rax
  __int64 (__fastcall *v6)(_QWORD, __int64, _QWORD); // rax
  struct _RECTL v8; // [rsp+38h] [rbp-9h] BYREF
  __int128 v9; // [rsp+48h] [rbp+7h] BYREF
  __int64 v10; // [rsp+58h] [rbp+17h]
  int v11; // [rsp+60h] [rbp+1Fh]
  _QWORD v12[2]; // [rsp+68h] [rbp+27h] BYREF
  __int16 v13; // [rsp+78h] [rbp+37h]
  __int64 v14; // [rsp+80h] [rbp+3Fh]
  __int64 v15; // [rsp+88h] [rbp+47h]

  v2 = 0;
  v3 = *(_QWORD *)(*(_QWORD *)this + 48LL);
  v12[1] = 0LL;
  v13 = 256;
  v9 = 0LL;
  v15 = 0LL;
  v14 = 0LL;
  v12[0] = 0LL;
  v11 = 1;
  if ( (*(_DWORD *)(v3 + 40) & 1) != 0 )
  {
    Gre::Base::Globals(this);
    *(_QWORD *)&v9 = *(_QWORD *)(v3 + 48);
    v10 = v3;
    GreAcquireSemaphore(v9);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v9, 11LL);
  }
  if ( (*(_DWORD *)(v3 + 40) & 0x20000) != 0 )
  {
    v4 = *(_QWORD **)(*(_QWORD *)this + 48LL);
    v8 = *(struct _RECTL *)(*(_QWORD *)this + 1032LL);
    DeviceHdev = hdevFindDeviceHdev(v4, &v8, 0LL);
    if ( DeviceHdev )
      v3 = DeviceHdev;
  }
  v6 = *(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v3 + 3104);
  if ( v6 )
  {
    v2 = v6(*(_QWORD *)(v3 + 1768), 1LL, 0LL);
    if ( v2 < 0 )
      v2 = 0;
  }
  *(_WORD *)(*(_QWORD *)this + 2088LL) = v2;
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v9);
  if ( v12[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v12);
  return (unsigned int)v2;
}
