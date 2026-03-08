/*
 * XREFs of ?UpdateUniqueId@BamoDataProviderProxyImpl@BamoImpl@@QEAAJ_NPEBU_LUID@@@Z @ 0x180102D54
 * Callers:
 *     ?Thunk_UpdateUniqueId_12@?$IDataProviderProxy_Receive@VBamoDataProviderProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180104260 (-Thunk_UpdateUniqueId_12@-$IDataProviderProxy_Receive@VBamoDataProviderProxyImpl@BamoImpl@@@@SAJ.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoDataProviderProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x1801F5D50 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoDataProviderProxyImpl@BamoImpl@@UEAAXPEAVBamoPro.c)
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x1800AC908 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800AC950 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180102DC8 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801B44D0 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataProviderProxyImpl::UpdateUniqueId(
        BamoImpl::BamoDataProviderProxyImpl *this,
        char a2,
        const struct _LUID *a3,
        const char *a4)
{
  char *v4; // rdi
  bool v8; // zf
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  const char *v13; // r9
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  const char *v17; // r9
  int v18[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (char *)this - 16;
  if ( *((_BYTE *)this + 28) )
  {
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      (__int64)v18,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (__int64)a3,
      a4);
    v10 = (*(__int64 (__fastcall **)(char *, const struct _LUID *))(*(_QWORD *)v4 + 88LL))(v4, a3);
    if ( v10 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2BF2,
        (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)(unsigned int)v10,
        v18[0]);
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      (__int64)v18,
      v11,
      v12,
      v13);
  }
  v8 = *((_BYTE *)this + 28) == 0;
  *((struct _LUID *)this + 4) = *a3;
  if ( !v8 )
  {
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      (__int64)v18,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (__int64)a3,
      a4);
    v14 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v4 + 96LL))(v4);
    if ( v14 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2BFD,
        (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)(unsigned int)v14,
        v18[0]);
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      (__int64)v18,
      v15,
      v16,
      v17);
  }
  if ( a2 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(this);
  return 0LL;
}
