/*
 * XREFs of ?SetVector4Value@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIMMMM@Z @ 0x1801F884C
 * Callers:
 *     ?Thunk_SetVector4Value_36@?$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801F8E30 (-Thunk_SetVector4Value_36@-$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEA.c)
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x1800AD028 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800AD070 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1801038C8 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourceProxyImpl::SetVector4Value(
        BamoImpl::BamoDataSourceProxyImpl *this,
        unsigned int a2,
        float a3,
        float a4)
{
  __int64 v4; // r8
  const char *v5; // r9
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  const char *v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  _BYTE v15[32]; // [rsp+40h] [rbp-48h] BYREF

  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v15,
    *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
    v4,
    v5);
  v8 = (*(__int64 (__fastcall **)(char *, _QWORD))(*((_QWORD *)this - 2) + 152LL))((char *)this - 16, a2);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v15,
    v9,
    v10,
    v11);
  Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, v12, v13);
  return v8;
}
