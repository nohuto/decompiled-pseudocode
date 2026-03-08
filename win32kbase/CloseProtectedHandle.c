/*
 * XREFs of CloseProtectedHandle @ 0x1C00A4E18
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C0076490 (xxxCreateThreadInfo.c)
 *     DestroyProcessInfo @ 0x1C00D51B0 (DestroyProcessInfo.c)
 * Callees:
 *     SetHandleFlag @ 0x1C00A4E60 (SetHandleFlag.c)
 */

NTSTATUS __fastcall CloseProtectedHandle(HANDLE Handle)
{
  if ( !Handle )
    return 0;
  SetHandleFlag(Handle, 1LL);
  return ObCloseHandle(Handle, 1);
}
