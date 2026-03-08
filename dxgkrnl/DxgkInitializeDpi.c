/*
 * XREFs of DxgkInitializeDpi @ 0x1C01C3B50
 * Callers:
 *     <none>
 * Callees:
 *     ?SaveHKCUPathInSessionData@DpiPersistence@@YAJXZ @ 0x1C01C3988 (-SaveHKCUPathInSessionData@DpiPersistence@@YAJXZ.c)
 */

NTSTATUS __fastcall DxgkInitializeDpi(DpiPersistence *a1)
{
  return DpiPersistence::SaveHKCUPathInSessionData(a1);
}
