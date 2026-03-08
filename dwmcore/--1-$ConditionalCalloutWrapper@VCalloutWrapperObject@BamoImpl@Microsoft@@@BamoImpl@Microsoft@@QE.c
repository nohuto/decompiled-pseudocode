/*
 * XREFs of ??1?$ConditionalCalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1801B58D4
 * Callers:
 *     ?OnZeroReferenceCount@BaseBamoPeerImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x1801B75E0 (-OnZeroReferenceCount@BaseBamoPeerImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 *     ?OnZeroReferenceCount@BamoStubImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x1801DDF30 (-OnZeroReferenceCount@BamoStubImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 *     ?OnZeroReferenceCount@BamoProxyImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x1801E29C0 (-OnZeroReferenceCount@BamoProxyImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800ACB5C (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180195018 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall Microsoft::BamoImpl::ConditionalCalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~ConditionalCalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_QWORD *)(a1 + 8) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      234LL,
      (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.h",
      a4);
  v5 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)a1;
  if ( v5 )
    Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock(v5);
  if ( *(_QWORD *)(a1 + 8) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      246LL,
      (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.h",
      a4);
}
