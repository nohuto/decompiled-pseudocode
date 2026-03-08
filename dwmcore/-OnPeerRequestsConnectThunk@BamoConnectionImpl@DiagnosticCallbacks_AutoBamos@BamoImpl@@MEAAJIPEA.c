/*
 * XREFs of ?OnPeerRequestsConnectThunk@BamoConnectionImpl@DiagnosticCallbacks_AutoBamos@BamoImpl@@MEAAJIPEAIPEAPEAUMsgString@@@Z @ 0x1801B74C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x1800AC908 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800AC950 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoImpl::DiagnosticCallbacks_AutoBamos::BamoConnectionImpl::OnPeerRequestsConnectThunk(
        BamoImpl::DiagnosticCallbacks_AutoBamos::BamoConnectionImpl *this,
        unsigned int a2,
        unsigned int *a3,
        struct MsgString **a4)
{
  __int64 v4; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  const char *v10; // r9
  _BYTE v12[40]; // [rsp+30h] [rbp-28h] BYREF

  v4 = *((_QWORD *)this + 2);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v12,
    this,
    (__int64)a3,
    (const char *)a4);
  LODWORD(v4) = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *, struct MsgString **))(*(_QWORD *)v4 + 88LL))(
                  v4,
                  a2,
                  a3,
                  a4);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v12,
    v8,
    v9,
    v10);
  return (unsigned int)v4;
}
