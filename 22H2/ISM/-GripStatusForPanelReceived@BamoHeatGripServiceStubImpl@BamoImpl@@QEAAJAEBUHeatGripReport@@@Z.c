/*
 * XREFs of ?GripStatusForPanelReceived@BamoHeatGripServiceStubImpl@BamoImpl@@QEAAJAEBUHeatGripReport@@@Z @ 0x18012A65C
 * Callers:
 *     ?CallGripStatusForPanelReceivedOnStub@BamoHeatGripServicePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@AEBUHeatGripReport@@@Z @ 0x18012A5B8 (-CallGripStatusForPanelReceivedOnStub@BamoHeatGripServicePrincipalImpl@BamoImpl@@CAJPEAVBamoStub.c)
 *     ?GripStatusForPanelReceived@BamoHeatGripServiceStub@@UEAAJAEBUHeatGripReport@@@Z @ 0x18012A600 (-GripStatusForPanelReceived@BamoHeatGripServiceStub@@UEAAJAEBUHeatGripReport@@@Z.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18001D000 (-PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::BamoHeatGripServiceStubImpl::GripStatusForPanelReceived(
        BamoImpl::BamoHeatGripServiceStubImpl *this,
        const struct HeatGripReport *a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  __int128 v6; // xmm0
  __int64 v7; // xmm1_8
  __int16 v8; // [rsp+20h] [rbp-50h]
  _QWORD v9[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v10; // [rsp+50h] [rbp-20h] BYREF
  __int64 v11; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  unsigned int v13; // [rsp+90h] [rbp+20h] BYREF
  unsigned int v14; // [rsp+A0h] [rbp+30h] BYREF
  struct IMessageCallSendHost *v15; // [rsp+A8h] [rbp+38h] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL) + 32LL) + 56LL) )
  {
    v3 = -2018375660;
    v4 = 34157LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v3 = Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteCall(this, &v15, &v13, &v14);
  if ( v3 < 0 )
  {
    v4 = 34164LL;
    goto LABEL_3;
  }
  v6 = *(_OWORD *)a2;
  v9[0] = v13;
  v7 = *((_QWORD *)a2 + 2);
  v9[1] = v14;
  v8 = 0;
  v10 = v6;
  v11 = v7;
  return CoreUICallSend(v15, v9, 2LL, 33LL, v8, &unk_1801C0247, (unsigned int)&v10);
}
