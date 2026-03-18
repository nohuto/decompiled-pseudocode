/*
 * XREFs of ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x1800ADBF0
 * Callers:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800AD14C (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVConnectionIndirector@BamoImpl@Microsoft@@@Z @ 0x1800AD248 (--4-$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAA.c)
 *     ?Release@BamoPrincipalImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x1800AD990 (-Release@BamoPrincipalImpl@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ??0BaseBamoConnectionImpl@BamoImpl@Microsoft@@IEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x1800AFA08 (--0BaseBamoConnectionImpl@BamoImpl@Microsoft@@IEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ??1BaseBamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ @ 0x1801B8C04 (--1BaseBamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ.c)
 *     ??1BaseBamoPeerImpl@BamoImpl@Microsoft@@UEAA@XZ @ 0x1801B8D4C (--1BaseBamoPeerImpl@BamoImpl@Microsoft@@UEAA@XZ.c)
 *     ?FreePrincipalItemsCallback@BaseBamoConnectionImpl@BamoImpl@Microsoft@@CAJPEAX@Z @ 0x1801B9AC0 (-FreePrincipalItemsCallback@BaseBamoConnectionImpl@BamoImpl@Microsoft@@CAJPEAX@Z.c)
 *     ?OnZeroReferenceCount@BaseBamoConnectionImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x1801BA780 (-OnZeroReferenceCount@BaseBamoConnectionImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 *     ?Release@BufferingMessageCallHost@BamoImpl@Microsoft@@UEAAKXZ @ 0x1801BA960 (-Release@BufferingMessageCallHost@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ??1DataProviderRegistrarPrincipal@@UEAA@XZ @ 0x1801E09F0 (--1DataProviderRegistrarPrincipal@@UEAA@XZ.c)
 *     ??_GBamoDataProviderRegistrarPrincipal@@MEAAPEAXI@Z @ 0x1801E0A30 (--_GBamoDataProviderRegistrarPrincipal@@MEAAPEAXI@Z.c)
 *     ??_GBamoDataProviderRegistrarPrincipalImpl@BamoImpl@@UEAAPEAXI@Z @ 0x1801E0A80 (--_GBamoDataProviderRegistrarPrincipalImpl@BamoImpl@@UEAAPEAXI@Z.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x1801E28E0 (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 *     ?Release@BamoProxyImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x1801E61D0 (-Release@BamoProxyImpl@BamoImpl@Microsoft@@UEAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801986D8 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
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
