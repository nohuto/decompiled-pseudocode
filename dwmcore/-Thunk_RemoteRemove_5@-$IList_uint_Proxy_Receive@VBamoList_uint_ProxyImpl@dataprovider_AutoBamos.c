/*
 * XREFs of ?Thunk_RemoteRemove_5@?$IList_uint_Proxy_Receive@VBamoList_uint_ProxyImpl@dataprovider_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@SAJPEAXPEAPEAX@Z @ 0x1801F56B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x1800AC908 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800AC950 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180102DC8 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::Bamo::Lib::dataprovider_AutoBamos::IList_uint_Proxy_Receive<Microsoft::Bamo::Lib::BamoImpl::dataprovider_AutoBamos::BamoList_uint_ProxyImpl>::Thunk_RemoteRemove_5(
        Microsoft::BamoImpl::BamoProxyImpl *this,
        unsigned int **a2,
        __int64 a3,
        const char *a4)
{
  unsigned int v5; // ebx
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  const char *v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  _BYTE v13[40]; // [rsp+20h] [rbp-28h] BYREF

  v5 = **a2;
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v13,
    *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
    a3,
    a4);
  v6 = (*(__int64 (__fastcall **)(char *, _QWORD))(*((_QWORD *)this - 2) + 96LL))((char *)this - 16, v5);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v13,
    v7,
    v8,
    v9);
  Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, v10, v11);
  return v6;
}
