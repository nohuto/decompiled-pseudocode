/*
 * XREFs of ?NotifyOnChanged@CProjectedShadowCaster@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18001DE80
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180037460 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

void __fastcall CProjectedShadowCaster::NotifyOnChanged(
        CProjectedShadowCaster *a1,
        __int64 a2,
        CProjectedShadowCaster *a3)
{
  if ( !CCommonRegistryData::DisableProjectedShadows && a3 )
  {
    if ( a3 == a1 )
    {
      CResource::NotifyOnChanged(a1, a2, a3);
    }
    else if ( *((_QWORD *)a1 + 15) && a3 == *((CProjectedShadowCaster **)a1 + 15) )
    {
      CProjectedShadowCaster::InvalidateMaskContent(a1);
    }
    else if ( *((_QWORD *)a1 + 14) )
    {
      if ( a3 == *((CProjectedShadowCaster **)a1 + 14) )
        CProjectedShadowCaster::RequestRedraw(a1);
    }
  }
}
