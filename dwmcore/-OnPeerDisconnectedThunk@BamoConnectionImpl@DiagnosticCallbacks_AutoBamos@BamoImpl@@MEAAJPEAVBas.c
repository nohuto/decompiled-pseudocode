/*
 * XREFs of ?OnPeerDisconnectedThunk@BamoConnectionImpl@DiagnosticCallbacks_AutoBamos@BamoImpl@@MEAAJPEAVBaseBamoPeerImpl@3Microsoft@@_N@Z @ 0x1801B7450
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x1800AC908 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800AC950 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoImpl::DiagnosticCallbacks_AutoBamos::BamoConnectionImpl::OnPeerDisconnectedThunk(
        BamoImpl::DiagnosticCallbacks_AutoBamos::BamoConnectionImpl *this,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // rbx
  char v5; // si
  __int64 v6; // rdi
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r8
  const char *v10; // r9
  _BYTE v12[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = *((_QWORD *)a2 + 2);
  v5 = a3;
  v6 = *((_QWORD *)this + 2);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v12,
    this,
    a3,
    a4);
  LOBYTE(v7) = v5;
  LODWORD(v4) = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v6 + 104LL))(v6, v4, v7);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v12,
    v8,
    v9,
    v10);
  return (unsigned int)v4;
}
