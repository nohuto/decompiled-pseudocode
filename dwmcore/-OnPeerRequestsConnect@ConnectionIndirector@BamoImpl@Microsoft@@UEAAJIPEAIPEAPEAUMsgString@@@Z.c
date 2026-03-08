/*
 * XREFs of ?OnPeerRequestsConnect@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIPEAIPEAPEAUMsgString@@@Z @ 0x1800AD2A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800ACA2C (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x1800ACA60 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

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
