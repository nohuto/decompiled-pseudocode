/*
 * XREFs of ?ResizeInProgress@BamoResizeControllerClientProxyImpl@BamoImpl@@QEAAJIAEBUtagPOINT@@0W4InputType@Input@Internal@UI@Windows@@@Z @ 0x1800EC120
 * Callers:
 *     ?ResizeInProgress@BamoResizeControllerClientProxy@@UEAAJIAEBUtagPOINT@@0W4InputType@Input@Internal@UI@Windows@@@Z @ 0x1800EC0A0 (-ResizeInProgress@BamoResizeControllerClientProxy@@UEAAJIAEBUtagPOINT@@0W4InputType@Input@Intern.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180038DB0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoResizeControllerClientProxyImpl::ResizeInProgress(
        __int64 a1,
        int a2,
        struct IMessageCallSendHost **a3,
        struct IMessageCallSendHost **a4)
{
  char *v4; // rbx
  int v10; // eax
  unsigned int v11; // edi
  struct IMessageCallSendHost *v12; // rcx
  __int16 v13; // [rsp+20h] [rbp-60h]
  unsigned int v14; // [rsp+50h] [rbp-30h] BYREF
  struct IMessageCallSendHost *v15[2]; // [rsp+58h] [rbp-28h] BYREF
  _QWORD v16[3]; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  unsigned int v18; // [rsp+B0h] [rbp+30h] BYREF

  v4 = 0LL;
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 32LL) + 56LL) )
  {
    v10 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
            (Microsoft::BamoImpl::BamoProxyImpl *)a1,
            v15,
            &v18,
            &v14);
    v11 = v10;
    if ( v10 >= 0 )
    {
      v12 = v15[0];
      if ( *(_BYTE *)(a1 + 31) )
      {
        if ( v15[0] )
          v4 = (char *)v15[0] - 16;
        v4[72] = 1;
      }
      v15[0] = *a4;
      v15[1] = *a3;
      v16[0] = v18;
      v16[1] = v14;
      v13 = 1;
      return CoreUICallSend(v12, v16, 2LL, 56LL, v13, &unk_1801C028E, a2);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBC9F,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
        (const char *)(unsigned int)v10);
      return v11;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBC98,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
}
