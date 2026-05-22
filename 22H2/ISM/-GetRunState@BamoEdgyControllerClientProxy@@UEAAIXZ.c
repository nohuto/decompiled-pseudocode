/*
 * XREFs of ?GetRunState@BamoEdgyControllerClientProxy@@UEAAIXZ @ 0x1800FFE40
 * Callers:
 *     ?OnRunStateChanged@EdgyControllerClientProxy@@MEAAJXZ @ 0x180100030 (-OnRunStateChanged@EdgyControllerClientProxy@@MEAAJXZ.c)
 *     ?RegisterControllerClient@EdgyConnection@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x180177B9C (-RegisterControllerClient@EdgyConnection@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180005450 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x1800115C4 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 */

__int64 __fastcall BamoEdgyControllerClientProxy::GetRunState(BamoEdgyControllerClientProxy *this)
{
  BamoEdgyControllerClientProxy *v1; // rbx
  Microsoft::BamoImpl::BamoImplObject *v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v3,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v1) = *((_DWORD *)v1 + 18);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v3);
  return (unsigned int)v1;
}
