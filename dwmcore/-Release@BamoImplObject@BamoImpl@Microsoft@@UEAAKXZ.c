/*
 * XREFs of ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x1800AD490
 * Callers:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800ACA2C (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVConnectionIndirector@BamoImpl@Microsoft@@@Z @ 0x1800ACB28 (--4-$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAA.c)
 *     ?Release@BamoPrincipalImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x1800AD230 (-Release@BamoPrincipalImpl@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ??0BaseBamoConnectionImpl@BamoImpl@Microsoft@@IEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x1800AF2A8 (--0BaseBamoConnectionImpl@BamoImpl@Microsoft@@IEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ??1BaseBamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ @ 0x1801B5A04 (--1BaseBamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ.c)
 *     ??1BaseBamoPeerImpl@BamoImpl@Microsoft@@UEAA@XZ @ 0x1801B5B4C (--1BaseBamoPeerImpl@BamoImpl@Microsoft@@UEAA@XZ.c)
 *     ?FreePrincipalItemsCallback@BaseBamoConnectionImpl@BamoImpl@Microsoft@@CAJPEAX@Z @ 0x1801B68C0 (-FreePrincipalItemsCallback@BaseBamoConnectionImpl@BamoImpl@Microsoft@@CAJPEAX@Z.c)
 *     ?OnZeroReferenceCount@BaseBamoConnectionImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x1801B7580 (-OnZeroReferenceCount@BaseBamoConnectionImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 *     ?Release@BufferingMessageCallHost@BamoImpl@Microsoft@@UEAAKXZ @ 0x1801B7760 (-Release@BufferingMessageCallHost@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ??1DataProviderRegistrarPrincipal@@UEAA@XZ @ 0x1801DD6F0 (--1DataProviderRegistrarPrincipal@@UEAA@XZ.c)
 *     ??_GBamoDataProviderRegistrarPrincipal@@MEAAPEAXI@Z @ 0x1801DD730 (--_GBamoDataProviderRegistrarPrincipal@@MEAAPEAXI@Z.c)
 *     ??_GBamoDataProviderRegistrarPrincipalImpl@BamoImpl@@UEAAPEAXI@Z @ 0x1801DD780 (--_GBamoDataProviderRegistrarPrincipalImpl@BamoImpl@@UEAAPEAXI@Z.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x1801DF5E0 (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 *     ?Release@BamoProxyImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x1801E2ED0 (-Release@BamoProxyImpl@BamoImpl@Microsoft@@UEAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180195018 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BamoImplObject::Release(
        Microsoft::BamoImpl::BamoImplObject *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( v4 < 0 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x33,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoImplObject.inl",
      a4);
  if ( !v4 )
    (*(void (__fastcall **)(Microsoft::BamoImpl::BamoImplObject *))(*(_QWORD *)this + 24LL))(this);
  return (unsigned int)v4;
}
