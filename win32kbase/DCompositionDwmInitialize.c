/*
 * XREFs of DCompositionDwmInitialize @ 0x1C0091CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C005E51C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C006AA58 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?OnDwmInitializeInternal@CConnection@DirectComposition@@AEAAJXZ @ 0x1C0091D10 (-OnDwmInitializeInternal@CConnection@DirectComposition@@AEAAJXZ.c)
 */

__int64 __fastcall DCompositionDwmInitialize(__int64 a1)
{
  unsigned int v1; // ebx
  DirectComposition::CConnection *DefaultConnection; // rax
  DirectComposition::CConnection *v3; // rdi
  unsigned int v4; // edx

  v1 = 0;
  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(a1);
  v3 = DefaultConnection;
  if ( DefaultConnection )
  {
    v1 = DirectComposition::CConnection::OnDwmInitializeInternal(DefaultConnection);
    DirectComposition::CConnection::Release(v3, v4);
  }
  return v1;
}
