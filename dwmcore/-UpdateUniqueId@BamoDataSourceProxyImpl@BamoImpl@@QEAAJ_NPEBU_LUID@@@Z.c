/*
 * XREFs of ?UpdateUniqueId@BamoDataSourceProxyImpl@BamoImpl@@QEAAJ_NPEBU_LUID@@@Z @ 0x1801F5DB4
 * Callers:
 *     ?Thunk_UpdateUniqueId_12@?$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801F5B20 (-Thunk_UpdateUniqueId_12@-$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEAX.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoDataSourceProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x1801F5D70 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoDataSourceProxyImpl@BamoImpl@@UEAAXPEAVBamoProxy.c)
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x1800AC908 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800AC950 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180102DC8 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801B44D0 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourceProxyImpl::UpdateUniqueId(
        BamoImpl::BamoDataSourceProxyImpl *this,
        __int64 a2,
        const struct _LUID *a3,
        const char *a4)
{
  char *v4; // rdi
  char v6; // bp
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  const char *v11; // r9
  bool v12; // zf
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  const char *v16; // r9
  int v18[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (char *)this - 16;
  v6 = a2;
  if ( *((_BYTE *)this + 28) )
  {
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      (__int64)v18,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (__int64)a3,
      a4);
    v8 = (*(__int64 (__fastcall **)(char *, const struct _LUID *))(*(_QWORD *)v4 + 88LL))(v4, a3);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        13960LL,
        (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)(unsigned int)v8,
        v18[0]);
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      (__int64)v18,
      v9,
      v10,
      v11);
  }
  v12 = *((_BYTE *)this + 28) == 0;
  *((struct _LUID *)this + 4) = *a3;
  if ( !v12 )
  {
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      (__int64)v18,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (__int64)a3,
      a4);
    v13 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v4 + 96LL))(v4);
    if ( v13 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        13971LL,
        (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)(unsigned int)v13,
        v18[0]);
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      (__int64)v18,
      v14,
      v15,
      v16);
  }
  if ( v6 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, a2, (__int64)a3);
  return 0LL;
}
