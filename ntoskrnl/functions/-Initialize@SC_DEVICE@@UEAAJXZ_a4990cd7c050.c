__int64 __fastcall SC_DEVICE::Initialize(SC_DEVICE *this)
{
  __int64 v2; // rax
  int v3; // ebx
  void *v4; // rcx
  void *v6; // [rsp+20h] [rbp-38h] BYREF
  _GUID fmtid; // [rsp+28h] [rbp-30h] BYREF
  unsigned int pid; // [rsp+38h] [rbp-20h]

  v6 = 0LL;
  pid = DEVPKEY_Device_ClassGuid.pid;
  v2 = *(_QWORD *)this;
  fmtid = DEVPKEY_Device_ClassGuid.fmtid;
  v3 = (*(__int64 (__fastcall **)(SC_DEVICE *, _GUID *, void **))(v2 + 24))(this, &fmtid, &v6);
  if ( v3 < 0 )
  {
    return 0;
  }
  else
  {
    v4 = v6;
    *(_OWORD *)((char *)this + 8) = *(_OWORD *)v6;
    SC_ENV::Free(v4);
  }
  return (unsigned int)v3;
}
