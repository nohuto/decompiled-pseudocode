/*
 * XREFs of ?bInitPathAlloc@@YAHXZ @ 0x1C00C3720
 * Callers:
 *     InitializeGre @ 0x1C02DB800 (InitializeGre.c)
 * Callees:
 *     GreCreateSemaphoreInternal @ 0x1C0077FFC (GreCreateSemaphoreInternal.c)
 */

__int64 __fastcall bInitPathAlloc(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_QWORD **)(SGDGetSessionState(a1) + 24);
  result = GreCreateSemaphoreInternal(0);
  v1[755] = result;
  if ( result )
  {
    v1[756] = 0LL;
    result = 1LL;
    v1[757] = 0LL;
  }
  return result;
}
