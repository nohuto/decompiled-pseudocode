/*
 * XREFs of ?EnsureClientInfo@CVisualTree@@MEAAXXZ @ 0x1800C6560
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateClientBounds@CVisualTree@@IEAAXXZ @ 0x1800C659C (-UpdateClientBounds@CVisualTree@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CVisualTree::EnsureClientInfo(CVisualTree *this)
{
  if ( *((_BYTE *)this + 4712) )
  {
    CVisualTree::UpdateClientBounds(this);
    if ( CCommonRegistryData::ForceDesktopTreeFullDirty )
    {
      if ( (*(unsigned __int8 (__fastcall **)(CVisualTree *))(*(_QWORD *)this + 184LL))(this) )
        *((_BYTE *)this + 4714) = 0;
    }
    *((_BYTE *)this + 4712) = 0;
  }
}
