/*
 * XREFs of ?RemoveItemIdFromConversation@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXI@Z @ 0x1801B77AC
 * Callers:
 *     ?FreePrincipalItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXI@Z @ 0x1801B6784 (-FreePrincipalItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXI@Z.c)
 *     ?FreePrincipalItemsCallback@BaseBamoConnectionImpl@BamoImpl@Microsoft@@CAJPEAX@Z @ 0x1801B68C0 (-FreePrincipalItemsCallback@BaseBamoConnectionImpl@BamoImpl@Microsoft@@CAJPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801B44D0 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::RemoveItemIdFromConversation(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        unsigned int a2)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v4; // [rsp+40h] [rbp+8h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 8) + 48LL))(
         *((_QWORD *)this + 8),
         *((unsigned int *)this + 7),
         a2,
         0LL);
  if ( v2 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1313LL,
      (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v2,
      (int)&v4);
}
