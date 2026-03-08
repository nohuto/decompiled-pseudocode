/*
 * XREFs of ?CreateList_uint_Proxy@dataprovider_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@YAXPEAVBaseBamoConnectionImpl@25@PEAVBamoPeer@1@PEAPEAVBamoProxy@45@@Z @ 0x1801DD158
 * Callers:
 *     ?Materialize_Microsoft_Bamo_Lib_dataprovider_AutoBamos_BamoList_uint_Proxy@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x1801DD3A8 (-Materialize_Microsoft_Bamo_Lib_dataprovider_AutoBamos_BamoList_uint_Proxy@BamoPeerImpl@dataprov.c)
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x1800AC908 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800AC950 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180195018 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801B44D0 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateProxy_List@@YAJPEAVBamoPeer@dataprovider_AutoBamos@@PEAPEAV?$ListProxy@I@2Lib@Bamo@Microsoft@@@Z @ 0x1801F4844 (-CreateProxy_List@@YAJPEAVBamoPeer@dataprovider_AutoBamos@@PEAPEAV-$ListProxy@I@2Lib@Bamo@Micros.c)
 */

void __fastcall Microsoft::Bamo::Lib::BamoImpl::dataprovider_AutoBamos::CreateList_uint_Proxy(
        Microsoft::Bamo::Lib::BamoImpl::dataprovider_AutoBamos *this,
        struct Microsoft::BamoImpl::BaseBamoConnectionImpl *a2,
        struct dataprovider_AutoBamos::BamoPeer *a3,
        struct Microsoft::Bamo::BamoProxy **a4)
{
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  const char *v9; // r9
  unsigned int v10; // ebx
  struct Microsoft::BamoImpl::BaseBamoConnectionImpl *v11; // rbx
  const char *v12; // r9
  int v13[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct Microsoft::BamoImpl::BaseBamoConnectionImpl *v15; // [rsp+58h] [rbp+10h] BYREF

  v15 = a2;
  *(_QWORD *)a3 = 0LL;
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v13,
    this,
    (__int64)a3,
    (const char *)a4);
  v6 = CreateProxy_List(v5, &v15);
  v10 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1BFE,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v6);
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      10006LL,
      (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)v10,
      v13[0]);
  }
  v11 = v15;
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v13,
    v7,
    v8,
    v9);
  *(_QWORD *)a3 = v11;
  if ( !v11 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      10011LL,
      (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      v12);
}
