/*
 * XREFs of ?AnimationStarted@BamoCompObjectDiagnosticsRootProxyImpl@BamoImpl@@QEAAJI_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x180182224
 * Callers:
 *     ?AnimationStarted@BamoCompObjectDiagnosticsRootProxy@@UEAAJI_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x180182190 (-AnimationStarted@BamoCompObjectDiagnosticsRootProxy@@UEAAJI_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014E3DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180180800 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoCompObjectDiagnosticsRootProxyImpl::AnimationStarted(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rdx
  struct IMessageCallSendHost *v5; // rcx
  char *v6; // rax
  unsigned int v7; // [rsp+70h] [rbp-38h] BYREF
  struct IMessageCallSendHost *v8[3]; // [rsp+78h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  unsigned int v10; // [rsp+B0h] [rbp+8h] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 32LL) + 56LL) )
  {
    v2 = -2018375660;
    v3 = 4306LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\diagnosticcallbacks\\objfre\\amd64\\diagnosticcallbacks.bamo.h",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v2 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall((Microsoft::BamoImpl::BamoProxyImpl *)a1, v8, &v10, &v7);
  if ( v2 < 0 )
  {
    v3 = 4313LL;
    goto LABEL_3;
  }
  v5 = v8[0];
  if ( *(_BYTE *)(a1 + 31) )
  {
    v6 = (char *)v8[0] - 16;
    if ( !v8[0] )
      v6 = 0LL;
    v6[72] = 1;
  }
  v8[0] = (struct IMessageCallSendHost *)v10;
  v8[1] = (struct IMessageCallSendHost *)v7;
  return CoreUICallSend(v5, v8, 2LL, 0LL, 2, &unk_1802DA352);
}
