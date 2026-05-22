/*
 * XREFs of ?CreateCursorShapeAnimation@BamoSystemCursorControllerProxyImpl@BamoImpl@@QEAAJ_K0@Z @ 0x1800E3D2C
 * Callers:
 *     ?CreateCursorShapeAnimation@BamoSystemCursorControllerProxy@@UEAAJ_K0@Z @ 0x1800E3CC0 (-CreateCursorShapeAnimation@BamoSystemCursorControllerProxy@@UEAAJ_K0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180038DB0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoSystemCursorControllerProxyImpl::CreateCursorShapeAnimation(
        BamoImpl::BamoSystemCursorControllerProxyImpl *this,
        int a2)
{
  char *v2; // rbx
  int v6; // eax
  unsigned int v7; // edi
  struct IMessageCallSendHost *v8; // rcx
  __int16 v9; // [rsp+20h] [rbp-48h]
  struct IMessageCallSendHost *v10[2]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v12; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v13; // [rsp+88h] [rbp+20h] BYREF

  v2 = 0LL;
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL) + 56LL) )
  {
    v6 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, v10, &v12, &v13);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v8 = v10[0];
      if ( *((_BYTE *)this + 31) )
      {
        if ( v10[0] )
          v2 = (char *)v10[0] - 16;
        v2[72] = 1;
      }
      v10[0] = (struct IMessageCallSendHost *)v12;
      v10[1] = (struct IMessageCallSendHost *)v13;
      v9 = 3;
      return CoreUICallSend(v8, v10, 2LL, 62LL, v9, &unk_1801C02AD, a2);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC6C1,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
        (const char *)(unsigned int)v6);
      return v7;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC6BA,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
}
