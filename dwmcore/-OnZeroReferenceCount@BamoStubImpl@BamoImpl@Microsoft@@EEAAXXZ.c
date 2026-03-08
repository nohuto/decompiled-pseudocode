/*
 * XREFs of ?OnZeroReferenceCount@BamoStubImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x1801DDF30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$ConditionalCalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x1801B5778 (--0-$ConditionalCalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QE.c)
 *     ??1?$ConditionalCalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1801B58D4 (--1-$ConditionalCalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QE.c)
 */

void __fastcall Microsoft::BamoImpl::BamoStubImpl::OnZeroReferenceCount(
        Microsoft::BamoImpl::BamoStubImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  const char *v7; // r9
  __int64 v8; // r8
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v9[3]; // [rsp+20h] [rbp-18h] BYREF

  Microsoft::BamoImpl::ConditionalCalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::ConditionalCalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    v9,
    *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    a3,
    a4);
  v5 = (*(__int64 (__fastcall **)(Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)this + 32LL))(this);
  v8 = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 24LL))(v5, 1LL);
  Microsoft::BamoImpl::ConditionalCalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~ConditionalCalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v9,
    v6,
    v8,
    v7);
}
