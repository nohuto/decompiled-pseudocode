/*
 * XREFs of ?OnZeroReferenceCount@BaseBamoPeerImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x1801B75E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$ConditionalCalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x1801B5778 (--0-$ConditionalCalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QE.c)
 *     ??1?$ConditionalCalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1801B58D4 (--1-$ConditionalCalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QE.c)
 */

void __fastcall Microsoft::BamoImpl::BaseBamoPeerImpl::OnZeroReferenceCount(
        Microsoft::BamoImpl::BaseBamoPeerImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  const char *v7; // r9
  void (__fastcall ***v8)(_QWORD, __int64); // rcx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v9[3]; // [rsp+20h] [rbp-18h] BYREF

  Microsoft::BamoImpl::ConditionalCalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::ConditionalCalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    v9,
    *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)this + 3) + 32LL),
    a3,
    a4);
  v8 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 2);
  if ( v8 )
    (**v8)(v8, 1LL);
  Microsoft::BamoImpl::ConditionalCalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~ConditionalCalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v9,
    v5,
    v6,
    v7);
}
