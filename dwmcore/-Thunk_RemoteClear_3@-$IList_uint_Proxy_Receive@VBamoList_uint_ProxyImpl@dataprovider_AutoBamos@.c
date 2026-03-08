/*
 * XREFs of ?Thunk_RemoteClear_3@?$IList_uint_Proxy_Receive@VBamoList_uint_ProxyImpl@dataprovider_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@SAJPEAXPEAPEAX@Z @ 0x1801F55B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x1800AC908 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800AC950 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180102DC8 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::Bamo::Lib::dataprovider_AutoBamos::IList_uint_Proxy_Receive<Microsoft::Bamo::Lib::BamoImpl::dataprovider_AutoBamos::BamoList_uint_ProxyImpl>::Thunk_RemoteClear_3(
        Microsoft::BamoImpl::BamoProxyImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  const char *v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  _BYTE v12[40]; // [rsp+20h] [rbp-28h] BYREF

  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v12,
    *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
    a3,
    a4);
  v5 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 2) + 112LL))((char *)this - 16);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v12,
    v6,
    v7,
    v8);
  Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, v9, v10);
  return v5;
}
