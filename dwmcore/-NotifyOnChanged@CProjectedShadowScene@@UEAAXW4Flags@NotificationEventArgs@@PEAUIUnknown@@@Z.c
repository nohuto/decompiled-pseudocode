/*
 * XREFs of ?NotifyOnChanged@CProjectedShadowScene@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180248740
 * Callers:
 *     <none>
 * Callees:
 *     ?RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ @ 0x180005B3C (-RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ.c)
 */

void __fastcall CProjectedShadowScene::NotifyOnChanged(CProjectedShadowScene *a1)
{
  if ( !CCommonRegistryData::DisableProjectedShadows )
  {
    *((_QWORD *)a1 + 13) = 0LL;
    CProjectedShadowScene::RequestRedrawAll(a1);
  }
}
