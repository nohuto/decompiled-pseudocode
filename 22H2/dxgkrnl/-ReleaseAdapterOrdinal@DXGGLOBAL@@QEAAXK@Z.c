/*
 * XREFs of ?ReleaseAdapterOrdinal@DXGGLOBAL@@QEAAXK@Z @ 0x1C0314CE4
 * Callers:
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C02B6644 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000AFB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B020 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C01B56FC (-GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 */

void __fastcall DXGGLOBAL::ReleaseAdapterOrdinal(DXGGLOBAL *this, unsigned int a2)
{
  ULONG v2; // ebx
  struct _RTL_BITMAP *v4; // rcx

  v2 = a2;
  if ( a2 >= 0x400 )
  {
    WdLogSingleEntry1(1LL, 3813LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Ordinal < MAX_ADAPTERS_CEILING", 3813LL, 0LL, 0LL, 0LL, 0LL);
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
