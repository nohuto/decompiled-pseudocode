/*
 * XREFs of sub_1406C7DCC @ 0x1406C7DCC
 * Callers:
 *     WbRemoveWarbirdProcess @ 0x1406872A4 (WbRemoveWarbirdProcess.c)
 *     WbCreateWarbirdProcess @ 0x1406A559C (WbCreateWarbirdProcess.c)
 *     WbDispatchOperation @ 0x1406C7BE4 (WbDispatchOperation.c)
 *     WbGetWarbirdProcess @ 0x1406C7E04 (WbGetWarbirdProcess.c)
 * Callees:
 *     WbFreeWarbirdProcess @ 0x1406667C0 (WbFreeWarbirdProcess.c)
 */

signed __int64 __fastcall sub_1406C7DCC(__int64 a1)
{
  signed __int64 v1; // rbx

  v1 = 0LL;
  if ( a1 )
  {
    v1 = _InterlockedDecrement64((volatile signed __int64 *)(a1 + 232));
    if ( !v1 )
      WbFreeWarbirdProcess((_DWORD *)a1);
  }
  return v1;
}
