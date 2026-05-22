/*
 * XREFs of ?OnDockDeviceAdded@BamoKeyboardDockClientProxyImpl@BamoImpl@@QEAAJIPEAVBamoDockDevicePrincipal@@@Z @ 0x180128D0C
 * Callers:
 *     ?OnDockDeviceAdded@BamoKeyboardDockClientProxy@@UEAAJIPEAVBamoDockDevicePrincipal@@@Z @ 0x180128CA0 (-OnDockDeviceAdded@BamoKeyboardDockClientProxy@@UEAAJIPEAVBamoDockDevicePrincipal@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180038DB0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z @ 0x180038E7C (-PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z.c)
 */

__int64 __fastcall BamoImpl::BamoKeyboardDockClientProxyImpl::OnDockDeviceAdded(
        struct Microsoft::BamoImpl::BaseBamoPeerImpl **this,
        int a2,
        struct BamoDockDevicePrincipal *a3)
{
  int v6; // eax
  unsigned int v7; // edi
  struct IMessageCallSendHost *v8; // rcx
  char *v9; // rax
  struct IMessageCallSendHost *v10[2]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v12; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v13; // [rsp+88h] [rbp+20h] BYREF

  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this[2] + 3) + 32LL) + 56LL) )
  {
    if ( a3 )
      Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteReference(this, a3);
    v6 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
           (Microsoft::BamoImpl::BamoProxyImpl *)this,
           v10,
           &v12,
           &v13);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v8 = v10[0];
      if ( *((_BYTE *)this + 31) )
      {
        v9 = (char *)v10[0] - 16;
        if ( !v10[0] )
          v9 = 0LL;
        v9[72] = 1;
      }
      v10[0] = (struct IMessageCallSendHost *)v12;
      v10[1] = (struct IMessageCallSendHost *)v13;
      return CoreUICallSend(v8, v10, 2LL, 44LL, 0, &unk_1801C0220, a2);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA66F,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
        (const char *)(unsigned int)v6);
      return v7;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA667,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
}
