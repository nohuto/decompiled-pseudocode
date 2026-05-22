/*
 * XREFs of ?BroadcastSetMatrix3x2Value@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAJIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180141E38
 * Callers:
 *     ?BroadcastSetMatrix3x2Value@BamoDataSourcePrincipal@@UEAAJIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180141DD0 (-BroadcastSetMatrix3x2Value@BamoDataSourcePrincipal@@UEAAJIAEBUD2D_MATRIX_3X2_F@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CallSetMatrix3x2ValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@IAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801425DC (-CallSetMatrix3x2ValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsof.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourcePrincipalImpl::BroadcastSetMatrix3x2Value(
        BamoImpl::BamoDataSourcePrincipalImpl *this,
        unsigned int a2,
        const struct D2D_MATRIX_3X2_F *a3)
{
  __int64 i; // rbx
  int v7; // eax
  unsigned int v8; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 56LL) )
  {
    for ( i = *((_QWORD *)this + 4); ; i = *(_QWORD *)(i + 48) )
    {
      if ( !i )
        return 0;
      if ( *(_BYTE *)(i + 32) )
      {
        v7 = BamoImpl::BamoDataSourcePrincipalImpl::CallSetMatrix3x2ValueOnStub(
               (struct Microsoft::BamoImpl::BamoStubImpl *)i,
               a2,
               a3);
        v8 = v7;
        if ( v7 < 0 )
          break;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D7,
      (__int64)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoPrincipal.inl",
      (const char *)(unsigned int)v7);
    return v8;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23A5,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
}
