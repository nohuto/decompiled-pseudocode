/*
 * XREFs of ?SetBootstrapProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I@Z @ 0x180166D04
 * Callers:
 *     ?Thunk_SetBootstrapProxy_5@?$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180167390 (-Thunk_SetBootstrapProxy_5@-$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800D7074 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801643CC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetBootstrapProxyCallout@BaseBamoConnection@Bamo@Microsoft@@AEAAJPEAVBamoProxy@23@@Z @ 0x180166F60 (-SetBootstrapProxyCallout@BaseBamoConnection@Bamo@Microsoft@@AEAAJPEAVBamoProxy@23@@Z.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::SetBootstrapProxy(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2,
        __int64 a3)
{
  Microsoft::BamoImpl::BamoProxyImpl *v4; // rdi
  Microsoft::Bamo::BaseBamoConnection *v5; // rbx
  struct Microsoft::Bamo::BamoProxy *v6; // rax
  __int64 v7; // rdx
  int v8; // ebx
  __int64 v9; // r8
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  Microsoft::BamoImpl::BamoProxyImpl *v12; // [rsp+40h] [rbp+8h] BYREF

  if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64, Microsoft::BamoImpl::BamoProxyImpl **))(**((_QWORD **)this + 7)
                                                                                             + 56LL))(
         *((_QWORD *)this + 7),
         *((unsigned int *)a2 + 9),
         a3,
         &v12) < 0 )
  {
    v8 = -2018375668;
    goto LABEL_6;
  }
  v4 = v12;
  v5 = (Microsoft::Bamo::BaseBamoConnection *)*((_QWORD *)this + 2);
  v6 = (struct Microsoft::Bamo::BamoProxy *)(*(__int64 (__fastcall **)(Microsoft::BamoImpl::BamoProxyImpl *))(*(_QWORD *)v12 + 48LL))(v12);
  v8 = Microsoft::Bamo::BaseBamoConnection::SetBootstrapProxyCallout(v5, v6);
  if ( v8 >= 0 )
  {
    if ( !*((_BYTE *)v4 + 30) )
      Microsoft::BamoImpl::BamoProxyImpl::AckReference(v4, v7, v9);
LABEL_6:
    if ( v8 >= 0 )
      return (unsigned int)v8;
  }
  if ( v8 != -2018375668 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4B1,
      (__int64)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  return (unsigned int)v8;
}
