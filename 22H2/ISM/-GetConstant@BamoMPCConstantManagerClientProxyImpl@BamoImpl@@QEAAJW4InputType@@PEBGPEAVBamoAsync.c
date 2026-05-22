/*
 * XREFs of ?GetConstant@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@QEAAJW4InputType@@PEBGPEAVBamoAsyncResult_PROPVARIANT_Principal@@@Z @ 0x1801080B8
 * Callers:
 *     ?GetConstant@BamoMPCConstantManagerClientProxy@@UEAAJW4InputType@@PEBGPEAVBamoAsyncResult_PROPVARIANT_Principal@@@Z @ 0x180108040 (-GetConstant@BamoMPCConstantManagerClientProxy@@UEAAJW4InputType@@PEBGPEAVBamoAsyncResult_PROPVA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180038DB0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z @ 0x180038E7C (-PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z.c)
 */

__int64 __fastcall BamoImpl::BamoMPCConstantManagerClientProxyImpl::GetConstant(
        __int64 a1,
        int a2,
        __int64 a3,
        struct Microsoft::Bamo::BamoPrincipal *a4)
{
  char *v4; // rbx
  int v8; // eax
  unsigned int v9; // esi
  struct IMessageCallSendHost *v10; // rcx
  __int16 v11; // [rsp+20h] [rbp-68h]
  unsigned int v12; // [rsp+50h] [rbp-38h] BYREF
  struct IMessageCallSendHost *v13[3]; // [rsp+58h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  unsigned int v15; // [rsp+90h] [rbp+8h] BYREF

  v4 = 0LL;
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 32LL) + 56LL) )
  {
    if ( a4 )
      Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteReference(
        (struct Microsoft::BamoImpl::BaseBamoPeerImpl **)a1,
        a4);
    v8 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
           (Microsoft::BamoImpl::BamoProxyImpl *)a1,
           v13,
           &v15,
           &v12);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v10 = v13[0];
      if ( *(_BYTE *)(a1 + 31) )
      {
        if ( v13[0] )
          v4 = (char *)v13[0] - 16;
        v4[72] = 1;
      }
      v13[0] = (struct IMessageCallSendHost *)v15;
      v13[1] = (struct IMessageCallSendHost *)v12;
      v11 = 1;
      return CoreUICallSend(v10, v13, 2LL, 1LL, v11, &unk_1801C2960, a2);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x223A,
        (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMa"
                 "nagerBamo.MPCManagerBamo.bamo.h",
        (const char *)(unsigned int)v8);
      return v9;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2232,
      (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
}
