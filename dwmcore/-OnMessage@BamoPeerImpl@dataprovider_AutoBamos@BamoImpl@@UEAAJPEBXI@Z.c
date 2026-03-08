/*
 * XREFs of ?OnMessage@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@UEAAJPEBXI@Z @ 0x1800FEBF0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801B44D0 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1801B89E0 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 */

__int64 __fastcall BamoImpl::dataprovider_AutoBamos::BamoPeerImpl::OnMessage(
        BamoImpl::dataprovider_AutoBamos::BamoPeerImpl *this,
        const void *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = (int)this;
  v3 = CoreUICallReceive(
         *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 32LL) + 80LL),
         &IBamoPeer_dataprovider_AutoBamos_Receive<BamoImpl::dataprovider_AutoBamos::BamoPeerImpl>::Type,
         &Microsoft::CoreUI::MessageCall::dataprovider_g_parameters_CHRfEUtvywYOFEguPMoqpTbR1jc_BamoGroup$71ca3cb6,
         64LL);
  v4 = v3;
  if ( v3 == -2018375668 )
  {
    Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)this + 3) + 32LL),
      -2018375668,
      0);
  }
  else if ( v3 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3C2C,
      (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v3,
      v6);
  }
  return v4;
}
