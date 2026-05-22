/*
 * XREFs of ?UIAHitTestResponse@BamoUIAHitTestStubImpl@BamoImpl@@QEAAJAEBU_GUID@@@Z @ 0x180187B7C
 * Callers:
 *     ?CallUIAHitTestResponseOnStub@BamoUIAHitTestPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@AEBU_GUID@@@Z @ 0x1801877C8 (-CallUIAHitTestResponseOnStub@BamoUIAHitTestPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microso.c)
 *     ?UIAHitTestResponse@BamoUIAHitTestStub@@UEAAJAEBU_GUID@@@Z @ 0x180187B20 (-UIAHitTestResponse@BamoUIAHitTestStub@@UEAAJAEBU_GUID@@@Z.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18001D000 (-PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::BamoUIAHitTestStubImpl::UIAHitTestResponse(
        BamoImpl::BamoUIAHitTestStubImpl *this,
        const struct _GUID *a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  __int128 v6; // xmm0
  __int16 v7; // [rsp+20h] [rbp-58h]
  _QWORD v8[2]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v9; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v11; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v12; // [rsp+90h] [rbp+18h] BYREF
  struct IMessageCallSendHost *v13; // [rsp+98h] [rbp+20h] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL) + 32LL) + 56LL) )
  {
    v3 = -2018375660;
    v4 = 52297LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v3 = Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteCall(this, &v13, &v11, &v12);
  if ( v3 < 0 )
  {
    v4 = 52304LL;
    goto LABEL_3;
  }
  v6 = (__int128)*a2;
  v8[0] = v11;
  v8[1] = v12;
  v7 = 0;
  v9 = v6;
  return CoreUICallSend(v13, v8, 2LL, 68LL, v7, &unk_1801C01CD, (unsigned int)&v9);
}
