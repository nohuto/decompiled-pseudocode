/*
 * XREFs of ?bInitPathAlloc@@YAHXZ @ 0x1C002D4D4
 * Callers:
 *     InitializeGre @ 0x1C031D988 (InitializeGre.c)
 * Callees:
 *     GreCreateSemaphoreInternal @ 0x1C002B04C (GreCreateSemaphoreInternal.c)
 */

__int64 __fastcall bInitPathAlloc(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_QWORD **)(SGDGetSessionState(a1) + 24);
  result = (__int64)GreCreateSemaphoreInternal(0);
  v1[755] = result;
  if ( result )
  {
    v1[756] = 0LL;
    result = 1LL;
    v1[757] = 0LL;
  }
  return result;
}
