/*
 * XREFs of ?GetHWND@BamoActivationListenerInputObjectProxy@@UEAA_KXZ @ 0x1800E64F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180005450 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x1800115C4 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 */

unsigned __int64 __fastcall BamoActivationListenerInputObjectProxy::GetHWND(
        BamoActivationListenerInputObjectProxy *this)
{
  __int64 v2; // rbx
  Microsoft::BamoImpl::BamoImplObject *v4; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v4,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  v2 = *((_QWORD *)this + 5);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v4);
  return v2;
}
