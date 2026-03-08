/*
 * XREFs of ?Materialize_BamoDataSourceProxy@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x1801DD2F0
 * Callers:
 *     ?Thunk_Materialize_BamoDataSourceProxy_5@?$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801DD6C0 (-Thunk_Materialize_BamoDataSourceProxy_5@-$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImp.c)
 * Callees:
 *     ??4?$com_ptr_t@VBaseBamoPeerImpl@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVBaseBamoPeerImpl@BamoImpl@Microsoft@@@Z @ 0x1801038E0 (--4-$com_ptr_t@VBaseBamoPeerImpl@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801B44D0 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateDataSourceProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@dataprovider_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x1801DD0A0 (-CreateDataSourceProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@dataprov.c)
 */

__int64 __fastcall BamoImpl::dataprovider_AutoBamos::BamoPeerImpl::Materialize_BamoDataSourceProxy(
        BamoImpl::dataprovider_AutoBamos::BamoPeerImpl *this,
        struct Microsoft::BamoImpl::BaseBamoConnectionImpl *a2,
        __int64 a3,
        struct Microsoft::Bamo::BamoProxy **a4)
{
  unsigned int v5; // esi
  __int64 v6; // rbx
  __int64 v7; // rcx
  int v8; // eax
  int v10; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v5 = (unsigned int)a2;
  BamoImpl::CreateDataSourceProxy(
    *(BamoImpl **)(*((_QWORD *)this + 3) + 32LL),
    a2,
    (struct dataprovider_AutoBamos::BamoPeer *)&v12,
    a4);
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 56LL))(v12);
  wil::com_ptr_t<Microsoft::BamoImpl::BaseBamoPeerImpl,wil::err_returncode_policy>::operator=(
    (__int64 *)(v6 + 16),
    (void (__fastcall ***)(_QWORD))this);
  *(_DWORD *)(v6 + 24) = v5;
  v7 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 32LL) + 64LL);
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v7 + 40LL))(
         v7,
         *((unsigned int *)this + 9),
         v5,
         v6);
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      15355LL,
      (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v8,
      v10);
  return 0LL;
}
