/*
 * XREFs of ?GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z @ 0x1C0164B54
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C0162BA0 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C02DB250 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 * Callees:
 *     ?IsCddPrimaryStale@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0001414 (-IsCddPrimaryStale@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall ADAPTER_DISPLAY::GetCddAllocationHandles(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        unsigned int *a3,
        unsigned int *a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rsi
  __int64 v9; // r9
  __int64 v10; // rdx
  unsigned int v11; // eax

  v4 = 0;
  v5 = a2;
  if ( a2 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry1(1LL, 1461LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < m_NumVidPnSources",
      1461LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)this + 2)) )
  {
    WdLogSingleEntry1(1LL, 1462LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 1462LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( ADAPTER_DISPLAY::IsCddPrimaryStale(this, v5)
    || (v9 = *((_QWORD *)this + 16), (v10 = *(_QWORD *)(4000 * v5 + v9 + 88)) == 0)
    || (*(_DWORD *)(*(_QWORD *)(v10 + 48) + 4LL) & 0x10) != 0 )
  {
    v11 = 0;
  }
  else
  {
    v4 = *(_DWORD *)(*(_QWORD *)(4000 * v5 + v9 + 600) + 16LL);
    v11 = *(_DWORD *)(v10 + 16);
  }
  *a3 = v11;
  *a4 = v4;
}
