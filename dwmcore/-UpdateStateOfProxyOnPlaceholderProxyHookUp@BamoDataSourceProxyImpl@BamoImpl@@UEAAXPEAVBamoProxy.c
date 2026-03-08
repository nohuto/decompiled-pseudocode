/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoDataSourceProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x1801F5D70
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateRestrictToProcessIds@BamoDataSourceProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x1801F5B68 (-UpdateRestrictToProcessIds@BamoDataSourceProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 *     ?UpdateUniqueId@BamoDataSourceProxyImpl@BamoImpl@@QEAAJ_NPEBU_LUID@@@Z @ 0x1801F5DB4 (-UpdateUniqueId@BamoDataSourceProxyImpl@BamoImpl@@QEAAJ_NPEBU_LUID@@@Z.c)
 */

void __fastcall BamoImpl::BamoDataSourceProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoDataSourceProxyImpl *this,
        const struct _LUID *a2)
{
  const char *v4; // r9
  struct _LUID v5; // rax

  BamoImpl::BamoDataSourceProxyImpl::UpdateUniqueId(this, 0, a2 + 4);
  v5 = a2[5];
  if ( v5 )
    BamoImpl::BamoDataSourceProxyImpl::UpdateRestrictToProcessIds(
      this,
      0LL,
      *(unsigned int *)(*(_QWORD *)&v5 + 40LL),
      v4);
}
