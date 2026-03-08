/*
 * XREFs of DCompositionForceRender @ 0x1C00D6720
 * Callers:
 *     VideoPortCalloutThread @ 0x1C00D93A8 (VideoPortCalloutThread.c)
 *     PowerOnMonitor @ 0x1C015BD90 (PowerOnMonitor.c)
 *     ?DxgkEngSetHwProtectionTeardownRecovery@@YAJPEAU_D3DKMT_SETHWPROTECTIONTEARDOWNRECOVERY@@@Z @ 0x1C0195E50 (-DxgkEngSetHwProtectionTeardownRecovery@@YAJPEAU_D3DKMT_SETHWPROTECTIONTEARDOWNRECOVERY@@@Z.c)
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C005E51C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C006AA58 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?ForceRender@CConnection@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@0@Z @ 0x1C00D67AC (-ForceRender@CConnection@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@0@Z.c)
 */

__int64 __fastcall DCompositionForceRender(__int64 a1, int a2, int a3, int a4)
{
  int v7; // r14d
  struct DirectComposition::CConnection *DefaultConnection; // rax
  __int64 v9; // rdx
  DirectComposition::CConnection *v10; // rdi
  __int64 v11; // r9
  unsigned int v12; // ebx
  unsigned int v13; // edx

  v7 = a1;
  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(a1);
  v10 = DefaultConnection;
  if ( DefaultConnection )
  {
    v11 = 0LL;
    if ( a2 )
      v11 = 2 - (unsigned int)(a3 != 0);
    LOBYTE(v9) = v7 != 0;
    v12 = DirectComposition::CConnection::ForceRender(DefaultConnection, v9, 0LL, v11, a4 != 0);
    DirectComposition::CConnection::Release(v10, v13);
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v12;
}
