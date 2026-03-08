/*
 * XREFs of ?NotifyOnChanged@CProjectedShadowCaster@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18001E300
 * Callers:
 *     <none>
 * Callees:
 *     ?GetEffectiveMaskBrush@CProjectedShadowCaster@@QEBAPEAVCBrush@@XZ @ 0x180005AF4 (-GetEffectiveMaskBrush@CProjectedShadowCaster@@QEBAPEAVCBrush@@XZ.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800BBC80 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

void __fastcall CProjectedShadowCaster::NotifyOnChanged(
        CProjectedShadowCaster *a1,
        __int64 a2,
        CProjectedShadowCaster *a3)
{
  CProjectedShadowCaster *v3; // rdx
  struct CBrush *EffectiveMaskBrush; // rax
  CProjectedShadowCaster *v5; // rcx
  struct CBrush *v6; // rdx

  if ( !CCommonRegistryData::DisableProjectedShadows && a3 )
  {
    if ( a3 == a1 )
    {
      CResource::NotifyOnChanged(a1, a2, a3);
    }
    else
    {
      v3 = (CProjectedShadowCaster *)*((_QWORD *)a1 + 16);
      if ( v3 && a3 == v3 )
      {
        EffectiveMaskBrush = CProjectedShadowCaster::GetEffectiveMaskBrush(a1);
        if ( v6 == EffectiveMaskBrush )
          CProjectedShadowCaster::InvalidateMaskContent(v5);
      }
      else if ( *((_QWORD *)a1 + 15) && a3 == *((CProjectedShadowCaster **)a1 + 15) )
      {
        CProjectedShadowCaster::RequestRedraw(a1);
      }
    }
  }
}
