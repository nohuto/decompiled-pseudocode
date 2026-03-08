/*
 * XREFs of DCompositionIsShellProcess @ 0x1C005D888
 * Callers:
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C006CAF8 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C005E51C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C006AA58 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 */

bool DCompositionIsShellProcess()
{
  bool v0; // bl
  __int64 v1; // rdx
  __int64 v2; // rcx
  struct DirectComposition::CConnection *DefaultConnection; // rdi
  __int64 v4; // r8
  __int64 v5; // r9

  v0 = 0;
  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
  if ( DefaultConnection )
  {
    v0 = PsGetCurrentProcess(v2, v1, v4, v5) == *((_QWORD *)DefaultConnection + 32);
    DirectComposition::CConnection::Release(DefaultConnection);
  }
  return v0;
}
