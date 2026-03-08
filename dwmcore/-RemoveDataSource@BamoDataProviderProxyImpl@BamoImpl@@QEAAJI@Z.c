/*
 * XREFs of ?RemoveDataSource@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z @ 0x1801F50C0
 * Callers:
 *     ?Thunk_RemoveDataSource_5@?$IDataProviderProxy_Receive@VBamoDataProviderProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801F57B0 (-Thunk_RemoveDataSource_5@-$IDataProviderProxy_Receive@VBamoDataProviderProxyImpl@BamoImpl@@@@SA.c)
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x1800AC908 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800AC950 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z @ 0x1800AD020 (-TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180102DC8 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1801B89E0 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataProviderProxyImpl::RemoveDataSource(
        BamoImpl::BamoDataProviderProxyImpl *this,
        unsigned int a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // rdi
  Microsoft::BamoImpl::BamoProxyImpl *v5; // rbx
  char *v6; // rsi
  __int64 v8; // rax
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v9; // r14
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  int v11; // eax
  unsigned int v12; // ebx
  unsigned int v14; // edi
  __int64 v15; // rdx
  __int64 v16; // r8
  const char *v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // r8
  _BYTE v22[40]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = *((_QWORD *)this + 2);
  v5 = 0LL;
  v6 = 0LL;
  v8 = *(_QWORD *)(v4 + 24);
  v9 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v8 + 32);
  if ( a2 )
  {
    Proxy = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetProxy(
              *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v8 + 32),
              *(_DWORD *)(v4 + 36),
              a2);
    v5 = Proxy;
    if ( !Proxy )
    {
      v11 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
              *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v4 + 24) + 32LL),
              0x87B2080C,
              0);
      v12 = v11;
      if ( v11 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2C71,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
          (const char *)(unsigned int)v11);
      return v12;
    }
    v6 = (char *)Proxy - 16;
  }
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v22,
    v9,
    a3,
    a4);
  v14 = (*(__int64 (__fastcall **)(char *, char *))(*((_QWORD *)this - 2) + 112LL))((char *)this - 16, v6);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v22,
    v15,
    v16,
    v17);
  Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, v18, v19);
  if ( v5 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v5, v20, v21);
  return v14;
}
