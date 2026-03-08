/*
 * XREFs of ?RequestDisposeProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I@Z @ 0x1801B780C
 * Callers:
 *     ?Thunk_RequestDisposeProxy_5@?$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801B89B0 (-Thunk_RequestDisposeProxy_5@-$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovid.c)
 * Callees:
 *     ?TryGetPrincipal@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoPrincipalImpl@23@I@Z @ 0x1800AD394 (-TryGetPrincipal@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoPrincipalImpl@23@I@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SendDisposeProxy@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXPEAVBamoStubImpl@23@_N@Z @ 0x1801B7CA8 (-SendDisposeProxy@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXPEAVBamoStubImpl@23@_N@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1801B89E0 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::RequestDisposeProxy(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2,
        unsigned int a3)
{
  struct Microsoft::BamoImpl::BamoPrincipalImpl *Principal; // rax
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rdx
  Microsoft::BamoImpl::BamoPrincipalImpl *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Principal = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetPrincipal(this, a3);
  if ( !Principal )
  {
    v6 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(this, -2018375668, 0);
    if ( v6 < 0 )
    {
      v7 = 1644LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v6);
      return (unsigned int)v6;
    }
    return (unsigned int)v6;
  }
  v8 = *((_QWORD *)Principal + 4);
  if ( !v8 )
  {
LABEL_8:
    v6 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(this, -2018375668, 0);
    if ( v6 < 0 )
    {
      v7 = 1653LL;
      goto LABEL_10;
    }
    return (unsigned int)v6;
  }
  v9 = (Microsoft::BamoImpl::BamoPrincipalImpl *)*((unsigned int *)a2 + 9);
  while ( *(_DWORD *)(*(_QWORD *)(v8 + 32) + 36LL) != (_DWORD)v9 )
  {
    v8 = *(_QWORD *)(v8 + 40);
    if ( !v8 )
      goto LABEL_8;
  }
  if ( !*(_DWORD *)(v8 + 16) && !*(_BYTE *)(v8 + 58) )
    Microsoft::BamoImpl::BamoPrincipalImpl::SendDisposeProxy(v9, (struct Microsoft::BamoImpl::BamoStubImpl *)v8, 0);
  return 0LL;
}
