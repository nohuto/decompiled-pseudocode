/*
 * XREFs of ?PauseNewDispatch@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAA_NXZ @ 0x1801E01F0
 * Callers:
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x1801DF3E8 (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801B44D0 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

char __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::PauseNewDispatch(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this)
{
  char v1; // bl
  int v2; // eax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = 0;
  if ( *((_QWORD *)this + 8) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 96LL))(*((_QWORD *)this + 7));
    if ( v2 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        2465LL,
        (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v2,
        v4);
    return 1;
  }
  return v1;
}
