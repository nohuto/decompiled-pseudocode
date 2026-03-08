/*
 * XREFs of ?Thunk_MarkProxyReady_5@?$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800AE3B0
 * Callers:
 *     <none>
 * Callees:
 *     ?TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z @ 0x1800AD020 (-TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1801B89E0 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 */

__int64 __fastcall IBamoPeer_dataprovider_AutoBamos_Receive<BamoImpl::dataprovider_AutoBamos::BamoPeerImpl>::Thunk_MarkProxyReady_5(
        __int64 a1,
        unsigned int **a2)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v2; // rbx
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  __int64 v4; // rax
  unsigned int v5; // ebx
  int v7; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(a1 + 24) + 32LL);
  Proxy = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetProxy(v2, *(_DWORD *)(a1 + 36), **a2);
  if ( Proxy )
  {
    *((_BYTE *)Proxy + 28) = 1;
    v4 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoProxyImpl *))(*(_QWORD *)Proxy + 56LL))(Proxy);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 64LL))(v4);
    return 0;
  }
  else
  {
    v7 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v2, -2018375668, 0);
    v5 = v7;
    if ( v7 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5A7,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v7,
        v8);
  }
  return v5;
}
