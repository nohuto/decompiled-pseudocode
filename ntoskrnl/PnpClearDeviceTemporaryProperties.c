/*
 * XREFs of PnpClearDeviceTemporaryProperties @ 0x14068539C
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140685858 (PiProcessNewDeviceNode.c)
 *     IopInitializeDeviceInstanceKey @ 0x14081CE14 (IopInitializeDeviceInstanceKey.c)
 * Callees:
 *     _PnpSetObjectProperty @ 0x140686C8C (_PnpSetObjectProperty.c)
 */

__int64 __fastcall PnpClearDeviceTemporaryProperties(int a1)
{
  __int64 *v1; // rbx
  __int64 v3; // rdi
  __int64 result; // rax

  v1 = (__int64 *)&off_140007AD0;
  v3 = 3LL;
  do
  {
    result = PnpSetObjectProperty(PiPnpRtlCtx, a1, 1, 0LL, *v1++, 0, 0LL, 0, 0);
    --v3;
  }
  while ( v3 );
  return result;
}
