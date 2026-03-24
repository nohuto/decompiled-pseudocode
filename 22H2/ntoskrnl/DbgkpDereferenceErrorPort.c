/*
 * XREFs of DbgkpDereferenceErrorPort @ 0x1404EE018
 * Callers:
 *     DbgkFlushErrorPort @ 0x140630408 (DbgkFlushErrorPort.c)
 *     DbgkpRemoveErrorPort @ 0x1408870C4 (DbgkpRemoveErrorPort.c)
 * Callees:
 *     DbgkpDeleteErrorPort @ 0x140887098 (DbgkpDeleteErrorPort.c)
 */

__int64 __fastcall DbgkpDereferenceErrorPort(volatile signed __int32 *a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd(a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return DbgkpDeleteErrorPort((PVOID)a1);
  return result;
}
