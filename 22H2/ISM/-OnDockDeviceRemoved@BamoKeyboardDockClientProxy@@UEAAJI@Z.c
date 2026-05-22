/*
 * XREFs of ?OnDockDeviceRemoved@BamoKeyboardDockClientProxy@@UEAAJI@Z @ 0x180128E40
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180005450 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x1800115C4 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?OnDockDeviceRemoved@BamoKeyboardDockClientProxyImpl@BamoImpl@@QEAAJI@Z @ 0x180128E9C (-OnDockDeviceRemoved@BamoKeyboardDockClientProxyImpl@BamoImpl@@QEAAJI@Z.c)
 */

__int64 __fastcall BamoKeyboardDockClientProxy::OnDockDeviceRemoved(BamoKeyboardDockClientProxy *this, unsigned int a2)
{
  BamoKeyboardDockClientProxy *v3; // rbx
  Microsoft::BamoImpl::BamoImplObject *v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v5,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v3) = BamoImpl::BamoKeyboardDockClientProxyImpl::OnDockDeviceRemoved(
                  (BamoKeyboardDockClientProxy *)((char *)v3 + 8),
                  a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v5);
  return (unsigned int)v3;
}
