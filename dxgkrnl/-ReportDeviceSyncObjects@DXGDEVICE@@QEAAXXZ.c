/*
 * XREFs of ?ReportDeviceSyncObjects@DXGDEVICE@@QEAAXXZ @ 0x1C02E822C
 * Callers:
 *     ?ReportState@DXGDEVICE@@QEAAXXZ @ 0x1C02E82CC (-ReportState@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00045F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?ReportState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C034FDA8 (-ReportState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::ReportDeviceSyncObjects(DXGDEVICE *this)
{
  DXGDEVICESYNCOBJECT **v2; // rdi
  DXGDEVICESYNCOBJECT *i; // rbx

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 8555LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceExclusiveOwner()",
      8555LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v2 = (DXGDEVICESYNCOBJECT **)((char *)this + 544);
  for ( i = *v2; i != (DXGDEVICESYNCOBJECT *)v2 && i; i = *(DXGDEVICESYNCOBJECT **)i )
    DXGDEVICESYNCOBJECT::ReportState(i);
}
