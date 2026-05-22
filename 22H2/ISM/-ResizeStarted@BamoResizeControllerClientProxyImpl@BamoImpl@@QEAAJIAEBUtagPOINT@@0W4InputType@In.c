/*
 * XREFs of ?ResizeStarted@BamoResizeControllerClientProxyImpl@BamoImpl@@QEAAJIAEBUtagPOINT@@0W4InputType@Input@Internal@UI@Windows@@@Z @ 0x1800EC2E0
 * Callers:
 *     ?ResizeStarted@BamoResizeControllerClientProxy@@UEAAJIAEBUtagPOINT@@0W4InputType@Input@Internal@UI@Windows@@@Z @ 0x1800EC260 (-ResizeStarted@BamoResizeControllerClientProxy@@UEAAJIAEBUtagPOINT@@0W4InputType@Input@Internal@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180038DB0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoResizeControllerClientProxyImpl::ResizeStarted(
        __int64 a1,
        int a2,
        struct IMessageCallSendHost **a3,
        struct IMessageCallSendHost **a4)
{
  int v8; // ebx
  __int64 v9; // rdx
  struct IMessageCallSendHost *v11; // rcx
  char *v12; // rax
  unsigned int v13; // [rsp+50h] [rbp-30h] BYREF
  struct IMessageCallSendHost *v14[2]; // [rsp+58h] [rbp-28h] BYREF
  _QWORD v15[3]; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  unsigned int v17; // [rsp+B0h] [rbp+30h] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 32LL) + 56LL) )
  {
    v8 = -2018375660;
    v9 = 48252LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  v8 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
         (Microsoft::BamoImpl::BamoProxyImpl *)a1,
         v14,
         &v17,
         &v13);
  if ( v8 < 0 )
  {
    v9 = 48259LL;
    goto LABEL_3;
  }
  v11 = v14[0];
  if ( *(_BYTE *)(a1 + 31) )
  {
    v12 = (char *)v14[0] - 16;
    if ( !v14[0] )
      v12 = 0LL;
    v12[72] = 1;
  }
  v14[0] = *a4;
  v14[1] = *a3;
  v15[0] = v17;
  v15[1] = v13;
  return CoreUICallSend(v11, v15, 2LL, 56LL, 0, &unk_1801C028E, a2);
}
