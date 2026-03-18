/*
 * XREFs of ?NotifyOnChanged@CProjectedShadowScene@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18024BE20
 * Callers:
 *     <none>
 * Callees:
 *     ?RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ @ 0x180005C2C (-RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ.c)
 */

void __fastcall CProjectedShadowScene::NotifyOnChanged(CProjectedShadowScene *a1)
{
  if ( !CCommonRegistryData::DisableProjectedShadows )
  {
    *((_QWORD *)a1 + 13) = 0LL;
    CProjectedShadowScene::RequestRedrawAll(a1);
  }
}
