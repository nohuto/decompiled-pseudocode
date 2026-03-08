/*
 * XREFs of DCompositionBoostCompositionClockForInput @ 0x1C0247B3C
 * Callers:
 *     ?BoostRefreshRateForInput@CCompositionRefreshRateBooster@@AEAAXW4TimeoutInterval@1@@Z @ 0x1C02328BC (-BoostRefreshRateForInput@CCompositionRefreshRateBooster@@AEAAXW4TimeoutInterval@1@@Z.c)
 *     ?HandleRefreshRateUnboostTimer@CCompositionRefreshRateBooster@@QEAAXXZ @ 0x1C0232A20 (-HandleRefreshRateUnboostTimer@CCompositionRefreshRateBooster@@QEAAXXZ.c)
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C005E51C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C006AA58 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?BoostCompositorClock@CConnection@DirectComposition@@QEAAJH@Z @ 0x1C0248E88 (-BoostCompositorClock@CConnection@DirectComposition@@QEAAJH@Z.c)
 */

__int64 __fastcall DCompositionBoostCompositionClockForInput(__int64 a1)
{
  int v1; // ebx
  DirectComposition::CConnection *DefaultConnection; // rax
  DirectComposition::CConnection *v3; // rdi
  unsigned int v4; // ebx
  unsigned int v5; // edx

  v1 = a1;
  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(a1);
  v3 = DefaultConnection;
  if ( DefaultConnection )
  {
    v4 = DirectComposition::CConnection::BoostCompositorClock(DefaultConnection, v1);
    DirectComposition::CConnection::Release(v3, v5);
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v4;
}
