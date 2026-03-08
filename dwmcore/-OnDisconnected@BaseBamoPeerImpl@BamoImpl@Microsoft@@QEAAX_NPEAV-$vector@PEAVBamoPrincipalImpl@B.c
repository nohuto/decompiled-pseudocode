/*
 * XREFs of ?OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAX_NPEAV?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@PEAPEAVBamoStubImpl@23@2@Z @ 0x1801B708C
 * Callers:
 *     ?DisconnectAllObjects@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXPEAPEAUIMessageConversation@@PEAPEAVBaseBamoPeerImpl@23@PEAPEAVBamoStubImpl@23@PEAV?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@PEAV?$vector@PEAVBamoProxyImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoProxyImpl@BamoImpl@Microsoft@@@std@@@8@@Z @ 0x1801B62C0 (-DisconnectAllObjects@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXPEAPEAUIMessageConversatio.c)
 *     ?OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1801B6FE4 (-OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180195018 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?DisconnectFromPrincipal@BamoStubImpl@BamoImpl@Microsoft@@QEAAX_NPEAV?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@@Z @ 0x1801B6420 (-DisconnectFromPrincipal@BamoStubImpl@BamoImpl@Microsoft@@QEAAX_NPEAV-$vector@PEAVBamoPrincipalI.c)
 */

void __fastcall Microsoft::BamoImpl::BaseBamoPeerImpl::OnDisconnected(
        __int64 a1,
        char a2,
        __int64 a3,
        char *a4,
        _QWORD *a5)
{
  _QWORD *v5; // rbx
  __int64 v8; // r8
  _QWORD *v9; // rcx
  _QWORD *i; // rax
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = *(_QWORD **)(a1 + 56);
  *(_BYTE *)(a1 + 49) = 1;
  *(_QWORD *)a4 = v5;
  *a5 = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  while ( v5 )
  {
    v8 = v5[3];
    v9 = 0LL;
    for ( i = *(_QWORD **)(v8 + 32); i; i = (_QWORD *)i[5] )
    {
      if ( i == v5 )
      {
        v11 = v5[5];
        if ( v9 )
          v9[5] = v11;
        else
          *(_QWORD *)(v8 + 32) = v11;
        v5[5] = 0LL;
        break;
      }
      v9 = i;
    }
    if ( !i )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        727LL,
        (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
        a4);
    Microsoft::BamoImpl::BamoStubImpl::DisconnectFromPrincipal((__int64)v5, a2, a3);
    *a5 = v5;
    v5 = (_QWORD *)v5[6];
  }
}
