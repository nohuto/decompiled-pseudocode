/*
 * XREFs of WMsg_midl_user_allocate @ 0x1C00C57B0
 * Callers:
 *     WmsgpPostMessage @ 0x1C02BFD34 (WmsgpPostMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WMsg_midl_user_allocate(__int64 a1)
{
  return ExAllocatePool2(258LL, a1, 1399025746LL);
}
