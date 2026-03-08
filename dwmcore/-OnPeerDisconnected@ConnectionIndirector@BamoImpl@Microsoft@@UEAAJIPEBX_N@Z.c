/*
 * XREFs of ?OnPeerDisconnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIPEBX_N@Z @ 0x1801B73A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800ACA2C (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x1800ACA60 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?OnPeerDisconnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIPEAX_N@Z @ 0x1801B72BC (-OnPeerDisconnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIPEAX_N@Z.c)
 */

__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::OnPeerDisconnected(
        Microsoft::BamoImpl::ConnectionIndirector *this,
        __int64 a2,
        Microsoft::BamoImpl::BaseBamoPeerImpl *a3,
        char a4)
{
  Microsoft::BamoImpl::ConnectionIndirector *v4; // rbx
  __int64 v7; // rdx
  Microsoft::BamoImpl::BamoImplObject *v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    (Microsoft::BamoImpl::InternalLock *)&v9,
    (Microsoft::BamoImpl::ConnectionIndirector *)((char *)this - 16));
  LODWORD(v4) = Microsoft::BamoImpl::BaseBamoConnectionImpl::OnPeerDisconnected(
                  *((Microsoft::BamoImpl::BaseBamoPeerImpl ***)v4 + 2),
                  v7,
                  a3,
                  a4);
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v9);
  return (unsigned int)v4;
}
