/*
 * XREFs of DCompositionIsShellProcess @ 0x1C0071E50
 * Callers:
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C0070D14 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C00163FC (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C00164EC (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 */

bool __fastcall DCompositionIsShellProcess(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v4; // bl
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DirectComposition::CConnection *DefaultConnection; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // edx

  v4 = 0;
  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(a1, a2, a3, a4);
  if ( DefaultConnection )
  {
    v4 = PsGetCurrentProcess(v6, v5, v8, v9) == *((_QWORD *)DefaultConnection + 30);
    DirectComposition::CConnection::Release(DefaultConnection, v10);
  }
  return v4;
}
