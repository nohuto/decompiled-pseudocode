/*
 * XREFs of ?SetScalarValue@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIM@Z @ 0x1801F531C
 * Callers:
 *     ?Thunk_SetScalarValue_21@?$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801F5A20 (-Thunk_SetScalarValue_21@-$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEAX.c)
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x1800AC908 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800AC950 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180102DC8 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourceProxyImpl::SetScalarValue(
        BamoImpl::BamoDataSourceProxyImpl *this,
        unsigned int a2,
        float a3,
        const char *a4)
{
  __int64 v4; // r8
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  const char *v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  _BYTE v14[32]; // [rsp+20h] [rbp-38h] BYREF

  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v14,
    *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
    v4,
    a4);
  v7 = (*(__int64 (__fastcall **)(char *, _QWORD))(*((_QWORD *)this - 2) + 128LL))((char *)this - 16, a2);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v14,
    v8,
    v9,
    v10);
  Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, v11, v12);
  return v7;
}
