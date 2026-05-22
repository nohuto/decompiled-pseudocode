/*
 * XREFs of ?SetMatrix3x2Value@BamoDataSourceStubImpl@BamoImpl@@QEAAJIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180143DEC
 * Callers:
 *     ?CallSetMatrix3x2ValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@IAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801425DC (-CallSetMatrix3x2ValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsof.c)
 *     ?SetMatrix3x2Value@BamoDataSourceStub@@UEAAJIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180143D80 (-SetMatrix3x2Value@BamoDataSourceStub@@UEAAJIAEBUD2D_MATRIX_3X2_F@@@Z.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18001D000 (-PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourceStubImpl::SetMatrix3x2Value(
        BamoImpl::BamoDataSourceStubImpl *this,
        int a2,
        const struct D2D_MATRIX_3X2_F *a3)
{
  int v5; // ebx
  __int64 v6; // rdx
  __int128 v8; // xmm0
  __int64 v9; // xmm1_8
  __int16 v10; // [rsp+20h] [rbp-60h]
  struct IMessageCallSendHost *v11; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v12[3]; // [rsp+48h] [rbp-38h] BYREF
  __int128 v13; // [rsp+60h] [rbp-20h]
  __int64 v14; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  unsigned int v16; // [rsp+A0h] [rbp+20h] BYREF
  unsigned int v17; // [rsp+B8h] [rbp+38h] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL) + 32LL) + 56LL) )
  {
    v5 = -2018375660;
    v6 = 9901LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v5 = Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteCall(this, &v11, &v16, &v17);
  if ( v5 < 0 )
  {
    v6 = 9908LL;
    goto LABEL_3;
  }
  v8 = *(_OWORD *)&a3->m11;
  v12[0] = v16;
  v9 = *(_QWORD *)&a3->m[2][0];
  v12[1] = v17;
  v10 = 7;
  v13 = v8;
  v14 = v9;
  return CoreUICallSend(v11, v12, 2LL, 5LL, v10, &unk_1801C18CF, a2);
}
