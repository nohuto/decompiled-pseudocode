/*
 * XREFs of ?TryGetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z @ 0x1800AD05C
 * Callers:
 *     ?TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z @ 0x1800AD020 (-TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z.c)
 *     ?TryGetPrincipal@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoPrincipalImpl@23@I@Z @ 0x1800AD394 (-TryGetPrincipal@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoPrincipalImpl@23@I@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801B44D0 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

struct Microsoft::BamoImpl::ConversationItem *__fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetItem(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        __int64 a2,
        __int64 a3)
{
  struct Microsoft::BamoImpl::ConversationItem *result; // rax
  unsigned int v4; // eax
  int v5; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v7; // [rsp+58h] [rbp+20h] BYREF

  result = 0LL;
  v7 = 0LL;
  if ( (_DWORD)a3 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**((_QWORD **)this + 8) + 56LL))(
           *((_QWORD *)this + 8),
           a2,
           a3,
           &v7);
    if ( (int)(v4 + 0x80000000) >= 0 && v4 != -2018375675 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x48A,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)v4,
        v5);
    return (struct Microsoft::BamoImpl::ConversationItem *)v7;
  }
  return result;
}
