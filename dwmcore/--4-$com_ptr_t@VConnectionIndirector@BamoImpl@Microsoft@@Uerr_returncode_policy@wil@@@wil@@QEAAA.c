/*
 * XREFs of ??4?$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVConnectionIndirector@BamoImpl@Microsoft@@@Z @ 0x1800ACB28
 * Callers:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x1800ACA60 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?Initialize@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAXPEAVBaseBamoConnectionImpl@23@III@Z @ 0x1800ACD58 (-Initialize@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAXPEAVBaseBamoConnectionImpl@23@III@Z.c)
 *     ?AddRef@BaseBamoConnectionImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x1801B5FE0 (-AddRef@BaseBamoConnectionImpl@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x1801DF3E8 (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x1800AD490 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 */

Microsoft::BamoImpl::BamoImplObject **__fastcall wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::operator=(
        Microsoft::BamoImpl::BamoImplObject **a1,
        volatile signed __int32 *a2)
{
  Microsoft::BamoImpl::BamoImplObject *v3; // rcx

  v3 = *a1;
  *a1 = (Microsoft::BamoImpl::BamoImplObject *)a2;
  if ( a2 )
    _InterlockedIncrement(a2 + 2);
  if ( v3 )
    Microsoft::BamoImpl::BamoImplObject::Release(v3);
  return a1;
}
