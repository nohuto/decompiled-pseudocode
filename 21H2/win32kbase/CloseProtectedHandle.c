/*
 * XREFs of CloseProtectedHandle @ 0x1C0046DF8
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C003D918 (xxxCreateThreadInfo.c)
 *     DestroyProcessInfo @ 0x1C0045950 (DestroyProcessInfo.c)
 * Callees:
 *     SetHandleFlag @ 0x1C0046E40 (SetHandleFlag.c)
 */

NTSTATUS __fastcall CloseProtectedHandle(HANDLE Handle)
{
  if ( !Handle )
    return 0;
  SetHandleFlag(Handle, 1LL);
  return ObCloseHandle(Handle, 1);
}
