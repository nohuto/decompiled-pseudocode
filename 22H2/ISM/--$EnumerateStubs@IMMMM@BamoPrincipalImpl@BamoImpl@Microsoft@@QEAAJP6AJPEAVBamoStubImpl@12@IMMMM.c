/*
 * XREFs of ??$EnumerateStubs@IMMMM@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAJP6AJPEAVBamoStubImpl@12@IMMMM@Z_NIMMMM@Z @ 0x1801410F4
 * Callers:
 *     ?BroadcastSetColorValue@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAJIMMMM@Z @ 0x180141D54 (-BroadcastSetColorValue@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAJIMMMM@Z.c)
 *     ?BroadcastSetQuaternionValue@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAJIMMMM@Z @ 0x1801420A4 (-BroadcastSetQuaternionValue@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAJIMMMM@Z.c)
 *     ?BroadcastSetVector4Value@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAJIMMMM@Z @ 0x180142434 (-BroadcastSetVector4Value@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAJIMMMM@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::EnumerateStubs<unsigned int,float,float,float,float>(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, _QWORD),
        __int64 a3,
        unsigned int a4)
{
  __int64 v4; // rbx
  int v7; // eax
  unsigned int v8; // edi
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v4 = *(_QWORD *)(a1 + 32);
  if ( !v4 )
    return 0LL;
  while ( 1 )
  {
    if ( *(_BYTE *)(v4 + 32) )
    {
      v7 = a2(v4, a4);
      v8 = v7;
      if ( v7 < 0 )
        break;
    }
    v4 = *(_QWORD *)(v4 + 48);
    if ( !v4 )
      return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1D7,
    (__int64)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoPrincipal.inl",
    (const char *)(unsigned int)v7);
  return v8;
}
