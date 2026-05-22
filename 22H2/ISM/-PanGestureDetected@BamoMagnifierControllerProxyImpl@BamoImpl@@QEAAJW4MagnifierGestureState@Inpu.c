/*
 * XREFs of ?PanGestureDetected@BamoMagnifierControllerProxyImpl@BamoImpl@@QEAAJW4MagnifierGestureState@Input@Internal@UI@Windows@@IAEBUPoint@Foundation@7@@Z @ 0x180100AA4
 * Callers:
 *     ?PanGestureDetected@BamoMagnifierControllerProxy@@UEAAJW4MagnifierGestureState@Input@Internal@UI@Windows@@IAEBUPoint@Foundation@6@@Z @ 0x180100A2C (-PanGestureDetected@BamoMagnifierControllerProxy@@UEAAJW4MagnifierGestureState@Input@Internal@UI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180038DB0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoMagnifierControllerProxyImpl::PanGestureDetected(
        __int64 a1,
        int a2,
        __int64 a3,
        struct IMessageCallSendHost **a4)
{
  char *v4; // rbx
  int v9; // eax
  unsigned int v10; // edi
  struct IMessageCallSendHost *v11; // rcx
  struct IMessageCallSendHost *v12; // xmm0_8
  __int16 v13; // [rsp+20h] [rbp-68h]
  unsigned int v14; // [rsp+50h] [rbp-38h] BYREF
  struct IMessageCallSendHost *v15; // [rsp+58h] [rbp-30h] BYREF
  _QWORD v16[2]; // [rsp+60h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  unsigned int v18; // [rsp+90h] [rbp+8h] BYREF

  v4 = 0LL;
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 32LL) + 56LL) )
  {
    v9 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
           (Microsoft::BamoImpl::BamoProxyImpl *)a1,
           &v15,
           &v18,
           &v14);
    v10 = v9;
    if ( v9 >= 0 )
    {
      v11 = v15;
      if ( *(_BYTE *)(a1 + 31) )
      {
        if ( v15 )
          v4 = (char *)v15 - 16;
        v4[72] = 1;
      }
      v12 = *a4;
      v16[0] = v18;
      v16[1] = v14;
      v13 = 1;
      v15 = v12;
      return CoreUICallSend(v11, v16, 2LL, 48LL, v13, &unk_1801C0287, a2);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xADCD,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
        (const char *)(unsigned int)v9);
      return v10;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xADC6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
}
