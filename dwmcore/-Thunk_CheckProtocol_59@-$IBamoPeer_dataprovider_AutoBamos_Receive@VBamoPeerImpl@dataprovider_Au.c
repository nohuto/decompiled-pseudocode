/*
 * XREFs of ?Thunk_CheckProtocol_59@?$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180103BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1801B89E0 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 */

__int64 __fastcall IBamoPeer_dataprovider_AutoBamos_Receive<BamoImpl::dataprovider_AutoBamos::BamoPeerImpl>::Thunk_CheckProtocol_59(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *a2;
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL) + 16LL);
  v5 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 48LL))(v4);
  v6 = *v5 - *v3;
  if ( *v5 == *v3 )
    v6 = v5[1] - v3[1];
  if ( v6 )
  {
    v9 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
           *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(a1 + 24) + 32LL),
           -2018375668,
           0);
    v7 = v9;
    if ( v9 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3BA6,
        (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)(unsigned int)v9);
  }
  else
  {
    return 0;
  }
  return v7;
}
