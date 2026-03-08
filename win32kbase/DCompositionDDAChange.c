/*
 * XREFs of DCompositionDDAChange @ 0x1C0247CA0
 * Callers:
 *     VideoPortCalloutThread @ 0x1C00D93A8 (VideoPortCalloutThread.c)
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C005E51C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C006AA58 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?ForceRender@CConnection@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@0@Z @ 0x1C00D67AC (-ForceRender@CConnection@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@0@Z.c)
 */

__int64 __fastcall DCompositionDDAChange(__int64 a1)
{
  struct DirectComposition::CConnection *DefaultConnection; // rax
  DirectComposition::CConnection *v2; // rbx
  unsigned int v3; // edi
  unsigned int v4; // edx

  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(a1);
  v2 = DefaultConnection;
  if ( DefaultConnection )
  {
    v3 = DirectComposition::CConnection::ForceRender((__int64)DefaultConnection, 0, 1, 0, 0);
    DirectComposition::CConnection::Release(v2, v4);
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v3;
}
