/*
 * XREFs of ?GetBufferingMessageCallHost@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBufferingMessageCallHost@23@XZ @ 0x1801B694C
 * Callers:
 *     ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x1800ACFF4 (-GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180195018 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0BufferingMessageCallHost@BamoImpl@Microsoft@@QEAA@PEAUIMessageCallSendHost@@@Z @ 0x1801B57EC (--0BufferingMessageCallHost@BamoImpl@Microsoft@@QEAA@PEAUIMessageCallSendHost@@@Z.c)
 */

struct Microsoft::BamoImpl::BufferingMessageCallHost *__fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::GetBufferingMessageCallHost(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this)
{
  struct Microsoft::BamoImpl::BufferingMessageCallHost *result; // rax
  Microsoft::BamoImpl::BufferingMessageCallHost *v3; // rax
  const char *v4; // r9
  __int64 v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  result = (struct Microsoft::BamoImpl::BufferingMessageCallHost *)*((_QWORD *)this + 11);
  if ( !result )
  {
    v3 = (Microsoft::BamoImpl::BufferingMessageCallHost *)operator new(0x68uLL);
    if ( v3 )
      v3 = Microsoft::BamoImpl::BufferingMessageCallHost::BufferingMessageCallHost(
             v3,
             *((struct IMessageCallSendHost **)this + 9));
    v5 = *((_QWORD *)this + 11);
    *((_QWORD *)this + 11) = v3;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    result = (struct Microsoft::BamoImpl::BufferingMessageCallHost *)*((_QWORD *)this + 11);
    if ( !result )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        661LL,
        (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        v4);
  }
  return result;
}
