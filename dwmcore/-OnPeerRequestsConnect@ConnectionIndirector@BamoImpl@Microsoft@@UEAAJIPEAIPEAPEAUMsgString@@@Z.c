__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::OnPeerRequestsConnect(
        Microsoft::BamoImpl::ConnectionIndirector *this,
        unsigned int a2,
        unsigned int *a3,
        struct MsgString **a4)
{
  Microsoft::BamoImpl::ConnectionIndirector *v5; // rbx
  Microsoft::BamoImpl::BamoImplObject *v9; // [rsp+40h] [rbp+8h] BYREF

  v5 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    (Microsoft::BamoImpl::InternalLock *)&v9,
    (Microsoft::BamoImpl::ConnectionIndirector *)((char *)this - 24));
  LODWORD(v5) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned int *, struct MsgString **))(**((_QWORD **)v5 + 1)
                                                                                               + 32LL))(
                  *((_QWORD *)v5 + 1),
                  a2,
                  a3,
                  a4);
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v9);
  return (unsigned int)v5;
}
