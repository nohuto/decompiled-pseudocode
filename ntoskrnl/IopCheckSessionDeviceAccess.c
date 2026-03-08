/*
 * XREFs of IopCheckSessionDeviceAccess @ 0x140555228
 * Callers:
 *     IopParseDevice @ 0x1407B6A30 (IopParseDevice.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140248480 (PsGetCurrentServerSilo.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     IopGetSessionIdFromPDO @ 0x1406F72F8 (IopGetSessionIdFromPDO.c)
 */

bool __fastcall IopCheckSessionDeviceAccess(__int64 a1)
{
  int SessionId; // eax
  int v3; // ebx
  __int64 CurrentServerSilo; // rax
  _DWORD **v5; // rax
  int SessionIdFromPDO; // eax
  bool result; // al

  SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  v3 = 0;
  if ( SessionId != -1 )
    v3 = SessionId;
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( CurrentServerSilo )
    v5 = *(_DWORD ***)(CurrentServerSilo + 1488);
  else
    v5 = (_DWORD **)&PspHostSiloGlobals;
  result = v3 == *v5[165] && !IopSessionZeroAccessCheckEnabled
        || (SessionIdFromPDO = IopGetSessionIdFromPDO(a1), SessionIdFromPDO == -1)
        || v3 == SessionIdFromPDO;
  return result;
}
