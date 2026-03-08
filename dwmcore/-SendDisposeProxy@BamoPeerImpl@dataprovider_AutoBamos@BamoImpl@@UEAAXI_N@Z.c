/*
 * XREFs of ?SendDisposeProxy@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@UEAAXI_N@Z @ 0x1801DD4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801B44D0 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall BamoImpl::dataprovider_AutoBamos::BamoPeerImpl::SendDisposeProxy(
        BamoImpl::dataprovider_AutoBamos::BamoPeerImpl *this,
        int a2)
{
  __int64 v2; // r9
  __int64 v3; // r10
  int v4; // eax
  int v5; // [rsp+20h] [rbp-38h]
  __int64 v6; // [rsp+30h] [rbp-28h]
  _QWORD v7[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = *(_QWORD *)(*((_QWORD *)this + 3) + 32LL);
  v7[0] = *((unsigned int *)this + 9);
  v3 = *(_QWORD *)(v2 + 72);
  v7[1] = *((unsigned int *)this + 10);
  LODWORD(v6) = a2;
  v4 = CoreUICallSend(v3, v7, 2LL, 7LL, 8, &unk_180350E01, v6);
  if ( v4 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      15463LL,
      (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v4,
      v5);
}
