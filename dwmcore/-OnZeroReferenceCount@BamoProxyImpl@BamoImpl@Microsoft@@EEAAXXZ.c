/*
 * XREFs of ?OnZeroReferenceCount@BamoProxyImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x1801E29C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$ConditionalCalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x1801B5778 (--0-$ConditionalCalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QE.c)
 *     ??1?$ConditionalCalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1801B58D4 (--1-$ConditionalCalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QE.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x1801DFDB0 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 */

void __fastcall Microsoft::BamoImpl::BamoProxyImpl::OnZeroReferenceCount(Microsoft::BamoImpl::BamoProxyImpl *this)
{
  __int64 v2; // r8
  const char *v3; // r9
  __int64 v4; // rax
  __int64 v5; // rdx
  const char *v6; // r9
  __int64 v7; // r8
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v8[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( *((_BYTE *)this + 28) )
  {
    if ( !Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(this) )
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 72LL))(
        *((_QWORD *)this + 2),
        *((unsigned int *)this + 6));
    if ( *((_BYTE *)this + 29) )
    {
      Microsoft::BamoImpl::ConditionalCalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::ConditionalCalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
        v8,
        *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
        v2,
        v3);
      v4 = (*(__int64 (__fastcall **)(Microsoft::BamoImpl::BamoProxyImpl *))(*(_QWORD *)this + 56LL))(this);
      v7 = v4;
      if ( v4 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 24LL))(v4, 1LL);
      Microsoft::BamoImpl::ConditionalCalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~ConditionalCalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
        (__int64)v8,
        v5,
        v7,
        v6);
    }
  }
}
