/*
 * XREFs of ?ReleaseAdapterOrdinal@DXGGLOBAL@@QEAAXK@Z @ 0x1C030FEB4
 * Callers:
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C02B1790 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00078B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C01A5238 (-GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 */

void __fastcall DXGGLOBAL::ReleaseAdapterOrdinal(DXGGLOBAL *this, unsigned int a2)
{
  ULONG v2; // ebx
  struct _RTL_BITMAP *v4; // rcx

  v2 = a2;
  if ( a2 >= 0x400 )
  {
    WdLogSingleEntry1(1LL, 3812LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Ordinal < MAX_ADAPTERS_CEILING", 3812LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 784));
  if ( v2 < (unsigned int)DXGGLOBAL::GetMaximumGlobalAdapterCount(this) )
  {
    v4 = (struct _RTL_BITMAP *)((char *)this + 832);
  }
  else
  {
    v2 -= DXGGLOBAL::GetMaximumGlobalAdapterCount(this);
    v4 = (struct _RTL_BITMAP *)((char *)this + 848);
  }
  RtlClearBits(v4, v2, 1u);
  DXGFASTMUTEX::Release((struct _KTHREAD **)this + 98);
}
