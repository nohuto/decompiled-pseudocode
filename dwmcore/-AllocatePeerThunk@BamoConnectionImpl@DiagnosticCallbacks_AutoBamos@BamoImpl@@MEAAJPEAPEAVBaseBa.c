/*
 * XREFs of ?AllocatePeerThunk@BamoConnectionImpl@DiagnosticCallbacks_AutoBamos@BamoImpl@@MEAAJPEAPEAVBaseBamoPeer@Bamo@Microsoft@@@Z @ 0x1801B60F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x1800AC908 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800AC950 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoImpl::DiagnosticCallbacks_AutoBamos::BamoConnectionImpl::AllocatePeerThunk(
        BamoImpl::DiagnosticCallbacks_AutoBamos::BamoConnectionImpl *this,
        struct Microsoft::Bamo::BaseBamoPeer **a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  const char *v8; // r9
  _BYTE v10[40]; // [rsp+20h] [rbp-28h] BYREF
  struct Microsoft::Bamo::BaseBamoPeer *v11; // [rsp+50h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 2);
  v11 = 0LL;
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v10,
    this,
    a3,
    a4);
  LODWORD(v4) = (*(__int64 (__fastcall **)(__int64, struct Microsoft::Bamo::BaseBamoPeer **))(*(_QWORD *)v4 + 80LL))(
                  v4,
                  &v11);
  *a2 = v11;
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v10,
    v6,
    v7,
    v8);
  return (unsigned int)v4;
}
