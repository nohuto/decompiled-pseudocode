/*
 * XREFs of ?FreePrincipalItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXI@Z @ 0x1801B6784
 * Callers:
 *     ?Dispose@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXXZ @ 0x1801B6520 (-Dispose@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801B44D0 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@AEBI@?$vector@IV?$allocator@I@std@@@std@@QEAAPEAIQEAIAEBI@Z @ 0x1801B5194 (--$_Emplace_reallocate@AEBI@-$vector@IV-$allocator@I@std@@@std@@QEAAPEAIQEAIAEBI@Z.c)
 *     ?RemoveItemIdFromConversation@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXI@Z @ 0x1801B77AC (-RemoveItemIdFromConversation@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXI@Z.c)
 */

void __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::FreePrincipalItem(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        unsigned int a2)
{
  int v4; // eax
  _BYTE *v5; // rdx
  int v6; // eax
  int v7; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v9; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  if ( *((_DWORD *)this + 6) )
  {
    if ( *((_DWORD *)this + 6) == GetCurrentThreadId() )
    {
LABEL_3:
      Microsoft::BamoImpl::BaseBamoConnectionImpl::RemoveItemIdFromConversation(this, a2);
      return;
    }
  }
  else
  {
    if ( *((_DWORD *)this + 47) )
      goto LABEL_3;
    v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 7) + 88LL))(*((_QWORD *)this + 7), &v9);
    if ( v4 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        605LL,
        (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v4,
        v7);
    if ( v9 == GetCurrentThreadId() )
      goto LABEL_3;
  }
  v5 = (_BYTE *)*((_QWORD *)this + 25);
  if ( v5 == *((_BYTE **)this + 26) )
  {
    std::vector<unsigned int>::_Emplace_reallocate<unsigned int const &>((_QWORD *)this + 24, v5, &v10);
  }
  else
  {
    *(_DWORD *)v5 = a2;
    *((_QWORD *)this + 25) += 4LL;
  }
  if ( !*((_BYTE *)this + 219) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 12) + 8LL));
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(Microsoft::BamoImpl::BaseBamoConnectionImpl *), Microsoft::BamoImpl::BaseBamoConnectionImpl *, __int64))(**((_QWORD **)this + 6) + 152LL))(
           *((_QWORD *)this + 6),
           Microsoft::BamoImpl::BaseBamoConnectionImpl::FreePrincipalItemsCallback,
           this,
           4LL);
    if ( v6 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        1220LL,
        (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v6,
        v7);
    *((_BYTE *)this + 219) = 1;
  }
}
