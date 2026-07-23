/*
 * XREFs of sub_140643E2C @ 0x140643E2C
 * Callers:
 *     WbCreateWarbirdProcess @ 0x14062186C (WbCreateWarbirdProcess.c)
 *     WbDispatchOperation @ 0x140643C44 (WbDispatchOperation.c)
 *     WbGetWarbirdProcess @ 0x140643E64 (WbGetWarbirdProcess.c)
 *     WbRemoveWarbirdProcess @ 0x14067BEB0 (WbRemoveWarbirdProcess.c)
 * Callees:
 *     WbFreeWarbirdProcess @ 0x1405E5C60 (WbFreeWarbirdProcess.c)
 */

signed __int64 __fastcall sub_140643E2C(__int64 a1)
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
