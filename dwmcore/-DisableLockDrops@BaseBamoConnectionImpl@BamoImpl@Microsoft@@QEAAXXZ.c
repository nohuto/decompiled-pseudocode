/*
 * XREFs of ?DisableLockDrops@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1801B6250
 * Callers:
 *     ?DisconnectAllObjects@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXPEAPEAUIMessageConversation@@PEAPEAVBaseBamoPeerImpl@23@PEAPEAVBamoStubImpl@23@PEAV?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@PEAV?$vector@PEAVBamoProxyImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoProxyImpl@BamoImpl@Microsoft@@@std@@@8@@Z @ 0x1801B62C0 (-DisconnectAllObjects@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXPEAPEAUIMessageConversatio.c)
 *     ?Dispose@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXXZ @ 0x1801B6520 (-Dispose@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180195018 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::DisableLockDrops(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 216) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      2427LL,
      (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      a4);
  *((_BYTE *)this + 216) = 1;
}
