/*
 * XREFs of ?AnimationEnded@BamoCompObjectDiagnosticsRootProxyImpl@BamoImpl@@QEAAJI_KIIW4AnimationEndedReasonType@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x1801E22B4
 * Callers:
 *     ?AnimationEnded@BamoCompObjectDiagnosticsRootProxy@@UEAAJI_KIIW4AnimationEndedReasonType@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x1801E2210 (-AnimationEnded@BamoCompObjectDiagnosticsRootProxy@@UEAAJI_KIIW4AnimationEndedReasonType@@W4DCOM.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180195018 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1801B89E0 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x1801DFDB0 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x1801E0248 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoCompObjectDiagnosticsRootProxyImpl::AnimationEnded(
        __int64 a1,
        int a2,
        __int64 a3,
        const char *a4)
{
  __int64 v6; // r10
  int v8; // eax
  unsigned int v9; // edi
  struct IMessageCallSendHost *v10; // rcx
  char *v11; // rax
  __int64 v12; // [rsp+30h] [rbp-78h]
  unsigned int v13; // [rsp+70h] [rbp-38h] BYREF
  struct IMessageCallSendHost *v14[3]; // [rsp+78h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  unsigned int v16; // [rsp+B0h] [rbp+8h] BYREF

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      5115LL,
      (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\diagnosticcallbacks\\objfre\\amd64\\diagnosticcallbacks.bamo.h",
      a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected((Microsoft::BamoImpl::BamoProxyImpl *)a1) )
  {
    if ( v6 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v6 + 24) + 32LL),
        0x87B20814,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1404,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\diagnosticcallbacks\\objfre\\amd64\\diagnosticcallbacks.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v8 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
           (Microsoft::BamoImpl::BamoProxyImpl *)a1,
           v14,
           &v16,
           &v13);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v10 = v14[0];
      if ( *(_BYTE *)(a1 + 31) )
      {
        v11 = (char *)v14[0] - 16;
        if ( !v14[0] )
          v11 = 0LL;
        v11[72] = 1;
      }
      v14[0] = (struct IMessageCallSendHost *)v16;
      v14[1] = (struct IMessageCallSendHost *)v13;
      LODWORD(v12) = a2;
      return CoreUICallSend(v10, v14, 2LL, 0LL, 4, &unk_1803536AB, v12);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x140B,
        (int)"onecoreuap\\windows\\DWM\\dwmcore\\diagnosticcallbacks\\objfre\\amd64\\diagnosticcallbacks.bamo.h",
        (const char *)(unsigned int)v8);
      return v9;
    }
  }
}
